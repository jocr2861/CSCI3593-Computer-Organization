//===-- SectionLoadList.h -----------------------------------------------*- C++
//-*-===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef liblldb_SectionLoadList_h_
#define liblldb_SectionLoadList_h_

#include <map>
#include <mutex>

#include "llvm/ADT/DenseMap.h"
#include "lldb/Core/Section.h"
#include "lldb/lldb-public.h"

/// ==== CODASIP ====
#include "lldb/Codasip/ArchDefinition.h"
/// =================

namespace lldb_private {

class SectionLoadList {
public:
  // Constructors and Destructors
  SectionLoadList() : m_addr_to_sect(), m_sect_to_addr(), m_mutex() {}

  SectionLoadList(const SectionLoadList &rhs);

  ~SectionLoadList() {
    // Call clear since this takes a lock and clears the section load list in
    // case another thread is currently using this section load list
    Clear();
  }

  void operator=(const SectionLoadList &rhs);

  bool IsEmpty() const;

  void Clear();

  lldb::addr_t GetSectionLoadAddress(const lldb::SectionSP &section_sp) const;
  /// ==== CODASIP ====
  bool ResolveLoadAddress(const codasip::AddressBase &load_addr, Address &so_addr,
                          bool allow_section_end = false) const;
  /// =================

  bool SetSectionLoadAddress(const lldb::SectionSP &section_sp,
                             lldb::addr_t load_addr,
                             bool warn_multiple = false);

  // The old load address should be specified when unloading to ensure we get
  // the correct instance of the section as a shared library could be loaded at
  // more than one location.
  bool SetSectionUnloaded(const lldb::SectionSP &section_sp,
                          lldb::addr_t load_addr);

  // Unload all instances of a section. This function can be used on systems
  // that don't support multiple copies of the same shared library to be loaded
  // at the same time.
  size_t SetSectionUnloaded(const lldb::SectionSP &section_sp);

  void Dump(Stream &s, Target *target);

protected:
  /// ==== CODASIP ====
  struct SafeAddressCompare {
    bool operator()(const codasip::AddressBase &lhs,
                    const codasip::AddressBase &rhs) const {
      if (lhs.GetOffset() != rhs.GetOffset())
        return lhs.GetOffset() < rhs.GetOffset();
      return lhs.GetDwarf() < rhs.GetDwarf();
    }
  };
  typedef std::map<codasip::AddressBase, lldb::SectionSP, SafeAddressCompare>
      addr_to_sect_collection;
  /// =================
  typedef llvm::DenseMap<const Section *, lldb::addr_t> sect_to_addr_collection;
  addr_to_sect_collection m_addr_to_sect;
  sect_to_addr_collection m_sect_to_addr;
  mutable std::recursive_mutex m_mutex;
};

} // namespace lldb_private

#endif // liblldb_SectionLoadList_h_
