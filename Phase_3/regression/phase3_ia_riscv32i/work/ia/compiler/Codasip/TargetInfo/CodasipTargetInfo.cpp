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


#include "Codasip.h"
#include "llvm/IR/Module.h"
#include "llvm/Support/TargetRegistry.h"

using namespace llvm;

Target llvm::TheCodasipTarget;

extern "C" void LLVMInitializeCodasipTargetInfo() {
  RegisterTarget<Triple::codasip,false> X(TheCodasipTarget, "codasip", "Target generated for phase3_ia_riscv32i.ia.\n      Codasip Studio version: 9.1.1-1255\n      Licensee: Lockular Limited  (C60_2111_2104)\n      Project: phase3_ia_riscv32i.ia\n      Date: 2022-10-06 05:26:13\n      Copyright (C) 2022 Codasip s.r.o.", "Codasip");
}
