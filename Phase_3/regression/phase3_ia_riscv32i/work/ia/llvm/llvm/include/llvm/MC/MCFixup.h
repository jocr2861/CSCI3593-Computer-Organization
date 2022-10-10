//===-- llvm/MC/MCFixup.h - Instruction Relocation and Patching -*- C++ -*-===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_MC_MCFIXUP_H
#define LLVM_MC_MCFIXUP_H

#include "llvm/MC/MCExpr.h"
#include "llvm/Support/DataTypes.h"
#include "llvm/Support/ErrorHandling.h"
#include "llvm/Support/SMLoc.h"
#include <cassert>

namespace llvm {
class MCExpr;

/// Extensible enumeration to represent the type of a fixup.
enum MCFixupKind {
  FK_NONE = 0,   ///< A no-op fixup.
  FK_Data_1,     ///< A one-byte fixup.
  FK_Data_2,     ///< A two-byte fixup.
  FK_Data_4,     ///< A four-byte fixup.
  FK_Data_8,     ///< A eight-byte fixup.
  FK_PCRel_1,    ///< A one-byte pc relative fixup.
  FK_PCRel_2,    ///< A two-byte pc relative fixup.
  FK_PCRel_4,    ///< A four-byte pc relative fixup.
  FK_PCRel_8,    ///< A eight-byte pc relative fixup.
  FK_GPRel_1,    ///< A one-byte gp relative fixup.
  FK_GPRel_2,    ///< A two-byte gp relative fixup.
  FK_GPRel_4,    ///< A four-byte gp relative fixup.
  FK_GPRel_8,    ///< A eight-byte gp relative fixup.
  FK_DTPRel_4,   ///< A four-byte dtp relative fixup.
  FK_DTPRel_8,   ///< A eight-byte dtp relative fixup.
  FK_TPRel_4,    ///< A four-byte tp relative fixup.
  FK_TPRel_8,    ///< A eight-byte tp relative fixup.
  FK_SecRel_1,   ///< A one-byte section relative fixup.
  FK_SecRel_2,   ///< A two-byte section relative fixup.
  FK_SecRel_4,   ///< A four-byte section relative fixup.
  FK_SecRel_8,   ///< A eight-byte section relative fixup.
  FK_Data_Add_1, ///< A one-byte add fixup.
  FK_Data_Add_2, ///< A two-byte add fixup.
  FK_Data_Add_4, ///< A four-byte add fixup.
  FK_Data_Add_8, ///< A eight-byte add fixup.
  FK_Data_Sub_1, ///< A one-byte sub fixup.
  FK_Data_Sub_2, ///< A two-byte sub fixup.
  FK_Data_Sub_4, ///< A four-byte sub fixup.
  FK_Data_Sub_8, ///< A eight-byte sub fixup.

  FirstTargetFixupKind = 128,

  // Limit range of target fixups, in case we want to pack more efficiently
  // later.
  MaxTargetFixupKind = (1 << 8)
};

/// Encode information on a single operation to perform on a byte
/// sequence (e.g., an encoded instruction) which requires assemble- or run-
/// time patching.
///
/// Fixups are used any time the target instruction encoder needs to represent
/// some value in an instruction which is not yet concrete. The encoder will
/// encode the instruction assuming the value is 0, and emit a fixup which
/// communicates to the assembler backend how it should rewrite the encoded
/// value.
///
/// During the process of relaxation, the assembler will apply fixups as
/// symbolic values become concrete. When relaxation is complete, any remaining
/// fixups become relocations in the object file (or errors, if the fixup cannot
/// be encoded on the target).
class MCFixup {
  /// The value to put into the fixup location. The exact interpretation of the
  /// expression is target dependent, usually it will be one of the operands to
  /// an instruction or an assembler directive.
  const MCExpr *Value;

  /// The byte index of start of the relocation inside the MCFragment.
  uint32_t Offset;

  /// The target dependent kind of fixup item this is. The kind is used to
  /// determine how the operand value should be encoded into the instruction.
  unsigned Kind;

