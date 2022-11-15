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
 * \date    2022-11-15
 * \author  Codasip (c) C compiler backend generator
 * \version 9.1.1-1255
 * \brief   Source for compiler backend
 * \project cu_riscv32i_cycle_accurate.ia
 * \note          Codasip Studio version: 9.1.1-1255
 *                Licensee: Lockular Limited  (C60_2200_2176)
 *                Project: cu_riscv32i_cycle_accurate.ia
 *                Date: 2022-11-15 06:09:20
 *                Copyright (C) 2022 Codasip s.r.o.
 */


#ifndef CODASIPREGISTERINFO_H
#define CODASIPREGISTERINFO_H

#include "CodasipGenRegisterInfo.h"

namespace llvm {

/// These things should be defined in CodAL but you can edit this class nevertheless.
struct CodasipRegisterInfo: public CodasipGen2RegisterInfo
{
  /// constructor
  CodasipRegisterInfo(const TargetInstrInfo &tii);
  bool trackLivenessAfterRegAlloc(const MachineFunction &MF) const override {
    return true;
  }
};

}

#endif
