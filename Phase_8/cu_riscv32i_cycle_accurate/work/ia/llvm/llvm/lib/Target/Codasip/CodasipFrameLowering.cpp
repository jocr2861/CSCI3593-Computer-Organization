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


// you can edit this file

#include "CodasipFrameLowering.h"
#include "CodasipTargetMachine.h"

#include <set>

// newly created BBs - yes, it's a dirty hack
static std::set<llvm::MachineBasicBlock*> Created;

void llvm::CodasipFrameLowering::emitPrologue(MachineFunction &MF, MachineBasicBlock &MBB) const
{
  Created.clear(); //...
  CodasipGenFrameLowering::emitPrologue(MF,MBB);
}

void llvm::CodasipFrameLowering::emitEpilogue(MachineFunction &MF, MachineBasicBlock &MB) const
{
  // Set to false if there are interrupts and the arch needs this safe approach
  const bool safeInterrupts = false;
  // use normal behaviour or normal?
  if (!safeInterrupts) {
    CodasipGenFrameLowering::emitEpilogue(MF,MB);
    return;
  }
  // artificially created?
  if (Created.count(&MB)) return;
  // create a new block
  MachineBasicBlock *NMB = MF.CreateMachineBasicBlock();
  MF.push_back(NMB);
  MB.addSuccessor(NMB);
  // move the return
  MachineBasicBlock::iterator I = MB.getLastNonDebugInstr();
  assert(I != MB.end() && "Returning block has no terminator");
  NMB->splice(NMB->begin(), &MB, I, MB.end());
  CodasipGenFrameLowering::emitEpilogue(MF,*NMB);
  Created.insert(NMB);
  // and insert jump in the original BB
  TII.insertBranch(MB,NMB,NULL, SmallVector<MachineOperand,0>(), DebugLoc());
}

// Warning: do not use anything here if it's unknown during instruction selection
bool llvm::CodasipFrameLowering::hasFP(const MachineFunction &MF) const
{
  return CodasipGenFrameLowering::hasFP(MF);
}


