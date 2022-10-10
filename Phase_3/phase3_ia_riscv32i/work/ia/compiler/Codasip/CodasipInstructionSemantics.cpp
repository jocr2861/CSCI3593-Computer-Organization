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
SDValue node0x5cf62b0 = dag->getRegister(Codasip::rf_xpr_1, MVT::i32);
SDValue node0x5cf6000 = dag->getNode(ISD::BRIND, dl, MVT::Other, entry, node0x5cf62b0);
roots.reserve(1);
roots.push_back(node0x5cf6000);
dag->setRoot(node0x5cf6000);
      } else       {
dag->setRoot(entry);
      }
      break;
    case Codasip::i_call_reg_alias__simm12__xpr_general__immspec_1_:
      if (lowlevel) {
SDValue node0x5e1fc50 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x5e1ff80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5e1e510 = dag->getCopyToReg(entry, dl, dag->getRegister(Codasip::rf_xpr_1, MVT::i32), node0x5e1fc50, SDValue());
SDValue node0x5e1fba0 = dag->getNode(ISD::BRIND, dl, MVT::Other, node0x5e1e510, node0x5e1ff80);
roots.reserve(2);
roots.push_back(node0x5e1e510);
roots.push_back(node0x5e1fba0);
dag->setRoot(node0x5e1fba0);
      } else       {
dag->setRoot(entry);
      }
      break;
    case Codasip::i_itype_jlreg__opc_jalr__x_0__simm12__xpr_general__immspec_1_:
      {
SDValue node0x5e209f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5e205a0 = dag->getNode(ISD::BRIND, dl, MVT::Other, entry, node0x5e209f0);
roots.reserve(1);
roots.push_back(node0x5e205a0);
dag->setRoot(node0x5e205a0);
      }
      break;
    case Codasip::i_itype_jlreg__opc_jalr__xpr_general__simm12__xpr_general__immspec_1_:
      {
SDValue node0x5e20ec0 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x5e1f0d0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5e20ec0, SDValue());
SDValue node0x5e21460 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5e21530 = dag->getNode(ISD::BRIND, dl, MVT::Other, node0x5e1f0d0, node0x5e21460);
roots.reserve(2);
roots.push_back(node0x5e1f0d0);
roots.push_back(node0x5e21530);
dag->setRoot(node0x5e21530);
      }
      break;
    case Codasip::i_call_alias__relative_addr20__:
case Codasip::i_call_alias__relative_addr20__ES:
case Codasip::i_call_alias__relative_addr20__MC:
case Codasip::i_call_alias__relative_addr20__BA:
      if (lowlevel) {
SDValue node0x5b48ed0 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x5b48490 = dag->getCopyToReg(entry, dl, dag->getRegister(Codasip::rf_xpr_1, MVT::i32), node0x5b48ed0, SDValue());
SDValue node0x5b492e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x5b49500 = dag->getNode(ISD::BR, dl, MVT::Other, node0x5b48490, node0x5b492e0);
roots.reserve(2);
roots.push_back(node0x5b48490);
roots.push_back(node0x5b49500);
dag->setRoot(node0x5b49500);
      } else       {
dag->setRoot(entry);
      }
      break;
    case Codasip::i_jal_abs_calias__opc_jal__x_0__relative_addr20__:
      {
SDValue node0x5ce6620 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x5ce62d0 = dag->getNode(ISD::BR, dl, MVT::Other, entry, node0x5ce6620);
roots.reserve(1);
roots.push_back(node0x5ce62d0);
dag->setRoot(node0x5ce62d0);
      }
      break;
    case Codasip::i_jal_abs_calias__opc_jal__xpr_general__relative_addr20__:
      {
SDValue node0x5ce6e10 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x5ce5420 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5ce6e10, SDValue());
SDValue node0x5ce7180 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x5ce6de0 = dag->getNode(ISD::BR, dl, MVT::Other, node0x5ce5420, node0x5ce7180);
roots.reserve(2);
roots.push_back(node0x5ce5420);
roots.push_back(node0x5ce6de0);
dag->setRoot(node0x5ce6de0);
      }
      break;
    case Codasip::i_jtype_jlink__opc_jal__x_0__relative_addr20__:
      {
SDValue node0x5ce8bd0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x5ce8d90 = dag->getNode(ISD::BR, dl, MVT::Other, entry, node0x5ce8bd0);
roots.reserve(1);
roots.push_back(node0x5ce8d90);
dag->setRoot(node0x5ce8d90);
      }
      break;
    case Codasip::i_jtype_jlink__opc_jal__xpr_general__relative_addr20__:
      {
SDValue node0x5ce99e0 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x5ce8eb0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5ce99e0, SDValue());
SDValue node0x5ce9df0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x5ce9fe0 = dag->getNode(ISD::BR, dl, MVT::Other, node0x5ce8eb0, node0x5ce9df0);
roots.reserve(2);
roots.push_back(node0x5ce8eb0);
roots.push_back(node0x5ce9fe0);
dag->setRoot(node0x5ce9fe0);
      }
      break;
    case Codasip::i_btype_branches__opc_beq__x_0__x_0__relative_addr12__:
      {
SDValue node0x5c4f460 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x5b222c0 = dag->getNode(ISD::BR, dl, MVT::Other, entry, node0x5c4f460);
roots.reserve(1);
roots.push_back(node0x5b222c0);
dag->setRoot(node0x5b222c0);
      }
      break;
    case Codasip::i_btype_branches__opc_beq__x_0__xpr_general__relative_addr12__:
      if (lowlevel) {
SDValue node0x5b3fc30 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x5c31f50 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5b3fdd0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x5b3fe70 = dag->getSetCC(dl, MVT::iAny, node0x5c31f50, node0x5b3fc30, ISD::SETEQ);
SDValue node0x5b3ffe0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x5b3fe70, node0x5b3fdd0);
roots.reserve(1);
roots.push_back(node0x5b3ffe0);
dag->setRoot(node0x5b3ffe0);
      } else       {
SDValue node0x5b3fc30 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x5c31f50 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5b3fdd0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x5b3fe70 = dag->getSetCC(dl, MVT::i32, node0x5c31f50, node0x5b3fc30, ISD::SETEQ);
SDValue node0x5b3ffe0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x5b3fe70, node0x5b3fdd0);
roots.reserve(1);
roots.push_back(node0x5b3ffe0);
dag->setRoot(node0x5b3ffe0);
      }
      break;
    case Codasip::i_btype_branches__opc_beq__xpr_general__x_0__relative_addr12__:
      if (lowlevel) {
SDValue node0x5bfda00 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x5afe5f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5bfdba0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x5bfdc40 = dag->getSetCC(dl, MVT::iAny, node0x5afe5f0, node0x5bfda00, ISD::SETEQ);
SDValue node0x5bfde90 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x5bfdc40, node0x5bfdba0);
roots.reserve(1);
roots.push_back(node0x5bfde90);
dag->setRoot(node0x5bfde90);
      } else       {
SDValue node0x5bfda00 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x5afe5f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5bfdba0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x5bfdc40 = dag->getSetCC(dl, MVT::i32, node0x5afe5f0, node0x5bfda00, ISD::SETEQ);
SDValue node0x5bfde90 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x5bfdc40, node0x5bfdba0);
roots.reserve(1);
roots.push_back(node0x5bfde90);
dag->setRoot(node0x5bfde90);
      }
      break;
    case Codasip::i_btype_branches__opc_beq__xpr_general__xpr_general__relative_addr12__:
      if (lowlevel) {
SDValue node0x5c33600 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5c1c440 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5bff5d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x5bff670 = dag->getSetCC(dl, MVT::iAny, node0x5c1c440, node0x5c33600, ISD::SETEQ);
SDValue node0x62808f0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x5bff670, node0x5bff5d0);
roots.reserve(1);
roots.push_back(node0x62808f0);
dag->setRoot(node0x62808f0);
      } else       {
SDValue node0x5c33600 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5c1c440 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5bff5d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x5bff670 = dag->getSetCC(dl, MVT::i32, node0x5c1c440, node0x5c33600, ISD::SETEQ);
SDValue node0x62808f0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x5bff670, node0x5bff5d0);
roots.reserve(1);
roots.push_back(node0x62808f0);
dag->setRoot(node0x62808f0);
      }
      break;
    case Codasip::i_btype_branches__opc_bge__x_0__x_0__relative_addr12__:
      {
SDValue node0x5e53e20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x5e54040 = dag->getNode(ISD::BR, dl, MVT::Other, entry, node0x5e53e20);
roots.reserve(1);
roots.push_back(node0x5e54040);
dag->setRoot(node0x5e54040);
      }
      break;
    case Codasip::i_btype_branches__opc_bge__x_0__xpr_general__relative_addr12__:
      if (lowlevel) {
SDValue node0x5e54ed0 = dag->getConstant(1LL, dl, MVT::i32);
SDValue node0x5c151d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5e55250 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x5e552f0 = dag->getSetCC(dl, MVT::iAny, node0x5c151d0, node0x5e54ed0, ISD::SETLT);
SDValue node0x5e55540 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x5e552f0, node0x5e55250);
roots.reserve(1);
roots.push_back(node0x5e55540);
dag->setRoot(node0x5e55540);
      } else       {
SDValue node0x5e54ed0 = dag->getConstant(1LL, dl, MVT::i32);
SDValue node0x5c151d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5e55250 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x5e552f0 = dag->getSetCC(dl, MVT::i32, node0x5c151d0, node0x5e54ed0, ISD::SETLT);
SDValue node0x5e55540 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x5e552f0, node0x5e55250);
roots.reserve(1);
roots.push_back(node0x5e55540);
dag->setRoot(node0x5e55540);
      }
      break;
    case Codasip::i_btype_branches__opc_bge__xpr_general__x_0__relative_addr12__:
      if (lowlevel) {
SDValue node0x5e67e90 = dag->getConstant(-1LL, dl, MVT::i32);
SDValue node0x5afcca0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5e67f90 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x5e68030 = dag->getSetCC(dl, MVT::iAny, node0x5afcca0, node0x5e67e90, ISD::SETGT);
SDValue node0x5e68280 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x5e68030, node0x5e67f90);
roots.reserve(1);
roots.push_back(node0x5e68280);
dag->setRoot(node0x5e68280);
      } else       {
SDValue node0x5e67e90 = dag->getConstant(-1LL, dl, MVT::i32);
SDValue node0x5afcca0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5e67f90 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x5e68030 = dag->getSetCC(dl, MVT::i32, node0x5afcca0, node0x5e67e90, ISD::SETGT);
SDValue node0x5e68280 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x5e68030, node0x5e67f90);
roots.reserve(1);
roots.push_back(node0x5e68280);
dag->setRoot(node0x5e68280);
      }
      break;
    case Codasip::i_btype_branches__opc_bge__xpr_general__xpr_general__relative_addr12__:
      if (lowlevel) {
SDValue node0x5b0aae0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5e699a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5e69a50 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x5e69af0 = dag->getSetCC(dl, MVT::iAny, node0x5e699a0, node0x5b0aae0, ISD::SETGE);
SDValue node0x627cfa0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x5e69af0, node0x5e69a50);
roots.reserve(1);
roots.push_back(node0x627cfa0);
dag->setRoot(node0x627cfa0);
      } else       {
SDValue node0x5b0aae0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5e699a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5e69a50 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x5e69af0 = dag->getSetCC(dl, MVT::i32, node0x5e699a0, node0x5b0aae0, ISD::SETGE);
SDValue node0x627cfa0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x5e69af0, node0x5e69a50);
roots.reserve(1);
roots.push_back(node0x627cfa0);
dag->setRoot(node0x627cfa0);
      }
      break;
    case Codasip::i_btype_branches__opc_bgeu__x_0__x_0__relative_addr12__:
      {
SDValue node0x5e5b160 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x5e5b380 = dag->getNode(ISD::BR, dl, MVT::Other, entry, node0x5e5b160);
roots.reserve(1);
roots.push_back(node0x5e5b380);
dag->setRoot(node0x5e5b380);
      }
      break;
    case Codasip::i_btype_branches__opc_bgeu__x_0__xpr_general__relative_addr12__:
      if (lowlevel) {
SDValue node0x5e5c440 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x5e5c5c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5e5c670 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x5e5c710 = dag->getSetCC(dl, MVT::iAny, node0x5e5c5c0, node0x5e5c440, ISD::SETEQ);
SDValue node0x5e5c960 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x5e5c710, node0x5e5c670);
roots.reserve(1);
roots.push_back(node0x5e5c960);
dag->setRoot(node0x5e5c960);
      } else       {
SDValue node0x5e5c440 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x5e5c5c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5e5c670 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x5e5c710 = dag->getSetCC(dl, MVT::i32, node0x5e5c5c0, node0x5e5c440, ISD::SETEQ);
SDValue node0x5e5c960 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x5e5c710, node0x5e5c670);
roots.reserve(1);
roots.push_back(node0x5e5c960);
dag->setRoot(node0x5e5c960);
      }
      break;
    case Codasip::i_btype_branches__opc_bgeu__xpr_general__xpr_general__relative_addr12__:
      if (lowlevel) {
SDValue node0x5e58710 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5e587c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5e58870 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x5e58910 = dag->getSetCC(dl, MVT::iAny, node0x5e587c0, node0x5e58710, ISD::SETUGE);
SDValue node0x5e58b60 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x5e58910, node0x5e58870);
roots.reserve(1);
roots.push_back(node0x5e58b60);
dag->setRoot(node0x5e58b60);
      } else       {
SDValue node0x5e58710 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5e587c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5e58870 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x5e58910 = dag->getSetCC(dl, MVT::i32, node0x5e587c0, node0x5e58710, ISD::SETUGE);
SDValue node0x5e58b60 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x5e58910, node0x5e58870);
roots.reserve(1);
roots.push_back(node0x5e58b60);
dag->setRoot(node0x5e58b60);
      }
      break;
    case Codasip::i_btype_branches__opc_blt__x_0__xpr_general__relative_addr12__:
      if (lowlevel) {
SDValue node0x5e6a730 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x5e6a8b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5e6a960 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x5e6aa00 = dag->getSetCC(dl, MVT::iAny, node0x5e6a8b0, node0x5e6a730, ISD::SETGT);
SDValue node0x5e6ac50 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x5e6aa00, node0x5e6a960);
roots.reserve(1);
roots.push_back(node0x5e6ac50);
dag->setRoot(node0x5e6ac50);
      } else       {
SDValue node0x5e6a730 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x5e6a8b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5e6a960 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x5e6aa00 = dag->getSetCC(dl, MVT::i32, node0x5e6a8b0, node0x5e6a730, ISD::SETGT);
SDValue node0x5e6ac50 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x5e6aa00, node0x5e6a960);
roots.reserve(1);
roots.push_back(node0x5e6ac50);
dag->setRoot(node0x5e6ac50);
      }
      break;
    case Codasip::i_btype_branches__opc_blt__xpr_general__x_0__relative_addr12__:
      if (lowlevel) {
SDValue node0x5e6d120 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x5e6d2a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5e6d350 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x5e6d3f0 = dag->getSetCC(dl, MVT::iAny, node0x5e6d2a0, node0x5e6d120, ISD::SETLT);
SDValue node0x5e6d640 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x5e6d3f0, node0x5e6d350);
roots.reserve(1);
roots.push_back(node0x5e6d640);
dag->setRoot(node0x5e6d640);
      } else       {
SDValue node0x5e6d120 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x5e6d2a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5e6d350 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x5e6d3f0 = dag->getSetCC(dl, MVT::i32, node0x5e6d2a0, node0x5e6d120, ISD::SETLT);
SDValue node0x5e6d640 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x5e6d3f0, node0x5e6d350);
roots.reserve(1);
roots.push_back(node0x5e6d640);
dag->setRoot(node0x5e6d640);
      }
      break;
    case Codasip::i_btype_branches__opc_blt__xpr_general__xpr_general__relative_addr12__:
      if (lowlevel) {
SDValue node0x5e6ed40 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5e6edf0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5e6eea0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x5e6ef40 = dag->getSetCC(dl, MVT::iAny, node0x5e6edf0, node0x5e6ed40, ISD::SETLT);
SDValue node0x5e6f190 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x5e6ef40, node0x5e6eea0);
roots.reserve(1);
roots.push_back(node0x5e6f190);
dag->setRoot(node0x5e6f190);
      } else       {
SDValue node0x5e6ed40 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5e6edf0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5e6eea0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x5e6ef40 = dag->getSetCC(dl, MVT::i32, node0x5e6edf0, node0x5e6ed40, ISD::SETLT);
SDValue node0x5e6f190 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x5e6ef40, node0x5e6eea0);
roots.reserve(1);
roots.push_back(node0x5e6f190);
dag->setRoot(node0x5e6f190);
      }
      break;
    case Codasip::i_btype_branches__opc_bltu__x_0__xpr_general__relative_addr12__:
      if (lowlevel) {
SDValue node0x5e70d00 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x5e70e80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5e70f30 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x5e70fd0 = dag->getSetCC(dl, MVT::iAny, node0x5e70e80, node0x5e70d00, ISD::SETNE);
SDValue node0x5e71220 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x5e70fd0, node0x5e70f30);
roots.reserve(1);
roots.push_back(node0x5e71220);
dag->setRoot(node0x5e71220);
      } else       {
SDValue node0x5e70d00 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x5e70e80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5e70f30 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x5e70fd0 = dag->getSetCC(dl, MVT::i32, node0x5e70e80, node0x5e70d00, ISD::SETNE);
SDValue node0x5e71220 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x5e70fd0, node0x5e70f30);
roots.reserve(1);
roots.push_back(node0x5e71220);
dag->setRoot(node0x5e71220);
      }
      break;
    case Codasip::i_btype_branches__opc_bltu__xpr_general__xpr_general__relative_addr12__:
      if (lowlevel) {
SDValue node0x5e61d00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5e61db0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5e61e60 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x5e61f00 = dag->getSetCC(dl, MVT::iAny, node0x5e61db0, node0x5e61d00, ISD::SETULT);
SDValue node0x5e62150 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x5e61f00, node0x5e61e60);
roots.reserve(1);
roots.push_back(node0x5e62150);
dag->setRoot(node0x5e62150);
      } else       {
SDValue node0x5e61d00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5e61db0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5e61e60 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x5e61f00 = dag->getSetCC(dl, MVT::i32, node0x5e61db0, node0x5e61d00, ISD::SETULT);
SDValue node0x5e62150 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x5e61f00, node0x5e61e60);
roots.reserve(1);
roots.push_back(node0x5e62150);
dag->setRoot(node0x5e62150);
      }
      break;
    case Codasip::i_btype_branches__opc_bne__x_0__xpr_general__relative_addr12__:
      if (lowlevel) {
SDValue node0x5e63d10 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x5e63e90 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5e63f40 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x5e63fe0 = dag->getSetCC(dl, MVT::iAny, node0x5e63e90, node0x5e63d10, ISD::SETNE);
SDValue node0x5e64230 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x5e63fe0, node0x5e63f40);
roots.reserve(1);
roots.push_back(node0x5e64230);
dag->setRoot(node0x5e64230);
      } else       {
SDValue node0x5e63d10 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x5e63e90 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5e63f40 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x5e63fe0 = dag->getSetCC(dl, MVT::i32, node0x5e63e90, node0x5e63d10, ISD::SETNE);
SDValue node0x5e64230 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x5e63fe0, node0x5e63f40);
roots.reserve(1);
roots.push_back(node0x5e64230);
dag->setRoot(node0x5e64230);
      }
      break;
    case Codasip::i_btype_branches__opc_bne__xpr_general__x_0__relative_addr12__:
      if (lowlevel) {
SDValue node0x5b46300 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x5b46480 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5b46530 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x5b465d0 = dag->getSetCC(dl, MVT::iAny, node0x5b46480, node0x5b46300, ISD::SETNE);
SDValue node0x5b46820 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x5b465d0, node0x5b46530);
roots.reserve(1);
roots.push_back(node0x5b46820);
dag->setRoot(node0x5b46820);
      } else       {
SDValue node0x5b46300 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x5b46480 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5b46530 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x5b465d0 = dag->getSetCC(dl, MVT::i32, node0x5b46480, node0x5b46300, ISD::SETNE);
SDValue node0x5b46820 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x5b465d0, node0x5b46530);
roots.reserve(1);
roots.push_back(node0x5b46820);
dag->setRoot(node0x5b46820);
      }
      break;
    case Codasip::i_btype_branches__opc_bne__xpr_general__xpr_general__relative_addr12__:
      if (lowlevel) {
SDValue node0x5b47f20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5b47fd0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5b48080 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x5b48120 = dag->getSetCC(dl, MVT::iAny, node0x5b47fd0, node0x5b47f20, ISD::SETNE);
SDValue node0x5b48370 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x5b48120, node0x5b48080);
roots.reserve(1);
roots.push_back(node0x5b48370);
dag->setRoot(node0x5b48370);
      } else       {
SDValue node0x5b47f20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5b47fd0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5b48080 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x5b48120 = dag->getSetCC(dl, MVT::i32, node0x5b47fd0, node0x5b47f20, ISD::SETNE);
SDValue node0x5b48370 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x5b48120, node0x5b48080);
roots.reserve(1);
roots.push_back(node0x5b48370);
dag->setRoot(node0x5b48370);
      }
      break;
    case Codasip::i_btype_branches__opc_bge__xpr_general__xpr_general__relative_addr12__swappedCmpClone0__:
      if (lowlevel) {
SDValue node0x5e0f490 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x5e0e570 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5e0f630 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5e0f6e0 = dag->getSetCC(dl, MVT::iAny, node0x5e0e570, node0x5e0f630, ISD::SETLE);
SDValue node0x5e0f7b0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x5e0f6e0, node0x5e0f490);
roots.reserve(1);
roots.push_back(node0x5e0f7b0);
dag->setRoot(node0x5e0f7b0);
      } else       {
SDValue node0x5e0f490 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x5e0e570 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5e0f630 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5e0f6e0 = dag->getSetCC(dl, MVT::i32, node0x5e0e570, node0x5e0f630, ISD::SETLE);
SDValue node0x5e0f7b0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x5e0f6e0, node0x5e0f490);
roots.reserve(1);
roots.push_back(node0x5e0f7b0);
dag->setRoot(node0x5e0f7b0);
      }
      break;
    case Codasip::i_btype_branches__opc_bgeu__xpr_general__xpr_general__relative_addr12__swappedCmpClone0__:
      if (lowlevel) {
SDValue node0x5e10140 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x5e103d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5e10480 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5e10530 = dag->getSetCC(dl, MVT::iAny, node0x5e103d0, node0x5e10480, ISD::SETULE);
SDValue node0x5e10600 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x5e10530, node0x5e10140);
roots.reserve(1);
roots.push_back(node0x5e10600);
dag->setRoot(node0x5e10600);
      } else       {
SDValue node0x5e10140 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x5e103d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5e10480 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5e10530 = dag->getSetCC(dl, MVT::i32, node0x5e103d0, node0x5e10480, ISD::SETULE);
SDValue node0x5e10600 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x5e10530, node0x5e10140);
roots.reserve(1);
roots.push_back(node0x5e10600);
dag->setRoot(node0x5e10600);
      }
      break;
    case Codasip::i_btype_branches__opc_blt__xpr_general__xpr_general__relative_addr12__swappedCmpClone0__:
      if (lowlevel) {
SDValue node0x5e10f90 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x5e11220 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5e112d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5e11380 = dag->getSetCC(dl, MVT::iAny, node0x5e11220, node0x5e112d0, ISD::SETGT);
SDValue node0x5e11450 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x5e11380, node0x5e10f90);
roots.reserve(1);
roots.push_back(node0x5e11450);
dag->setRoot(node0x5e11450);
      } else       {
SDValue node0x5e10f90 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x5e11220 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5e112d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5e11380 = dag->getSetCC(dl, MVT::i32, node0x5e11220, node0x5e112d0, ISD::SETGT);
SDValue node0x5e11450 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x5e11380, node0x5e10f90);
roots.reserve(1);
roots.push_back(node0x5e11450);
dag->setRoot(node0x5e11450);
      }
      break;
    case Codasip::i_btype_branches__opc_bltu__xpr_general__xpr_general__relative_addr12__swappedCmpClone0__:
      if (lowlevel) {
SDValue node0x5e11e80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x5e12110 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5e121c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5e12270 = dag->getSetCC(dl, MVT::iAny, node0x5e12110, node0x5e121c0, ISD::SETUGT);
SDValue node0x5e12340 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x5e12270, node0x5e11e80);
roots.reserve(1);
roots.push_back(node0x5e12340);
dag->setRoot(node0x5e12340);
      } else       {
SDValue node0x5e11e80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x5e12110 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5e121c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5e12270 = dag->getSetCC(dl, MVT::i32, node0x5e12110, node0x5e121c0, ISD::SETUGT);
SDValue node0x5e12340 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x5e12270, node0x5e11e80);
roots.reserve(1);
roots.push_back(node0x5e12340);
dag->setRoot(node0x5e12340);
      }
      break;
    case Codasip::i_call_reg_alias__simm12__x_0__:
case Codasip::i_call_reg_alias__simm12__x_0__ES:
case Codasip::i_call_reg_alias__simm12__x_0__MC:
case Codasip::i_call_reg_alias__simm12__x_0__BA:
      if (lowlevel) {
SDValue node0x5b49b10 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x5b484e0 = dag->getCopyToReg(entry, dl, dag->getRegister(Codasip::rf_xpr_1, MVT::i32), node0x5b49b10, SDValue());
SDValue node0x5b49f20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x5b49a90 = dag->getNode(ISD::BR, dl, MVT::Other, node0x5b484e0, node0x5b49f20);
roots.reserve(2);
roots.push_back(node0x5b484e0);
roots.push_back(node0x5b49a90);
dag->setRoot(node0x5b49a90);
      } else       {
dag->setRoot(entry);
      }
      break;
    case Codasip::i_itype_jlreg__opc_jalr__x_0__simm12__x_0__:
      {
SDValue node0x5c6a300 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x5c6a030 = dag->getNode(ISD::BR, dl, MVT::Other, entry, node0x5c6a300);
roots.reserve(1);
roots.push_back(node0x5c6a030);
dag->setRoot(node0x5c6a030);
      }
      break;
    case Codasip::i_itype_jlreg__opc_jalr__xpr_general__simm12__x_0__:
      {
SDValue node0x5c6ca10 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x5c6c7c0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5c6ca10, SDValue());
SDValue node0x5c6cd80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x5c6c9e0 = dag->getNode(ISD::BR, dl, MVT::Other, node0x5c6c7c0, node0x5c6cd80);
roots.reserve(2);
roots.push_back(node0x5c6c7c0);
roots.push_back(node0x5c6c9e0);
dag->setRoot(node0x5c6c9e0);
      }
      break;
    case Codasip::i_itype_alu__opc_addi__xpr_general__x_0__simm12__:
      {
SDValue node0x5b4e850 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5b48530 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5b4e850, SDValue());
roots.reserve(1);
roots.push_back(node0x5b48530);
dag->setRoot(node0x5b48530);
      }
      break;
    case Codasip::i_itype_alu__opc_addi__xpr_general__xpr_general__simm12__:
      {
SDValue node0x5b4fa20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5b4fad0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5b4fb70 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x5b4fa20, node0x5b4fad0);
SDValue node0x5b4e980 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5b4fb70, SDValue());
roots.reserve(1);
roots.push_back(node0x5b4e980);
dag->setRoot(node0x5b4e980);
      }
      break;
    case Codasip::i_itype_alu__opc_andi__xpr_general__xpr_general__simm12__:
      {
SDValue node0x5c56070 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5c56120 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5c561c0 = dag->getNode(ISD::AND, dl, MVT::i32, node0x5c56070, node0x5c56120);
SDValue node0x5c54fd0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5c561c0, SDValue());
roots.reserve(1);
roots.push_back(node0x5c54fd0);
dag->setRoot(node0x5c54fd0);
      }
      break;
    case Codasip::i_itype_alu__opc_ori__xpr_general__x_0__simm12__:
      {
SDValue node0x5c598b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5c562e0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5c598b0, SDValue());
roots.reserve(1);
roots.push_back(node0x5c562e0);
dag->setRoot(node0x5c562e0);
      }
      break;
    case Codasip::i_itype_alu__opc_ori__xpr_general__xpr_general__simm12__:
      {
SDValue node0x5c5ac20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5c5acd0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5c5ad70 = dag->getNode(ISD::OR, dl, MVT::i32, node0x5c5ac20, node0x5c5acd0);
SDValue node0x5c599e0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5c5ad70, SDValue());
roots.reserve(1);
roots.push_back(node0x5c599e0);
dag->setRoot(node0x5c599e0);
      }
      break;
    case Codasip::i_itype_alu__opc_slti__xpr_general__x_0__simm12__:
      {
SDValue node0x5c5e380 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x5c5e460 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5c5e500 = dag->getSetCC(dl, MVT::i32, node0x5c5e460, node0x5c5e380, ISD::SETGT);
SDValue node0x5c5ae90 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5c5e500, SDValue());
roots.reserve(1);
roots.push_back(node0x5c5ae90);
dag->setRoot(node0x5c5ae90);
      }
      break;
    case Codasip::i_itype_alu__opc_slti__xpr_general__xpr_general__simm12__:
      {
SDValue node0x5c5f9a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5c5fa50 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5c5faf0 = dag->getSetCC(dl, MVT::i32, node0x5c5f9a0, node0x5c5fa50, ISD::SETLT);
SDValue node0x5c5e7d0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5c5faf0, SDValue());
roots.reserve(1);
roots.push_back(node0x5c5e7d0);
dag->setRoot(node0x5c5e7d0);
      }
      break;
    case Codasip::i_itype_alu__opc_sltiu__xpr_general__x_0__simm12__:
      {
SDValue node0x5c63260 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x5c63340 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5c633e0 = dag->getSetCC(dl, MVT::i32, node0x5c63340, node0x5c63260, ISD::SETNE);
SDValue node0x5c62e50 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5c633e0, SDValue());
roots.reserve(1);
roots.push_back(node0x5c62e50);
dag->setRoot(node0x5c62e50);
      }
      break;
    case Codasip::i_itype_alu__opc_sltiu__xpr_general__xpr_general__simm12__:
      {
SDValue node0x5c648d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5c64980 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5c64a20 = dag->getSetCC(dl, MVT::i32, node0x5c648d0, node0x5c64980, ISD::SETULT);
SDValue node0x5c635c0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5c64a20, SDValue());
roots.reserve(1);
roots.push_back(node0x5c635c0);
dag->setRoot(node0x5c635c0);
      }
      break;
    case Codasip::i_itype_alu__opc_xori__xpr_general__x_0__simm12__:
      {
SDValue node0x5c68180 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5c64510 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5c68180, SDValue());
roots.reserve(1);
roots.push_back(node0x5c64510);
dag->setRoot(node0x5c64510);
      }
      break;
    case Codasip::i_itype_alu__opc_xori__xpr_general__xpr_general__simm12__:
      {
SDValue node0x5c694f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5c695a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5c69640 = dag->getNode(ISD::XOR, dl, MVT::i32, node0x5c694f0, node0x5c695a0);
SDValue node0x5c682b0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5c69640, SDValue());
roots.reserve(1);
roots.push_back(node0x5c682b0);
dag->setRoot(node0x5c682b0);
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
SDValue node0x5c72610 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5c704b0 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x5c72610, mpi, MVT::i8, 1);
SDValue node0x5c70620 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5c704b0, SDValue());
roots.reserve(1);
roots.push_back(node0x5c70620);
dag->setRoot(node0x5c70620);
      }
      break;
    case Codasip::i_itype_loads__opc_lb__xpr_general__simm12__xpr_general__:
      {
SDValue node0x5c73ba0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5c73c50 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5c73cf0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x5c73ba0, node0x5c73c50);
SDValue node0x5c6f340 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x5c73cf0, mpi, MVT::i8, 1);
SDValue node0x5c72960 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5c6f340, SDValue());
roots.reserve(1);
roots.push_back(node0x5c72960);
dag->setRoot(node0x5c72960);
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
SDValue node0x5c78130 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5c75ee0 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x5c78130, mpi, MVT::i8, 1);
SDValue node0x5c77c40 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5c75ee0, SDValue());
roots.reserve(1);
roots.push_back(node0x5c77c40);
dag->setRoot(node0x5c77c40);
      }
      break;
    case Codasip::i_itype_loads__opc_lbu__xpr_general__simm12__xpr_general__:
      {
SDValue node0x5c79760 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5c79810 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5c798b0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x5c79760, node0x5c79810);
SDValue node0x5c74d20 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x5c798b0, mpi, MVT::i8, 1);
SDValue node0x5c77e10 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5c74d20, SDValue());
roots.reserve(1);
roots.push_back(node0x5c77e10);
dag->setRoot(node0x5c77e10);
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
SDValue node0x5c7dbd0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5c7ba70 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x5c7dbd0, mpi, MVT::i16, 1);
SDValue node0x5c7bbe0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5c7ba70, SDValue());
roots.reserve(1);
roots.push_back(node0x5c7bbe0);
dag->setRoot(node0x5c7bbe0);
      }
      break;
    case Codasip::i_itype_loads__opc_lh__xpr_general__simm12__xpr_general__:
      {
SDValue node0x5c7f160 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5c7f210 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5c7f2b0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x5c7f160, node0x5c7f210);
SDValue node0x5c7a8b0 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x5c7f2b0, mpi, MVT::i16, 1);
SDValue node0x5c7df20 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5c7a8b0, SDValue());
roots.reserve(1);
roots.push_back(node0x5c7df20);
dag->setRoot(node0x5c7df20);
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
SDValue node0x5c836f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5c814a0 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x5c836f0, mpi, MVT::i16, 1);
SDValue node0x5c83200 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5c814a0, SDValue());
roots.reserve(1);
roots.push_back(node0x5c83200);
dag->setRoot(node0x5c83200);
      }
      break;
    case Codasip::i_itype_loads__opc_lhu__xpr_general__simm12__xpr_general__:
      {
SDValue node0x5c84d20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5c84dd0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5c84e70 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x5c84d20, node0x5c84dd0);
SDValue node0x5c802e0 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x5c84e70, mpi, MVT::i16, 1);
SDValue node0x5c833d0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5c802e0, SDValue());
roots.reserve(1);
roots.push_back(node0x5c833d0);
dag->setRoot(node0x5c833d0);
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
SDValue node0x5ce3b10 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5ce3bb0 = dag->getLoad(MVT::i32, dl, entry, node0x5ce3b10, mpi, 1);
SDValue node0x5c87180 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5ce3bb0, SDValue());
roots.reserve(1);
roots.push_back(node0x5c87180);
dag->setRoot(node0x5c87180);
      }
      break;
    case Codasip::i_itype_loads__opc_lw__xpr_general__simm12__xpr_general__:
      {
SDValue node0x5ce4ff0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5ce50a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5ce5140 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x5ce4ff0, node0x5ce50a0);
SDValue node0x5ce51d0 = dag->getLoad(MVT::i32, dl, entry, node0x5ce5140, mpi, 1);
SDValue node0x5ce3d60 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5ce51d0, SDValue());
roots.reserve(1);
roots.push_back(node0x5ce3d60);
dag->setRoot(node0x5ce3d60);
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
SDValue node0x5cfe940 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x5cfe870 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5cfe940, SDValue());
roots.reserve(1);
roots.push_back(node0x5cfe870);
dag->setRoot(node0x5cfe870);
      }
      break;
    case Codasip::i_rtype_alu__opc_add__xpr_general__x_0__xpr_general__:
      {
SDValue node0x5cffb80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5cfeae0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5cffb80, SDValue());
roots.reserve(1);
roots.push_back(node0x5cfeae0);
dag->setRoot(node0x5cfeae0);
      }
      break;
    case Codasip::i_rtype_alu__opc_add__xpr_general__xpr_general__x_0__:
      {
SDValue node0x5d01db0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5d01ae0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5d01db0, SDValue());
roots.reserve(1);
roots.push_back(node0x5d01ae0);
dag->setRoot(node0x5d01ae0);
      }
      break;
    case Codasip::i_rtype_alu__opc_add__xpr_general__xpr_general__xpr_general__:
      {
SDValue node0x5d031d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5d03280 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5d03330 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x5d031d0, node0x5d03280);
SDValue node0x5d02e60 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5d03330, SDValue());
roots.reserve(1);
roots.push_back(node0x5d02e60);
dag->setRoot(node0x5d02e60);
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
SDValue node0x5d0bf70 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x5d0bea0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5d0bf70, SDValue());
roots.reserve(1);
roots.push_back(node0x5d0bea0);
dag->setRoot(node0x5d0bea0);
      }
      break;
    case Codasip::i_rtype_alu__opc_and__xpr_general__xpr_general__xpr_general__:
      {
SDValue node0x5d10560 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5d10610 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5d106c0 = dag->getNode(ISD::AND, dl, MVT::i32, node0x5d10560, node0x5d10610);
SDValue node0x5d101f0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5d106c0, SDValue());
roots.reserve(1);
roots.push_back(node0x5d101f0);
dag->setRoot(node0x5d101f0);
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
SDValue node0x5d19300 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x5d190b0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5d19300, SDValue());
roots.reserve(1);
roots.push_back(node0x5d190b0);
dag->setRoot(node0x5d190b0);
      }
      break;
    case Codasip::i_rtype_alu__opc_or__xpr_general__x_0__xpr_general__:
      {
SDValue node0x5d1a540 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5d194a0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5d1a540, SDValue());
roots.reserve(1);
roots.push_back(node0x5d194a0);
dag->setRoot(node0x5d194a0);
      }
      break;
    case Codasip::i_rtype_alu__opc_or__xpr_general__xpr_general__x_0__:
      {
SDValue node0x5d1c770 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5d1c300 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5d1c770, SDValue());
roots.reserve(1);
roots.push_back(node0x5d1c300);
dag->setRoot(node0x5d1c300);
      }
      break;
    case Codasip::i_rtype_alu__opc_or__xpr_general__xpr_general__xpr_general__:
      {
SDValue node0x5d1db90 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5d1dc40 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5d1dcf0 = dag->getNode(ISD::OR, dl, MVT::i32, node0x5d1db90, node0x5d1dc40);
SDValue node0x5d1c4f0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5d1dcf0, SDValue());
roots.reserve(1);
roots.push_back(node0x5d1c4f0);
dag->setRoot(node0x5d1c4f0);
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
SDValue node0x5d26930 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x5d26860 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5d26930, SDValue());
roots.reserve(1);
roots.push_back(node0x5d26860);
dag->setRoot(node0x5d26860);
      }
      break;
    case Codasip::i_rtype_alu__opc_sll__xpr_general__xpr_general__x_0__:
      {
SDValue node0x5d29c50 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5d29980 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5d29c50, SDValue());
roots.reserve(1);
roots.push_back(node0x5d29980);
dag->setRoot(node0x5d29980);
      }
      break;
    case Codasip::i_rtype_alu__opc_sll__xpr_general__xpr_general__xpr_general__:
      {
SDValue node0x5d2b070 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5d2b120 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5d2b1d0 = dag->getNode(ISD::SHL, dl, MVT::i32, node0x5d2b070, node0x5d2b120);
SDValue node0x5d2ad00 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5d2b1d0, SDValue());
roots.reserve(1);
roots.push_back(node0x5d2ad00);
dag->setRoot(node0x5d2ad00);
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
SDValue node0x5d33e10 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x5d33d40 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5d33e10, SDValue());
roots.reserve(1);
roots.push_back(node0x5d33d40);
dag->setRoot(node0x5d33d40);
      }
      break;
    case Codasip::i_rtype_alu__opc_slt__xpr_general__x_0__xpr_general__:
      {
SDValue node0x5d34ed0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x5d35050 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5d35100 = dag->getSetCC(dl, MVT::i32, node0x5d35050, node0x5d34ed0, ISD::SETGT);
SDValue node0x5d33fb0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5d35100, SDValue());
roots.reserve(1);
roots.push_back(node0x5d33fb0);
dag->setRoot(node0x5d33fb0);
      }
      break;
    case Codasip::i_rtype_alu__opc_slt__xpr_general__xpr_general__x_0__:
      {
SDValue node0x5d37280 = dag->getConstant(31LL, dl, MVT::i32);
SDValue node0x5d374a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5d37550 = dag->getNode(ISD::SRL, dl, MVT::i32, node0x5d374a0, node0x5d37280);
SDValue node0x5d37130 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5d37550, SDValue());
roots.reserve(1);
roots.push_back(node0x5d37130);
dag->setRoot(node0x5d37130);
      }
      break;
    case Codasip::i_rtype_alu__opc_slt__xpr_general__xpr_general__xpr_general__:
      {
SDValue node0x5d38980 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5d38a30 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5d38ae0 = dag->getSetCC(dl, MVT::i32, node0x5d38980, node0x5d38a30, ISD::SETLT);
SDValue node0x5d38610 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5d38ae0, SDValue());
roots.reserve(1);
roots.push_back(node0x5d38610);
dag->setRoot(node0x5d38610);
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
SDValue node0x5c8e9c0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x5c8e8f0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5c8e9c0, SDValue());
roots.reserve(1);
roots.push_back(node0x5c8e8f0);
dag->setRoot(node0x5c8e8f0);
      }
      break;
    case Codasip::i_rtype_alu__opc_sltu__xpr_general__x_0__xpr_general__:
      {
SDValue node0x5c8fa80 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x5c8fc00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5c8fcb0 = dag->getSetCC(dl, MVT::i32, node0x5c8fc00, node0x5c8fa80, ISD::SETNE);
SDValue node0x5c8eb60 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5c8fcb0, SDValue());
roots.reserve(1);
roots.push_back(node0x5c8eb60);
dag->setRoot(node0x5c8eb60);
      }
      break;
    case Codasip::i_rtype_alu__opc_sltu__xpr_general__xpr_general__xpr_general__:
      {
SDValue node0x5c93180 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5c93230 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5c932e0 = dag->getSetCC(dl, MVT::i32, node0x5c93180, node0x5c93230, ISD::SETULT);
SDValue node0x5c92e10 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5c932e0, SDValue());
roots.reserve(1);
roots.push_back(node0x5c92e10);
dag->setRoot(node0x5c92e10);
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
SDValue node0x5c9bfe0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x5c9bf10 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5c9bfe0, SDValue());
roots.reserve(1);
roots.push_back(node0x5c9bf10);
dag->setRoot(node0x5c9bf10);
      }
      break;
    case Codasip::i_rtype_alu__opc_sra__xpr_general__xpr_general__x_0__:
      {
SDValue node0x5c9f300 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5c9f030 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5c9f300, SDValue());
roots.reserve(1);
roots.push_back(node0x5c9f030);
dag->setRoot(node0x5c9f030);
      }
      break;
    case Codasip::i_rtype_alu__opc_sra__xpr_general__xpr_general__xpr_general__:
      {
SDValue node0x5ca07c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5ca0870 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5ca09b0 = dag->getNode(ISD::SRA, dl, MVT::i32, node0x5ca07c0, node0x5ca0870);
SDValue node0x5ca03b0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5ca09b0, SDValue());
roots.reserve(1);
roots.push_back(node0x5ca03b0);
dag->setRoot(node0x5ca03b0);
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
SDValue node0x5ca9620 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x5ca9550 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5ca9620, SDValue());
roots.reserve(1);
roots.push_back(node0x5ca9550);
dag->setRoot(node0x5ca9550);
      }
      break;
    case Codasip::i_rtype_alu__opc_srl__xpr_general__xpr_general__x_0__:
      {
SDValue node0x5cac940 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5cac670 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5cac940, SDValue());
roots.reserve(1);
roots.push_back(node0x5cac670);
dag->setRoot(node0x5cac670);
      }
      break;
    case Codasip::i_rtype_alu__opc_srl__xpr_general__xpr_general__xpr_general__:
      {
SDValue node0x5cade00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5cadeb0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5cadff0 = dag->getNode(ISD::SRL, dl, MVT::i32, node0x5cade00, node0x5cadeb0);
SDValue node0x5cad9f0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5cadff0, SDValue());
roots.reserve(1);
roots.push_back(node0x5cad9f0);
dag->setRoot(node0x5cad9f0);
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
SDValue node0x5cb6c60 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x5cb6b90 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5cb6c60, SDValue());
roots.reserve(1);
roots.push_back(node0x5cb6b90);
dag->setRoot(node0x5cb6b90);
      }
      break;
    case Codasip::i_rtype_alu__opc_sub__xpr_general__x_0__xpr_general__:
      {
SDValue node0x5cb7ca0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x5cb7ea0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5cb7f50 = dag->getNode(ISD::SUB, dl, MVT::i32, node0x5cb7ca0, node0x5cb7ea0);
SDValue node0x5cb6e00 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5cb7f50, SDValue());
roots.reserve(1);
roots.push_back(node0x5cb6e00);
dag->setRoot(node0x5cb6e00);
      }
      break;
    case Codasip::i_rtype_alu__opc_sub__xpr_general__xpr_general__x_0__:
      {
SDValue node0x5cba190 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5cb9ec0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5cba190, SDValue());
roots.reserve(1);
roots.push_back(node0x5cb9ec0);
dag->setRoot(node0x5cb9ec0);
      }
      break;
    case Codasip::i_rtype_alu__opc_sub__xpr_general__xpr_general__xpr_general__:
      {
SDValue node0x5cbb5b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5cbb660 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5cbb710 = dag->getNode(ISD::SUB, dl, MVT::i32, node0x5cbb5b0, node0x5cbb660);
SDValue node0x5cbb240 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5cbb710, SDValue());
roots.reserve(1);
roots.push_back(node0x5cbb240);
dag->setRoot(node0x5cbb240);
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
SDValue node0x5cc4350 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x5cc4280 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5cc4350, SDValue());
roots.reserve(1);
roots.push_back(node0x5cc4280);
dag->setRoot(node0x5cc4280);
      }
      break;
    case Codasip::i_rtype_alu__opc_xor__xpr_general__x_0__xpr_general__:
      {
SDValue node0x5cc5590 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5cc44f0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5cc5590, SDValue());
roots.reserve(1);
roots.push_back(node0x5cc44f0);
dag->setRoot(node0x5cc44f0);
      }
      break;
    case Codasip::i_rtype_alu__opc_xor__xpr_general__xpr_general__x_0__:
      {
SDValue node0x5cc77c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5cc74f0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5cc77c0, SDValue());
roots.reserve(1);
roots.push_back(node0x5cc74f0);
dag->setRoot(node0x5cc74f0);
      }
      break;
    case Codasip::i_rtype_alu__opc_xor__xpr_general__xpr_general__xpr_general__:
      {
SDValue node0x5cc8be0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5cc8c90 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5cc8d40 = dag->getNode(ISD::XOR, dl, MVT::i32, node0x5cc8be0, node0x5cc8c90);
SDValue node0x5cc8870 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5cc8d40, SDValue());
roots.reserve(1);
roots.push_back(node0x5cc8870);
dag->setRoot(node0x5cc8870);
      }
      break;
    case Codasip::i_rtype_shift__opc_slli__xpr_general__xpr_general__uimm5__:
      {
SDValue node0x5ccda70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5ccdb20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5ccdbc0 = dag->getNode(ISD::SHL, dl, MVT::i32, node0x5ccda70, node0x5ccdb20);
SDValue node0x5cccc20 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5ccdbc0, SDValue());
roots.reserve(1);
roots.push_back(node0x5cccc20);
dag->setRoot(node0x5cccc20);
      }
      break;
    case Codasip::i_rtype_shift__opc_srai__xpr_general__xpr_general__uimm5__:
      {
SDValue node0x5cd28f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5cd29a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5cd2a40 = dag->getNode(ISD::SRA, dl, MVT::i32, node0x5cd28f0, node0x5cd29a0);
SDValue node0x5cd1aa0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5cd2a40, SDValue());
roots.reserve(1);
roots.push_back(node0x5cd1aa0);
dag->setRoot(node0x5cd1aa0);
      }
      break;
    case Codasip::i_rtype_shift__opc_srli__xpr_general__xpr_general__uimm5__:
      {
SDValue node0x5cd7770 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5cd7820 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5cd78c0 = dag->getNode(ISD::SRL, dl, MVT::i32, node0x5cd7770, node0x5cd7820);
SDValue node0x5cd6920 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5cd78c0, SDValue());
roots.reserve(1);
roots.push_back(node0x5cd6920);
dag->setRoot(node0x5cd6920);
      }
      break;
    case Codasip::i_stype_store__opc_sb__x_0__simm12__x_0__:
      {
SDValue node0x5df91a0 = dag->getConstant(0LL, dl, MVT::i8);
SDValue node0x5df9440 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5e56130 = dag->getStore(entry, dl, node0x5df91a0, node0x5df9440, mpi, 1);
roots.reserve(1);
roots.push_back(node0x5e56130);
dag->setRoot(node0x5e56130);
      }
      break;
    case Codasip::i_stype_store__opc_sb__x_0__simm12__xpr_general__:
      {
SDValue node0x5dfa520 = dag->getConstant(0LL, dl, MVT::i8);
SDValue node0x5dfa860 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5dfa910 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5dfa9b0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x5dfa860, node0x5dfa910);
SDValue node0x5b32560 = dag->getStore(entry, dl, node0x5dfa520, node0x5dfa9b0, mpi, 1);
roots.reserve(1);
roots.push_back(node0x5b32560);
dag->setRoot(node0x5b32560);
      }
      break;
    case Codasip::i_stype_store__opc_sb__xpr_general__simm12__x_0__:
      {
SDValue node0x5dfcdc0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5dfce70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5e43370 = dag->getTruncStore(entry, dl, node0x5dfcdc0, node0x5dfce70, mpi, MVT::i8, 1);
roots.reserve(1);
roots.push_back(node0x5e43370);
dag->setRoot(node0x5e43370);
      }
      break;
    case Codasip::i_stype_store__opc_sb__xpr_general__simm12__xpr_general__:
      {
SDValue node0x5dfe3b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5dfe460 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5dfe510 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5dfe660 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x5dfe460, node0x5dfe510);
SDValue node0x5dfcfc0 = dag->getTruncStore(entry, dl, node0x5dfe3b0, node0x5dfe660, mpi, MVT::i8, 1);
roots.reserve(1);
roots.push_back(node0x5dfcfc0);
dag->setRoot(node0x5dfcfc0);
      }
      break;
    case Codasip::i_stype_store__opc_sh__x_0__simm12__x_0__:
      {
SDValue node0x5dff2c0 = dag->getConstant(0LL, dl, MVT::i16);
SDValue node0x5dff560 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5dff600 = dag->getStore(entry, dl, node0x5dff2c0, node0x5dff560, mpi, 1);
roots.reserve(1);
roots.push_back(node0x5dff600);
dag->setRoot(node0x5dff600);
      }
      break;
    case Codasip::i_stype_store__opc_sh__x_0__simm12__xpr_general__:
      {
SDValue node0x5e00420 = dag->getConstant(0LL, dl, MVT::i16);
SDValue node0x5e00760 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5e00810 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5e008b0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x5e00760, node0x5e00810);
SDValue node0x5e00940 = dag->getStore(entry, dl, node0x5e00420, node0x5e008b0, mpi, 1);
roots.reserve(1);
roots.push_back(node0x5e00940);
dag->setRoot(node0x5e00940);
      }
      break;
    case Codasip::i_stype_store__opc_sh__xpr_general__simm12__x_0__:
      {
SDValue node0x5e02d20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5e02dd0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5e438d0 = dag->getTruncStore(entry, dl, node0x5e02d20, node0x5e02dd0, mpi, MVT::i16, 1);
roots.reserve(1);
roots.push_back(node0x5e438d0);
dag->setRoot(node0x5e438d0);
      }
      break;
    case Codasip::i_stype_store__opc_sh__xpr_general__simm12__xpr_general__:
      {
SDValue node0x5e04310 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5e043c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5e04470 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5e045c0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x5e043c0, node0x5e04470);
SDValue node0x5e02f20 = dag->getTruncStore(entry, dl, node0x5e04310, node0x5e045c0, mpi, MVT::i16, 1);
roots.reserve(1);
roots.push_back(node0x5e02f20);
dag->setRoot(node0x5e02f20);
      }
      break;
    case Codasip::i_stype_store__opc_sw__x_0__simm12__x_0__:
      {
SDValue node0x5e05220 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x5e05420 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5e054c0 = dag->getStore(entry, dl, node0x5e05220, node0x5e05420, mpi, 1);
roots.reserve(1);
roots.push_back(node0x5e054c0);
dag->setRoot(node0x5e054c0);
      }
      break;
    case Codasip::i_stype_store__opc_sw__x_0__simm12__xpr_general__:
      {
SDValue node0x5e062e0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x5e06580 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5e06630 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5e066d0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x5e06580, node0x5e06630);
SDValue node0x5e06760 = dag->getStore(entry, dl, node0x5e062e0, node0x5e066d0, mpi, 1);
roots.reserve(1);
roots.push_back(node0x5e06760);
dag->setRoot(node0x5e06760);
      }
      break;
    case Codasip::i_stype_store__opc_sw__xpr_general__simm12__x_0__:
      {
SDValue node0x5e08b40 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5e08bf0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5e08c90 = dag->getStore(entry, dl, node0x5e08b40, node0x5e08bf0, mpi, 1);
roots.reserve(1);
roots.push_back(node0x5e08c90);
dag->setRoot(node0x5e08c90);
      }
      break;
    case Codasip::i_stype_store__opc_sw__xpr_general__simm12__xpr_general__:
      {
SDValue node0x5e0a080 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5e0a130 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5e0a1e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5e0a280 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x5e0a130, node0x5e0a1e0);
SDValue node0x5e0a310 = dag->getStore(entry, dl, node0x5e0a080, node0x5e0a280, mpi, 1);
roots.reserve(1);
roots.push_back(node0x5e0a310);
dag->setRoot(node0x5e0a310);
      }
      break;
    case Codasip::i_utype_ops__opc_auipc__xpr_general__uimm20__:
      {
SDValue node0x5e0b830 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x5e0bb20 = dag->getConstant(-4LL, dl, MVT::i32);
SDValue node0x5e0bd40 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5e0bde0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x5e0b830, node0x5e0bd40);
SDValue node0x5e0be70 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x5e0bde0, node0x5e0bb20);
SDValue node0x5e0ac40 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5e0be70, SDValue());
roots.reserve(1);
roots.push_back(node0x5e0ac40);
dag->setRoot(node0x5e0ac40);
      }
      break;
    case Codasip::i_utype_ops__opc_lui__xpr_general__uimm20__:
      {
SDValue node0x5e0d6a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5e0d270 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5e0d6a0, SDValue());
roots.reserve(1);
roots.push_back(node0x5e0d270);
dag->setRoot(node0x5e0d270);
      }
      break;
    case Codasip::i_itype_alu__opc_slti__xpr_general__x_0__simm12__immSpecClone__imm_1__0__:
      {
SDValue node0x5e13170 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x5e0d780 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5e13170, SDValue());
roots.reserve(1);
roots.push_back(node0x5e0d780);
dag->setRoot(node0x5e0d780);
      }
      break;
    case Codasip::i_itype_alu__opc_slti__xpr_general__x_0__simm12__immSpecClone__imm_1__1__:
      {
SDValue node0x5e12a70 = dag->getConstant(1LL, dl, MVT::i32);
SDValue node0x5e0e980 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5e12a70, SDValue());
roots.reserve(1);
roots.push_back(node0x5e0e980);
dag->setRoot(node0x5e0e980);
      }
      break;
    case Codasip::i_itype_alu__opc_sltiu__xpr_general__x_0__simm12__immSpecClone__imm_1__0__:
      {
SDValue node0x5e14070 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x5e13700 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5e14070, SDValue());
roots.reserve(1);
roots.push_back(node0x5e13700);
dag->setRoot(node0x5e13700);
      }
      break;
    case Codasip::i_itype_alu__opc_sltiu__xpr_general__x_0__simm12__immSpecClone__imm_1__1__:
      {
SDValue node0x5e138d0 = dag->getConstant(1LL, dl, MVT::i32);
SDValue node0x5e0edc0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5e138d0, SDValue());
roots.reserve(1);
roots.push_back(node0x5e0edc0);
dag->setRoot(node0x5e0edc0);
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
SDValue node0x5c6f080 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5c726b0 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x5c6f080, mpi, MVT::i8, 1);
SDValue node0x5e37fe0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5c726b0, SDValue());
roots.reserve(1);
roots.push_back(node0x5e37fe0);
dag->setRoot(node0x5e37fe0);
      }
      break;
    case Codasip::i_itype_loads__opc_lb__xpr_general__simm12__xpr_general__AEXT_CLONE_:
      {
SDValue node0x5c73d80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5c73860 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5c73e50 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x5c73d80, node0x5c73860);
SDValue node0x5e66130 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x5c73e50, mpi, MVT::i8, 1);
SDValue node0x5e38be0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5e66130, SDValue());
roots.reserve(1);
roots.push_back(node0x5e38be0);
dag->setRoot(node0x5e38be0);
      }
      break;
    case Codasip::i_itype_loads__opc_lb__xpr_general__simm12__xpr_general__immspec_1_:
      {
SDValue node0x5e22740 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5e18440 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x5e22740, mpi, MVT::i8, 1);
SDValue node0x5e21a30 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5e18440, SDValue());
roots.reserve(1);
roots.push_back(node0x5e21a30);
dag->setRoot(node0x5e21a30);
      }
      break;
    case Codasip::i_itype_loads__opc_lb__xpr_general__simm12__xpr_general__immspec_1_AEXT_CLONE_:
      {
SDValue node0x5e227f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5e17e80 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x5e227f0, mpi, MVT::i8, 1);
SDValue node0x5e16f60 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5e17e80, SDValue());
roots.reserve(1);
roots.push_back(node0x5e16f60);
dag->setRoot(node0x5e16f60);
      }
      break;
    case Codasip::i_itype_loads__opc_lbu__xpr_general__simm12__x_0__AEXT_CLONE_:
      {
SDValue node0x5c74b00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5c781d0 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x5c74b00, mpi, MVT::i8, 1);
SDValue node0x5e39770 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5c781d0, SDValue());
roots.reserve(1);
roots.push_back(node0x5e39770);
dag->setRoot(node0x5e39770);
      }
      break;
    case Codasip::i_itype_loads__opc_lbu__xpr_general__simm12__xpr_general__AEXT_CLONE_:
      {
SDValue node0x5c79940 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5c79420 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5c79a10 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x5c79940, node0x5c79420);
SDValue node0x5e2d970 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x5c79a10, mpi, MVT::i8, 1);
SDValue node0x5e3a340 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5e2d970, SDValue());
roots.reserve(1);
roots.push_back(node0x5e3a340);
dag->setRoot(node0x5e3a340);
      }
      break;
    case Codasip::i_itype_loads__opc_lbu__xpr_general__simm12__xpr_general__immspec_1_:
      {
SDValue node0x5e23220 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5e17330 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x5e23220, mpi, MVT::i8, 1);
SDValue node0x5e21ad0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5e17330, SDValue());
roots.reserve(1);
roots.push_back(node0x5e21ad0);
dag->setRoot(node0x5e21ad0);
      }
      break;
    case Codasip::i_itype_loads__opc_lbu__xpr_general__simm12__xpr_general__immspec_1_AEXT_CLONE_:
      {
SDValue node0x5e232d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5e16d00 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x5e232d0, mpi, MVT::i8, 1);
SDValue node0x5b56530 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5e16d00, SDValue());
roots.reserve(1);
roots.push_back(node0x5b56530);
dag->setRoot(node0x5b56530);
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
SDValue node0x5c7a670 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5c7dc70 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x5c7a670, mpi, MVT::i16, 1);
SDValue node0x5e3afa0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5c7dc70, SDValue());
roots.reserve(1);
roots.push_back(node0x5e3afa0);
dag->setRoot(node0x5e3afa0);
      }
      break;
    case Codasip::i_itype_loads__opc_lh__xpr_general__simm12__xpr_general__AEXT_CLONE_:
      {
SDValue node0x5c7f340 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5c7ee20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5c7f410 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x5c7f340, node0x5c7ee20);
SDValue node0x5e3bb70 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x5c7f410, mpi, MVT::i16, 1);
SDValue node0x5e3bc00 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5e3bb70, SDValue());
roots.reserve(1);
roots.push_back(node0x5e3bc00);
dag->setRoot(node0x5e3bc00);
      }
      break;
    case Codasip::i_itype_loads__opc_lh__xpr_general__simm12__xpr_general__immspec_1_:
      {
SDValue node0x5e244e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5e23d30 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x5e244e0, mpi, MVT::i16, 1);
SDValue node0x5e22e10 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5e23d30, SDValue());
roots.reserve(1);
roots.push_back(node0x5e22e10);
dag->setRoot(node0x5e22e10);
      }
      break;
    case Codasip::i_itype_loads__opc_lh__xpr_general__simm12__xpr_general__immspec_1_AEXT_CLONE_:
      {
SDValue node0x5e24590 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5e16740 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x5e24590, mpi, MVT::i16, 1);
SDValue node0x5e1f210 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5e16740, SDValue());
roots.reserve(1);
roots.push_back(node0x5e1f210);
dag->setRoot(node0x5e1f210);
      }
      break;
    case Codasip::i_itype_loads__opc_lhu__xpr_general__simm12__x_0__AEXT_CLONE_:
      {
SDValue node0x5c800c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5c83790 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x5c800c0, mpi, MVT::i16, 1);
SDValue node0x5e3c830 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5c83790, SDValue());
roots.reserve(1);
roots.push_back(node0x5e3c830);
dag->setRoot(node0x5e3c830);
      }
      break;
    case Codasip::i_itype_loads__opc_lhu__xpr_general__simm12__xpr_general__AEXT_CLONE_:
      {
SDValue node0x5c84f00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5c849e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5c84fd0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x5c84f00, node0x5c849e0);
SDValue node0x5e3d400 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x5c84fd0, mpi, MVT::i16, 1);
SDValue node0x5e3d490 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5e3d400, SDValue());
roots.reserve(1);
roots.push_back(node0x5e3d490);
dag->setRoot(node0x5e3d490);
      }
      break;
    case Codasip::i_itype_loads__opc_lhu__xpr_general__simm12__xpr_general__immspec_1_:
      {
SDValue node0x5e24fc0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5e189c0 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x5e24fc0, mpi, MVT::i16, 1);
SDValue node0x5e238a0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5e189c0, SDValue());
roots.reserve(1);
roots.push_back(node0x5e238a0);
dag->setRoot(node0x5e238a0);
      }
      break;
    case Codasip::i_itype_loads__opc_lhu__xpr_general__simm12__xpr_general__immspec_1_AEXT_CLONE_:
      {
SDValue node0x5e1b3b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5e1a9b0 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x5e1b3b0, mpi, MVT::i16, 1);
SDValue node0x5e1da90 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5e1a9b0, SDValue());
roots.reserve(1);
roots.push_back(node0x5e1da90);
dag->setRoot(node0x5e1da90);
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
SDValue node0x5e26280 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5e26330 = dag->getLoad(MVT::i32, dl, entry, node0x5e26280, mpi, 1);
SDValue node0x5e24bb0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5e26330, SDValue());
roots.reserve(1);
roots.push_back(node0x5e24bb0);
dag->setRoot(node0x5e24bb0);
      }
      break;
    case Codasip::i_rtype_alu__opc_slt__xpr_general__xpr_general__xpr_general__swappedCmpClone0__:
      {
SDValue node0x5e14830 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5e14980 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5e14a30 = dag->getSetCC(dl, MVT::i32, node0x5e14830, node0x5e14980, ISD::SETGT);
SDValue node0x5e13ea0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5e14a30, SDValue());
roots.reserve(1);
roots.push_back(node0x5e13ea0);
dag->setRoot(node0x5e13ea0);
      }
      break;
    case Codasip::i_rtype_alu__opc_sltu__xpr_general__xpr_general__xpr_general__swappedCmpClone0__:
      {
SDValue node0x5e15400 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5e15550 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5e15600 = dag->getSetCC(dl, MVT::i32, node0x5e15400, node0x5e15550, ISD::SETUGT);
SDValue node0x5e15020 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5e15600, SDValue());
roots.reserve(1);
roots.push_back(node0x5e15020);
dag->setRoot(node0x5e15020);
      }
      break;
    case Codasip::i_rtype_alu__opc_sra__xpr_general__xpr_general__xpr_general__SHIFT_MASK_CLONE_:
      {
SDValue node0x5c85c30 = dag->getConstant(31LL, dl, MVT::i32);
SDValue node0x5c87010 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5c85e50 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5ce8d00 = dag->getNode(ISD::AND, dl, MVT::i32, node0x5c85e50, node0x5c85c30);
SDValue node0x5c86f80 = dag->getNode(ISD::SRA, dl, MVT::i32, node0x5c87010, node0x5ce8d00);
SDValue node0x5e3d710 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5c86f80, SDValue());
roots.reserve(1);
roots.push_back(node0x5e3d710);
dag->setRoot(node0x5e3d710);
      }
      break;
    case Codasip::i_rtype_alu__opc_srl__xpr_general__xpr_general__xpr_general__SHIFT_MASK_CLONE_:
      {
SDValue node0x5ca05a0 = dag->getConstant(31LL, dl, MVT::i32);
SDValue node0x5b54240 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5b542d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5ca0920 = dag->getNode(ISD::AND, dl, MVT::i32, node0x5b542d0, node0x5ca05a0);
SDValue node0x5e56fa0 = dag->getNode(ISD::SRL, dl, MVT::i32, node0x5b54240, node0x5ca0920);
SDValue node0x5b54360 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5e56fa0, SDValue());
roots.reserve(1);
roots.push_back(node0x5b54360);
dag->setRoot(node0x5b54360);
      }
      break;
    case Codasip::i_stype_store__opc_sb__x_0__simm12__xpr_general__immspec_1_:
      {
SDValue node0x5e273b0 = dag->getConstant(0LL, dl, MVT::i8);
SDValue node0x5e275b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5e27350 = dag->getStore(entry, dl, node0x5e273b0, node0x5e275b0, mpi, 1);
roots.reserve(1);
roots.push_back(node0x5e27350);
dag->setRoot(node0x5e27350);
      }
      break;
    case Codasip::i_stype_store__opc_sb__xpr_general__simm12__xpr_general__immspec_1_:
      {
SDValue node0x5e27d30 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5e27de0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5e1a680 = dag->getTruncStore(entry, dl, node0x5e27d30, node0x5e27de0, mpi, MVT::i8, 1);
roots.reserve(1);
roots.push_back(node0x5e1a680);
dag->setRoot(node0x5e1a680);
      }
      break;
    case Codasip::i_stype_store__opc_sh__x_0__simm12__xpr_general__immspec_1_:
      {
SDValue node0x5e28640 = dag->getConstant(0LL, dl, MVT::i16);
SDValue node0x5e28860 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5e285e0 = dag->getStore(entry, dl, node0x5e28640, node0x5e28860, mpi, 1);
roots.reserve(1);
roots.push_back(node0x5e285e0);
dag->setRoot(node0x5e285e0);
      }
      break;
    case Codasip::i_stype_store__opc_sh__xpr_general__simm12__xpr_general__immspec_1_:
      {
SDValue node0x5e29000 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5e290b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5e1d1f0 = dag->getTruncStore(entry, dl, node0x5e29000, node0x5e290b0, mpi, MVT::i16, 1);
roots.reserve(1);
roots.push_back(node0x5e1d1f0);
dag->setRoot(node0x5e1d1f0);
      }
      break;
    case Codasip::i_stype_store__opc_sw__x_0__simm12__xpr_general__immspec_1_:
      {
SDValue node0x5e298c0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x5e29a40 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5e29860 = dag->getStore(entry, dl, node0x5e298c0, node0x5e29a40, mpi, 1);
roots.reserve(1);
roots.push_back(node0x5e29860);
dag->setRoot(node0x5e29860);
      }
      break;
    case Codasip::i_stype_store__opc_sw__xpr_general__simm12__xpr_general__immspec_1_:
      {
SDValue node0x5e2a1e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5e2a290 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5e2a020 = dag->getStore(entry, dl, node0x5e2a1e0, node0x5e2a290, mpi, 1);
roots.reserve(1);
roots.push_back(node0x5e2a020);
dag->setRoot(node0x5e2a020);
      }
      break;
    case Codasip::i_utype_ops__opc_auipc__xpr_general__uimm20__immspec_1_:
      {
SDValue node0x5e29e40 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x5e2aa80 = dag->getConstant(-4LL, dl, MVT::i32);
SDValue node0x5e29eb0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x5e29e40, node0x5e2aa80);
SDValue node0x5e29640 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5e29eb0, SDValue());
roots.reserve(1);
roots.push_back(node0x5e29640);
dag->setRoot(node0x5e29640);
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
SDValue node0x5e0e050 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5e0d7d0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5e0e050, SDValue());
roots.reserve(1);
roots.push_back(node0x5e0d7d0);
dag->setRoot(node0x5e0d7d0);
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
SDValue node0x5b71bc0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x5b71c40 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5b72580 = dag->getTruncStore(entry, dl, node0x5b71bc0, node0x5b71c40, mpi, MVT::i8, 1);
roots.reserve(1);
roots.push_back(node0x5b72580);
dag->setRoot(node0x5b72580);
      }
      break;
    case Codasip::i_stype_store__opc_sb__x_0__simm12__xpr_general__i32_TRUNC_CLONE_:
      {
SDValue node0x5b71ac0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x5b719a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5b71b40 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5b6dfe0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x5b719a0, node0x5b71b40);
SDValue node0x5b72f20 = dag->getTruncStore(entry, dl, node0x5b71ac0, node0x5b6dfe0, mpi, MVT::i8, 1);
roots.reserve(1);
roots.push_back(node0x5b72f20);
dag->setRoot(node0x5b72f20);
      }
      break;
    case Codasip::i_stype_store__opc_sh__x_0__simm12__x_0__i32_TRUNC_CLONE_:
      {
SDValue node0x5b71cc0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x5b73560 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5b738b0 = dag->getTruncStore(entry, dl, node0x5b71cc0, node0x5b73560, mpi, MVT::i16, 1);
roots.reserve(1);
roots.push_back(node0x5b738b0);
dag->setRoot(node0x5b738b0);
      }
      break;
    case Codasip::i_stype_store__opc_sh__x_0__simm12__xpr_general__i32_TRUNC_CLONE_:
      {
SDValue node0x5b73ef0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x5b71350 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5b73f70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5b6efd0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x5b71350, node0x5b73f70);
SDValue node0x5b74350 = dag->getTruncStore(entry, dl, node0x5b73ef0, node0x5b6efd0, mpi, MVT::i16, 1);
roots.reserve(1);
roots.push_back(node0x5b74350);
dag->setRoot(node0x5b74350);
      }
      break;
    case Codasip::i_stype_store__opc_sb__x_0__simm12__xpr_general__immspec_1_i32_TRUNC_CLONE_:
      {
SDValue node0x5b746e0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x5b71910 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5b748d0 = dag->getTruncStore(entry, dl, node0x5b746e0, node0x5b71910, mpi, MVT::i8, 1);
roots.reserve(1);
roots.push_back(node0x5b748d0);
dag->setRoot(node0x5b748d0);
      }
      break;
    case Codasip::i_stype_store__opc_sh__x_0__simm12__xpr_general__immspec_1_i32_TRUNC_CLONE_:
      {
SDValue node0x5b74cc0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x5b71a30 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5b74ec0 = dag->getTruncStore(entry, dl, node0x5b74cc0, node0x5b71a30, mpi, MVT::i16, 1);
roots.reserve(1);
roots.push_back(node0x5b74ec0);
dag->setRoot(node0x5b74ec0);
      }
      break;
    case Codasip::i_stype_store__opc_sw__xpr_general__simm12__xpr_general__0_REG_EMUL_:
      {
SDValue node0x5b75cb0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5b75640 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5b769f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5b7bb40 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x5b75640, node0x5b769f0);
SDValue node0x5b74f20 = dag->getStore(entry, dl, node0x5b75cb0, node0x5b7bb40, mpi, 1);
roots.reserve(1);
roots.push_back(node0x5b74f20);
dag->setRoot(node0x5b74f20);
      }
      break;
    case Codasip::i_stype_store__opc_sw__xpr_general__simm12__xpr_general__1_BIGIMM_EMUL_:
      {
SDValue node0x5b76ab0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5b7bd70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5b7aad0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5b7be00 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x5b7bd70, node0x5b7aad0);
SDValue node0x5b7ac60 = dag->getStore(entry, dl, node0x5b76ab0, node0x5b7be00, mpi, 1);
roots.reserve(1);
roots.push_back(node0x5b7ac60);
dag->setRoot(node0x5b7ac60);
      }
      break;
    case Codasip::i_itype_loads__opc_lw__xpr_general__simm12__xpr_general__2_REG_EMUL_:
      {
SDValue node0x5b77390 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5b7b910 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5b78c30 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x5b77390, node0x5b7b910);
SDValue node0x5b77300 = dag->getLoad(MVT::i32, dl, entry, node0x5b78c30, mpi, 1);
SDValue node0x5b788b0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5b77300, SDValue());
roots.reserve(1);
roots.push_back(node0x5b788b0);
dag->setRoot(node0x5b788b0);
      }
      break;
    case Codasip::i_itype_loads__opc_lw__xpr_general__simm12__xpr_general__3_BIGIMM_EMUL_:
      {
SDValue node0x5b7be70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5b7c8c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5b7a610 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x5b7be70, node0x5b7c8c0);
SDValue node0x5b7bfe0 = dag->getLoad(MVT::i32, dl, entry, node0x5b7a610, mpi, 1);
SDValue node0x5b7c9c0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5b7bfe0, SDValue());
roots.reserve(1);
roots.push_back(node0x5b7c9c0);
dag->setRoot(node0x5b7c9c0);
      }
      break;
    case Codasip::i_stype_store__opc_sw__xpr_general__simm12__xpr_general__4_BIGIMM_EMUL_:
      {
SDValue node0x5b7b2b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5b7daf0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5b7dfb0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5b7a6f0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x5b7daf0, node0x5b7dfb0);
SDValue node0x5b756d0 = dag->getStore(entry, dl, node0x5b7b2b0, node0x5b7a6f0, mpi, 1);
roots.reserve(1);
roots.push_back(node0x5b756d0);
dag->setRoot(node0x5b756d0);
      }
      break;
    case Codasip::i_itype_loads__opc_lw__xpr_general__simm12__xpr_general__5_BIGIMM_EMUL_:
      {
SDValue node0x5b7a760 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5b7edd0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5b790f0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x5b7a760, node0x5b7edd0);
SDValue node0x5b7e7f0 = dag->getLoad(MVT::i32, dl, entry, node0x5b790f0, mpi, 1);
SDValue node0x5b7eeb0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5b7e7f0, SDValue());
roots.reserve(1);
roots.push_back(node0x5b7eeb0);
dag->setRoot(node0x5b7eeb0);
      }
      break;
    case Codasip::i_itype_alu__opc_addi__xpr_general__xpr_general__simm12__6_BIGIMM_EMUL_:
      {
SDValue node0x5b79b20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5b7fc80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5b7b850 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x5b79b20, node0x5b7fc80);
SDValue node0x5b7fd40 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5b7b850, SDValue());
roots.reserve(1);
roots.push_back(node0x5b7fd40);
dag->setRoot(node0x5b7fd40);
      }
      break;
    case Codasip::i_itype_alu__opc_addi__xpr_general__xpr_general__simm12__7_BIGIMM_EMUL_:
      {
SDValue node0x5b7db80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5b80a40 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5b7b440 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x5b7db80, node0x5b80a40);
SDValue node0x5b80b00 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5b7b440, SDValue());
roots.reserve(1);
roots.push_back(node0x5b80b00);
dag->setRoot(node0x5b80b00);
      }
      break;
    case Codasip::i_itype_alu__opc_addi__xpr_general__xpr_general__simm12__8_BIGIMM_EMUL_:
      {
SDValue node0x5b80360 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5b81800 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5b7b1d0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x5b80360, node0x5b81800);
SDValue node0x5b818c0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5b7b1d0, SDValue());
roots.reserve(1);
roots.push_back(node0x5b818c0);
dag->setRoot(node0x5b818c0);
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
SDValue node0x5b4a990 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x5b4ad60 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5b46940 = dag->getCopyToReg(entry, dl, dag->getRegister(Codasip::rf_xpr_1, MVT::i32), node0x5b4a990, SDValue());
SDValue node0x5b4b010 = dag->getNode(ISD::BRIND, dl, MVT::Other, node0x5b46940, node0x5b4ad60);
roots.reserve(2);
roots.push_back(node0x5b46940);
roots.push_back(node0x5b4b010);
dag->setRoot(node0x5b4b010);
      }
      break;
    case Codasip::i_itype_jlreg__opc_jalr__x_0__simm12__xpr_general__:
      {
SDValue node0x5c6b050 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5c6b2f0 = dag->getNode(ISD::BRIND, dl, MVT::Other, entry, node0x5c6b050);
roots.reserve(1);
roots.push_back(node0x5c6b2f0);
dag->setRoot(node0x5c6b2f0);
      }
      break;
    case Codasip::i_itype_jlreg__opc_jalr__xpr_general__simm12__xpr_general__:
      {
SDValue node0x5c6dd20 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x5c6dca0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5c6dd20, SDValue());
SDValue node0x5c6e220 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5c6e4c0 = dag->getNode(ISD::BRIND, dl, MVT::Other, node0x5c6dca0, node0x5c6e220);
roots.reserve(2);
roots.push_back(node0x5c6dca0);
roots.push_back(node0x5c6e4c0);
dag->setRoot(node0x5c6e4c0);
      }
      break;
    case Codasip::i_utype_ops__opc_lui__xpr_general__uimm20__SYNTAX_CLONE_e_movi32__1_:
      {
SDValue node0x5cadbe0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5b54c10 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5cadbe0, SDValue());
roots.reserve(1);
roots.push_back(node0x5b54c10);
dag->setRoot(node0x5b54c10);
      }
      break;
    case Codasip::i_utype_ops__opc_lui__xpr_general__uimm20__SYNTAX_CLONE_e_movi32__2_:
      {
SDValue node0x5c85bb0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5b553b0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5c85bb0, SDValue());
roots.reserve(1);
roots.push_back(node0x5b553b0);
dag->setRoot(node0x5b553b0);
      }
      break;
    case Codasip::i_utype_ops__opc_lui__xpr_general__uimm20__SYNTAX_CLONE_e_movi32__5_:
      {
SDValue node0x5e58310 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5b55b60 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5e58310, SDValue());
roots.reserve(1);
roots.push_back(node0x5b55b60);
dag->setRoot(node0x5b55b60);
      }
      break;
    case Codasip::i_utype_ops__opc_lui__xpr_general__uimm20__SYNTAX_CLONE_e_movi32__6_:
      {
SDValue node0x5e56b80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5b56310 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5e56b80, SDValue());
roots.reserve(1);
roots.push_back(node0x5b56310);
dag->setRoot(node0x5b56310);
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
