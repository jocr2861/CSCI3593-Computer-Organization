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


#include "CodasipInstructionSemantics.h"
#include "CodasipGenInstrInfo.h"
#include "CodasipGenISelLowering.h"

#include "llvm/Analysis/OptimizationRemarkEmitter.h"

// turn of optimization on windows, too long function
#ifdef _WIN32
  #pragma optimize("", off)	// disable global optimization, this will increase compilation times 8x-10x
#endif

llvm::SelectionDAG* llvm::GetCodasipPattern(const TargetMachine &TM,
    MachineFunction &mf,
    unsigned icode,
    std::vector<SDValue>& roots,
    bool lowlevel)
{
  // hlp for memop
  MachinePointerInfo mpi;
  // resulting dag
  SelectionDAG* dag = new SelectionDAG(TM,CodeGenOpt::None);
  OptimizationRemarkEmitter ore(&mf.getFunction());
  dag->init(mf,ore,nullptr,nullptr,nullptr);
  // entry node
  SDValue entry = dag->getEntryNode();
  // dummy loc
  SDLoc dl;
  // building of nodes for each instruction
  switch (icode)
  {
    case Codasip::i_ret_alias__:
      if (lowlevel) {
SDValue node0x4fcde40 = dag->getRegister(Codasip::rf_xpr_1, MVT::i32);
SDValue node0x4fcdb90 = dag->getNode(ISD::BRIND, dl, MVT::Other, entry, node0x4fcde40);
roots.reserve(1);
roots.push_back(node0x4fcdb90);
dag->setRoot(node0x4fcdb90);
      } else       {
dag->setRoot(entry);
      }
      break;
    case Codasip::i_call_reg_alias__simm12__xpr_general__immspec_1_:
      if (lowlevel) {
SDValue node0x50f7980 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x50f7cb0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x50f6240 = dag->getCopyToReg(entry, dl, dag->getRegister(Codasip::rf_xpr_1, MVT::i32), node0x50f7980, SDValue());
SDValue node0x50f78d0 = dag->getNode(ISD::BRIND, dl, MVT::Other, node0x50f6240, node0x50f7cb0);
roots.reserve(2);
roots.push_back(node0x50f6240);
roots.push_back(node0x50f78d0);
dag->setRoot(node0x50f78d0);
      } else       {
dag->setRoot(entry);
      }
      break;
    case Codasip::i_itype_jlreg__opc_jalr__x_0__simm12__xpr_general__immspec_1_:
      {
SDValue node0x50f8720 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x50f82d0 = dag->getNode(ISD::BRIND, dl, MVT::Other, entry, node0x50f8720);
roots.reserve(1);
roots.push_back(node0x50f82d0);
dag->setRoot(node0x50f82d0);
      }
      break;
    case Codasip::i_itype_jlreg__opc_jalr__xpr_general__simm12__xpr_general__immspec_1_:
      {
SDValue node0x50f8bf0 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x50f6e00 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x50f8bf0, SDValue());
SDValue node0x50f9190 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x50f9260 = dag->getNode(ISD::BRIND, dl, MVT::Other, node0x50f6e00, node0x50f9190);
roots.reserve(2);
roots.push_back(node0x50f6e00);
roots.push_back(node0x50f9260);
dag->setRoot(node0x50f9260);
      }
      break;
    case Codasip::i_call_alias__relative_addr20__:
case Codasip::i_call_alias__relative_addr20__ES:
case Codasip::i_call_alias__relative_addr20__MC:
case Codasip::i_call_alias__relative_addr20__BA:
      if (lowlevel) {
SDValue node0x4e208a0 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x4e1fe60 = dag->getCopyToReg(entry, dl, dag->getRegister(Codasip::rf_xpr_1, MVT::i32), node0x4e208a0, SDValue());
SDValue node0x4e20cb0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x4e20ed0 = dag->getNode(ISD::BR, dl, MVT::Other, node0x4e1fe60, node0x4e20cb0);
roots.reserve(2);
roots.push_back(node0x4e1fe60);
roots.push_back(node0x4e20ed0);
dag->setRoot(node0x4e20ed0);
      } else       {
dag->setRoot(entry);
      }
      break;
    case Codasip::i_jal_abs_calias__opc_jal__x_0__relative_addr20__:
      {
SDValue node0x4fbe1b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x4fbde60 = dag->getNode(ISD::BR, dl, MVT::Other, entry, node0x4fbe1b0);
roots.reserve(1);
roots.push_back(node0x4fbde60);
dag->setRoot(node0x4fbde60);
      }
      break;
    case Codasip::i_jal_abs_calias__opc_jal__xpr_general__relative_addr20__:
      {
SDValue node0x4fbe9a0 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x4fbcfb0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4fbe9a0, SDValue());
SDValue node0x4fbed10 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x4fbe970 = dag->getNode(ISD::BR, dl, MVT::Other, node0x4fbcfb0, node0x4fbed10);
roots.reserve(2);
roots.push_back(node0x4fbcfb0);
roots.push_back(node0x4fbe970);
dag->setRoot(node0x4fbe970);
      }
      break;
    case Codasip::i_jtype_jlink__opc_jal__x_0__relative_addr20__:
      {
SDValue node0x4fc0760 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x4fc0920 = dag->getNode(ISD::BR, dl, MVT::Other, entry, node0x4fc0760);
roots.reserve(1);
roots.push_back(node0x4fc0920);
dag->setRoot(node0x4fc0920);
      }
      break;
    case Codasip::i_jtype_jlink__opc_jal__xpr_general__relative_addr20__:
      {
SDValue node0x4fc1570 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x4fc0a40 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4fc1570, SDValue());
SDValue node0x4fc1980 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x4fc1b70 = dag->getNode(ISD::BR, dl, MVT::Other, node0x4fc0a40, node0x4fc1980);
roots.reserve(2);
roots.push_back(node0x4fc0a40);
roots.push_back(node0x4fc1b70);
dag->setRoot(node0x4fc1b70);
      }
      break;
    case Codasip::i_btype_branches__opc_beq__x_0__x_0__relative_addr12__:
      {
SDValue node0x4f2a5f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x4dfa5b0 = dag->getNode(ISD::BR, dl, MVT::Other, entry, node0x4f2a5f0);
roots.reserve(1);
roots.push_back(node0x4dfa5b0);
dag->setRoot(node0x4dfa5b0);
      }
      break;
    case Codasip::i_btype_branches__opc_beq__x_0__xpr_general__relative_addr12__:
      if (lowlevel) {
SDValue node0x4e08b10 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x4de64f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x4e08cb0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x4e08d50 = dag->getSetCC(dl, MVT::iAny, node0x4de64f0, node0x4e08b10, ISD::SETEQ);
SDValue node0x4e08ec0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x4e08d50, node0x4e08cb0);
roots.reserve(1);
roots.push_back(node0x4e08ec0);
dag->setRoot(node0x4e08ec0);
      } else       {
SDValue node0x4e08b10 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x4de64f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x4e08cb0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x4e08d50 = dag->getSetCC(dl, MVT::i32, node0x4de64f0, node0x4e08b10, ISD::SETEQ);
SDValue node0x4e08ec0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x4e08d50, node0x4e08cb0);
roots.reserve(1);
roots.push_back(node0x4e08ec0);
dag->setRoot(node0x4e08ec0);
      }
      break;
    case Codasip::i_btype_branches__opc_beq__xpr_general__x_0__relative_addr12__:
      if (lowlevel) {
SDValue node0x4eff9e0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x5127bc0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x4effb80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x4effc20 = dag->getSetCC(dl, MVT::iAny, node0x5127bc0, node0x4eff9e0, ISD::SETEQ);
SDValue node0x4effe70 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x4effc20, node0x4effb80);
roots.reserve(1);
roots.push_back(node0x4effe70);
dag->setRoot(node0x4effe70);
      } else       {
SDValue node0x4eff9e0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x5127bc0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x4effb80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x4effc20 = dag->getSetCC(dl, MVT::i32, node0x5127bc0, node0x4eff9e0, ISD::SETEQ);
SDValue node0x4effe70 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x4effc20, node0x4effb80);
roots.reserve(1);
roots.push_back(node0x4effe70);
dag->setRoot(node0x4effe70);
      }
      break;
    case Codasip::i_btype_branches__opc_beq__xpr_general__xpr_general__relative_addr12__:
      if (lowlevel) {
SDValue node0x4dd7150 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4de1f90 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x4f015b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x4f01650 = dag->getSetCC(dl, MVT::iAny, node0x4de1f90, node0x4dd7150, ISD::SETEQ);
SDValue node0x4f018a0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x4f01650, node0x4f015b0);
roots.reserve(1);
roots.push_back(node0x4f018a0);
dag->setRoot(node0x4f018a0);
      } else       {
SDValue node0x4dd7150 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4de1f90 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x4f015b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x4f01650 = dag->getSetCC(dl, MVT::i32, node0x4de1f90, node0x4dd7150, ISD::SETEQ);
SDValue node0x4f018a0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x4f01650, node0x4f015b0);
roots.reserve(1);
roots.push_back(node0x4f018a0);
dag->setRoot(node0x4f018a0);
      }
      break;
    case Codasip::i_btype_branches__opc_bge__x_0__x_0__relative_addr12__:
      {
SDValue node0x4ee44a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x4ee46c0 = dag->getNode(ISD::BR, dl, MVT::Other, entry, node0x4ee44a0);
roots.reserve(1);
roots.push_back(node0x4ee46c0);
dag->setRoot(node0x4ee46c0);
      }
      break;
    case Codasip::i_btype_branches__opc_bge__x_0__xpr_general__relative_addr12__:
      if (lowlevel) {
SDValue node0x4ee5550 = dag->getConstant(1LL, dl, MVT::i32);
SDValue node0x4eecd40 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x4ee58d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x4ee5970 = dag->getSetCC(dl, MVT::iAny, node0x4eecd40, node0x4ee5550, ISD::SETLT);
SDValue node0x4ee5bc0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x4ee5970, node0x4ee58d0);
roots.reserve(1);
roots.push_back(node0x4ee5bc0);
dag->setRoot(node0x4ee5bc0);
      } else       {
SDValue node0x4ee5550 = dag->getConstant(1LL, dl, MVT::i32);
SDValue node0x4eecd40 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x4ee58d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x4ee5970 = dag->getSetCC(dl, MVT::i32, node0x4eecd40, node0x4ee5550, ISD::SETLT);
SDValue node0x4ee5bc0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x4ee5970, node0x4ee58d0);
roots.reserve(1);
roots.push_back(node0x4ee5bc0);
dag->setRoot(node0x4ee5bc0);
      }
      break;
    case Codasip::i_btype_branches__opc_bge__xpr_general__x_0__relative_addr12__:
      if (lowlevel) {
SDValue node0x51388d0 = dag->getConstant(-1LL, dl, MVT::i32);
SDValue node0x4eed3b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x51389d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x5138a70 = dag->getSetCC(dl, MVT::iAny, node0x4eed3b0, node0x51388d0, ISD::SETGT);
SDValue node0x5138cc0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x5138a70, node0x51389d0);
roots.reserve(1);
roots.push_back(node0x5138cc0);
dag->setRoot(node0x5138cc0);
      } else       {
SDValue node0x51388d0 = dag->getConstant(-1LL, dl, MVT::i32);
SDValue node0x4eed3b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x51389d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x5138a70 = dag->getSetCC(dl, MVT::i32, node0x4eed3b0, node0x51388d0, ISD::SETGT);
SDValue node0x5138cc0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x5138a70, node0x51389d0);
roots.reserve(1);
roots.push_back(node0x5138cc0);
dag->setRoot(node0x5138cc0);
      }
      break;
    case Codasip::i_btype_branches__opc_bge__xpr_general__xpr_general__relative_addr12__:
      if (lowlevel) {
SDValue node0x4eeddf0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x513a3e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x513a490 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x513a530 = dag->getSetCC(dl, MVT::iAny, node0x513a3e0, node0x4eeddf0, ISD::SETGE);
SDValue node0x513a780 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x513a530, node0x513a490);
roots.reserve(1);
roots.push_back(node0x513a780);
dag->setRoot(node0x513a780);
      } else       {
SDValue node0x4eeddf0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x513a3e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x513a490 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x513a530 = dag->getSetCC(dl, MVT::i32, node0x513a3e0, node0x4eeddf0, ISD::SETGE);
SDValue node0x513a780 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x513a530, node0x513a490);
roots.reserve(1);
roots.push_back(node0x513a780);
dag->setRoot(node0x513a780);
      }
      break;
    case Codasip::i_btype_branches__opc_bgeu__x_0__x_0__relative_addr12__:
      {
SDValue node0x513b6b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x4ee7660 = dag->getNode(ISD::BR, dl, MVT::Other, entry, node0x513b6b0);
roots.reserve(1);
roots.push_back(node0x4ee7660);
dag->setRoot(node0x4ee7660);
      }
      break;
    case Codasip::i_btype_branches__opc_bgeu__x_0__xpr_general__relative_addr12__:
      if (lowlevel) {
SDValue node0x4ee1060 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x4ee11e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x4ee1290 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x4ee1330 = dag->getSetCC(dl, MVT::iAny, node0x4ee11e0, node0x4ee1060, ISD::SETEQ);
SDValue node0x4ee1580 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x4ee1330, node0x4ee1290);
roots.reserve(1);
roots.push_back(node0x4ee1580);
dag->setRoot(node0x4ee1580);
      } else       {
SDValue node0x4ee1060 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x4ee11e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x4ee1290 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x4ee1330 = dag->getSetCC(dl, MVT::i32, node0x4ee11e0, node0x4ee1060, ISD::SETEQ);
SDValue node0x4ee1580 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x4ee1330, node0x4ee1290);
roots.reserve(1);
roots.push_back(node0x4ee1580);
dag->setRoot(node0x4ee1580);
      }
      break;
    case Codasip::i_btype_branches__opc_bgeu__xpr_general__xpr_general__relative_addr12__:
      if (lowlevel) {
SDValue node0x512d430 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x512d4e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x512d590 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x512d630 = dag->getSetCC(dl, MVT::iAny, node0x512d4e0, node0x512d430, ISD::SETUGE);
SDValue node0x512d880 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x512d630, node0x512d590);
roots.reserve(1);
roots.push_back(node0x512d880);
dag->setRoot(node0x512d880);
      } else       {
SDValue node0x512d430 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x512d4e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x512d590 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x512d630 = dag->getSetCC(dl, MVT::i32, node0x512d4e0, node0x512d430, ISD::SETUGE);
SDValue node0x512d880 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x512d630, node0x512d590);
roots.reserve(1);
roots.push_back(node0x512d880);
dag->setRoot(node0x512d880);
      }
      break;
    case Codasip::i_btype_branches__opc_blt__x_0__xpr_general__relative_addr12__:
      if (lowlevel) {
SDValue node0x512f440 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x512f5c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x512f670 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x512f710 = dag->getSetCC(dl, MVT::iAny, node0x512f5c0, node0x512f440, ISD::SETGT);
SDValue node0x512f960 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x512f710, node0x512f670);
roots.reserve(1);
roots.push_back(node0x512f960);
dag->setRoot(node0x512f960);
      } else       {
SDValue node0x512f440 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x512f5c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x512f670 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x512f710 = dag->getSetCC(dl, MVT::i32, node0x512f5c0, node0x512f440, ISD::SETGT);
SDValue node0x512f960 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x512f710, node0x512f670);
roots.reserve(1);
roots.push_back(node0x512f960);
dag->setRoot(node0x512f960);
      }
      break;
    case Codasip::i_btype_branches__opc_blt__xpr_general__x_0__relative_addr12__:
      if (lowlevel) {
SDValue node0x513daf0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x513dc70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x513dd20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x513ddc0 = dag->getSetCC(dl, MVT::iAny, node0x513dc70, node0x513daf0, ISD::SETLT);
SDValue node0x513e010 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x513ddc0, node0x513dd20);
roots.reserve(1);
roots.push_back(node0x513e010);
dag->setRoot(node0x513e010);
      } else       {
SDValue node0x513daf0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x513dc70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x513dd20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x513ddc0 = dag->getSetCC(dl, MVT::i32, node0x513dc70, node0x513daf0, ISD::SETLT);
SDValue node0x513e010 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x513ddc0, node0x513dd20);
roots.reserve(1);
roots.push_back(node0x513e010);
dag->setRoot(node0x513e010);
      }
      break;
    case Codasip::i_btype_branches__opc_blt__xpr_general__xpr_general__relative_addr12__:
      if (lowlevel) {
SDValue node0x513f710 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x513f7c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x513f870 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x513f910 = dag->getSetCC(dl, MVT::iAny, node0x513f7c0, node0x513f710, ISD::SETLT);
SDValue node0x513fb60 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x513f910, node0x513f870);
roots.reserve(1);
roots.push_back(node0x513fb60);
dag->setRoot(node0x513fb60);
      } else       {
SDValue node0x513f710 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x513f7c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x513f870 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x513f910 = dag->getSetCC(dl, MVT::i32, node0x513f7c0, node0x513f710, ISD::SETLT);
SDValue node0x513fb60 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x513f910, node0x513f870);
roots.reserve(1);
roots.push_back(node0x513fb60);
dag->setRoot(node0x513fb60);
      }
      break;
    case Codasip::i_btype_branches__opc_bltu__x_0__xpr_general__relative_addr12__:
      if (lowlevel) {
SDValue node0x51416d0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x5141850 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5141900 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x51419a0 = dag->getSetCC(dl, MVT::iAny, node0x5141850, node0x51416d0, ISD::SETNE);
SDValue node0x5141bf0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x51419a0, node0x5141900);
roots.reserve(1);
roots.push_back(node0x5141bf0);
dag->setRoot(node0x5141bf0);
      } else       {
SDValue node0x51416d0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x5141850 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5141900 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x51419a0 = dag->getSetCC(dl, MVT::i32, node0x5141850, node0x51416d0, ISD::SETNE);
SDValue node0x5141bf0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x51419a0, node0x5141900);
roots.reserve(1);
roots.push_back(node0x5141bf0);
dag->setRoot(node0x5141bf0);
      }
      break;
    case Codasip::i_btype_branches__opc_bltu__xpr_general__xpr_general__relative_addr12__:
      if (lowlevel) {
SDValue node0x5132610 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x51326c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5132770 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x5132810 = dag->getSetCC(dl, MVT::iAny, node0x51326c0, node0x5132610, ISD::SETULT);
SDValue node0x5132a60 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x5132810, node0x5132770);
roots.reserve(1);
roots.push_back(node0x5132a60);
dag->setRoot(node0x5132a60);
      } else       {
SDValue node0x5132610 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x51326c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5132770 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x5132810 = dag->getSetCC(dl, MVT::i32, node0x51326c0, node0x5132610, ISD::SETULT);
SDValue node0x5132a60 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x5132810, node0x5132770);
roots.reserve(1);
roots.push_back(node0x5132a60);
dag->setRoot(node0x5132a60);
      }
      break;
    case Codasip::i_btype_branches__opc_bne__x_0__xpr_general__relative_addr12__:
      if (lowlevel) {
SDValue node0x5134620 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x51347a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5134850 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x51348f0 = dag->getSetCC(dl, MVT::iAny, node0x51347a0, node0x5134620, ISD::SETNE);
SDValue node0x5134b40 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x51348f0, node0x5134850);
roots.reserve(1);
roots.push_back(node0x5134b40);
dag->setRoot(node0x5134b40);
      } else       {
SDValue node0x5134620 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x51347a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5134850 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x51348f0 = dag->getSetCC(dl, MVT::i32, node0x51347a0, node0x5134620, ISD::SETNE);
SDValue node0x5134b40 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x51348f0, node0x5134850);
roots.reserve(1);
roots.push_back(node0x5134b40);
dag->setRoot(node0x5134b40);
      }
      break;
    case Codasip::i_btype_branches__opc_bne__xpr_general__x_0__relative_addr12__:
      if (lowlevel) {
SDValue node0x5137010 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x5137190 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5137240 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x51372e0 = dag->getSetCC(dl, MVT::iAny, node0x5137190, node0x5137010, ISD::SETNE);
SDValue node0x5137530 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x51372e0, node0x5137240);
roots.reserve(1);
roots.push_back(node0x5137530);
dag->setRoot(node0x5137530);
      } else       {
SDValue node0x5137010 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x5137190 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5137240 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x51372e0 = dag->getSetCC(dl, MVT::i32, node0x5137190, node0x5137010, ISD::SETNE);
SDValue node0x5137530 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x51372e0, node0x5137240);
roots.reserve(1);
roots.push_back(node0x5137530);
dag->setRoot(node0x5137530);
      }
      break;
    case Codasip::i_btype_branches__opc_bne__xpr_general__xpr_general__relative_addr12__:
      if (lowlevel) {
SDValue node0x4e1f940 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4e1f9f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x4e1faa0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x4e1fb40 = dag->getSetCC(dl, MVT::iAny, node0x4e1f9f0, node0x4e1f940, ISD::SETNE);
SDValue node0x4e1fd90 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x4e1fb40, node0x4e1faa0);
roots.reserve(1);
roots.push_back(node0x4e1fd90);
dag->setRoot(node0x4e1fd90);
      } else       {
SDValue node0x4e1f940 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4e1f9f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x4e1faa0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x4e1fb40 = dag->getSetCC(dl, MVT::i32, node0x4e1f9f0, node0x4e1f940, ISD::SETNE);
SDValue node0x4e1fd90 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x4e1fb40, node0x4e1faa0);
roots.reserve(1);
roots.push_back(node0x4e1fd90);
dag->setRoot(node0x4e1fd90);
      }
      break;
    case Codasip::i_btype_branches__opc_bge__xpr_general__xpr_general__relative_addr12__swappedCmpClone0__:
      if (lowlevel) {
SDValue node0x50e71c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x50e62a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x50e7360 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x50e7410 = dag->getSetCC(dl, MVT::iAny, node0x50e62a0, node0x50e7360, ISD::SETLE);
SDValue node0x50e74e0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x50e7410, node0x50e71c0);
roots.reserve(1);
roots.push_back(node0x50e74e0);
dag->setRoot(node0x50e74e0);
      } else       {
SDValue node0x50e71c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x50e62a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x50e7360 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x50e7410 = dag->getSetCC(dl, MVT::i32, node0x50e62a0, node0x50e7360, ISD::SETLE);
SDValue node0x50e74e0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x50e7410, node0x50e71c0);
roots.reserve(1);
roots.push_back(node0x50e74e0);
dag->setRoot(node0x50e74e0);
      }
      break;
    case Codasip::i_btype_branches__opc_bgeu__xpr_general__xpr_general__relative_addr12__swappedCmpClone0__:
      if (lowlevel) {
SDValue node0x50e7e70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x50e8100 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x50e81b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x50e8260 = dag->getSetCC(dl, MVT::iAny, node0x50e8100, node0x50e81b0, ISD::SETULE);
SDValue node0x50e8330 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x50e8260, node0x50e7e70);
roots.reserve(1);
roots.push_back(node0x50e8330);
dag->setRoot(node0x50e8330);
      } else       {
SDValue node0x50e7e70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x50e8100 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x50e81b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x50e8260 = dag->getSetCC(dl, MVT::i32, node0x50e8100, node0x50e81b0, ISD::SETULE);
SDValue node0x50e8330 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x50e8260, node0x50e7e70);
roots.reserve(1);
roots.push_back(node0x50e8330);
dag->setRoot(node0x50e8330);
      }
      break;
    case Codasip::i_btype_branches__opc_blt__xpr_general__xpr_general__relative_addr12__swappedCmpClone0__:
      if (lowlevel) {
SDValue node0x50e8cc0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x50e8f50 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x50e9000 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x50e90b0 = dag->getSetCC(dl, MVT::iAny, node0x50e8f50, node0x50e9000, ISD::SETGT);
SDValue node0x50e9180 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x50e90b0, node0x50e8cc0);
roots.reserve(1);
roots.push_back(node0x50e9180);
dag->setRoot(node0x50e9180);
      } else       {
SDValue node0x50e8cc0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x50e8f50 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x50e9000 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x50e90b0 = dag->getSetCC(dl, MVT::i32, node0x50e8f50, node0x50e9000, ISD::SETGT);
SDValue node0x50e9180 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x50e90b0, node0x50e8cc0);
roots.reserve(1);
roots.push_back(node0x50e9180);
dag->setRoot(node0x50e9180);
      }
      break;
    case Codasip::i_btype_branches__opc_bltu__xpr_general__xpr_general__relative_addr12__swappedCmpClone0__:
      if (lowlevel) {
SDValue node0x50e9bb0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x50e9e40 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x50e9ef0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x50e9fa0 = dag->getSetCC(dl, MVT::iAny, node0x50e9e40, node0x50e9ef0, ISD::SETUGT);
SDValue node0x50ea070 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x50e9fa0, node0x50e9bb0);
roots.reserve(1);
roots.push_back(node0x50ea070);
dag->setRoot(node0x50ea070);
      } else       {
SDValue node0x50e9bb0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x50e9e40 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x50e9ef0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x50e9fa0 = dag->getSetCC(dl, MVT::i32, node0x50e9e40, node0x50e9ef0, ISD::SETUGT);
SDValue node0x50ea070 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x50e9fa0, node0x50e9bb0);
roots.reserve(1);
roots.push_back(node0x50ea070);
dag->setRoot(node0x50ea070);
      }
      break;
    case Codasip::i_call_reg_alias__simm12__x_0__:
