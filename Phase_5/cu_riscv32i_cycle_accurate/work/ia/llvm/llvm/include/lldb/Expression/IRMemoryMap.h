//===-- IRMemoryMap.h -------------------------------------------*- C++ -*-===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef lldb_IRMemoryMap_h_
#define lldb_IRMemoryMap_h_

#include "lldb/Utility/DataBufferHeap.h"
#include "lldb/Utility/UserID.h"
#include "lldb/lldb-public.h"
/// ==== CODASIP ====
#include "lldb/Codasip/AddressBase.h"
/// =================

#include <map>

namespace lldb_private {

/// \class IRMemoryMap IRMemoryMap.h "lldb/Expression/IRMemoryMap.h"
/// Encapsulates memory that may exist in the process but must
///     also be available in the host process.
///
/// This class encapsulates a group of memory objects that must be readable or
/// writable from the host process regardless of whether the process exists.
/// This allows the IR interpreter as well as JITted code to access the same
/// memory.  All allocations made by this class are represented as disjoint
/// intervals.
///
/// Point queries against this group of memory objects can be made by the
/// address in the tar at which they reside.  If the inferior does not exist,
/// allocations still get made-up addresses.  If an inferior appears at some
/// point, then those addresses need to be re-mapped.
class IRMemoryMap {
public:
  IRMemoryMap(lldb::TargetSP target_sp);
  ~IRMemoryMap();

  enum AllocationPolicy : uint8_t {
    eAllocationPolicyInvalid =
        0, ///< It is an error for an allocation to have this policy.
    eAllocationPolicyHostOnly, ///< This allocation was created in the host and
                               ///will never make it into the process.
    ///< It is an error to create other types of allocations while such
    ///allocations exist.
    eAllocationPolicyMirror, ///< The intent is that this allocation exist both
                             ///in the host and the process and have
                             ///< the same content in both.
    eAllocationPolicyProcessOnly ///< The intent is that this allocation exist
                                 ///only in the process.
  };

  /// ==== CODASIP ====
  codasip::AddressBase Malloc(size_t size, uint8_t alignment, uint32_t permissions,
                      AllocationPolicy policy, bool zero_memory, Status &error,
                      const uint32_t dwarf = NO_DWARF /* Should be specified always to work */);

  void Leak(codasip::AddressBase process_address, Status &error);
  void Free(codasip::AddressBase process_address, Status &error);

  void WriteMemory(const codasip::AddressBase& process_address, const uint8_t *bytes,
                   size_t size, Status &error);
  void WriteScalarToMemory(const codasip::AddressBase& process_address, Scalar &scalar,
                           size_t size, Status &error);
  void WritePointerToMemory(const codasip::AddressBase& process_address,
                            const codasip::AddressBase& address,
                            Status &error);
  void ReadMemory(uint8_t *bytes, const codasip::AddressBase& process_address, size_t size,
                  Status &error);
  void ReadScalarFromMemory(Scalar &scalar, const codasip::AddressBase& process_address,
                            size_t size, Status &error);
  void ReadPointerFromMemory(codasip::AddressBase& address,
                             const codasip::AddressBase& process_address, Status &error);
  bool GetAllocSize(codasip::AddressBase address, size_t &size);
  void GetMemoryData(DataExtractor &extractor, codasip::AddressBase &process_address,
                     size_t size, Status &error);

  lldb::ByteOrder GetByteOrder();
  uint32_t GetAddressByteSize();

  // This function can return NULL.
  ExecutionContextScope *GetBestExecutionContextScope() const;

  lldb::TargetSP GetTarget() { return m_target_wp.lock(); }

protected:
  // This function should only be used if you know you are using the JIT. Any
  // other cases should use GetBestExecutionContextScope().

  lldb::ProcessWP &GetProcessWP() { return m_process_wp; }

private:
  struct Allocation {
    codasip::AddressBase
        m_process_alloc; ///< The (unaligned) base for the remote allocation.
    codasip::AddressBase
        m_process_start; ///< The base address of the allocation in the process.
    size_t m_size;       ///< The size of the requested allocation.

    DataBufferHeap m_data;

    /// Flags. Keep these grouped together to avoid structure padding.
    AllocationPolicy m_policy;
    bool m_leak;
    uint8_t m_permissions; ///< The access permissions on the memory in the
                           /// process. In the host, the memory is always
                           /// read/write.
    uint8_t m_alignment;   ///< The alignment of the requested allocation.

  public:
    Allocation(codasip::AddressBase process_alloc, codasip::AddressBase process_start,
               size_t size, uint32_t permissions, uint8_t alignment,
               AllocationPolicy m_policy);

    DISALLOW_COPY_AND_ASSIGN(Allocation);
  };

  static_assert(sizeof(Allocation) <=
                    (2 * sizeof(lldb::addr_t)) + (2 * sizeof(codasip::AddressBase)) + sizeof(DataBufferHeap),
                "IRMemoryMap::Allocation is larger than expected");

  lldb::ProcessWP m_process_wp;
  lldb::TargetWP m_target_wp;
  struct compareAddress {
    bool operator()(const codasip::AddressBase& a, const codasip::AddressBase& b) const {
      return a.GetDwarf() == b.GetDwarf()
        ? a.GetOffset() < b.GetOffset() : a.GetDwarf() < b.GetDwarf();
    }
  };
  typedef std::map<codasip::AddressBase, Allocation, compareAddress> AllocationMap;
  AllocationMap m_allocations;

  codasip::AddressBase FindSpace(size_t size);
  bool ContainsHostOnlyAllocations();
  AllocationMap::iterator FindAllocation(codasip::AddressBase addr, size_t size);

  // Returns true if the given allocation intersects any allocation in the
  // memory map.
  bool IntersectsAllocation(codasip::AddressBase addr, size_t size) const;

  // Returns true if the two given allocations intersect each other.
  static bool AllocationsIntersect(codasip::AddressBase addr1, size_t size1,
                                   codasip::AddressBase addr2, size_t size2);
  /// =================
};
}

#endif