  /// The source location which gave rise to the fixup, if any.
  SMLoc Loc;
  //================================= CODASIP ================================
  // TODO change counted from the right during migration on LLD
  /// MSB of the relocated attribute part in value
  size_t MsbValue = 0;
  /// LSB of the relocated attribute part in value
  size_t LsbValue = 0;
  /// Byte count of the instruction, where we apply the fixup
  mutable size_t ByteCount = 0;
  /// MSB of the relocated attribute part in instruction/data
  mutable size_t MsbOut = 0;
  /// LSB of the relocated attribute part in instruction/data
  mutable size_t LsbOut = 0;
  /// Index of the relocation expression in the expression table
  mutable uint32_t ExpressionIndex = 0;
  /// Is sign part
  bool SignPart = true;
  /// Is signed
  int Signed = false;
  /// Slot offset countermeasure for current address computation
  /// copy of Offset to live till getRelocType function
  mutable uint32_t SlotOffset;

public:
  size_t getBitWidth() const { return getMsbValue() - getLsbValue() + 1; }
  size_t getMsbValue() const { return MsbValue; }
  size_t getLsbValue() const { return LsbValue; }
  size_t getByteCount() const { return ByteCount; }
  size_t getMsbOut() const { return MsbOut; }
  size_t getLsbOut() const { return LsbOut; }
  uint32_t getExpressionIndex() const { return ExpressionIndex; }
  bool isSignPart() const { return SignPart; }
  bool isSigned() const { return Signed; }
  uint32_t getSlotOffset() const { return SlotOffset; };
  void setByteCount(const size_t Value) const { ByteCount = Value; }
  void setMsbOut(const size_t Value) const { MsbOut = Value; }
  void setLsbOut(const size_t Value) const { LsbOut = Value; }
  void setSlotOffset(const uint32_t Value) const { SlotOffset = Value; }
  void setExpressionIndex(const uint32_t Index) const {
    ExpressionIndex = Index;
  }
  static MCFixup createCodasip(uint32_t Offset, const MCExpr *Value,
                               MCFixupKind Kind, SMLoc Loc,
                               size_t MsbValue, size_t LsbValue,
                               size_t ByteCount, size_t MsbOut, size_t LsbOut,
                               bool SignPart, bool Signed) {
    assert(unsigned(Kind) < MaxTargetFixupKind && "Kind out of range!");
    MCFixup FI;
    FI.Value = Value;
    FI.Offset = Offset;
    FI.Kind = unsigned(Kind);
    FI.Loc = Loc;
    FI.MsbValue = MsbValue;
    FI.LsbValue = LsbValue;
    FI.ByteCount = ByteCount;
    FI.MsbOut = MsbOut;
    FI.LsbOut = LsbOut;
    FI.SignPart = SignPart;
    FI.Signed = Signed;
    FI.SlotOffset = 0;
    return FI;
  }
  //==========================================================================
public:
  static MCFixup create(uint32_t Offset, const MCExpr *Value,
                        MCFixupKind Kind, SMLoc Loc = SMLoc()) {
    assert(unsigned(Kind) < MaxTargetFixupKind && "Kind out of range!");
    MCFixup FI;
    FI.Value = Value;
    FI.Offset = Offset;
    FI.Kind = unsigned(Kind);
    FI.Loc = Loc;
    return FI;
  }

  /// Return a fixup corresponding to the add half of a add/sub fixup pair for
  /// the given Fixup.
  static MCFixup createAddFor(const MCFixup &Fixup) {
    MCFixup FI;
    FI.Value = Fixup.getValue();
    FI.Offset = Fixup.getOffset();
    FI.Kind = (unsigned)getAddKindForKind(Fixup.getKind());
    FI.Loc = Fixup.getLoc();
    return FI;
  }

  /// Return a fixup corresponding to the sub half of a add/sub fixup pair for
  /// the given Fixup.
  static MCFixup createSubFor(const MCFixup &Fixup) {
    MCFixup FI;
    FI.Value = Fixup.getValue();
    FI.Offset = Fixup.getOffset();
    FI.Kind = (unsigned)getSubKindForKind(Fixup.getKind());
    FI.Loc = Fixup.getLoc();
    return FI;
  }

  MCFixupKind getKind() const { return MCFixupKind(Kind); }

  uint32_t getOffset() const { return Offset; }
  void setOffset(uint32_t Value) { Offset = Value; }

  const MCExpr *getValue() const { return Value; }

  /// Return the generic fixup kind for a value with the given size. It
  /// is an error to pass an unsupported size.
  static MCFixupKind getKindForSize(unsigned Size, bool isPCRel) {
    switch (Size) {
    default: llvm_unreachable("Invalid generic fixup size!");
    case 1: return isPCRel ? FK_PCRel_1 : FK_Data_1;
    case 2: return isPCRel ? FK_PCRel_2 : FK_Data_2;
    case 4: return isPCRel ? FK_PCRel_4 : FK_Data_4;
    case 8: return isPCRel ? FK_PCRel_8 : FK_Data_8;
    }
  }

  /// Return the generic fixup kind for an addition with a given size. It
  /// is an error to pass an unsupported size.
  static MCFixupKind getAddKindForKind(unsigned Kind) {
    switch (Kind) {
    default: llvm_unreachable("Unknown type to convert!");
    case FK_Data_1: return FK_Data_Add_1;
    case FK_Data_2: return FK_Data_Add_2;
    case FK_Data_4: return FK_Data_Add_4;
    case FK_Data_8: return FK_Data_Add_8;
    }
  }

  /// Return the generic fixup kind for an subtraction with a given size. It
  /// is an error to pass an unsupported size.
  static MCFixupKind getSubKindForKind(unsigned Kind) {
    switch (Kind) {
    default: llvm_unreachable("Unknown type to convert!");
    case FK_Data_1: return FK_Data_Sub_1;
    case FK_Data_2: return FK_Data_Sub_2;
    case FK_Data_4: return FK_Data_Sub_4;
    case FK_Data_8: return FK_Data_Sub_8;
    }
  }

  SMLoc getLoc() const { return Loc; }
};

} // End llvm namespace

#endif
