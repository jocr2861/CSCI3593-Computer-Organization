/**
 * Codasip s.r.o.
 *
 * CONFIDENTIAL
 *
 * Copyright 2022 Codasip s.r.o.
 *
 * All Rights Reserved.
 * This file is part of the Codasip Studio product. No part of the Studio product, including this
 * file, may be use, copied, modified, or distributed except in accordance with the terms contained
 * in Codasip license agreement under which you obtained this file.
 *
 * \file
 * \date    2022-10-06
 * \author  Codasip (c) C compiler backend generator
 * \version 9.1.1-1255
 * \brief   Source for compiler backend
 * \project phase3_ia_riscv32i.ia
 * \note          Codasip Studio version: 9.1.1-1255
 *                Licensee: Lockular Limited  (C60_2111_2104)
 *                Project: phase3_ia_riscv32i.ia
 *                Date: 2022-10-06 05:26:13
 *                Copyright (C) 2022 Codasip s.r.o.
 */


#ifndef LLVM_LIB_TARGET_CODASIP_CODASIPASMBACKEND_H
#define LLVM_LIB_TARGET_CODASIP_CODASIPASMBACKEND_H

#include "CodasipGenAsmBackend.h"

namespace llvm {

/// This class can be used for user's manual implementations.
class CodasipAsmBackend: public CodasipGenAsmBackend
{
public:
  CodasipAsmBackend(const MCSubtargetInfo &STI, uint8_t OSABI)
      : CodasipGenAsmBackend(STI, OSABI) {}
};

} // end namespace llvm

#endif // LLVM_LIB_TARGET_CODASIP_CODASIPASMBACKEND_H
