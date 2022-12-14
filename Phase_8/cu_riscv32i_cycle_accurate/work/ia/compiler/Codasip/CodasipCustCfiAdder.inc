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
 * \date    2022-11-27
 * \author  Codasip (c) C compiler backend generator
 * \version 9.1.1-1255
 * \brief   Source for compiler backend
 * \project cu_riscv32i_cycle_accurate.ia
 * \note          Codasip Studio version: 9.1.1-1255
 *                Licensee: Lockular Limited  (C60_2200_2176)
 *                Project: cu_riscv32i_cycle_accurate.ia
 *                Date: 2022-11-27 08:13:05
 *                Copyright (C) 2022 Codasip s.r.o.
 */


// Use this file to override

namespace {

class CustCfiAdder: public CfiAdder
{
public:
  CustCfiAdder(): CfiAdder() {}
  CustCfiAdder(CodasipTargetMachine& tm): CfiAdder(tm) {}
protected:
  bool emitCfi(MachineBasicBlock::iterator II) override;
};

} // end of anonymous namespace

bool CustCfiAdder::emitCfi(MachineBasicBlock::iterator II)
{
  return CfiAdder::emitCfi(II);
}
