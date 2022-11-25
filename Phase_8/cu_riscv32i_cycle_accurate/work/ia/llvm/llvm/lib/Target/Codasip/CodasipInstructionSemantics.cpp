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
 * \date    2022-11-20
 * \author  Codasip (c) C compiler backend generator
 * \version 9.1.1-1255
 * \brief   Source for compiler backend
 * \project cu_riscv32i_cycle_accurate.ia
 * \note          Codasip Studio version: 9.1.1-1255
 *                Licensee: Lockular Limited  (C60_2200_2176)
 *                Project: cu_riscv32i_cycle_accurate.ia
 *                Date: 2022-11-20 22:42:27
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
SDValue node0x5783e40 = dag->getRegister(Codasip::rf_xpr_1, MVT::i32);
SDValue node0x5783b90 = dag->getNode(ISD::BRIND, dl, MVT::Other, entry, node0x5783e40);
roots.reserve(1);
roots.push_back(node0x5783b90);
dag->setRoot(node0x5783b90);
      } else       {
dag->setRoot(entry);
      }
      break;
    case Codasip::i_call_reg_alias__simm12__xpr_general__immspec_1_:
      if (lowlevel) {
SDValue node0x58ad980 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x58adcb0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x58ac240 = dag->getCopyToReg(entry, dl, dag->getRegister(Codasip::rf_xpr_1, MVT::i32), node0x58ad980, SDValue());
SDValue node0x58ad8d0 = dag->getNode(ISD::BRIND, dl, MVT::Other, node0x58ac240, node0x58adcb0);
roots.reserve(2);
roots.push_back(node0x58ac240);
roots.push_back(node0x58ad8d0);
dag->setRoot(node0x58ad8d0);
      } else       {
dag->setRoot(entry);
      }
      break;
    case Codasip::i_itype_jlreg__opc_jalr__x_0__simm12__xpr_general__immspec_1_:
      {
SDValue node0x58ae720 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x58ae2d0 = dag->getNode(ISD::BRIND, dl, MVT::Other, entry, node0x58ae720);
roots.reserve(1);
roots.push_back(node0x58ae2d0);
dag->setRoot(node0x58ae2d0);
      }
      break;
    case Codasip::i_itype_jlreg__opc_jalr__xpr_general__simm12__xpr_general__immspec_1_:
      {
SDValue node0x58aebf0 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x58ace00 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x58aebf0, SDValue());
SDValue node0x58af190 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x58af260 = dag->getNode(ISD::BRIND, dl, MVT::Other, node0x58ace00, node0x58af190);
roots.reserve(2);
roots.push_back(node0x58ace00);
roots.push_back(node0x58af260);
dag->setRoot(node0x58af260);
      }
      break;
    case Codasip::i_call_alias__relative_addr20__:
case Codasip::i_call_alias__relative_addr20__ES:
case Codasip::i_call_alias__relative_addr20__MC:
case Codasip::i_call_alias__relative_addr20__BA:
      if (lowlevel) {
SDValue node0x55d68a0 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x55d5e60 = dag->getCopyToReg(entry, dl, dag->getRegister(Codasip::rf_xpr_1, MVT::i32), node0x55d68a0, SDValue());
SDValue node0x55d6cb0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x55d6ed0 = dag->getNode(ISD::BR, dl, MVT::Other, node0x55d5e60, node0x55d6cb0);
roots.reserve(2);
roots.push_back(node0x55d5e60);
roots.push_back(node0x55d6ed0);
dag->setRoot(node0x55d6ed0);
      } else       {
dag->setRoot(entry);
      }
      break;
    case Codasip::i_jal_abs_calias__opc_jal__x_0__relative_addr20__:
      {
SDValue node0x57741b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x5773e60 = dag->getNode(ISD::BR, dl, MVT::Other, entry, node0x57741b0);
roots.reserve(1);
roots.push_back(node0x5773e60);
dag->setRoot(node0x5773e60);
      }
      break;
    case Codasip::i_jal_abs_calias__opc_jal__xpr_general__relative_addr20__:
      {
SDValue node0x57749a0 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x5772fb0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x57749a0, SDValue());
SDValue node0x5774d10 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x5774970 = dag->getNode(ISD::BR, dl, MVT::Other, node0x5772fb0, node0x5774d10);
roots.reserve(2);
roots.push_back(node0x5772fb0);
roots.push_back(node0x5774970);
dag->setRoot(node0x5774970);
      }
      break;
    case Codasip::i_jtype_jlink__opc_jal__x_0__relative_addr20__:
      {
SDValue node0x5776760 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x5776920 = dag->getNode(ISD::BR, dl, MVT::Other, entry, node0x5776760);
roots.reserve(1);
roots.push_back(node0x5776920);
dag->setRoot(node0x5776920);
      }
      break;
    case Codasip::i_jtype_jlink__opc_jal__xpr_general__relative_addr20__:
      {
SDValue node0x5777570 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x5776a40 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5777570, SDValue());
SDValue node0x5777980 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x5777b70 = dag->getNode(ISD::BR, dl, MVT::Other, node0x5776a40, node0x5777980);
roots.reserve(2);
roots.push_back(node0x5776a40);
roots.push_back(node0x5777b70);
dag->setRoot(node0x5777b70);
      }
      break;
    case Codasip::i_btype_branches__opc_beq__x_0__x_0__relative_addr12__:
      {
SDValue node0x56e05f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x55b05b0 = dag->getNode(ISD::BR, dl, MVT::Other, entry, node0x56e05f0);
roots.reserve(1);
roots.push_back(node0x55b05b0);
dag->setRoot(node0x55b05b0);
      }
      break;
    case Codasip::i_btype_branches__opc_beq__x_0__xpr_general__relative_addr12__:
      if (lowlevel) {
SDValue node0x55beb10 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x559c4f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x55becb0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x55bed50 = dag->getSetCC(dl, MVT::iAny, node0x559c4f0, node0x55beb10, ISD::SETEQ);
SDValue node0x55beec0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x55bed50, node0x55becb0);
roots.reserve(1);
roots.push_back(node0x55beec0);
dag->setRoot(node0x55beec0);
      } else       {
SDValue node0x55beb10 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x559c4f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x55becb0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x55bed50 = dag->getSetCC(dl, MVT::i32, node0x559c4f0, node0x55beb10, ISD::SETEQ);
SDValue node0x55beec0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x55bed50, node0x55becb0);
roots.reserve(1);
roots.push_back(node0x55beec0);
dag->setRoot(node0x55beec0);
      }
      break;
    case Codasip::i_btype_branches__opc_beq__xpr_general__x_0__relative_addr12__:
      if (lowlevel) {
SDValue node0x56b59e0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x58ddbc0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x56b5b80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x56b5c20 = dag->getSetCC(dl, MVT::iAny, node0x58ddbc0, node0x56b59e0, ISD::SETEQ);
SDValue node0x56b5e70 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x56b5c20, node0x56b5b80);
roots.reserve(1);
roots.push_back(node0x56b5e70);
dag->setRoot(node0x56b5e70);
      } else       {
SDValue node0x56b59e0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x58ddbc0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x56b5b80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x56b5c20 = dag->getSetCC(dl, MVT::i32, node0x58ddbc0, node0x56b59e0, ISD::SETEQ);
SDValue node0x56b5e70 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x56b5c20, node0x56b5b80);
roots.reserve(1);
roots.push_back(node0x56b5e70);
dag->setRoot(node0x56b5e70);
      }
      break;
    case Codasip::i_btype_branches__opc_beq__xpr_general__xpr_general__relative_addr12__:
      if (lowlevel) {
SDValue node0x558d150 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5597f90 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x56b75b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x56b7650 = dag->getSetCC(dl, MVT::iAny, node0x5597f90, node0x558d150, ISD::SETEQ);
SDValue node0x56b78a0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x56b7650, node0x56b75b0);
roots.reserve(1);
roots.push_back(node0x56b78a0);
dag->setRoot(node0x56b78a0);
      } else       {
SDValue node0x558d150 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5597f90 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x56b75b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x56b7650 = dag->getSetCC(dl, MVT::i32, node0x5597f90, node0x558d150, ISD::SETEQ);
SDValue node0x56b78a0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x56b7650, node0x56b75b0);
roots.reserve(1);
roots.push_back(node0x56b78a0);
dag->setRoot(node0x56b78a0);
      }
      break;
    case Codasip::i_btype_branches__opc_bge__x_0__x_0__relative_addr12__:
      {
SDValue node0x569a4a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x569a6c0 = dag->getNode(ISD::BR, dl, MVT::Other, entry, node0x569a4a0);
roots.reserve(1);
roots.push_back(node0x569a6c0);
dag->setRoot(node0x569a6c0);
      }
      break;
    case Codasip::i_btype_branches__opc_bge__x_0__xpr_general__relative_addr12__:
      if (lowlevel) {
SDValue node0x569b550 = dag->getConstant(1LL, dl, MVT::i32);
SDValue node0x56a2d40 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x569b8d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x569b970 = dag->getSetCC(dl, MVT::iAny, node0x56a2d40, node0x569b550, ISD::SETLT);
SDValue node0x569bbc0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x569b970, node0x569b8d0);
roots.reserve(1);
roots.push_back(node0x569bbc0);
dag->setRoot(node0x569bbc0);
      } else       {
SDValue node0x569b550 = dag->getConstant(1LL, dl, MVT::i32);
SDValue node0x56a2d40 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x569b8d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x569b970 = dag->getSetCC(dl, MVT::i32, node0x56a2d40, node0x569b550, ISD::SETLT);
SDValue node0x569bbc0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x569b970, node0x569b8d0);
roots.reserve(1);
roots.push_back(node0x569bbc0);
dag->setRoot(node0x569bbc0);
      }
      break;
    case Codasip::i_btype_branches__opc_bge__xpr_general__x_0__relative_addr12__:
      if (lowlevel) {
SDValue node0x58ee8d0 = dag->getConstant(-1LL, dl, MVT::i32);
SDValue node0x56a33b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x58ee9d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x58eea70 = dag->getSetCC(dl, MVT::iAny, node0x56a33b0, node0x58ee8d0, ISD::SETGT);
SDValue node0x58eecc0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x58eea70, node0x58ee9d0);
roots.reserve(1);
roots.push_back(node0x58eecc0);
dag->setRoot(node0x58eecc0);
      } else       {
SDValue node0x58ee8d0 = dag->getConstant(-1LL, dl, MVT::i32);
SDValue node0x56a33b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x58ee9d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x58eea70 = dag->getSetCC(dl, MVT::i32, node0x56a33b0, node0x58ee8d0, ISD::SETGT);
SDValue node0x58eecc0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x58eea70, node0x58ee9d0);
roots.reserve(1);
roots.push_back(node0x58eecc0);
dag->setRoot(node0x58eecc0);
      }
      break;
    case Codasip::i_btype_branches__opc_bge__xpr_general__xpr_general__relative_addr12__:
      if (lowlevel) {
SDValue node0x56a3df0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x58f03e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x58f0490 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x58f0530 = dag->getSetCC(dl, MVT::iAny, node0x58f03e0, node0x56a3df0, ISD::SETGE);
SDValue node0x58f0780 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x58f0530, node0x58f0490);
roots.reserve(1);
roots.push_back(node0x58f0780);
dag->setRoot(node0x58f0780);
      } else       {
SDValue node0x56a3df0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x58f03e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x58f0490 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x58f0530 = dag->getSetCC(dl, MVT::i32, node0x58f03e0, node0x56a3df0, ISD::SETGE);
SDValue node0x58f0780 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x58f0530, node0x58f0490);
roots.reserve(1);
roots.push_back(node0x58f0780);
dag->setRoot(node0x58f0780);
      }
      break;
    case Codasip::i_btype_branches__opc_bgeu__x_0__x_0__relative_addr12__:
      {
SDValue node0x58f16b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x569d660 = dag->getNode(ISD::BR, dl, MVT::Other, entry, node0x58f16b0);
roots.reserve(1);
roots.push_back(node0x569d660);
dag->setRoot(node0x569d660);
      }
      break;
    case Codasip::i_btype_branches__opc_bgeu__x_0__xpr_general__relative_addr12__:
      if (lowlevel) {
SDValue node0x5697060 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x56971e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5697290 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x5697330 = dag->getSetCC(dl, MVT::iAny, node0x56971e0, node0x5697060, ISD::SETEQ);
SDValue node0x5697580 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x5697330, node0x5697290);
roots.reserve(1);
roots.push_back(node0x5697580);
dag->setRoot(node0x5697580);
      } else       {
SDValue node0x5697060 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x56971e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5697290 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x5697330 = dag->getSetCC(dl, MVT::i32, node0x56971e0, node0x5697060, ISD::SETEQ);
SDValue node0x5697580 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x5697330, node0x5697290);
roots.reserve(1);
roots.push_back(node0x5697580);
dag->setRoot(node0x5697580);
      }
      break;
    case Codasip::i_btype_branches__opc_bgeu__xpr_general__xpr_general__relative_addr12__:
      if (lowlevel) {
SDValue node0x58e3430 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x58e34e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x58e3590 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x58e3630 = dag->getSetCC(dl, MVT::iAny, node0x58e34e0, node0x58e3430, ISD::SETUGE);
SDValue node0x58e3880 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x58e3630, node0x58e3590);
roots.reserve(1);
roots.push_back(node0x58e3880);
dag->setRoot(node0x58e3880);
      } else       {
SDValue node0x58e3430 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x58e34e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x58e3590 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x58e3630 = dag->getSetCC(dl, MVT::i32, node0x58e34e0, node0x58e3430, ISD::SETUGE);
SDValue node0x58e3880 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x58e3630, node0x58e3590);
roots.reserve(1);
roots.push_back(node0x58e3880);
dag->setRoot(node0x58e3880);
      }
      break;
    case Codasip::i_btype_branches__opc_blt__x_0__xpr_general__relative_addr12__:
      if (lowlevel) {
SDValue node0x58e5440 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x58e55c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x58e5670 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x58e5710 = dag->getSetCC(dl, MVT::iAny, node0x58e55c0, node0x58e5440, ISD::SETGT);
SDValue node0x58e5960 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x58e5710, node0x58e5670);
roots.reserve(1);
roots.push_back(node0x58e5960);
dag->setRoot(node0x58e5960);
      } else       {
SDValue node0x58e5440 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x58e55c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x58e5670 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x58e5710 = dag->getSetCC(dl, MVT::i32, node0x58e55c0, node0x58e5440, ISD::SETGT);
SDValue node0x58e5960 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x58e5710, node0x58e5670);
roots.reserve(1);
roots.push_back(node0x58e5960);
dag->setRoot(node0x58e5960);
      }
      break;
    case Codasip::i_btype_branches__opc_blt__xpr_general__x_0__relative_addr12__:
      if (lowlevel) {
SDValue node0x58f3af0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x58f3c70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x58f3d20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x58f3dc0 = dag->getSetCC(dl, MVT::iAny, node0x58f3c70, node0x58f3af0, ISD::SETLT);
SDValue node0x58f4010 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x58f3dc0, node0x58f3d20);
roots.reserve(1);
roots.push_back(node0x58f4010);
dag->setRoot(node0x58f4010);
      } else       {
SDValue node0x58f3af0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x58f3c70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x58f3d20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x58f3dc0 = dag->getSetCC(dl, MVT::i32, node0x58f3c70, node0x58f3af0, ISD::SETLT);
SDValue node0x58f4010 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x58f3dc0, node0x58f3d20);
roots.reserve(1);
roots.push_back(node0x58f4010);
dag->setRoot(node0x58f4010);
      }
      break;
    case Codasip::i_btype_branches__opc_blt__xpr_general__xpr_general__relative_addr12__:
      if (lowlevel) {
SDValue node0x58f5710 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x58f57c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x58f5870 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x58f5910 = dag->getSetCC(dl, MVT::iAny, node0x58f57c0, node0x58f5710, ISD::SETLT);
SDValue node0x58f5b60 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x58f5910, node0x58f5870);
roots.reserve(1);
roots.push_back(node0x58f5b60);
dag->setRoot(node0x58f5b60);
      } else       {
SDValue node0x58f5710 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x58f57c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x58f5870 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x58f5910 = dag->getSetCC(dl, MVT::i32, node0x58f57c0, node0x58f5710, ISD::SETLT);
SDValue node0x58f5b60 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x58f5910, node0x58f5870);
roots.reserve(1);
roots.push_back(node0x58f5b60);
dag->setRoot(node0x58f5b60);
      }
      break;
    case Codasip::i_btype_branches__opc_bltu__x_0__xpr_general__relative_addr12__:
      if (lowlevel) {
SDValue node0x58f76d0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x58f7850 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x58f7900 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x58f79a0 = dag->getSetCC(dl, MVT::iAny, node0x58f7850, node0x58f76d0, ISD::SETNE);
SDValue node0x58f7bf0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x58f79a0, node0x58f7900);
roots.reserve(1);
roots.push_back(node0x58f7bf0);
dag->setRoot(node0x58f7bf0);
      } else       {
SDValue node0x58f76d0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x58f7850 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x58f7900 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x58f79a0 = dag->getSetCC(dl, MVT::i32, node0x58f7850, node0x58f76d0, ISD::SETNE);
SDValue node0x58f7bf0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x58f79a0, node0x58f7900);
roots.reserve(1);
roots.push_back(node0x58f7bf0);
dag->setRoot(node0x58f7bf0);
      }
      break;
    case Codasip::i_btype_branches__opc_bltu__xpr_general__xpr_general__relative_addr12__:
      if (lowlevel) {
SDValue node0x58e8610 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x58e86c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x58e8770 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x58e8810 = dag->getSetCC(dl, MVT::iAny, node0x58e86c0, node0x58e8610, ISD::SETULT);
SDValue node0x58e8a60 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x58e8810, node0x58e8770);
roots.reserve(1);
roots.push_back(node0x58e8a60);
dag->setRoot(node0x58e8a60);
      } else       {
SDValue node0x58e8610 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x58e86c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x58e8770 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x58e8810 = dag->getSetCC(dl, MVT::i32, node0x58e86c0, node0x58e8610, ISD::SETULT);
SDValue node0x58e8a60 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x58e8810, node0x58e8770);
roots.reserve(1);
roots.push_back(node0x58e8a60);
dag->setRoot(node0x58e8a60);
      }
      break;
    case Codasip::i_btype_branches__opc_bne__x_0__xpr_general__relative_addr12__:
      if (lowlevel) {
SDValue node0x58ea620 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x58ea7a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x58ea850 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x58ea8f0 = dag->getSetCC(dl, MVT::iAny, node0x58ea7a0, node0x58ea620, ISD::SETNE);
SDValue node0x58eab40 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x58ea8f0, node0x58ea850);
roots.reserve(1);
roots.push_back(node0x58eab40);
dag->setRoot(node0x58eab40);
      } else       {
SDValue node0x58ea620 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x58ea7a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x58ea850 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x58ea8f0 = dag->getSetCC(dl, MVT::i32, node0x58ea7a0, node0x58ea620, ISD::SETNE);
SDValue node0x58eab40 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x58ea8f0, node0x58ea850);
roots.reserve(1);
roots.push_back(node0x58eab40);
dag->setRoot(node0x58eab40);
      }
      break;
    case Codasip::i_btype_branches__opc_bne__xpr_general__x_0__relative_addr12__:
      if (lowlevel) {
SDValue node0x58ed010 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x58ed190 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x58ed240 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x58ed2e0 = dag->getSetCC(dl, MVT::iAny, node0x58ed190, node0x58ed010, ISD::SETNE);
SDValue node0x58ed530 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x58ed2e0, node0x58ed240);
roots.reserve(1);
roots.push_back(node0x58ed530);
dag->setRoot(node0x58ed530);
      } else       {
SDValue node0x58ed010 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x58ed190 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x58ed240 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x58ed2e0 = dag->getSetCC(dl, MVT::i32, node0x58ed190, node0x58ed010, ISD::SETNE);
SDValue node0x58ed530 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x58ed2e0, node0x58ed240);
roots.reserve(1);
roots.push_back(node0x58ed530);
dag->setRoot(node0x58ed530);
      }
      break;
    case Codasip::i_btype_branches__opc_bne__xpr_general__xpr_general__relative_addr12__:
      if (lowlevel) {
SDValue node0x55d5940 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x55d59f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x55d5aa0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x55d5b40 = dag->getSetCC(dl, MVT::iAny, node0x55d59f0, node0x55d5940, ISD::SETNE);
SDValue node0x55d5d90 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x55d5b40, node0x55d5aa0);
roots.reserve(1);
roots.push_back(node0x55d5d90);
dag->setRoot(node0x55d5d90);
      } else       {
SDValue node0x55d5940 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x55d59f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x55d5aa0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x55d5b40 = dag->getSetCC(dl, MVT::i32, node0x55d59f0, node0x55d5940, ISD::SETNE);
SDValue node0x55d5d90 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x55d5b40, node0x55d5aa0);
roots.reserve(1);
roots.push_back(node0x55d5d90);
dag->setRoot(node0x55d5d90);
      }
      break;
    case Codasip::i_btype_branches__opc_bge__xpr_general__xpr_general__relative_addr12__swappedCmpClone0__:
      if (lowlevel) {
SDValue node0x589d1c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x589c2a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x589d360 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x589d410 = dag->getSetCC(dl, MVT::iAny, node0x589c2a0, node0x589d360, ISD::SETLE);
SDValue node0x589d4e0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x589d410, node0x589d1c0);
roots.reserve(1);
roots.push_back(node0x589d4e0);
dag->setRoot(node0x589d4e0);
      } else       {
SDValue node0x589d1c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x589c2a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x589d360 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x589d410 = dag->getSetCC(dl, MVT::i32, node0x589c2a0, node0x589d360, ISD::SETLE);
SDValue node0x589d4e0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x589d410, node0x589d1c0);
roots.reserve(1);
roots.push_back(node0x589d4e0);
dag->setRoot(node0x589d4e0);
      }
      break;
    case Codasip::i_btype_branches__opc_bgeu__xpr_general__xpr_general__relative_addr12__swappedCmpClone0__:
      if (lowlevel) {
SDValue node0x589de70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x589e100 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x589e1b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x589e260 = dag->getSetCC(dl, MVT::iAny, node0x589e100, node0x589e1b0, ISD::SETULE);
SDValue node0x589e330 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x589e260, node0x589de70);
roots.reserve(1);
roots.push_back(node0x589e330);
dag->setRoot(node0x589e330);
      } else       {
SDValue node0x589de70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x589e100 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x589e1b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x589e260 = dag->getSetCC(dl, MVT::i32, node0x589e100, node0x589e1b0, ISD::SETULE);
SDValue node0x589e330 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x589e260, node0x589de70);
roots.reserve(1);
roots.push_back(node0x589e330);
dag->setRoot(node0x589e330);
      }
      break;
    case Codasip::i_btype_branches__opc_blt__xpr_general__xpr_general__relative_addr12__swappedCmpClone0__:
      if (lowlevel) {
SDValue node0x589ecc0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x589ef50 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x589f000 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x589f0b0 = dag->getSetCC(dl, MVT::iAny, node0x589ef50, node0x589f000, ISD::SETGT);
SDValue node0x589f180 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x589f0b0, node0x589ecc0);
roots.reserve(1);
roots.push_back(node0x589f180);
dag->setRoot(node0x589f180);
      } else       {
SDValue node0x589ecc0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x589ef50 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x589f000 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x589f0b0 = dag->getSetCC(dl, MVT::i32, node0x589ef50, node0x589f000, ISD::SETGT);
SDValue node0x589f180 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x589f0b0, node0x589ecc0);
roots.reserve(1);
roots.push_back(node0x589f180);
dag->setRoot(node0x589f180);
      }
      break;
    case Codasip::i_btype_branches__opc_bltu__xpr_general__xpr_general__relative_addr12__swappedCmpClone0__:
      if (lowlevel) {
SDValue node0x589fbb0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x589fe40 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x589fef0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x589ffa0 = dag->getSetCC(dl, MVT::iAny, node0x589fe40, node0x589fef0, ISD::SETUGT);
SDValue node0x58a0070 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x589ffa0, node0x589fbb0);
roots.reserve(1);
roots.push_back(node0x58a0070);
dag->setRoot(node0x58a0070);
      } else       {
SDValue node0x589fbb0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x589fe40 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x589fef0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x589ffa0 = dag->getSetCC(dl, MVT::i32, node0x589fe40, node0x589fef0, ISD::SETUGT);
SDValue node0x58a0070 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x589ffa0, node0x589fbb0);
roots.reserve(1);
roots.push_back(node0x58a0070);
dag->setRoot(node0x58a0070);
      }
      break;
    case Codasip::i_call_reg_alias__simm12__x_0__:
case Codasip::i_call_reg_alias__simm12__x_0__ES:
case Codasip::i_call_reg_alias__simm12__x_0__MC:
case Codasip::i_call_reg_alias__simm12__x_0__BA:
      if (lowlevel) {
SDValue node0x55d74e0 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x55d5eb0 = dag->getCopyToReg(entry, dl, dag->getRegister(Codasip::rf_xpr_1, MVT::i32), node0x55d74e0, SDValue());
SDValue node0x55d78f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x55d7460 = dag->getNode(ISD::BR, dl, MVT::Other, node0x55d5eb0, node0x55d78f0);
roots.reserve(2);
roots.push_back(node0x55d5eb0);
roots.push_back(node0x55d7460);
dag->setRoot(node0x55d7460);
      } else       {
dag->setRoot(entry);
      }
      break;
    case Codasip::i_itype_jlreg__opc_jalr__x_0__simm12__x_0__:
      {
SDValue node0x56f8450 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x56f8180 = dag->getNode(ISD::BR, dl, MVT::Other, entry, node0x56f8450);
roots.reserve(1);
roots.push_back(node0x56f8180);
dag->setRoot(node0x56f8180);
      }
      break;
    case Codasip::i_itype_jlreg__opc_jalr__xpr_general__simm12__x_0__:
      {
SDValue node0x56fab60 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x56fa910 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x56fab60, SDValue());
SDValue node0x56faed0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x56fab30 = dag->getNode(ISD::BR, dl, MVT::Other, node0x56fa910, node0x56faed0);
roots.reserve(2);
roots.push_back(node0x56fa910);
roots.push_back(node0x56fab30);
dag->setRoot(node0x56fab30);
      }
      break;
    case Codasip::i_itype_alu__opc_addi__xpr_general__x_0__simm12__:
      {
SDValue node0x55dc3c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x55d5f00 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x55dc3c0, SDValue());
roots.reserve(1);
roots.push_back(node0x55d5f00);
dag->setRoot(node0x55d5f00);
      }
      break;
    case Codasip::i_itype_alu__opc_addi__xpr_general__xpr_general__simm12__:
      {
SDValue node0x55dd590 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x55dd640 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x55dd6e0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x55dd590, node0x55dd640);
SDValue node0x55dc4f0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x55dd6e0, SDValue());
roots.reserve(1);
roots.push_back(node0x55dc4f0);
dag->setRoot(node0x55dc4f0);
      }
      break;
    case Codasip::i_itype_alu__opc_andi__xpr_general__xpr_general__simm12__:
      {
SDValue node0x56e41c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x56e4270 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x56e4310 = dag->getNode(ISD::AND, dl, MVT::i32, node0x56e41c0, node0x56e4270);
SDValue node0x56e3050 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x56e4310, SDValue());
roots.reserve(1);
roots.push_back(node0x56e3050);
dag->setRoot(node0x56e3050);
      }
      break;
    case Codasip::i_itype_alu__opc_ori__xpr_general__x_0__simm12__:
      {
SDValue node0x56e7a00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x56e4430 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x56e7a00, SDValue());
roots.reserve(1);
roots.push_back(node0x56e4430);
dag->setRoot(node0x56e4430);
      }
      break;
    case Codasip::i_itype_alu__opc_ori__xpr_general__xpr_general__simm12__:
      {
SDValue node0x56e8d70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x56e8e20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x56e8ec0 = dag->getNode(ISD::OR, dl, MVT::i32, node0x56e8d70, node0x56e8e20);
SDValue node0x56e7b30 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x56e8ec0, SDValue());
roots.reserve(1);
roots.push_back(node0x56e7b30);
dag->setRoot(node0x56e7b30);
      }
      break;
    case Codasip::i_itype_alu__opc_slti__xpr_general__x_0__simm12__:
      {
SDValue node0x56ec4d0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x56ec5b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x56ec650 = dag->getSetCC(dl, MVT::i32, node0x56ec5b0, node0x56ec4d0, ISD::SETGT);
SDValue node0x56e8fe0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x56ec650, SDValue());
roots.reserve(1);
roots.push_back(node0x56e8fe0);
dag->setRoot(node0x56e8fe0);
      }
      break;
    case Codasip::i_itype_alu__opc_slti__xpr_general__xpr_general__simm12__:
      {
SDValue node0x56edaf0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x56edba0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x56edc40 = dag->getSetCC(dl, MVT::i32, node0x56edaf0, node0x56edba0, ISD::SETLT);
SDValue node0x56ec920 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x56edc40, SDValue());
roots.reserve(1);
roots.push_back(node0x56ec920);
dag->setRoot(node0x56ec920);
      }
      break;
    case Codasip::i_itype_alu__opc_sltiu__xpr_general__x_0__simm12__:
      {
SDValue node0x56f13b0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x56f1490 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x56f1530 = dag->getSetCC(dl, MVT::i32, node0x56f1490, node0x56f13b0, ISD::SETNE);
SDValue node0x56f0fa0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x56f1530, SDValue());
roots.reserve(1);
roots.push_back(node0x56f0fa0);
dag->setRoot(node0x56f0fa0);
      }
      break;
    case Codasip::i_itype_alu__opc_sltiu__xpr_general__xpr_general__simm12__:
      {
SDValue node0x56f2a20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x56f2ad0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x56f2b70 = dag->getSetCC(dl, MVT::i32, node0x56f2a20, node0x56f2ad0, ISD::SETULT);
SDValue node0x56f1710 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x56f2b70, SDValue());
roots.reserve(1);
roots.push_back(node0x56f1710);
dag->setRoot(node0x56f1710);
      }
      break;
    case Codasip::i_itype_alu__opc_xori__xpr_general__x_0__simm12__:
      {
SDValue node0x56f62d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x56f2660 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x56f62d0, SDValue());
roots.reserve(1);
roots.push_back(node0x56f2660);
dag->setRoot(node0x56f2660);
      }
      break;
    case Codasip::i_itype_alu__opc_xori__xpr_general__xpr_general__simm12__:
      {
SDValue node0x56f7640 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x56f76f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x56f7790 = dag->getNode(ISD::XOR, dl, MVT::i32, node0x56f7640, node0x56f76f0);
SDValue node0x56f6400 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x56f7790, SDValue());
roots.reserve(1);
roots.push_back(node0x56f6400);
dag->setRoot(node0x56f6400);
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
SDValue node0x5700760 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x56fe600 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x5700760, mpi, MVT::i8, 1);
SDValue node0x56fe770 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x56fe600, SDValue());
roots.reserve(1);
roots.push_back(node0x56fe770);
dag->setRoot(node0x56fe770);
      }
      break;
    case Codasip::i_itype_loads__opc_lb__xpr_general__simm12__xpr_general__:
      {
SDValue node0x5701cf0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5701da0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5701e40 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x5701cf0, node0x5701da0);
SDValue node0x56fd490 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x5701e40, mpi, MVT::i8, 1);
SDValue node0x5700ab0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x56fd490, SDValue());
roots.reserve(1);
roots.push_back(node0x5700ab0);
dag->setRoot(node0x5700ab0);
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
SDValue node0x5706280 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5704030 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x5706280, mpi, MVT::i8, 1);
SDValue node0x5705d90 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5704030, SDValue());
roots.reserve(1);
roots.push_back(node0x5705d90);
dag->setRoot(node0x5705d90);
      }
      break;
    case Codasip::i_itype_loads__opc_lbu__xpr_general__simm12__xpr_general__:
      {
SDValue node0x57078b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5707960 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5707a00 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x57078b0, node0x5707960);
SDValue node0x5702e70 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x5707a00, mpi, MVT::i8, 1);
SDValue node0x5705f60 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5702e70, SDValue());
roots.reserve(1);
roots.push_back(node0x5705f60);
dag->setRoot(node0x5705f60);
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
SDValue node0x570bd20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5709bc0 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x570bd20, mpi, MVT::i16, 1);
SDValue node0x5709d30 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5709bc0, SDValue());
roots.reserve(1);
roots.push_back(node0x5709d30);
dag->setRoot(node0x5709d30);
      }
      break;
    case Codasip::i_itype_loads__opc_lh__xpr_general__simm12__xpr_general__:
      {
SDValue node0x570d2b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x570d360 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x570d400 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x570d2b0, node0x570d360);
SDValue node0x5708a00 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x570d400, mpi, MVT::i16, 1);
SDValue node0x570c070 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5708a00, SDValue());
roots.reserve(1);
roots.push_back(node0x570c070);
dag->setRoot(node0x570c070);
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
SDValue node0x5711840 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x570f5f0 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x5711840, mpi, MVT::i16, 1);
SDValue node0x5711350 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x570f5f0, SDValue());
roots.reserve(1);
roots.push_back(node0x5711350);
dag->setRoot(node0x5711350);
      }
      break;
    case Codasip::i_itype_loads__opc_lhu__xpr_general__simm12__xpr_general__:
      {
SDValue node0x5712e70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5712f20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5712fc0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x5712e70, node0x5712f20);
SDValue node0x570e430 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x5712fc0, mpi, MVT::i16, 1);
SDValue node0x5711520 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x570e430, SDValue());
roots.reserve(1);
roots.push_back(node0x5711520);
dag->setRoot(node0x5711520);
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
SDValue node0x57716a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5771740 = dag->getLoad(MVT::i32, dl, entry, node0x57716a0, mpi, 1);
SDValue node0x576f6e0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5771740, SDValue());
roots.reserve(1);
roots.push_back(node0x576f6e0);
dag->setRoot(node0x576f6e0);
      }
      break;
    case Codasip::i_itype_loads__opc_lw__xpr_general__simm12__xpr_general__:
      {
SDValue node0x5772b80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5772c30 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5772cd0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x5772b80, node0x5772c30);
SDValue node0x5772d60 = dag->getLoad(MVT::i32, dl, entry, node0x5772cd0, mpi, 1);
SDValue node0x57718f0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5772d60, SDValue());
roots.reserve(1);
roots.push_back(node0x57718f0);
dag->setRoot(node0x57718f0);
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
SDValue node0x578c4d0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x578c400 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x578c4d0, SDValue());
roots.reserve(1);
roots.push_back(node0x578c400);
dag->setRoot(node0x578c400);
      }
      break;
    case Codasip::i_rtype_alu__opc_add__xpr_general__x_0__xpr_general__:
      {
SDValue node0x578d710 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x578c670 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x578d710, SDValue());
roots.reserve(1);
roots.push_back(node0x578c670);
dag->setRoot(node0x578c670);
      }
      break;
    case Codasip::i_rtype_alu__opc_add__xpr_general__xpr_general__x_0__:
      {
SDValue node0x578f940 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x578f670 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x578f940, SDValue());
roots.reserve(1);
roots.push_back(node0x578f670);
dag->setRoot(node0x578f670);
      }
      break;
    case Codasip::i_rtype_alu__opc_add__xpr_general__xpr_general__xpr_general__:
      {
SDValue node0x5790d60 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5790e10 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5790ec0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x5790d60, node0x5790e10);
SDValue node0x57909f0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5790ec0, SDValue());
roots.reserve(1);
roots.push_back(node0x57909f0);
dag->setRoot(node0x57909f0);
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
SDValue node0x5799b00 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x5799a30 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5799b00, SDValue());
roots.reserve(1);
roots.push_back(node0x5799a30);
dag->setRoot(node0x5799a30);
      }
      break;
    case Codasip::i_rtype_alu__opc_and__xpr_general__xpr_general__xpr_general__:
      {
SDValue node0x579e0f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x579e1a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x579e250 = dag->getNode(ISD::AND, dl, MVT::i32, node0x579e0f0, node0x579e1a0);
SDValue node0x579dd80 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x579e250, SDValue());
roots.reserve(1);
roots.push_back(node0x579dd80);
dag->setRoot(node0x579dd80);
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
SDValue node0x57a6e90 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x57a6c40 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x57a6e90, SDValue());
roots.reserve(1);
roots.push_back(node0x57a6c40);
dag->setRoot(node0x57a6c40);
      }
      break;
    case Codasip::i_rtype_alu__opc_or__xpr_general__x_0__xpr_general__:
      {
SDValue node0x57a80d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x57a7030 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x57a80d0, SDValue());
roots.reserve(1);
roots.push_back(node0x57a7030);
dag->setRoot(node0x57a7030);
      }
      break;
    case Codasip::i_rtype_alu__opc_or__xpr_general__xpr_general__x_0__:
      {
SDValue node0x57aa300 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x57a9e90 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x57aa300, SDValue());
roots.reserve(1);
roots.push_back(node0x57a9e90);
dag->setRoot(node0x57a9e90);
      }
      break;
    case Codasip::i_rtype_alu__opc_or__xpr_general__xpr_general__xpr_general__:
      {
SDValue node0x57ab720 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x57ab7d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x57ab880 = dag->getNode(ISD::OR, dl, MVT::i32, node0x57ab720, node0x57ab7d0);
SDValue node0x57aa080 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x57ab880, SDValue());
roots.reserve(1);
roots.push_back(node0x57aa080);
dag->setRoot(node0x57aa080);
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
SDValue node0x57b44c0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x57b43f0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x57b44c0, SDValue());
roots.reserve(1);
roots.push_back(node0x57b43f0);
dag->setRoot(node0x57b43f0);
      }
      break;
    case Codasip::i_rtype_alu__opc_sll__xpr_general__xpr_general__x_0__:
      {
SDValue node0x57b77e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x57b7510 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x57b77e0, SDValue());
roots.reserve(1);
roots.push_back(node0x57b7510);
dag->setRoot(node0x57b7510);
      }
      break;
    case Codasip::i_rtype_alu__opc_sll__xpr_general__xpr_general__xpr_general__:
      {
SDValue node0x57b8c00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x57b8cb0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x57b8d60 = dag->getNode(ISD::SHL, dl, MVT::i32, node0x57b8c00, node0x57b8cb0);
SDValue node0x57b8890 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x57b8d60, SDValue());
roots.reserve(1);
roots.push_back(node0x57b8890);
dag->setRoot(node0x57b8890);
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
SDValue node0x57c19a0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x57c18d0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x57c19a0, SDValue());
roots.reserve(1);
roots.push_back(node0x57c18d0);
dag->setRoot(node0x57c18d0);
      }
      break;
    case Codasip::i_rtype_alu__opc_slt__xpr_general__x_0__xpr_general__:
      {
SDValue node0x57c2a60 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x57c2be0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x57c2c90 = dag->getSetCC(dl, MVT::i32, node0x57c2be0, node0x57c2a60, ISD::SETGT);
SDValue node0x57c1b40 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x57c2c90, SDValue());
roots.reserve(1);
roots.push_back(node0x57c1b40);
dag->setRoot(node0x57c1b40);
      }
      break;
    case Codasip::i_rtype_alu__opc_slt__xpr_general__xpr_general__x_0__:
      {
SDValue node0x57c4e10 = dag->getConstant(31LL, dl, MVT::i32);
SDValue node0x57c5030 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x57c50e0 = dag->getNode(ISD::SRL, dl, MVT::i32, node0x57c5030, node0x57c4e10);
SDValue node0x57c4cc0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x57c50e0, SDValue());
roots.reserve(1);
roots.push_back(node0x57c4cc0);
dag->setRoot(node0x57c4cc0);
      }
      break;
    case Codasip::i_rtype_alu__opc_slt__xpr_general__xpr_general__xpr_general__:
      {
SDValue node0x57c6510 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x57c65c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x57c6670 = dag->getSetCC(dl, MVT::i32, node0x57c6510, node0x57c65c0, ISD::SETLT);
SDValue node0x57c61a0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x57c6670, SDValue());
roots.reserve(1);
roots.push_back(node0x57c61a0);
dag->setRoot(node0x57c61a0);
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
SDValue node0x571c530 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x571c460 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x571c530, SDValue());
roots.reserve(1);
roots.push_back(node0x571c460);
dag->setRoot(node0x571c460);
      }
      break;
    case Codasip::i_rtype_alu__opc_sltu__xpr_general__x_0__xpr_general__:
      {
SDValue node0x571d5f0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x571d770 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x571d820 = dag->getSetCC(dl, MVT::i32, node0x571d770, node0x571d5f0, ISD::SETNE);
SDValue node0x571c6d0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x571d820, SDValue());
roots.reserve(1);
roots.push_back(node0x571c6d0);
dag->setRoot(node0x571c6d0);
      }
      break;
    case Codasip::i_rtype_alu__opc_sltu__xpr_general__xpr_general__xpr_general__:
      {
SDValue node0x5720df0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5720ea0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5720f50 = dag->getSetCC(dl, MVT::i32, node0x5720df0, node0x5720ea0, ISD::SETULT);
SDValue node0x5720a80 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5720f50, SDValue());
roots.reserve(1);
roots.push_back(node0x5720a80);
dag->setRoot(node0x5720a80);
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
SDValue node0x5729c50 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x5729b80 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5729c50, SDValue());
roots.reserve(1);
roots.push_back(node0x5729b80);
dag->setRoot(node0x5729b80);
      }
      break;
    case Codasip::i_rtype_alu__opc_sra__xpr_general__xpr_general__x_0__:
      {
SDValue node0x572cf70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x572cca0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x572cf70, SDValue());
roots.reserve(1);
roots.push_back(node0x572cca0);
dag->setRoot(node0x572cca0);
      }
      break;
    case Codasip::i_rtype_alu__opc_sra__xpr_general__xpr_general__xpr_general__:
      {
SDValue node0x572e430 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x572e4e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x572e620 = dag->getNode(ISD::SRA, dl, MVT::i32, node0x572e430, node0x572e4e0);
SDValue node0x572e020 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x572e620, SDValue());
roots.reserve(1);
roots.push_back(node0x572e020);
dag->setRoot(node0x572e020);
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
SDValue node0x5737290 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x57371c0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5737290, SDValue());
roots.reserve(1);
roots.push_back(node0x57371c0);
dag->setRoot(node0x57371c0);
      }
      break;
    case Codasip::i_rtype_alu__opc_srl__xpr_general__xpr_general__x_0__:
      {
SDValue node0x573a5b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x573a2e0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x573a5b0, SDValue());
roots.reserve(1);
roots.push_back(node0x573a2e0);
dag->setRoot(node0x573a2e0);
      }
      break;
    case Codasip::i_rtype_alu__opc_srl__xpr_general__xpr_general__xpr_general__:
      {
SDValue node0x573ba70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x573bb20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x573bc60 = dag->getNode(ISD::SRL, dl, MVT::i32, node0x573ba70, node0x573bb20);
SDValue node0x573b660 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x573bc60, SDValue());
roots.reserve(1);
roots.push_back(node0x573b660);
dag->setRoot(node0x573b660);
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
SDValue node0x57448d0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x5744800 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x57448d0, SDValue());
roots.reserve(1);
roots.push_back(node0x5744800);
dag->setRoot(node0x5744800);
      }
      break;
    case Codasip::i_rtype_alu__opc_sub__xpr_general__x_0__xpr_general__:
      {
SDValue node0x5745910 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x5745b10 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5745bc0 = dag->getNode(ISD::SUB, dl, MVT::i32, node0x5745910, node0x5745b10);
SDValue node0x5744a70 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5745bc0, SDValue());
roots.reserve(1);
roots.push_back(node0x5744a70);
dag->setRoot(node0x5744a70);
      }
      break;
    case Codasip::i_rtype_alu__opc_sub__xpr_general__xpr_general__x_0__:
      {
SDValue node0x5747e00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5747b30 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5747e00, SDValue());
roots.reserve(1);
roots.push_back(node0x5747b30);
dag->setRoot(node0x5747b30);
      }
      break;
    case Codasip::i_rtype_alu__opc_sub__xpr_general__xpr_general__xpr_general__:
      {
SDValue node0x5749220 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x57492d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5749380 = dag->getNode(ISD::SUB, dl, MVT::i32, node0x5749220, node0x57492d0);
SDValue node0x5748eb0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5749380, SDValue());
roots.reserve(1);
roots.push_back(node0x5748eb0);
dag->setRoot(node0x5748eb0);
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
SDValue node0x5751fc0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x5751ef0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5751fc0, SDValue());
roots.reserve(1);
roots.push_back(node0x5751ef0);
dag->setRoot(node0x5751ef0);
      }
      break;
    case Codasip::i_rtype_alu__opc_xor__xpr_general__x_0__xpr_general__:
      {
SDValue node0x5753200 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5752160 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5753200, SDValue());
roots.reserve(1);
roots.push_back(node0x5752160);
dag->setRoot(node0x5752160);
      }
      break;
    case Codasip::i_rtype_alu__opc_xor__xpr_general__xpr_general__x_0__:
      {
SDValue node0x5755430 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5755160 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5755430, SDValue());
roots.reserve(1);
roots.push_back(node0x5755160);
dag->setRoot(node0x5755160);
      }
      break;
    case Codasip::i_rtype_alu__opc_xor__xpr_general__xpr_general__xpr_general__:
      {
SDValue node0x5756850 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5756900 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x57569b0 = dag->getNode(ISD::XOR, dl, MVT::i32, node0x5756850, node0x5756900);
SDValue node0x57564e0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x57569b0, SDValue());
roots.reserve(1);
roots.push_back(node0x57564e0);
dag->setRoot(node0x57564e0);
      }
      break;
    case Codasip::i_rtype_shift__opc_slli__xpr_general__xpr_general__uimm5__:
      {
SDValue node0x575b6e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x575b790 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x575b830 = dag->getNode(ISD::SHL, dl, MVT::i32, node0x575b6e0, node0x575b790);
SDValue node0x575a890 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x575b830, SDValue());
roots.reserve(1);
roots.push_back(node0x575a890);
dag->setRoot(node0x575a890);
      }
      break;
    case Codasip::i_rtype_shift__opc_srai__xpr_general__xpr_general__uimm5__:
      {
SDValue node0x5760560 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5760610 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x57606b0 = dag->getNode(ISD::SRA, dl, MVT::i32, node0x5760560, node0x5760610);
SDValue node0x575f710 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x57606b0, SDValue());
roots.reserve(1);
roots.push_back(node0x575f710);
dag->setRoot(node0x575f710);
      }
      break;
    case Codasip::i_rtype_shift__opc_srli__xpr_general__xpr_general__uimm5__:
      {
SDValue node0x57653e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5765490 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5765530 = dag->getNode(ISD::SRL, dl, MVT::i32, node0x57653e0, node0x5765490);
SDValue node0x5764590 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5765530, SDValue());
roots.reserve(1);
roots.push_back(node0x5764590);
dag->setRoot(node0x5764590);
      }
      break;
    case Codasip::i_stype_store__opc_sb__x_0__simm12__x_0__:
      {
SDValue node0x5886e70 = dag->getConstant(0LL, dl, MVT::i8);
SDValue node0x5887110 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x55be850 = dag->getStore(entry, dl, node0x5886e70, node0x5887110, mpi, 1);
roots.reserve(1);
roots.push_back(node0x55be850);
dag->setRoot(node0x55be850);
      }
      break;
    case Codasip::i_stype_store__opc_sb__x_0__simm12__xpr_general__:
      {
SDValue node0x58881f0 = dag->getConstant(0LL, dl, MVT::i8);
SDValue node0x5888530 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x58885e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5888680 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x5888530, node0x58885e0);
SDValue node0x5888710 = dag->getStore(entry, dl, node0x58881f0, node0x5888680, mpi, 1);
roots.reserve(1);
roots.push_back(node0x5888710);
dag->setRoot(node0x5888710);
      }
      break;
    case Codasip::i_stype_store__opc_sb__xpr_general__simm12__x_0__:
      {
SDValue node0x588aaf0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x588aba0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x58d1130 = dag->getTruncStore(entry, dl, node0x588aaf0, node0x588aba0, mpi, MVT::i8, 1);
roots.reserve(1);
roots.push_back(node0x58d1130);
dag->setRoot(node0x58d1130);
      }
      break;
    case Codasip::i_stype_store__opc_sb__xpr_general__simm12__xpr_general__:
      {
SDValue node0x588c0e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x588c190 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x588c240 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x588c390 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x588c190, node0x588c240);
SDValue node0x588acf0 = dag->getTruncStore(entry, dl, node0x588c0e0, node0x588c390, mpi, MVT::i8, 1);
roots.reserve(1);
roots.push_back(node0x588acf0);
dag->setRoot(node0x588acf0);
      }
      break;
    case Codasip::i_stype_store__opc_sh__x_0__simm12__x_0__:
      {
SDValue node0x588cff0 = dag->getConstant(0LL, dl, MVT::i16);
SDValue node0x588d290 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x588d330 = dag->getStore(entry, dl, node0x588cff0, node0x588d290, mpi, 1);
roots.reserve(1);
roots.push_back(node0x588d330);
dag->setRoot(node0x588d330);
      }
      break;
    case Codasip::i_stype_store__opc_sh__x_0__simm12__xpr_general__:
      {
SDValue node0x588e150 = dag->getConstant(0LL, dl, MVT::i16);
SDValue node0x588e490 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x588e540 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x588e5e0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x588e490, node0x588e540);
SDValue node0x588e670 = dag->getStore(entry, dl, node0x588e150, node0x588e5e0, mpi, 1);
roots.reserve(1);
roots.push_back(node0x588e670);
dag->setRoot(node0x588e670);
      }
      break;
    case Codasip::i_stype_store__opc_sh__xpr_general__simm12__x_0__:
      {
SDValue node0x5890a50 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5890b00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x58d1690 = dag->getTruncStore(entry, dl, node0x5890a50, node0x5890b00, mpi, MVT::i16, 1);
roots.reserve(1);
roots.push_back(node0x58d1690);
dag->setRoot(node0x58d1690);
      }
      break;
    case Codasip::i_stype_store__opc_sh__xpr_general__simm12__xpr_general__:
      {
SDValue node0x5892040 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x58920f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x58921a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x58922f0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x58920f0, node0x58921a0);
SDValue node0x5890c50 = dag->getTruncStore(entry, dl, node0x5892040, node0x58922f0, mpi, MVT::i16, 1);
roots.reserve(1);
roots.push_back(node0x5890c50);
dag->setRoot(node0x5890c50);
      }
      break;
    case Codasip::i_stype_store__opc_sw__x_0__simm12__x_0__:
      {
SDValue node0x5892f50 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x5893150 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x58931f0 = dag->getStore(entry, dl, node0x5892f50, node0x5893150, mpi, 1);
roots.reserve(1);
roots.push_back(node0x58931f0);
dag->setRoot(node0x58931f0);
      }
      break;
    case Codasip::i_stype_store__opc_sw__x_0__simm12__xpr_general__:
      {
SDValue node0x5894010 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x58942b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5894360 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5894400 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x58942b0, node0x5894360);
SDValue node0x5894490 = dag->getStore(entry, dl, node0x5894010, node0x5894400, mpi, 1);
roots.reserve(1);
roots.push_back(node0x5894490);
dag->setRoot(node0x5894490);
      }
      break;
    case Codasip::i_stype_store__opc_sw__xpr_general__simm12__x_0__:
      {
SDValue node0x5896870 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5896920 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x58969c0 = dag->getStore(entry, dl, node0x5896870, node0x5896920, mpi, 1);
roots.reserve(1);
roots.push_back(node0x58969c0);
dag->setRoot(node0x58969c0);
      }
      break;
    case Codasip::i_stype_store__opc_sw__xpr_general__simm12__xpr_general__:
      {
SDValue node0x5897db0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5897e60 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5897f10 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5897fb0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x5897e60, node0x5897f10);
SDValue node0x5898040 = dag->getStore(entry, dl, node0x5897db0, node0x5897fb0, mpi, 1);
roots.reserve(1);
roots.push_back(node0x5898040);
dag->setRoot(node0x5898040);
      }
      break;
    case Codasip::i_utype_ops__opc_auipc__xpr_general__uimm20__:
      {
SDValue node0x5899560 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x5899850 = dag->getConstant(-4LL, dl, MVT::i32);
SDValue node0x5899a70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5899b10 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x5899560, node0x5899a70);
SDValue node0x5899ba0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x5899b10, node0x5899850);
SDValue node0x5898970 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5899ba0, SDValue());
roots.reserve(1);
roots.push_back(node0x5898970);
dag->setRoot(node0x5898970);
      }
      break;
    case Codasip::i_utype_ops__opc_lui__xpr_general__uimm20__:
      {
SDValue node0x589b3d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x589afa0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x589b3d0, SDValue());
roots.reserve(1);
roots.push_back(node0x589afa0);
dag->setRoot(node0x589afa0);
      }
      break;
    case Codasip::i_itype_alu__opc_slti__xpr_general__x_0__simm12__immSpecClone__imm_1__0__:
      {
SDValue node0x58a0ea0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x589b4b0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x58a0ea0, SDValue());
roots.reserve(1);
roots.push_back(node0x589b4b0);
dag->setRoot(node0x589b4b0);
      }
      break;
    case Codasip::i_itype_alu__opc_slti__xpr_general__x_0__simm12__immSpecClone__imm_1__1__:
      {
SDValue node0x58a07a0 = dag->getConstant(1LL, dl, MVT::i32);
SDValue node0x589c6b0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x58a07a0, SDValue());
roots.reserve(1);
roots.push_back(node0x589c6b0);
dag->setRoot(node0x589c6b0);
      }
      break;
    case Codasip::i_itype_alu__opc_sltiu__xpr_general__x_0__simm12__immSpecClone__imm_1__0__:
      {
SDValue node0x58a1da0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x58a1430 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x58a1da0, SDValue());
roots.reserve(1);
roots.push_back(node0x58a1430);
dag->setRoot(node0x58a1430);
      }
      break;
    case Codasip::i_itype_alu__opc_sltiu__xpr_general__x_0__simm12__immSpecClone__imm_1__1__:
      {
SDValue node0x58a1600 = dag->getConstant(1LL, dl, MVT::i32);
SDValue node0x589caf0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x58a1600, SDValue());
roots.reserve(1);
roots.push_back(node0x589caf0);
dag->setRoot(node0x589caf0);
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
SDValue node0x56fd1d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5700800 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x56fd1d0, mpi, MVT::i8, 1);
SDValue node0x58c5d10 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5700800, SDValue());
roots.reserve(1);
roots.push_back(node0x58c5d10);
dag->setRoot(node0x58c5d10);
      }
      break;
    case Codasip::i_itype_loads__opc_lb__xpr_general__simm12__xpr_general__AEXT_CLONE_:
      {
SDValue node0x5701ed0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x57019b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5701fa0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x5701ed0, node0x57019b0);
SDValue node0x58bb670 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x5701fa0, mpi, MVT::i8, 1);
SDValue node0x58c6910 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x58bb670, SDValue());
roots.reserve(1);
roots.push_back(node0x58c6910);
dag->setRoot(node0x58c6910);
      }
      break;
    case Codasip::i_itype_loads__opc_lb__xpr_general__simm12__xpr_general__immspec_1_:
      {
SDValue node0x58b0470 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x58a6170 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x58b0470, mpi, MVT::i8, 1);
SDValue node0x58af760 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x58a6170, SDValue());
roots.reserve(1);
roots.push_back(node0x58af760);
dag->setRoot(node0x58af760);
      }
      break;
    case Codasip::i_itype_loads__opc_lb__xpr_general__simm12__xpr_general__immspec_1_AEXT_CLONE_:
      {
SDValue node0x58b0520 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x58a5bb0 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x58b0520, mpi, MVT::i8, 1);
SDValue node0x58a4c90 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x58a5bb0, SDValue());
roots.reserve(1);
roots.push_back(node0x58a4c90);
dag->setRoot(node0x58a4c90);
      }
      break;
    case Codasip::i_itype_loads__opc_lbu__xpr_general__simm12__x_0__AEXT_CLONE_:
      {
SDValue node0x5702c50 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5706320 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x5702c50, mpi, MVT::i8, 1);
SDValue node0x58c74a0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5706320, SDValue());
roots.reserve(1);
roots.push_back(node0x58c74a0);
dag->setRoot(node0x58c74a0);
      }
      break;
    case Codasip::i_itype_loads__opc_lbu__xpr_general__simm12__xpr_general__AEXT_CLONE_:
      {
SDValue node0x5707a90 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5707570 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5707b60 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x5707a90, node0x5707570);
SDValue node0x58c8070 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x5707b60, mpi, MVT::i8, 1);
SDValue node0x58c8100 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x58c8070, SDValue());
roots.reserve(1);
roots.push_back(node0x58c8100);
dag->setRoot(node0x58c8100);
      }
      break;
    case Codasip::i_itype_loads__opc_lbu__xpr_general__simm12__xpr_general__immspec_1_:
      {
SDValue node0x58b0f50 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x58a5060 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x58b0f50, mpi, MVT::i8, 1);
SDValue node0x58af800 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x58a5060, SDValue());
roots.reserve(1);
roots.push_back(node0x58af800);
dag->setRoot(node0x58af800);
      }
      break;
    case Codasip::i_itype_loads__opc_lbu__xpr_general__simm12__xpr_general__immspec_1_AEXT_CLONE_:
      {
SDValue node0x58b1000 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x58a4a30 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x58b1000, mpi, MVT::i8, 1);
SDValue node0x55e4870 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x58a4a30, SDValue());
roots.reserve(1);
roots.push_back(node0x55e4870);
dag->setRoot(node0x55e4870);
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
SDValue node0x57087c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x570bdc0 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x57087c0, mpi, MVT::i16, 1);
SDValue node0x58c8d60 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x570bdc0, SDValue());
roots.reserve(1);
roots.push_back(node0x58c8d60);
dag->setRoot(node0x58c8d60);
      }
      break;
    case Codasip::i_itype_loads__opc_lh__xpr_general__simm12__xpr_general__AEXT_CLONE_:
      {
SDValue node0x570d490 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x570cf70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x570d560 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x570d490, node0x570cf70);
SDValue node0x58c9930 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x570d560, mpi, MVT::i16, 1);
SDValue node0x58c99c0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x58c9930, SDValue());
roots.reserve(1);
roots.push_back(node0x58c99c0);
dag->setRoot(node0x58c99c0);
      }
      break;
    case Codasip::i_itype_loads__opc_lh__xpr_general__simm12__xpr_general__immspec_1_:
      {
SDValue node0x58b2210 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x58b1a60 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x58b2210, mpi, MVT::i16, 1);
SDValue node0x58b0b40 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x58b1a60, SDValue());
roots.reserve(1);
roots.push_back(node0x58b0b40);
dag->setRoot(node0x58b0b40);
      }
      break;
    case Codasip::i_itype_loads__opc_lh__xpr_general__simm12__xpr_general__immspec_1_AEXT_CLONE_:
      {
SDValue node0x58b22c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x58a4470 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x58b22c0, mpi, MVT::i16, 1);
SDValue node0x58acf40 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x58a4470, SDValue());
roots.reserve(1);
roots.push_back(node0x58acf40);
dag->setRoot(node0x58acf40);
      }
      break;
    case Codasip::i_itype_loads__opc_lhu__xpr_general__simm12__x_0__AEXT_CLONE_:
      {
SDValue node0x570e210 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x57118e0 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x570e210, mpi, MVT::i16, 1);
SDValue node0x58ca5f0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x57118e0, SDValue());
roots.reserve(1);
roots.push_back(node0x58ca5f0);
dag->setRoot(node0x58ca5f0);
      }
      break;
    case Codasip::i_itype_loads__opc_lhu__xpr_general__simm12__xpr_general__AEXT_CLONE_:
      {
SDValue node0x5713050 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5712b30 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5713120 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x5713050, node0x5712b30);
SDValue node0x58cb1c0 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x5713120, mpi, MVT::i16, 1);
SDValue node0x58cb250 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x58cb1c0, SDValue());
roots.reserve(1);
roots.push_back(node0x58cb250);
dag->setRoot(node0x58cb250);
      }
      break;
    case Codasip::i_itype_loads__opc_lhu__xpr_general__simm12__xpr_general__immspec_1_:
      {
SDValue node0x58b2cf0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x58a66f0 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x58b2cf0, mpi, MVT::i16, 1);
SDValue node0x58b15d0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x58a66f0, SDValue());
roots.reserve(1);
roots.push_back(node0x58b15d0);
dag->setRoot(node0x58b15d0);
      }
      break;
    case Codasip::i_itype_loads__opc_lhu__xpr_general__simm12__xpr_general__immspec_1_AEXT_CLONE_:
      {
SDValue node0x58a90e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x58a86e0 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x58a90e0, mpi, MVT::i16, 1);
SDValue node0x58ab7c0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x58a86e0, SDValue());
roots.reserve(1);
roots.push_back(node0x58ab7c0);
dag->setRoot(node0x58ab7c0);
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
SDValue node0x58b3fb0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x58b4060 = dag->getLoad(MVT::i32, dl, entry, node0x58b3fb0, mpi, 1);
SDValue node0x58b28e0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x58b4060, SDValue());
roots.reserve(1);
roots.push_back(node0x58b28e0);
dag->setRoot(node0x58b28e0);
      }
      break;
    case Codasip::i_rtype_alu__opc_slt__xpr_general__xpr_general__xpr_general__swappedCmpClone0__:
      {
SDValue node0x58a2560 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x58a26b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x58a2760 = dag->getSetCC(dl, MVT::i32, node0x58a2560, node0x58a26b0, ISD::SETGT);
SDValue node0x58a1bd0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x58a2760, SDValue());
roots.reserve(1);
roots.push_back(node0x58a1bd0);
dag->setRoot(node0x58a1bd0);
      }
      break;
    case Codasip::i_rtype_alu__opc_sltu__xpr_general__xpr_general__xpr_general__swappedCmpClone0__:
      {
SDValue node0x58a3130 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x58a3280 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x58a3330 = dag->getSetCC(dl, MVT::i32, node0x58a3130, node0x58a3280, ISD::SETUGT);
SDValue node0x58a2d50 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x58a3330, SDValue());
roots.reserve(1);
roots.push_back(node0x58a2d50);
dag->setRoot(node0x58a2d50);
      }
      break;
    case Codasip::i_rtype_alu__opc_sra__xpr_general__xpr_general__xpr_general__SHIFT_MASK_CLONE_:
      {
SDValue node0x5713d80 = dag->getConstant(31LL, dl, MVT::i32);
SDValue node0x55defe0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5713fa0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5776890 = dag->getNode(ISD::AND, dl, MVT::i32, node0x5713fa0, node0x5713d80);
SDValue node0x55def50 = dag->getNode(ISD::SRA, dl, MVT::i32, node0x55defe0, node0x5776890);
SDValue node0x58cb4d0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x55def50, SDValue());
roots.reserve(1);
roots.push_back(node0x58cb4d0);
dag->setRoot(node0x58cb4d0);
      }
      break;
    case Codasip::i_rtype_alu__opc_srl__xpr_general__xpr_general__xpr_general__SHIFT_MASK_CLONE_:
      {
SDValue node0x572e210 = dag->getConstant(31LL, dl, MVT::i32);
SDValue node0x55e2580 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x55e2610 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x572e590 = dag->getNode(ISD::AND, dl, MVT::i32, node0x55e2610, node0x572e210);
SDValue node0x5699bd0 = dag->getNode(ISD::SRL, dl, MVT::i32, node0x55e2580, node0x572e590);
SDValue node0x55e26a0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5699bd0, SDValue());
roots.reserve(1);
roots.push_back(node0x55e26a0);
dag->setRoot(node0x55e26a0);
      }
      break;
    case Codasip::i_stype_store__opc_sb__x_0__simm12__xpr_general__immspec_1_:
      {
SDValue node0x58b50e0 = dag->getConstant(0LL, dl, MVT::i8);
SDValue node0x58b52e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x58b5080 = dag->getStore(entry, dl, node0x58b50e0, node0x58b52e0, mpi, 1);
roots.reserve(1);
roots.push_back(node0x58b5080);
dag->setRoot(node0x58b5080);
      }
      break;
    case Codasip::i_stype_store__opc_sb__xpr_general__simm12__xpr_general__immspec_1_:
      {
SDValue node0x58b5a60 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x58b5b10 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x58a83b0 = dag->getTruncStore(entry, dl, node0x58b5a60, node0x58b5b10, mpi, MVT::i8, 1);
roots.reserve(1);
roots.push_back(node0x58a83b0);
dag->setRoot(node0x58a83b0);
      }
      break;
    case Codasip::i_stype_store__opc_sh__x_0__simm12__xpr_general__immspec_1_:
      {
SDValue node0x58b6370 = dag->getConstant(0LL, dl, MVT::i16);
SDValue node0x58b6590 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x58b6310 = dag->getStore(entry, dl, node0x58b6370, node0x58b6590, mpi, 1);
roots.reserve(1);
roots.push_back(node0x58b6310);
dag->setRoot(node0x58b6310);
      }
      break;
    case Codasip::i_stype_store__opc_sh__xpr_general__simm12__xpr_general__immspec_1_:
      {
SDValue node0x58b6d30 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x58b6de0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x58aaf20 = dag->getTruncStore(entry, dl, node0x58b6d30, node0x58b6de0, mpi, MVT::i16, 1);
roots.reserve(1);
roots.push_back(node0x58aaf20);
dag->setRoot(node0x58aaf20);
      }
      break;
    case Codasip::i_stype_store__opc_sw__x_0__simm12__xpr_general__immspec_1_:
      {
SDValue node0x58b75f0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x58b7770 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x58b7590 = dag->getStore(entry, dl, node0x58b75f0, node0x58b7770, mpi, 1);
roots.reserve(1);
roots.push_back(node0x58b7590);
dag->setRoot(node0x58b7590);
      }
      break;
    case Codasip::i_stype_store__opc_sw__xpr_general__simm12__xpr_general__immspec_1_:
      {
SDValue node0x58b7f10 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x58b7fc0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x58b7d50 = dag->getStore(entry, dl, node0x58b7f10, node0x58b7fc0, mpi, 1);
roots.reserve(1);
roots.push_back(node0x58b7d50);
dag->setRoot(node0x58b7d50);
      }
      break;
    case Codasip::i_utype_ops__opc_auipc__xpr_general__uimm20__immspec_1_:
      {
SDValue node0x58b7b70 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x58b87b0 = dag->getConstant(-4LL, dl, MVT::i32);
SDValue node0x58b7be0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x58b7b70, node0x58b87b0);
SDValue node0x58b7370 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x58b7be0, SDValue());
roots.reserve(1);
roots.push_back(node0x58b7370);
dag->setRoot(node0x58b7370);
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
SDValue node0x589bd80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x589b500 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x589bd80, SDValue());
roots.reserve(1);
roots.push_back(node0x589b500);
dag->setRoot(node0x589b500);
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
SDValue node0x55ffba0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x55ffc20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5600560 = dag->getTruncStore(entry, dl, node0x55ffba0, node0x55ffc20, mpi, MVT::i8, 1);
roots.reserve(1);
roots.push_back(node0x5600560);
dag->setRoot(node0x5600560);
      }
      break;
    case Codasip::i_stype_store__opc_sb__x_0__simm12__xpr_general__i32_TRUNC_CLONE_:
      {
SDValue node0x55ffaa0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x55ff980 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x55ffb20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x55fbff0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x55ff980, node0x55ffb20);
SDValue node0x5600f00 = dag->getTruncStore(entry, dl, node0x55ffaa0, node0x55fbff0, mpi, MVT::i8, 1);
roots.reserve(1);
roots.push_back(node0x5600f00);
dag->setRoot(node0x5600f00);
      }
      break;
    case Codasip::i_stype_store__opc_sh__x_0__simm12__x_0__i32_TRUNC_CLONE_:
      {
SDValue node0x55ffca0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x5601540 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5601890 = dag->getTruncStore(entry, dl, node0x55ffca0, node0x5601540, mpi, MVT::i16, 1);
roots.reserve(1);
roots.push_back(node0x5601890);
dag->setRoot(node0x5601890);
      }
      break;
    case Codasip::i_stype_store__opc_sh__x_0__simm12__xpr_general__i32_TRUNC_CLONE_:
      {
SDValue node0x5601ed0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x55ff330 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5601f50 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x55fcfb0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x55ff330, node0x5601f50);
SDValue node0x5602330 = dag->getTruncStore(entry, dl, node0x5601ed0, node0x55fcfb0, mpi, MVT::i16, 1);
roots.reserve(1);
roots.push_back(node0x5602330);
dag->setRoot(node0x5602330);
      }
      break;
    case Codasip::i_stype_store__opc_sb__x_0__simm12__xpr_general__immspec_1_i32_TRUNC_CLONE_:
      {
SDValue node0x56026c0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x55ff8f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x56028b0 = dag->getTruncStore(entry, dl, node0x56026c0, node0x55ff8f0, mpi, MVT::i8, 1);
roots.reserve(1);
roots.push_back(node0x56028b0);
dag->setRoot(node0x56028b0);
      }
      break;
    case Codasip::i_stype_store__opc_sh__x_0__simm12__xpr_general__immspec_1_i32_TRUNC_CLONE_:
      {
SDValue node0x5602ca0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x55ffa10 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5602ec0 = dag->getTruncStore(entry, dl, node0x5602ca0, node0x55ffa10, mpi, MVT::i16, 1);
roots.reserve(1);
roots.push_back(node0x5602ec0);
dag->setRoot(node0x5602ec0);
      }
      break;
    case Codasip::i_stype_store__opc_sw__xpr_general__simm12__xpr_general__0_REG_EMUL_:
      {
SDValue node0x5603cb0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5603640 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x56049f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5609b40 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x5603640, node0x56049f0);
SDValue node0x5602f20 = dag->getStore(entry, dl, node0x5603cb0, node0x5609b40, mpi, 1);
roots.reserve(1);
roots.push_back(node0x5602f20);
dag->setRoot(node0x5602f20);
      }
      break;
    case Codasip::i_stype_store__opc_sw__xpr_general__simm12__xpr_general__1_BIGIMM_EMUL_:
      {
SDValue node0x5604ab0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5609d70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5608ad0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5609e00 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x5609d70, node0x5608ad0);
SDValue node0x5608c60 = dag->getStore(entry, dl, node0x5604ab0, node0x5609e00, mpi, 1);
roots.reserve(1);
roots.push_back(node0x5608c60);
dag->setRoot(node0x5608c60);
      }
      break;
    case Codasip::i_itype_loads__opc_lw__xpr_general__simm12__xpr_general__2_REG_EMUL_:
      {
SDValue node0x5605390 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5609910 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5606c30 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x5605390, node0x5609910);
SDValue node0x5605300 = dag->getLoad(MVT::i32, dl, entry, node0x5606c30, mpi, 1);
SDValue node0x56068b0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5605300, SDValue());
roots.reserve(1);
roots.push_back(node0x56068b0);
dag->setRoot(node0x56068b0);
      }
      break;
    case Codasip::i_itype_loads__opc_lw__xpr_general__simm12__xpr_general__3_BIGIMM_EMUL_:
      {
SDValue node0x5609e70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x560a8c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5608610 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x5609e70, node0x560a8c0);
SDValue node0x5609fe0 = dag->getLoad(MVT::i32, dl, entry, node0x5608610, mpi, 1);
SDValue node0x560a9c0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5609fe0, SDValue());
roots.reserve(1);
roots.push_back(node0x560a9c0);
dag->setRoot(node0x560a9c0);
      }
      break;
    case Codasip::i_stype_store__opc_sw__xpr_general__simm12__xpr_general__4_BIGIMM_EMUL_:
      {
SDValue node0x56092b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x560baf0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x560bfb0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x56086f0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x560baf0, node0x560bfb0);
SDValue node0x56036d0 = dag->getStore(entry, dl, node0x56092b0, node0x56086f0, mpi, 1);
roots.reserve(1);
roots.push_back(node0x56036d0);
dag->setRoot(node0x56036d0);
      }
      break;
    case Codasip::i_itype_loads__opc_lw__xpr_general__simm12__xpr_general__5_BIGIMM_EMUL_:
      {
SDValue node0x5608760 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x560cdd0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x56070f0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x5608760, node0x560cdd0);
SDValue node0x560c7f0 = dag->getLoad(MVT::i32, dl, entry, node0x56070f0, mpi, 1);
SDValue node0x560ceb0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x560c7f0, SDValue());
roots.reserve(1);
roots.push_back(node0x560ceb0);
dag->setRoot(node0x560ceb0);
      }
      break;
    case Codasip::i_itype_alu__opc_addi__xpr_general__xpr_general__simm12__6_BIGIMM_EMUL_:
      {
SDValue node0x5607b20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x560dc80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5609850 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x5607b20, node0x560dc80);
SDValue node0x560dd40 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5609850, SDValue());
roots.reserve(1);
roots.push_back(node0x560dd40);
dag->setRoot(node0x560dd40);
      }
      break;
    case Codasip::i_itype_alu__opc_addi__xpr_general__xpr_general__simm12__7_BIGIMM_EMUL_:
      {
SDValue node0x560bb80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x560ea40 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5609440 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x560bb80, node0x560ea40);
SDValue node0x560eb00 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5609440, SDValue());
roots.reserve(1);
roots.push_back(node0x560eb00);
dag->setRoot(node0x560eb00);
      }
      break;
    case Codasip::i_itype_alu__opc_addi__xpr_general__xpr_general__simm12__8_BIGIMM_EMUL_:
      {
SDValue node0x560e360 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x560f800 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x56091d0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x560e360, node0x560f800);
SDValue node0x560f8c0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x56091d0, SDValue());
roots.reserve(1);
roots.push_back(node0x560f8c0);
dag->setRoot(node0x560f8c0);
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
SDValue node0x55d8500 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x55d88d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x58ed650 = dag->getCopyToReg(entry, dl, dag->getRegister(Codasip::rf_xpr_1, MVT::i32), node0x55d8500, SDValue());
SDValue node0x55d8b80 = dag->getNode(ISD::BRIND, dl, MVT::Other, node0x58ed650, node0x55d88d0);
roots.reserve(2);
roots.push_back(node0x58ed650);
roots.push_back(node0x55d8b80);
dag->setRoot(node0x55d8b80);
      }
      break;
    case Codasip::i_itype_jlreg__opc_jalr__x_0__simm12__xpr_general__:
      {
SDValue node0x56f91a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x56f9440 = dag->getNode(ISD::BRIND, dl, MVT::Other, entry, node0x56f91a0);
roots.reserve(1);
roots.push_back(node0x56f9440);
dag->setRoot(node0x56f9440);
      }
      break;
    case Codasip::i_itype_jlreg__opc_jalr__xpr_general__simm12__xpr_general__:
      {
SDValue node0x56fbe70 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x56fbdf0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x56fbe70, SDValue());
SDValue node0x56fc370 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x56fc610 = dag->getNode(ISD::BRIND, dl, MVT::Other, node0x56fbdf0, node0x56fc370);
roots.reserve(2);
roots.push_back(node0x56fbdf0);
roots.push_back(node0x56fc610);
dag->setRoot(node0x56fc610);
      }
      break;
    case Codasip::i_utype_ops__opc_lui__xpr_general__uimm20__SYNTAX_CLONE_e_movi32__1_:
      {
SDValue node0x573b850 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x55e2f50 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x573b850, SDValue());
roots.reserve(1);
roots.push_back(node0x55e2f50);
dag->setRoot(node0x55e2f50);
      }
      break;
    case Codasip::i_utype_ops__opc_lui__xpr_general__uimm20__SYNTAX_CLONE_e_movi32__2_:
      {
SDValue node0x5713d00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x55e36f0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5713d00, SDValue());
roots.reserve(1);
roots.push_back(node0x55e36f0);
dag->setRoot(node0x55e36f0);
      }
      break;
    case Codasip::i_utype_ops__opc_lui__xpr_general__uimm20__SYNTAX_CLONE_e_movi32__5_:
      {
SDValue node0x58e3030 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x55e3ea0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x58e3030, SDValue());
roots.reserve(1);
roots.push_back(node0x55e3ea0);
dag->setRoot(node0x55e3ea0);
      }
      break;
    case Codasip::i_utype_ops__opc_lui__xpr_general__uimm20__SYNTAX_CLONE_e_movi32__6_:
      {
SDValue node0x56997b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x55e4650 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x56997b0, SDValue());
roots.reserve(1);
roots.push_back(node0x55e4650);
dag->setRoot(node0x55e4650);
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