case Codasip::i_call_reg_alias__simm12__x_0__ES:
case Codasip::i_call_reg_alias__simm12__x_0__MC:
case Codasip::i_call_reg_alias__simm12__x_0__BA:
      if (lowlevel) {
SDValue node0x4e214e0 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x4e1feb0 = dag->getCopyToReg(entry, dl, dag->getRegister(Codasip::rf_xpr_1, MVT::i32), node0x4e214e0, SDValue());
SDValue node0x4e218f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x4e21460 = dag->getNode(ISD::BR, dl, MVT::Other, node0x4e1feb0, node0x4e218f0);
roots.reserve(2);
roots.push_back(node0x4e1feb0);
roots.push_back(node0x4e21460);
dag->setRoot(node0x4e21460);
      } else       {
dag->setRoot(entry);
      }
      break;
    case Codasip::i_itype_jlreg__opc_jalr__x_0__simm12__x_0__:
      {
SDValue node0x4f42450 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x4f42180 = dag->getNode(ISD::BR, dl, MVT::Other, entry, node0x4f42450);
roots.reserve(1);
roots.push_back(node0x4f42180);
dag->setRoot(node0x4f42180);
      }
      break;
    case Codasip::i_itype_jlreg__opc_jalr__xpr_general__simm12__x_0__:
      {
SDValue node0x4f44b60 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x4f44910 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4f44b60, SDValue());
SDValue node0x4f44ed0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x4f44b30 = dag->getNode(ISD::BR, dl, MVT::Other, node0x4f44910, node0x4f44ed0);
roots.reserve(2);
roots.push_back(node0x4f44910);
roots.push_back(node0x4f44b30);
dag->setRoot(node0x4f44b30);
      }
      break;
    case Codasip::i_itype_alu__opc_addi__xpr_general__x_0__simm12__:
      {
SDValue node0x4e263c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4e1ff00 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4e263c0, SDValue());
roots.reserve(1);
roots.push_back(node0x4e1ff00);
dag->setRoot(node0x4e1ff00);
      }
      break;
    case Codasip::i_itype_alu__opc_addi__xpr_general__xpr_general__simm12__:
      {
SDValue node0x4e27590 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4e27640 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x4e276e0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x4e27590, node0x4e27640);
SDValue node0x4e264f0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4e276e0, SDValue());
roots.reserve(1);
roots.push_back(node0x4e264f0);
dag->setRoot(node0x4e264f0);
      }
      break;
    case Codasip::i_itype_alu__opc_andi__xpr_general__xpr_general__simm12__:
      {
SDValue node0x4f2e1c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4f2e270 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x4f2e310 = dag->getNode(ISD::AND, dl, MVT::i32, node0x4f2e1c0, node0x4f2e270);
SDValue node0x4f2d050 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4f2e310, SDValue());
roots.reserve(1);
roots.push_back(node0x4f2d050);
dag->setRoot(node0x4f2d050);
      }
      break;
    case Codasip::i_itype_alu__opc_ori__xpr_general__x_0__simm12__:
      {
SDValue node0x4f31a00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4f2e430 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4f31a00, SDValue());
roots.reserve(1);
roots.push_back(node0x4f2e430);
dag->setRoot(node0x4f2e430);
      }
      break;
    case Codasip::i_itype_alu__opc_ori__xpr_general__xpr_general__simm12__:
      {
SDValue node0x4f32d70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4f32e20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x4f32ec0 = dag->getNode(ISD::OR, dl, MVT::i32, node0x4f32d70, node0x4f32e20);
SDValue node0x4f31b30 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4f32ec0, SDValue());
roots.reserve(1);
roots.push_back(node0x4f31b30);
dag->setRoot(node0x4f31b30);
      }
      break;
    case Codasip::i_itype_alu__opc_slti__xpr_general__x_0__simm12__:
      {
SDValue node0x4f364d0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x4f365b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4f36650 = dag->getSetCC(dl, MVT::i32, node0x4f365b0, node0x4f364d0, ISD::SETGT);
SDValue node0x4f32fe0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4f36650, SDValue());
roots.reserve(1);
roots.push_back(node0x4f32fe0);
dag->setRoot(node0x4f32fe0);
      }
      break;
    case Codasip::i_itype_alu__opc_slti__xpr_general__xpr_general__simm12__:
      {
SDValue node0x4f37af0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4f37ba0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x4f37c40 = dag->getSetCC(dl, MVT::i32, node0x4f37af0, node0x4f37ba0, ISD::SETLT);
SDValue node0x4f36920 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4f37c40, SDValue());
roots.reserve(1);
roots.push_back(node0x4f36920);
dag->setRoot(node0x4f36920);
      }
      break;
    case Codasip::i_itype_alu__opc_sltiu__xpr_general__x_0__simm12__:
      {
SDValue node0x4f3b3b0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x4f3b490 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4f3b530 = dag->getSetCC(dl, MVT::i32, node0x4f3b490, node0x4f3b3b0, ISD::SETNE);
SDValue node0x4f3afa0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4f3b530, SDValue());
roots.reserve(1);
roots.push_back(node0x4f3afa0);
dag->setRoot(node0x4f3afa0);
      }
      break;
    case Codasip::i_itype_alu__opc_sltiu__xpr_general__xpr_general__simm12__:
      {
SDValue node0x4f3ca20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4f3cad0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x4f3cb70 = dag->getSetCC(dl, MVT::i32, node0x4f3ca20, node0x4f3cad0, ISD::SETULT);
SDValue node0x4f3b710 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4f3cb70, SDValue());
roots.reserve(1);
roots.push_back(node0x4f3b710);
dag->setRoot(node0x4f3b710);
      }
      break;
    case Codasip::i_itype_alu__opc_xori__xpr_general__x_0__simm12__:
      {
SDValue node0x4f402d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4f3c660 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4f402d0, SDValue());
roots.reserve(1);
roots.push_back(node0x4f3c660);
dag->setRoot(node0x4f3c660);
      }
      break;
    case Codasip::i_itype_alu__opc_xori__xpr_general__xpr_general__simm12__:
      {
SDValue node0x4f41640 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4f416f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x4f41790 = dag->getNode(ISD::XOR, dl, MVT::i32, node0x4f41640, node0x4f416f0);
SDValue node0x4f40400 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4f41790, SDValue());
roots.reserve(1);
roots.push_back(node0x4f40400);
dag->setRoot(node0x4f40400);
      }
      break;
    case Codasip::i_itype_loads__opc_lb__x_0__simm12__x_0__:
      {
roots.reserve(0);
dag->setRoot(entry);
      }
      break;
    case Codasip::i_itype_loads__opc_lb__x_0__simm12__xpr_general__:
      {
roots.reserve(0);
dag->setRoot(entry);
      }
      break;
    case Codasip::i_itype_loads__opc_lb__xpr_general__simm12__x_0__:
      {
SDValue node0x4f4a760 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4f48600 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x4f4a760, mpi, MVT::i8, 1);
SDValue node0x4f48770 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4f48600, SDValue());
roots.reserve(1);
roots.push_back(node0x4f48770);
dag->setRoot(node0x4f48770);
      }
      break;
    case Codasip::i_itype_loads__opc_lb__xpr_general__simm12__xpr_general__:
      {
SDValue node0x4f4bcf0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4f4bda0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x4f4be40 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x4f4bcf0, node0x4f4bda0);
SDValue node0x4f47490 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x4f4be40, mpi, MVT::i8, 1);
SDValue node0x4f4aab0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4f47490, SDValue());
roots.reserve(1);
roots.push_back(node0x4f4aab0);
dag->setRoot(node0x4f4aab0);
      }
      break;
    case Codasip::i_itype_loads__opc_lbu__x_0__simm12__x_0__:
      {
roots.reserve(0);
dag->setRoot(entry);
      }
      break;
    case Codasip::i_itype_loads__opc_lbu__x_0__simm12__xpr_general__:
      {
roots.reserve(0);
dag->setRoot(entry);
      }
      break;
    case Codasip::i_itype_loads__opc_lbu__xpr_general__simm12__x_0__:
      {
SDValue node0x4f50280 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4f4e030 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x4f50280, mpi, MVT::i8, 1);
SDValue node0x4f4fd90 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4f4e030, SDValue());
roots.reserve(1);
roots.push_back(node0x4f4fd90);
dag->setRoot(node0x4f4fd90);
      }
      break;
    case Codasip::i_itype_loads__opc_lbu__xpr_general__simm12__xpr_general__:
      {
SDValue node0x4f518b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4f51960 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x4f51a00 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x4f518b0, node0x4f51960);
SDValue node0x4f4ce70 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x4f51a00, mpi, MVT::i8, 1);
SDValue node0x4f4ff60 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4f4ce70, SDValue());
roots.reserve(1);
roots.push_back(node0x4f4ff60);
dag->setRoot(node0x4f4ff60);
      }
      break;
    case Codasip::i_itype_loads__opc_lh__x_0__simm12__x_0__:
      {
roots.reserve(0);
dag->setRoot(entry);
      }
      break;
    case Codasip::i_itype_loads__opc_lh__x_0__simm12__xpr_general__:
      {
roots.reserve(0);
dag->setRoot(entry);
      }
      break;
    case Codasip::i_itype_loads__opc_lh__xpr_general__simm12__x_0__:
      {
SDValue node0x4f55d20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4f53bc0 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x4f55d20, mpi, MVT::i16, 1);
SDValue node0x4f53d30 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4f53bc0, SDValue());
roots.reserve(1);
roots.push_back(node0x4f53d30);
dag->setRoot(node0x4f53d30);
      }
      break;
    case Codasip::i_itype_loads__opc_lh__xpr_general__simm12__xpr_general__:
      {
SDValue node0x4f572b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4f57360 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x4f57400 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x4f572b0, node0x4f57360);
SDValue node0x4f52a00 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x4f57400, mpi, MVT::i16, 1);
SDValue node0x4f56070 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4f52a00, SDValue());
roots.reserve(1);
roots.push_back(node0x4f56070);
dag->setRoot(node0x4f56070);
      }
      break;
    case Codasip::i_itype_loads__opc_lhu__x_0__simm12__x_0__:
      {
roots.reserve(0);
dag->setRoot(entry);
      }
      break;
    case Codasip::i_itype_loads__opc_lhu__x_0__simm12__xpr_general__:
      {
roots.reserve(0);
dag->setRoot(entry);
      }
      break;
    case Codasip::i_itype_loads__opc_lhu__xpr_general__simm12__x_0__:
      {
SDValue node0x4f5b840 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4f595f0 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x4f5b840, mpi, MVT::i16, 1);
SDValue node0x4f5b350 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4f595f0, SDValue());
roots.reserve(1);
roots.push_back(node0x4f5b350);
dag->setRoot(node0x4f5b350);
      }
      break;
    case Codasip::i_itype_loads__opc_lhu__xpr_general__simm12__xpr_general__:
      {
SDValue node0x4f5ce70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4f5cf20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x4f5cfc0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x4f5ce70, node0x4f5cf20);
SDValue node0x4f58430 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x4f5cfc0, mpi, MVT::i16, 1);
SDValue node0x4f5b520 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4f58430, SDValue());
roots.reserve(1);
roots.push_back(node0x4f5b520);
dag->setRoot(node0x4f5b520);
      }
      break;
    case Codasip::i_itype_loads__opc_lw__x_0__simm12__x_0__:
      {
roots.reserve(0);
dag->setRoot(entry);
      }
      break;
    case Codasip::i_itype_loads__opc_lw__x_0__simm12__xpr_general__:
      {
roots.reserve(0);
dag->setRoot(entry);
      }
      break;
    case Codasip::i_itype_loads__opc_lw__xpr_general__simm12__x_0__:
      {
SDValue node0x4fbb6a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4fbb740 = dag->getLoad(MVT::i32, dl, entry, node0x4fbb6a0, mpi, 1);
SDValue node0x4fb96e0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4fbb740, SDValue());
roots.reserve(1);
roots.push_back(node0x4fb96e0);
dag->setRoot(node0x4fb96e0);
      }
      break;
    case Codasip::i_itype_loads__opc_lw__xpr_general__simm12__xpr_general__:
      {
SDValue node0x4fbcb80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4fbcc30 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x4fbccd0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x4fbcb80, node0x4fbcc30);
SDValue node0x4fbcd60 = dag->getLoad(MVT::i32, dl, entry, node0x4fbccd0, mpi, 1);
SDValue node0x4fbb8f0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4fbcd60, SDValue());
roots.reserve(1);
roots.push_back(node0x4fbb8f0);
dag->setRoot(node0x4fbb8f0);
      }
      break;
    case Codasip::i_nop_alias__:
      {
roots.reserve(0);
dag->setRoot(entry);
      }
      break;
    case Codasip::i_rtype_alu__opc_add__x_0__x_0__x_0__:
      {
roots.reserve(0);
dag->setRoot(entry);
      }
      break;
    case Codasip::i_rtype_alu__opc_add__xpr_general__x_0__x_0__:
      {
SDValue node0x4fd64d0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x4fd6400 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4fd64d0, SDValue());
roots.reserve(1);
roots.push_back(node0x4fd6400);
dag->setRoot(node0x4fd6400);
      }
      break;
    case Codasip::i_rtype_alu__opc_add__xpr_general__x_0__xpr_general__:
      {
SDValue node0x4fd7710 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4fd6670 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4fd7710, SDValue());
roots.reserve(1);
roots.push_back(node0x4fd6670);
dag->setRoot(node0x4fd6670);
      }
      break;
    case Codasip::i_rtype_alu__opc_add__xpr_general__xpr_general__x_0__:
      {
SDValue node0x4fd9940 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4fd9670 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4fd9940, SDValue());
roots.reserve(1);
roots.push_back(node0x4fd9670);
dag->setRoot(node0x4fd9670);
      }
      break;
    case Codasip::i_rtype_alu__opc_add__xpr_general__xpr_general__xpr_general__:
      {
SDValue node0x4fdad60 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4fdae10 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x4fdaec0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x4fdad60, node0x4fdae10);
SDValue node0x4fda9f0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4fdaec0, SDValue());
roots.reserve(1);
roots.push_back(node0x4fda9f0);
dag->setRoot(node0x4fda9f0);
      }
      break;
    case Codasip::i_rtype_alu__opc_and__x_0__x_0__x_0__:
      {
roots.reserve(0);
dag->setRoot(entry);
      }
      break;
    case Codasip::i_rtype_alu__opc_and__xpr_general__x_0__x_0__:
      {
SDValue node0x4fe3b00 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x4fe3a30 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4fe3b00, SDValue());
roots.reserve(1);
roots.push_back(node0x4fe3a30);
dag->setRoot(node0x4fe3a30);
      }
      break;
    case Codasip::i_rtype_alu__opc_and__xpr_general__xpr_general__xpr_general__:
      {
SDValue node0x4fe80f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4fe81a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x4fe8250 = dag->getNode(ISD::AND, dl, MVT::i32, node0x4fe80f0, node0x4fe81a0);
SDValue node0x4fe7d80 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4fe8250, SDValue());
roots.reserve(1);
roots.push_back(node0x4fe7d80);
dag->setRoot(node0x4fe7d80);
      }
      break;
    case Codasip::i_rtype_alu__opc_or__x_0__x_0__x_0__:
      {
roots.reserve(0);
dag->setRoot(entry);
      }
      break;
    case Codasip::i_rtype_alu__opc_or__xpr_general__x_0__x_0__:
      {
SDValue node0x4ff0e90 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x4ff0c40 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4ff0e90, SDValue());
roots.reserve(1);
roots.push_back(node0x4ff0c40);
dag->setRoot(node0x4ff0c40);
      }
      break;
    case Codasip::i_rtype_alu__opc_or__xpr_general__x_0__xpr_general__:
      {
SDValue node0x4ff20d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4ff1030 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4ff20d0, SDValue());
roots.reserve(1);
roots.push_back(node0x4ff1030);
dag->setRoot(node0x4ff1030);
      }
      break;
    case Codasip::i_rtype_alu__opc_or__xpr_general__xpr_general__x_0__:
      {
SDValue node0x4ff4300 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4ff3e90 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4ff4300, SDValue());
roots.reserve(1);
roots.push_back(node0x4ff3e90);
dag->setRoot(node0x4ff3e90);
      }
      break;
    case Codasip::i_rtype_alu__opc_or__xpr_general__xpr_general__xpr_general__:
      {
SDValue node0x4ff5720 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4ff57d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x4ff5880 = dag->getNode(ISD::OR, dl, MVT::i32, node0x4ff5720, node0x4ff57d0);
SDValue node0x4ff4080 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4ff5880, SDValue());
roots.reserve(1);
roots.push_back(node0x4ff4080);
dag->setRoot(node0x4ff4080);
      }
      break;
    case Codasip::i_rtype_alu__opc_sll__x_0__x_0__x_0__:
      {
roots.reserve(0);
dag->setRoot(entry);
      }
      break;
    case Codasip::i_rtype_alu__opc_sll__xpr_general__x_0__x_0__:
      {
SDValue node0x4ffe4c0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x4ffe3f0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4ffe4c0, SDValue());
roots.reserve(1);
roots.push_back(node0x4ffe3f0);
dag->setRoot(node0x4ffe3f0);
      }
      break;
    case Codasip::i_rtype_alu__opc_sll__xpr_general__xpr_general__x_0__:
      {
SDValue node0x50017e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5001510 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x50017e0, SDValue());
roots.reserve(1);
roots.push_back(node0x5001510);
dag->setRoot(node0x5001510);
      }
      break;
    case Codasip::i_rtype_alu__opc_sll__xpr_general__xpr_general__xpr_general__:
      {
SDValue node0x5002c00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5002cb0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5002d60 = dag->getNode(ISD::SHL, dl, MVT::i32, node0x5002c00, node0x5002cb0);
SDValue node0x5002890 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5002d60, SDValue());
roots.reserve(1);
roots.push_back(node0x5002890);
dag->setRoot(node0x5002890);
      }
      break;
    case Codasip::i_rtype_alu__opc_slt__x_0__x_0__x_0__:
      {
roots.reserve(0);
dag->setRoot(entry);
      }
      break;
    case Codasip::i_rtype_alu__opc_slt__xpr_general__x_0__x_0__:
      {
SDValue node0x500b9a0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x500b8d0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x500b9a0, SDValue());
roots.reserve(1);
roots.push_back(node0x500b8d0);
dag->setRoot(node0x500b8d0);
      }
      break;
    case Codasip::i_rtype_alu__opc_slt__xpr_general__x_0__xpr_general__:
      {
SDValue node0x500ca60 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x500cbe0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x500cc90 = dag->getSetCC(dl, MVT::i32, node0x500cbe0, node0x500ca60, ISD::SETGT);
SDValue node0x500bb40 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x500cc90, SDValue());
roots.reserve(1);
roots.push_back(node0x500bb40);
dag->setRoot(node0x500bb40);
      }
      break;
    case Codasip::i_rtype_alu__opc_slt__xpr_general__xpr_general__x_0__:
      {
SDValue node0x500ee10 = dag->getConstant(31LL, dl, MVT::i32);
SDValue node0x500f030 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x500f0e0 = dag->getNode(ISD::SRL, dl, MVT::i32, node0x500f030, node0x500ee10);
SDValue node0x500ecc0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x500f0e0, SDValue());
roots.reserve(1);
roots.push_back(node0x500ecc0);
dag->setRoot(node0x500ecc0);
      }
      break;
    case Codasip::i_rtype_alu__opc_slt__xpr_general__xpr_general__xpr_general__:
      {
SDValue node0x5010510 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x50105c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5010670 = dag->getSetCC(dl, MVT::i32, node0x5010510, node0x50105c0, ISD::SETLT);
SDValue node0x50101a0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5010670, SDValue());
roots.reserve(1);
roots.push_back(node0x50101a0);
dag->setRoot(node0x50101a0);
      }
      break;
    case Codasip::i_rtype_alu__opc_sltu__x_0__x_0__x_0__:
      {
roots.reserve(0);
dag->setRoot(entry);
      }
      break;
    case Codasip::i_rtype_alu__opc_sltu__xpr_general__x_0__x_0__:
      {
SDValue node0x4f66530 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x4f66460 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4f66530, SDValue());
roots.reserve(1);
roots.push_back(node0x4f66460);
dag->setRoot(node0x4f66460);
      }
      break;
    case Codasip::i_rtype_alu__opc_sltu__xpr_general__x_0__xpr_general__:
      {
SDValue node0x4f675f0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x4f67770 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4f67820 = dag->getSetCC(dl, MVT::i32, node0x4f67770, node0x4f675f0, ISD::SETNE);
SDValue node0x4f666d0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4f67820, SDValue());
roots.reserve(1);
roots.push_back(node0x4f666d0);
dag->setRoot(node0x4f666d0);
      }
      break;
    case Codasip::i_rtype_alu__opc_sltu__xpr_general__xpr_general__xpr_general__:
      {
SDValue node0x4f6adf0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4f6aea0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x4f6af50 = dag->getSetCC(dl, MVT::i32, node0x4f6adf0, node0x4f6aea0, ISD::SETULT);
SDValue node0x4f6aa80 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4f6af50, SDValue());
roots.reserve(1);
roots.push_back(node0x4f6aa80);
dag->setRoot(node0x4f6aa80);
      }
      break;
    case Codasip::i_rtype_alu__opc_sra__x_0__x_0__x_0__:
      {
roots.reserve(0);
dag->setRoot(entry);
      }
      break;
    case Codasip::i_rtype_alu__opc_sra__xpr_general__x_0__x_0__:
      {
SDValue node0x4f73c50 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x4f73b80 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4f73c50, SDValue());
roots.reserve(1);
roots.push_back(node0x4f73b80);
dag->setRoot(node0x4f73b80);
      }
      break;
    case Codasip::i_rtype_alu__opc_sra__xpr_general__xpr_general__x_0__:
      {
SDValue node0x4f76f70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4f76ca0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4f76f70, SDValue());
roots.reserve(1);
roots.push_back(node0x4f76ca0);
dag->setRoot(node0x4f76ca0);
      }
      break;
    case Codasip::i_rtype_alu__opc_sra__xpr_general__xpr_general__xpr_general__:
      {
SDValue node0x4f78430 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4f784e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x4f78620 = dag->getNode(ISD::SRA, dl, MVT::i32, node0x4f78430, node0x4f784e0);
SDValue node0x4f78020 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4f78620, SDValue());
roots.reserve(1);
roots.push_back(node0x4f78020);
dag->setRoot(node0x4f78020);
      }
      break;
    case Codasip::i_rtype_alu__opc_srl__x_0__x_0__x_0__:
      {
roots.reserve(0);
dag->setRoot(entry);
      }
      break;
    case Codasip::i_rtype_alu__opc_srl__xpr_general__x_0__x_0__:
      {
SDValue node0x4f81290 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x4f811c0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4f81290, SDValue());
roots.reserve(1);
roots.push_back(node0x4f811c0);
dag->setRoot(node0x4f811c0);
      }
      break;
    case Codasip::i_rtype_alu__opc_srl__xpr_general__xpr_general__x_0__:
      {
SDValue node0x4f845b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4f842e0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4f845b0, SDValue());
roots.reserve(1);
roots.push_back(node0x4f842e0);
dag->setRoot(node0x4f842e0);
      }
      break;
    case Codasip::i_rtype_alu__opc_srl__xpr_general__xpr_general__xpr_general__:
      {
SDValue node0x4f85a70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4f85b20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x4f85c60 = dag->getNode(ISD::SRL, dl, MVT::i32, node0x4f85a70, node0x4f85b20);
SDValue node0x4f85660 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4f85c60, SDValue());
roots.reserve(1);
roots.push_back(node0x4f85660);
dag->setRoot(node0x4f85660);
      }
      break;
    case Codasip::i_rtype_alu__opc_sub__x_0__x_0__x_0__:
      {
roots.reserve(0);
dag->setRoot(entry);
      }
      break;
    case Codasip::i_rtype_alu__opc_sub__xpr_general__x_0__x_0__:
      {
SDValue node0x4f8e8d0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x4f8e800 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4f8e8d0, SDValue());
roots.reserve(1);
roots.push_back(node0x4f8e800);
dag->setRoot(node0x4f8e800);
      }
      break;
    case Codasip::i_rtype_alu__opc_sub__xpr_general__x_0__xpr_general__:
      {
SDValue node0x4f8f910 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x4f8fb10 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4f8fbc0 = dag->getNode(ISD::SUB, dl, MVT::i32, node0x4f8f910, node0x4f8fb10);
SDValue node0x4f8ea70 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4f8fbc0, SDValue());
roots.reserve(1);
roots.push_back(node0x4f8ea70);
dag->setRoot(node0x4f8ea70);
      }
      break;
    case Codasip::i_rtype_alu__opc_sub__xpr_general__xpr_general__x_0__:
      {
SDValue node0x4f91e00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4f91b30 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4f91e00, SDValue());
roots.reserve(1);
roots.push_back(node0x4f91b30);
dag->setRoot(node0x4f91b30);
      }
      break;
    case Codasip::i_rtype_alu__opc_sub__xpr_general__xpr_general__xpr_general__:
      {
SDValue node0x4f93220 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4f932d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x4f93380 = dag->getNode(ISD::SUB, dl, MVT::i32, node0x4f93220, node0x4f932d0);
SDValue node0x4f92eb0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4f93380, SDValue());
roots.reserve(1);
roots.push_back(node0x4f92eb0);
dag->setRoot(node0x4f92eb0);
      }
      break;
    case Codasip::i_rtype_alu__opc_xor__x_0__x_0__x_0__:
      {
roots.reserve(0);
dag->setRoot(entry);
      }
      break;
    case Codasip::i_rtype_alu__opc_xor__xpr_general__x_0__x_0__:
      {
SDValue node0x4f9bfc0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x4f9bef0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4f9bfc0, SDValue());
roots.reserve(1);
roots.push_back(node0x4f9bef0);
dag->setRoot(node0x4f9bef0);
      }
      break;
    case Codasip::i_rtype_alu__opc_xor__xpr_general__x_0__xpr_general__:
      {
SDValue node0x4f9d200 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4f9c160 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4f9d200, SDValue());
roots.reserve(1);
roots.push_back(node0x4f9c160);
dag->setRoot(node0x4f9c160);
      }
      break;
    case Codasip::i_rtype_alu__opc_xor__xpr_general__xpr_general__x_0__:
      {
SDValue node0x4f9f430 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4f9f160 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4f9f430, SDValue());
roots.reserve(1);
roots.push_back(node0x4f9f160);
dag->setRoot(node0x4f9f160);
      }
      break;
    case Codasip::i_rtype_alu__opc_xor__xpr_general__xpr_general__xpr_general__:
      {
SDValue node0x4fa0850 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4fa0900 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x4fa09b0 = dag->getNode(ISD::XOR, dl, MVT::i32, node0x4fa0850, node0x4fa0900);
SDValue node0x4fa04e0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4fa09b0, SDValue());
roots.reserve(1);
roots.push_back(node0x4fa04e0);
dag->setRoot(node0x4fa04e0);
      }
      break;
    case Codasip::i_rtype_shift__opc_slli__xpr_general__xpr_general__uimm5__:
      {
SDValue node0x4fa56e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4fa5790 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x4fa5830 = dag->getNode(ISD::SHL, dl, MVT::i32, node0x4fa56e0, node0x4fa5790);
SDValue node0x4fa4890 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4fa5830, SDValue());
roots.reserve(1);
roots.push_back(node0x4fa4890);
dag->setRoot(node0x4fa4890);
      }
      break;
    case Codasip::i_rtype_shift__opc_srai__xpr_general__xpr_general__uimm5__:
      {
SDValue node0x4faa560 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4faa610 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x4faa6b0 = dag->getNode(ISD::SRA, dl, MVT::i32, node0x4faa560, node0x4faa610);
SDValue node0x4fa9710 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4faa6b0, SDValue());
roots.reserve(1);
roots.push_back(node0x4fa9710);
dag->setRoot(node0x4fa9710);
      }
      break;
    case Codasip::i_rtype_shift__opc_srli__xpr_general__xpr_general__uimm5__:
      {
SDValue node0x4faf3e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4faf490 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x4faf530 = dag->getNode(ISD::SRL, dl, MVT::i32, node0x4faf3e0, node0x4faf490);
SDValue node0x4fae590 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4faf530, SDValue());
roots.reserve(1);
roots.push_back(node0x4fae590);
dag->setRoot(node0x4fae590);
      }
      break;
    case Codasip::i_stype_store__opc_sb__x_0__simm12__x_0__:
      {
SDValue node0x50d0e70 = dag->getConstant(0LL, dl, MVT::i8);
SDValue node0x50d1110 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x4e08850 = dag->getStore(entry, dl, node0x50d0e70, node0x50d1110, mpi, 1);
roots.reserve(1);
roots.push_back(node0x4e08850);
dag->setRoot(node0x4e08850);
      }
      break;
    case Codasip::i_stype_store__opc_sb__x_0__simm12__xpr_general__:
      {
SDValue node0x50d21f0 = dag->getConstant(0LL, dl, MVT::i8);
SDValue node0x50d2530 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x50d25e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x50d2680 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x50d2530, node0x50d25e0);
SDValue node0x50d2710 = dag->getStore(entry, dl, node0x50d21f0, node0x50d2680, mpi, 1);
roots.reserve(1);
roots.push_back(node0x50d2710);
dag->setRoot(node0x50d2710);
      }
      break;
    case Codasip::i_stype_store__opc_sb__xpr_general__simm12__x_0__:
      {
SDValue node0x50d4af0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x50d4ba0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x511b130 = dag->getTruncStore(entry, dl, node0x50d4af0, node0x50d4ba0, mpi, MVT::i8, 1);
roots.reserve(1);
roots.push_back(node0x511b130);
dag->setRoot(node0x511b130);
      }
      break;
    case Codasip::i_stype_store__opc_sb__xpr_general__simm12__xpr_general__:
      {
SDValue node0x50d60e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x50d6190 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x50d6240 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x50d6390 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x50d6190, node0x50d6240);
SDValue node0x50d4cf0 = dag->getTruncStore(entry, dl, node0x50d60e0, node0x50d6390, mpi, MVT::i8, 1);
roots.reserve(1);
roots.push_back(node0x50d4cf0);
dag->setRoot(node0x50d4cf0);
      }
      break;
    case Codasip::i_stype_store__opc_sh__x_0__simm12__x_0__:
      {
SDValue node0x50d6ff0 = dag->getConstant(0LL, dl, MVT::i16);
SDValue node0x50d7290 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x50d7330 = dag->getStore(entry, dl, node0x50d6ff0, node0x50d7290, mpi, 1);
roots.reserve(1);
roots.push_back(node0x50d7330);
dag->setRoot(node0x50d7330);
      }
      break;
    case Codasip::i_stype_store__opc_sh__x_0__simm12__xpr_general__:
      {
SDValue node0x50d8150 = dag->getConstant(0LL, dl, MVT::i16);
SDValue node0x50d8490 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x50d8540 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x50d85e0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x50d8490, node0x50d8540);
SDValue node0x50d8670 = dag->getStore(entry, dl, node0x50d8150, node0x50d85e0, mpi, 1);
roots.reserve(1);
roots.push_back(node0x50d8670);
dag->setRoot(node0x50d8670);
      }
      break;
    case Codasip::i_stype_store__opc_sh__xpr_general__simm12__x_0__:
      {
SDValue node0x50daa50 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x50dab00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x511b690 = dag->getTruncStore(entry, dl, node0x50daa50, node0x50dab00, mpi, MVT::i16, 1);
roots.reserve(1);
roots.push_back(node0x511b690);
dag->setRoot(node0x511b690);
      }
      break;
    case Codasip::i_stype_store__opc_sh__xpr_general__simm12__xpr_general__:
      {
SDValue node0x50dc040 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x50dc0f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x50dc1a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x50dc2f0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x50dc0f0, node0x50dc1a0);
SDValue node0x50dac50 = dag->getTruncStore(entry, dl, node0x50dc040, node0x50dc2f0, mpi, MVT::i16, 1);
roots.reserve(1);
roots.push_back(node0x50dac50);
dag->setRoot(node0x50dac50);
      }
      break;
    case Codasip::i_stype_store__opc_sw__x_0__simm12__x_0__:
      {
SDValue node0x50dcf50 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x50dd150 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x50dd1f0 = dag->getStore(entry, dl, node0x50dcf50, node0x50dd150, mpi, 1);
roots.reserve(1);
roots.push_back(node0x50dd1f0);
dag->setRoot(node0x50dd1f0);
      }
      break;
    case Codasip::i_stype_store__opc_sw__x_0__simm12__xpr_general__:
      {
SDValue node0x50de010 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x50de2b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x50de360 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x50de400 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x50de2b0, node0x50de360);
SDValue node0x50de490 = dag->getStore(entry, dl, node0x50de010, node0x50de400, mpi, 1);
roots.reserve(1);
roots.push_back(node0x50de490);
dag->setRoot(node0x50de490);
      }
      break;
    case Codasip::i_stype_store__opc_sw__xpr_general__simm12__x_0__:
      {
SDValue node0x50e0870 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x50e0920 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x50e09c0 = dag->getStore(entry, dl, node0x50e0870, node0x50e0920, mpi, 1);
roots.reserve(1);
roots.push_back(node0x50e09c0);
dag->setRoot(node0x50e09c0);
      }
      break;
    case Codasip::i_stype_store__opc_sw__xpr_general__simm12__xpr_general__:
      {
SDValue node0x50e1db0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x50e1e60 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x50e1f10 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x50e1fb0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x50e1e60, node0x50e1f10);
SDValue node0x50e2040 = dag->getStore(entry, dl, node0x50e1db0, node0x50e1fb0, mpi, 1);
roots.reserve(1);
roots.push_back(node0x50e2040);
dag->setRoot(node0x50e2040);
      }
      break;
    case Codasip::i_utype_ops__opc_auipc__xpr_general__uimm20__:
      {
SDValue node0x50e3560 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x50e3850 = dag->getConstant(-4LL, dl, MVT::i32);
SDValue node0x50e3a70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x50e3b10 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x50e3560, node0x50e3a70);
SDValue node0x50e3ba0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x50e3b10, node0x50e3850);
SDValue node0x50e2970 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x50e3ba0, SDValue());
roots.reserve(1);
roots.push_back(node0x50e2970);
dag->setRoot(node0x50e2970);
      }
      break;
    case Codasip::i_utype_ops__opc_lui__xpr_general__uimm20__:
      {
SDValue node0x50e53d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x50e4fa0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x50e53d0, SDValue());
roots.reserve(1);
roots.push_back(node0x50e4fa0);
dag->setRoot(node0x50e4fa0);
      }
      break;
    case Codasip::i_itype_alu__opc_slti__xpr_general__x_0__simm12__immSpecClone__imm_1__0__:
      {
SDValue node0x50eaea0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x50e54b0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x50eaea0, SDValue());
roots.reserve(1);
roots.push_back(node0x50e54b0);
dag->setRoot(node0x50e54b0);
      }
      break;
    case Codasip::i_itype_alu__opc_slti__xpr_general__x_0__simm12__immSpecClone__imm_1__1__:
      {
SDValue node0x50ea7a0 = dag->getConstant(1LL, dl, MVT::i32);
SDValue node0x50e66b0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x50ea7a0, SDValue());
roots.reserve(1);
roots.push_back(node0x50e66b0);
dag->setRoot(node0x50e66b0);
      }
      break;
    case Codasip::i_itype_alu__opc_sltiu__xpr_general__x_0__simm12__immSpecClone__imm_1__0__:
      {
SDValue node0x50ebda0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x50eb430 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x50ebda0, SDValue());
roots.reserve(1);
roots.push_back(node0x50eb430);
dag->setRoot(node0x50eb430);
      }
      break;
    case Codasip::i_itype_alu__opc_sltiu__xpr_general__x_0__simm12__immSpecClone__imm_1__1__:
      {
SDValue node0x50eb600 = dag->getConstant(1LL, dl, MVT::i32);
SDValue node0x50e6af0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x50eb600, SDValue());
roots.reserve(1);
roots.push_back(node0x50e6af0);
dag->setRoot(node0x50e6af0);
      }
      break;
    case Codasip::i_itype_loads__opc_lb__x_0__simm12__xpr_general__immspec_1_:
      {
roots.reserve(0);
dag->setRoot(entry);
      }
      break;
    case Codasip::i_itype_loads__opc_lb__xpr_general__simm12__x_0__AEXT_CLONE_:
      {
SDValue node0x4f471d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4f4a800 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x4f471d0, mpi, MVT::i8, 1);
SDValue node0x510fd10 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4f4a800, SDValue());
roots.reserve(1);
roots.push_back(node0x510fd10);
dag->setRoot(node0x510fd10);
      }
      break;
    case Codasip::i_itype_loads__opc_lb__xpr_general__simm12__xpr_general__AEXT_CLONE_:
      {
SDValue node0x4f4bed0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4f4b9b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x4f4bfa0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x4f4bed0, node0x4f4b9b0);
SDValue node0x5105670 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x4f4bfa0, mpi, MVT::i8, 1);
SDValue node0x5110910 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5105670, SDValue());
roots.reserve(1);
roots.push_back(node0x5110910);
dag->setRoot(node0x5110910);
      }
      break;
    case Codasip::i_itype_loads__opc_lb__xpr_general__simm12__xpr_general__immspec_1_:
      {
SDValue node0x50fa470 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x50f0170 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x50fa470, mpi, MVT::i8, 1);
SDValue node0x50f9760 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x50f0170, SDValue());
roots.reserve(1);
roots.push_back(node0x50f9760);
dag->setRoot(node0x50f9760);
      }
      break;
    case Codasip::i_itype_loads__opc_lb__xpr_general__simm12__xpr_general__immspec_1_AEXT_CLONE_:
      {
SDValue node0x50fa520 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x50efbb0 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x50fa520, mpi, MVT::i8, 1);
SDValue node0x50eec90 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x50efbb0, SDValue());
roots.reserve(1);
roots.push_back(node0x50eec90);
dag->setRoot(node0x50eec90);
      }
      break;
    case Codasip::i_itype_loads__opc_lbu__xpr_general__simm12__x_0__AEXT_CLONE_:
      {
SDValue node0x4f4cc50 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4f50320 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x4f4cc50, mpi, MVT::i8, 1);
SDValue node0x51114a0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4f50320, SDValue());
roots.reserve(1);
roots.push_back(node0x51114a0);
dag->setRoot(node0x51114a0);
      }
      break;
    case Codasip::i_itype_loads__opc_lbu__xpr_general__simm12__xpr_general__AEXT_CLONE_:
      {
SDValue node0x4f51a90 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4f51570 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x4f51b60 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x4f51a90, node0x4f51570);
SDValue node0x5112070 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x4f51b60, mpi, MVT::i8, 1);
SDValue node0x5112100 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5112070, SDValue());
roots.reserve(1);
roots.push_back(node0x5112100);
dag->setRoot(node0x5112100);
      }
      break;
    case Codasip::i_itype_loads__opc_lbu__xpr_general__simm12__xpr_general__immspec_1_:
      {
SDValue node0x50faf50 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x50ef060 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x50faf50, mpi, MVT::i8, 1);
SDValue node0x50f9800 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x50ef060, SDValue());
roots.reserve(1);
roots.push_back(node0x50f9800);
dag->setRoot(node0x50f9800);
      }
      break;
    case Codasip::i_itype_loads__opc_lbu__xpr_general__simm12__xpr_general__immspec_1_AEXT_CLONE_:
      {
SDValue node0x50fb000 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x50eea30 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x50fb000, mpi, MVT::i8, 1);
SDValue node0x4e2e870 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x50eea30, SDValue());
roots.reserve(1);
roots.push_back(node0x4e2e870);
dag->setRoot(node0x4e2e870);
      }
      break;
    case Codasip::i_itype_loads__opc_lh__x_0__simm12__xpr_general__immspec_1_:
      {
roots.reserve(0);
dag->setRoot(entry);
      }
      break;
    case Codasip::i_itype_loads__opc_lh__xpr_general__simm12__x_0__AEXT_CLONE_:
      {
SDValue node0x4f527c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4f55dc0 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x4f527c0, mpi, MVT::i16, 1);
SDValue node0x5112d60 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4f55dc0, SDValue());
roots.reserve(1);
roots.push_back(node0x5112d60);
dag->setRoot(node0x5112d60);
      }
      break;
    case Codasip::i_itype_loads__opc_lh__xpr_general__simm12__xpr_general__AEXT_CLONE_:
      {
SDValue node0x4f57490 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4f56f70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x4f57560 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x4f57490, node0x4f56f70);
SDValue node0x5113930 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x4f57560, mpi, MVT::i16, 1);
SDValue node0x51139c0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5113930, SDValue());
roots.reserve(1);
roots.push_back(node0x51139c0);
dag->setRoot(node0x51139c0);
      }
      break;
    case Codasip::i_itype_loads__opc_lh__xpr_general__simm12__xpr_general__immspec_1_:
      {
SDValue node0x50fc210 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x50fba60 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x50fc210, mpi, MVT::i16, 1);
SDValue node0x50fab40 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x50fba60, SDValue());
roots.reserve(1);
roots.push_back(node0x50fab40);
dag->setRoot(node0x50fab40);
      }
      break;
    case Codasip::i_itype_loads__opc_lh__xpr_general__simm12__xpr_general__immspec_1_AEXT_CLONE_:
      {
SDValue node0x50fc2c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x50ee470 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x50fc2c0, mpi, MVT::i16, 1);
SDValue node0x50f6f40 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x50ee470, SDValue());
roots.reserve(1);
roots.push_back(node0x50f6f40);
dag->setRoot(node0x50f6f40);
      }
      break;
    case Codasip::i_itype_loads__opc_lhu__xpr_general__simm12__x_0__AEXT_CLONE_:
      {
SDValue node0x4f58210 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4f5b8e0 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x4f58210, mpi, MVT::i16, 1);
SDValue node0x51145f0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4f5b8e0, SDValue());
roots.reserve(1);
roots.push_back(node0x51145f0);
dag->setRoot(node0x51145f0);
      }
      break;
    case Codasip::i_itype_loads__opc_lhu__xpr_general__simm12__xpr_general__AEXT_CLONE_:
      {
SDValue node0x4f5d050 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4f5cb30 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x4f5d120 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x4f5d050, node0x4f5cb30);
SDValue node0x51151c0 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x4f5d120, mpi, MVT::i16, 1);
SDValue node0x5115250 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x51151c0, SDValue());
roots.reserve(1);
roots.push_back(node0x5115250);
dag->setRoot(node0x5115250);
      }
      break;
    case Codasip::i_itype_loads__opc_lhu__xpr_general__simm12__xpr_general__immspec_1_:
      {
SDValue node0x50fccf0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x50f06f0 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x50fccf0, mpi, MVT::i16, 1);
SDValue node0x50fb5d0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x50f06f0, SDValue());
roots.reserve(1);
roots.push_back(node0x50fb5d0);
dag->setRoot(node0x50fb5d0);
      }
      break;
    case Codasip::i_itype_loads__opc_lhu__xpr_general__simm12__xpr_general__immspec_1_AEXT_CLONE_:
      {
SDValue node0x50f30e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x50f26e0 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x50f30e0, mpi, MVT::i16, 1);
SDValue node0x50f57c0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x50f26e0, SDValue());
roots.reserve(1);
roots.push_back(node0x50f57c0);
dag->setRoot(node0x50f57c0);
      }
      break;
    case Codasip::i_itype_loads__opc_lw__x_0__simm12__xpr_general__immspec_1_:
      {
roots.reserve(0);
dag->setRoot(entry);
      }
      break;
    case Codasip::i_itype_loads__opc_lw__xpr_general__simm12__xpr_general__immspec_1_:
      {
SDValue node0x50fdfb0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x50fe060 = dag->getLoad(MVT::i32, dl, entry, node0x50fdfb0, mpi, 1);
SDValue node0x50fc8e0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x50fe060, SDValue());
roots.reserve(1);
roots.push_back(node0x50fc8e0);
dag->setRoot(node0x50fc8e0);
      }
      break;
    case Codasip::i_rtype_alu__opc_slt__xpr_general__xpr_general__xpr_general__swappedCmpClone0__:
      {
SDValue node0x50ec560 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x50ec6b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x50ec760 = dag->getSetCC(dl, MVT::i32, node0x50ec560, node0x50ec6b0, ISD::SETGT);
SDValue node0x50ebbd0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x50ec760, SDValue());
roots.reserve(1);
roots.push_back(node0x50ebbd0);
dag->setRoot(node0x50ebbd0);
      }
      break;
    case Codasip::i_rtype_alu__opc_sltu__xpr_general__xpr_general__xpr_general__swappedCmpClone0__:
      {
SDValue node0x50ed130 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x50ed280 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x50ed330 = dag->getSetCC(dl, MVT::i32, node0x50ed130, node0x50ed280, ISD::SETUGT);
SDValue node0x50ecd50 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x50ed330, SDValue());
roots.reserve(1);
roots.push_back(node0x50ecd50);
dag->setRoot(node0x50ecd50);
      }
      break;
    case Codasip::i_rtype_alu__opc_sra__xpr_general__xpr_general__xpr_general__SHIFT_MASK_CLONE_:
      {
SDValue node0x4f5dd80 = dag->getConstant(31LL, dl, MVT::i32);
SDValue node0x4e28fe0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4f5dfa0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x4fc0890 = dag->getNode(ISD::AND, dl, MVT::i32, node0x4f5dfa0, node0x4f5dd80);
SDValue node0x4e28f50 = dag->getNode(ISD::SRA, dl, MVT::i32, node0x4e28fe0, node0x4fc0890);
SDValue node0x51154d0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4e28f50, SDValue());
roots.reserve(1);
roots.push_back(node0x51154d0);
dag->setRoot(node0x51154d0);
      }
      break;
    case Codasip::i_rtype_alu__opc_srl__xpr_general__xpr_general__xpr_general__SHIFT_MASK_CLONE_:
      {
SDValue node0x4f78210 = dag->getConstant(31LL, dl, MVT::i32);
SDValue node0x4e2c580 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4e2c610 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x4f78590 = dag->getNode(ISD::AND, dl, MVT::i32, node0x4e2c610, node0x4f78210);
SDValue node0x4ee3bd0 = dag->getNode(ISD::SRL, dl, MVT::i32, node0x4e2c580, node0x4f78590);
SDValue node0x4e2c6a0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4ee3bd0, SDValue());
roots.reserve(1);
roots.push_back(node0x4e2c6a0);
dag->setRoot(node0x4e2c6a0);
      }
      break;
    case Codasip::i_stype_store__opc_sb__x_0__simm12__xpr_general__immspec_1_:
      {
SDValue node0x50ff0e0 = dag->getConstant(0LL, dl, MVT::i8);
SDValue node0x50ff2e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x50ff080 = dag->getStore(entry, dl, node0x50ff0e0, node0x50ff2e0, mpi, 1);
roots.reserve(1);
roots.push_back(node0x50ff080);
dag->setRoot(node0x50ff080);
      }
      break;
    case Codasip::i_stype_store__opc_sb__xpr_general__simm12__xpr_general__immspec_1_:
      {
SDValue node0x50ffa60 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x50ffb10 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x50f23b0 = dag->getTruncStore(entry, dl, node0x50ffa60, node0x50ffb10, mpi, MVT::i8, 1);
roots.reserve(1);
roots.push_back(node0x50f23b0);
dag->setRoot(node0x50f23b0);
      }
      break;
    case Codasip::i_stype_store__opc_sh__x_0__simm12__xpr_general__immspec_1_:
      {
SDValue node0x5100370 = dag->getConstant(0LL, dl, MVT::i16);
SDValue node0x5100590 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5100310 = dag->getStore(entry, dl, node0x5100370, node0x5100590, mpi, 1);
roots.reserve(1);
roots.push_back(node0x5100310);
dag->setRoot(node0x5100310);
      }
      break;
    case Codasip::i_stype_store__opc_sh__xpr_general__simm12__xpr_general__immspec_1_:
      {
SDValue node0x5100d30 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5100de0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x50f4f20 = dag->getTruncStore(entry, dl, node0x5100d30, node0x5100de0, mpi, MVT::i16, 1);
roots.reserve(1);
roots.push_back(node0x50f4f20);
dag->setRoot(node0x50f4f20);
      }
      break;
    case Codasip::i_stype_store__opc_sw__x_0__simm12__xpr_general__immspec_1_:
      {
SDValue node0x51015f0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x5101770 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5101590 = dag->getStore(entry, dl, node0x51015f0, node0x5101770, mpi, 1);
roots.reserve(1);
roots.push_back(node0x5101590);
dag->setRoot(node0x5101590);
      }
      break;
    case Codasip::i_stype_store__opc_sw__xpr_general__simm12__xpr_general__immspec_1_:
      {
SDValue node0x5101f10 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5101fc0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5101d50 = dag->getStore(entry, dl, node0x5101f10, node0x5101fc0, mpi, 1);
roots.reserve(1);
roots.push_back(node0x5101d50);
dag->setRoot(node0x5101d50);
      }
      break;
    case Codasip::i_utype_ops__opc_auipc__xpr_general__uimm20__immspec_1_:
      {
SDValue node0x5101b70 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x51027b0 = dag->getConstant(-4LL, dl, MVT::i32);
SDValue node0x5101be0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x5101b70, node0x51027b0);
SDValue node0x5101370 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5101be0, SDValue());
roots.reserve(1);
roots.push_back(node0x5101370);
dag->setRoot(node0x5101370);
      }
      break;
    case Codasip::e_movi32__:
case Codasip::e_movi32__GA:
case Codasip::e_movi32__ES:
case Codasip::e_movi32__MC:
case Codasip::e_movi32__BA:
case Codasip::e_movi32__JT:
case Codasip::e_movi32__CP:
      {
SDValue node0x50e5d80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x50e5500 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x50e5d80, SDValue());
roots.reserve(1);
roots.push_back(node0x50e5500);
dag->setRoot(node0x50e5500);
      }
      break;
    case Codasip::i_ret_alias__TAILCALL_CLONE_:
      {
dag->setRoot(entry);
      }
      break;
    case Codasip::i_itype_jlreg__opc_jalr__x_0__simm12__xpr_general__immspec_1_TAILCALL_CLONE_:
      {
dag->setRoot(entry);
      }
      break;
    case Codasip::i_jal_abs_calias__opc_jal__x_0__relative_addr20__TAILCALL_CLONE_:
case Codasip::i_jal_abs_calias__opc_jal__x_0__relative_addr20__TAILCALL_CLONE_ES:
case Codasip::i_jal_abs_calias__opc_jal__x_0__relative_addr20__TAILCALL_CLONE_MC:
case Codasip::i_jal_abs_calias__opc_jal__x_0__relative_addr20__TAILCALL_CLONE_BA:
      {
dag->setRoot(entry);
      }
      break;
    case Codasip::i_jtype_jlink__opc_jal__x_0__relative_addr20__TAILCALL_CLONE_:
case Codasip::i_jtype_jlink__opc_jal__x_0__relative_addr20__TAILCALL_CLONE_ES:
case Codasip::i_jtype_jlink__opc_jal__x_0__relative_addr20__TAILCALL_CLONE_MC:
case Codasip::i_jtype_jlink__opc_jal__x_0__relative_addr20__TAILCALL_CLONE_BA:
      {
dag->setRoot(entry);
      }
      break;
    case Codasip::i_btype_branches__opc_beq__x_0__x_0__relative_addr12__TAILCALL_CLONE_:
case Codasip::i_btype_branches__opc_beq__x_0__x_0__relative_addr12__TAILCALL_CLONE_ES:
case Codasip::i_btype_branches__opc_beq__x_0__x_0__relative_addr12__TAILCALL_CLONE_MC:
case Codasip::i_btype_branches__opc_beq__x_0__x_0__relative_addr12__TAILCALL_CLONE_BA:
      {
dag->setRoot(entry);
      }
      break;
    case Codasip::i_btype_branches__opc_bge__x_0__x_0__relative_addr12__TAILCALL_CLONE_:
case Codasip::i_btype_branches__opc_bge__x_0__x_0__relative_addr12__TAILCALL_CLONE_ES:
case Codasip::i_btype_branches__opc_bge__x_0__x_0__relative_addr12__TAILCALL_CLONE_MC:
case Codasip::i_btype_branches__opc_bge__x_0__x_0__relative_addr12__TAILCALL_CLONE_BA:
      {
dag->setRoot(entry);
      }
      break;
    case Codasip::i_btype_branches__opc_bgeu__x_0__x_0__relative_addr12__TAILCALL_CLONE_:
case Codasip::i_btype_branches__opc_bgeu__x_0__x_0__relative_addr12__TAILCALL_CLONE_ES:
case Codasip::i_btype_branches__opc_bgeu__x_0__x_0__relative_addr12__TAILCALL_CLONE_MC:
case Codasip::i_btype_branches__opc_bgeu__x_0__x_0__relative_addr12__TAILCALL_CLONE_BA:
      {
dag->setRoot(entry);
      }
      break;
    case Codasip::i_itype_jlreg__opc_jalr__x_0__simm12__x_0__TAILCALL_CLONE_:
case Codasip::i_itype_jlreg__opc_jalr__x_0__simm12__x_0__TAILCALL_CLONE_ES:
case Codasip::i_itype_jlreg__opc_jalr__x_0__simm12__x_0__TAILCALL_CLONE_MC:
case Codasip::i_itype_jlreg__opc_jalr__x_0__simm12__x_0__TAILCALL_CLONE_BA:
      {
dag->setRoot(entry);
      }
      break;
    case Codasip::i_stype_store__opc_sb__x_0__simm12__x_0__i32_TRUNC_CLONE_:
      {
SDValue node0x4e49ba0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x4e49c20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x4e4a560 = dag->getTruncStore(entry, dl, node0x4e49ba0, node0x4e49c20, mpi, MVT::i8, 1);
roots.reserve(1);
roots.push_back(node0x4e4a560);
dag->setRoot(node0x4e4a560);
      }
      break;
    case Codasip::i_stype_store__opc_sb__x_0__simm12__xpr_general__i32_TRUNC_CLONE_:
      {
SDValue node0x4e49aa0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x4e49980 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x4e49b20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4e45ff0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x4e49980, node0x4e49b20);
SDValue node0x4e4af00 = dag->getTruncStore(entry, dl, node0x4e49aa0, node0x4e45ff0, mpi, MVT::i8, 1);
roots.reserve(1);
roots.push_back(node0x4e4af00);
dag->setRoot(node0x4e4af00);
      }
      break;
    case Codasip::i_stype_store__opc_sh__x_0__simm12__x_0__i32_TRUNC_CLONE_:
      {
SDValue node0x4e49ca0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x4e4b540 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x4e4b890 = dag->getTruncStore(entry, dl, node0x4e49ca0, node0x4e4b540, mpi, MVT::i16, 1);
roots.reserve(1);
roots.push_back(node0x4e4b890);
dag->setRoot(node0x4e4b890);
      }
      break;
    case Codasip::i_stype_store__opc_sh__x_0__simm12__xpr_general__i32_TRUNC_CLONE_:
      {
SDValue node0x4e4bed0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x4e49330 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x4e4bf50 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4e46fb0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x4e49330, node0x4e4bf50);
SDValue node0x4e4c330 = dag->getTruncStore(entry, dl, node0x4e4bed0, node0x4e46fb0, mpi, MVT::i16, 1);
roots.reserve(1);
roots.push_back(node0x4e4c330);
dag->setRoot(node0x4e4c330);
      }
      break;
    case Codasip::i_stype_store__opc_sb__x_0__simm12__xpr_general__immspec_1_i32_TRUNC_CLONE_:
      {
SDValue node0x4e4c6c0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x4e498f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x4e4c8b0 = dag->getTruncStore(entry, dl, node0x4e4c6c0, node0x4e498f0, mpi, MVT::i8, 1);
roots.reserve(1);
roots.push_back(node0x4e4c8b0);
dag->setRoot(node0x4e4c8b0);
      }
      break;
    case Codasip::i_stype_store__opc_sh__x_0__simm12__xpr_general__immspec_1_i32_TRUNC_CLONE_:
      {
SDValue node0x4e4cca0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x4e49a10 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x4e4cec0 = dag->getTruncStore(entry, dl, node0x4e4cca0, node0x4e49a10, mpi, MVT::i16, 1);
roots.reserve(1);
roots.push_back(node0x4e4cec0);
dag->setRoot(node0x4e4cec0);
      }
      break;
    case Codasip::i_stype_store__opc_sw__xpr_general__simm12__xpr_general__0_REG_EMUL_:
      {
SDValue node0x4e4dcb0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x4e4d640 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4e4e9f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x4e53b40 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x4e4d640, node0x4e4e9f0);
SDValue node0x4e4cf20 = dag->getStore(entry, dl, node0x4e4dcb0, node0x4e53b40, mpi, 1);
roots.reserve(1);
roots.push_back(node0x4e4cf20);
dag->setRoot(node0x4e4cf20);
      }
      break;
    case Codasip::i_stype_store__opc_sw__xpr_general__simm12__xpr_general__1_BIGIMM_EMUL_:
      {
SDValue node0x4e4eab0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x4e53d70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4e52ad0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x4e53e00 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x4e53d70, node0x4e52ad0);
SDValue node0x4e52c60 = dag->getStore(entry, dl, node0x4e4eab0, node0x4e53e00, mpi, 1);
roots.reserve(1);
roots.push_back(node0x4e52c60);
dag->setRoot(node0x4e52c60);
      }
      break;
    case Codasip::i_itype_loads__opc_lw__xpr_general__simm12__xpr_general__2_REG_EMUL_:
      {
SDValue node0x4e4f390 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4e53910 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x4e50c30 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x4e4f390, node0x4e53910);
SDValue node0x4e4f300 = dag->getLoad(MVT::i32, dl, entry, node0x4e50c30, mpi, 1);
SDValue node0x4e508b0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4e4f300, SDValue());
roots.reserve(1);
roots.push_back(node0x4e508b0);
dag->setRoot(node0x4e508b0);
      }
      break;
    case Codasip::i_itype_loads__opc_lw__xpr_general__simm12__xpr_general__3_BIGIMM_EMUL_:
      {
SDValue node0x4e53e70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4e548c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x4e52610 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x4e53e70, node0x4e548c0);
SDValue node0x4e53fe0 = dag->getLoad(MVT::i32, dl, entry, node0x4e52610, mpi, 1);
SDValue node0x4e549c0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4e53fe0, SDValue());
roots.reserve(1);
roots.push_back(node0x4e549c0);
dag->setRoot(node0x4e549c0);
      }
      break;
    case Codasip::i_stype_store__opc_sw__xpr_general__simm12__xpr_general__4_BIGIMM_EMUL_:
      {
SDValue node0x4e532b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x4e55af0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4e55fb0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x4e526f0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x4e55af0, node0x4e55fb0);
SDValue node0x4e4d6d0 = dag->getStore(entry, dl, node0x4e532b0, node0x4e526f0, mpi, 1);
roots.reserve(1);
roots.push_back(node0x4e4d6d0);
dag->setRoot(node0x4e4d6d0);
      }
      break;
    case Codasip::i_itype_loads__opc_lw__xpr_general__simm12__xpr_general__5_BIGIMM_EMUL_:
      {
SDValue node0x4e52760 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4e56dd0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x4e510f0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x4e52760, node0x4e56dd0);
SDValue node0x4e567f0 = dag->getLoad(MVT::i32, dl, entry, node0x4e510f0, mpi, 1);
SDValue node0x4e56eb0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4e567f0, SDValue());
roots.reserve(1);
roots.push_back(node0x4e56eb0);
dag->setRoot(node0x4e56eb0);
      }
      break;
    case Codasip::i_itype_alu__opc_addi__xpr_general__xpr_general__simm12__6_BIGIMM_EMUL_:
      {
SDValue node0x4e51b20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4e57c80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x4e53850 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x4e51b20, node0x4e57c80);
SDValue node0x4e57d40 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4e53850, SDValue());
roots.reserve(1);
roots.push_back(node0x4e57d40);
dag->setRoot(node0x4e57d40);
      }
      break;
    case Codasip::i_itype_alu__opc_addi__xpr_general__xpr_general__simm12__7_BIGIMM_EMUL_:
      {
SDValue node0x4e55b80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4e58a40 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x4e53440 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x4e55b80, node0x4e58a40);
SDValue node0x4e58b00 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4e53440, SDValue());
roots.reserve(1);
roots.push_back(node0x4e58b00);
dag->setRoot(node0x4e58b00);
      }
      break;
    case Codasip::i_itype_alu__opc_addi__xpr_general__xpr_general__simm12__8_BIGIMM_EMUL_:
      {
SDValue node0x4e58360 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4e59800 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x4e531d0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x4e58360, node0x4e59800);
SDValue node0x4e598c0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4e531d0, SDValue());
roots.reserve(1);
roots.push_back(node0x4e598c0);
dag->setRoot(node0x4e598c0);
      }
      break;
    case Codasip::i_halt__opc_halt__:
      {
roots.reserve(0);
dag->setRoot(entry);
      }
      break;
    case Codasip::i_call_reg_alias__simm12__xpr_general__:
      {
SDValue node0x4e22500 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x4e228d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5137650 = dag->getCopyToReg(entry, dl, dag->getRegister(Codasip::rf_xpr_1, MVT::i32), node0x4e22500, SDValue());
SDValue node0x4e22b80 = dag->getNode(ISD::BRIND, dl, MVT::Other, node0x5137650, node0x4e228d0);
roots.reserve(2);
roots.push_back(node0x5137650);
roots.push_back(node0x4e22b80);
dag->setRoot(node0x4e22b80);
      }
      break;
    case Codasip::i_itype_jlreg__opc_jalr__x_0__simm12__xpr_general__:
      {
SDValue node0x4f431a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x4f43440 = dag->getNode(ISD::BRIND, dl, MVT::Other, entry, node0x4f431a0);
roots.reserve(1);
roots.push_back(node0x4f43440);
dag->setRoot(node0x4f43440);
      }
      break;
    case Codasip::i_itype_jlreg__opc_jalr__xpr_general__simm12__xpr_general__:
      {
SDValue node0x4f45e70 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x4f45df0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4f45e70, SDValue());
SDValue node0x4f46370 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4f46610 = dag->getNode(ISD::BRIND, dl, MVT::Other, node0x4f45df0, node0x4f46370);
roots.reserve(2);
roots.push_back(node0x4f45df0);
roots.push_back(node0x4f46610);
dag->setRoot(node0x4f46610);
      }
      break;
    case Codasip::i_utype_ops__opc_lui__xpr_general__uimm20__SYNTAX_CLONE_e_movi32__1_:
      {
SDValue node0x4f85850 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4e2cf50 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4f85850, SDValue());
roots.reserve(1);
roots.push_back(node0x4e2cf50);
dag->setRoot(node0x4e2cf50);
      }
      break;
    case Codasip::i_utype_ops__opc_lui__xpr_general__uimm20__SYNTAX_CLONE_e_movi32__2_:
      {
SDValue node0x4f5dd00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4e2d6f0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4f5dd00, SDValue());
roots.reserve(1);
roots.push_back(node0x4e2d6f0);
dag->setRoot(node0x4e2d6f0);
      }
      break;
    case Codasip::i_utype_ops__opc_lui__xpr_general__uimm20__SYNTAX_CLONE_e_movi32__5_:
      {
SDValue node0x512d030 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4e2dea0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x512d030, SDValue());
roots.reserve(1);
roots.push_back(node0x4e2dea0);
dag->setRoot(node0x4e2dea0);
      }
      break;
    case Codasip::i_utype_ops__opc_lui__xpr_general__uimm20__SYNTAX_CLONE_e_movi32__6_:
      {
SDValue node0x4ee37b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4e2e650 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4ee37b0, SDValue());
roots.reserve(1);
roots.push_back(node0x4e2e650);
dag->setRoot(node0x4e2e650);
      }
      break;
    
    default:
      roots.reserve(1);
      roots.push_back(entry);
      dag->setRoot(entry);
  }
  dag->RemoveDeadNodes();
  return dag;
}

// turn optimizations back on
#ifdef _WIN32
  #pragma optimize("", on)
#endif
