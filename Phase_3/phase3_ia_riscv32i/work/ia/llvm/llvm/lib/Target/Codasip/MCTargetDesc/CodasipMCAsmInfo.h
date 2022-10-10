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


// Used to be CodasipTargetAsmInfo.h

#ifndef CODASIPTARGETASMINFO_H
#define CODASIPTARGETASMINFO_H

#include "llvm/ADT/StringRef.h"
#include "llvm/ADT/Triple.h"
#include "llvm/MC/MCAsmInfoELF.h"

namespace llvm {

class Target;

class CodasipMCAsmInfo: public MCAsmInfoELF {
public:
  explicit CodasipMCAsmInfo(const Triple &TT);
};

}

#endif
