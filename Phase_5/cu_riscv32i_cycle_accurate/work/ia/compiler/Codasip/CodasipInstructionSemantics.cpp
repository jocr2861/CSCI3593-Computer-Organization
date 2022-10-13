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
 * \date    2022-10-11
 * \author  Codasip (c) C compiler backend generator
 * \version 9.1.1-1255
 * \brief   Source for compiler backend
 * \project cu_riscv32i_cycle_accurate.ia
 * \note          Codasip Studio version: 9.1.1-1255
 *                Licensee: Lockular Limited  (C60_2111_2104)
 *                Project: cu_riscv32i_cycle_accurate.ia
 *                Date: 2022-10-11 05:14:18
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
SDValue node0x566fe50 = dag->getRegister(Codasip::rf_xpr_1, MVT::i32);
SDValue node0x566fba0 = dag->getNode(ISD::BRIND, dl, MVT::Other, entry, node0x566fe50);
roots.reserve(1);
roots.push_back(node0x566fba0);
dag->setRoot(node0x566fba0);
      } else       {
dag->setRoot(entry);
      }
      break;
    case Codasip::i_call_reg_alias__simm12__xpr_general__immspec_1_:
      if (lowlevel) {
SDValue node0x5799990 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x5799cc0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5798250 = dag->getCopyToReg(entry, dl, dag->getRegister(Codasip::rf_xpr_1, MVT::i32), node0x5799990, SDValue());
SDValue node0x57998e0 = dag->getNode(ISD::BRIND, dl, MVT::Other, node0x5798250, node0x5799cc0);
roots.reserve(2);
roots.push_back(node0x5798250);
roots.push_back(node0x57998e0);
dag->setRoot(node0x57998e0);
      } else       {
dag->setRoot(entry);
      }
      break;
    case Codasip::i_itype_jlreg__opc_jalr__x_0__simm12__xpr_general__immspec_1_:
      {
SDValue node0x579a730 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x579a2e0 = dag->getNode(ISD::BRIND, dl, MVT::Other, entry, node0x579a730);
roots.reserve(1);
roots.push_back(node0x579a2e0);
dag->setRoot(node0x579a2e0);
      }
      break;
    case Codasip::i_itype_jlreg__opc_jalr__xpr_general__simm12__xpr_general__immspec_1_:
      {
SDValue node0x579ac00 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x5798e10 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x579ac00, SDValue());
SDValue node0x579b1a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x579b270 = dag->getNode(ISD::BRIND, dl, MVT::Other, node0x5798e10, node0x579b1a0);
roots.reserve(2);
roots.push_back(node0x5798e10);
roots.push_back(node0x579b270);
dag->setRoot(node0x579b270);
      }
      break;
    case Codasip::i_call_alias__relative_addr20__:
case Codasip::i_call_alias__relative_addr20__ES:
case Codasip::i_call_alias__relative_addr20__MC:
case Codasip::i_call_alias__relative_addr20__BA:
      if (lowlevel) {
SDValue node0x54c28b0 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x54c1e70 = dag->getCopyToReg(entry, dl, dag->getRegister(Codasip::rf_xpr_1, MVT::i32), node0x54c28b0, SDValue());
SDValue node0x54c2cc0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x54c2ee0 = dag->getNode(ISD::BR, dl, MVT::Other, node0x54c1e70, node0x54c2cc0);
roots.reserve(2);
roots.push_back(node0x54c1e70);
roots.push_back(node0x54c2ee0);
dag->setRoot(node0x54c2ee0);
      } else       {
dag->setRoot(entry);
      }
      break;
    case Codasip::i_jal_abs_calias__opc_jal__x_0__relative_addr20__:
      {
SDValue node0x56601c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x565fe70 = dag->getNode(ISD::BR, dl, MVT::Other, entry, node0x56601c0);
roots.reserve(1);
roots.push_back(node0x565fe70);
dag->setRoot(node0x565fe70);
      }
      break;
    case Codasip::i_jal_abs_calias__opc_jal__xpr_general__relative_addr20__:
      {
SDValue node0x56609b0 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x565efc0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x56609b0, SDValue());
SDValue node0x5660d20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x5660980 = dag->getNode(ISD::BR, dl, MVT::Other, node0x565efc0, node0x5660d20);
roots.reserve(2);
roots.push_back(node0x565efc0);
roots.push_back(node0x5660980);
dag->setRoot(node0x5660980);
      }
      break;
    case Codasip::i_jtype_jlink__opc_jal__x_0__relative_addr20__:
      {
SDValue node0x5662770 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x5662930 = dag->getNode(ISD::BR, dl, MVT::Other, entry, node0x5662770);
roots.reserve(1);
roots.push_back(node0x5662930);
dag->setRoot(node0x5662930);
      }
      break;
    case Codasip::i_jtype_jlink__opc_jal__xpr_general__relative_addr20__:
      {
SDValue node0x5663580 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x5662a50 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5663580, SDValue());
SDValue node0x5663990 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x5663b80 = dag->getNode(ISD::BR, dl, MVT::Other, node0x5662a50, node0x5663990);
roots.reserve(2);
roots.push_back(node0x5662a50);
roots.push_back(node0x5663b80);
dag->setRoot(node0x5663b80);
      }
      break;
    case Codasip::i_btype_branches__opc_beq__x_0__x_0__relative_addr12__:
      {
SDValue node0x55cc600 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x549c5c0 = dag->getNode(ISD::BR, dl, MVT::Other, entry, node0x55cc600);
roots.reserve(1);
roots.push_back(node0x549c5c0);
dag->setRoot(node0x549c5c0);
      }
      break;
    case Codasip::i_btype_branches__opc_beq__x_0__xpr_general__relative_addr12__:
      if (lowlevel) {
SDValue node0x54aab20 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x5488500 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x54aacc0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x54aad60 = dag->getSetCC(dl, MVT::iAny, node0x5488500, node0x54aab20, ISD::SETEQ);
SDValue node0x54aaed0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x54aad60, node0x54aacc0);
roots.reserve(1);
roots.push_back(node0x54aaed0);
dag->setRoot(node0x54aaed0);
      } else       {
SDValue node0x54aab20 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x5488500 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x54aacc0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x54aad60 = dag->getSetCC(dl, MVT::i32, node0x5488500, node0x54aab20, ISD::SETEQ);
SDValue node0x54aaed0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x54aad60, node0x54aacc0);
roots.reserve(1);
roots.push_back(node0x54aaed0);
dag->setRoot(node0x54aaed0);
      }
      break;
    case Codasip::i_btype_branches__opc_beq__xpr_general__x_0__relative_addr12__:
      if (lowlevel) {
SDValue node0x55a19f0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x57c9bd0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x55a1b90 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x55a1c30 = dag->getSetCC(dl, MVT::iAny, node0x57c9bd0, node0x55a19f0, ISD::SETEQ);
SDValue node0x55a1e80 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x55a1c30, node0x55a1b90);
roots.reserve(1);
roots.push_back(node0x55a1e80);
dag->setRoot(node0x55a1e80);
      } else       {
SDValue node0x55a19f0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x57c9bd0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x55a1b90 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x55a1c30 = dag->getSetCC(dl, MVT::i32, node0x57c9bd0, node0x55a19f0, ISD::SETEQ);
SDValue node0x55a1e80 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x55a1c30, node0x55a1b90);
roots.reserve(1);
roots.push_back(node0x55a1e80);
dag->setRoot(node0x55a1e80);
      }
      break;
    case Codasip::i_btype_branches__opc_beq__xpr_general__xpr_general__relative_addr12__:
      if (lowlevel) {
SDValue node0x5479160 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5483fa0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x55a35c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x55a3660 = dag->getSetCC(dl, MVT::iAny, node0x5483fa0, node0x5479160, ISD::SETEQ);
SDValue node0x55a38b0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x55a3660, node0x55a35c0);
roots.reserve(1);
roots.push_back(node0x55a38b0);
dag->setRoot(node0x55a38b0);
      } else       {
SDValue node0x5479160 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5483fa0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x55a35c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x55a3660 = dag->getSetCC(dl, MVT::i32, node0x5483fa0, node0x5479160, ISD::SETEQ);
SDValue node0x55a38b0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x55a3660, node0x55a35c0);
roots.reserve(1);
roots.push_back(node0x55a38b0);
dag->setRoot(node0x55a38b0);
      }
      break;
    case Codasip::i_btype_branches__opc_bge__x_0__x_0__relative_addr12__:
      {
SDValue node0x55864b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x55866d0 = dag->getNode(ISD::BR, dl, MVT::Other, entry, node0x55864b0);
roots.reserve(1);
roots.push_back(node0x55866d0);
dag->setRoot(node0x55866d0);
      }
      break;
    case Codasip::i_btype_branches__opc_bge__x_0__xpr_general__relative_addr12__:
      if (lowlevel) {
SDValue node0x5587560 = dag->getConstant(1LL, dl, MVT::i32);
SDValue node0x558ed50 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x55878e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x5587980 = dag->getSetCC(dl, MVT::iAny, node0x558ed50, node0x5587560, ISD::SETLT);
SDValue node0x5587bd0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x5587980, node0x55878e0);
roots.reserve(1);
roots.push_back(node0x5587bd0);
dag->setRoot(node0x5587bd0);
      } else       {
SDValue node0x5587560 = dag->getConstant(1LL, dl, MVT::i32);
SDValue node0x558ed50 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x55878e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x5587980 = dag->getSetCC(dl, MVT::i32, node0x558ed50, node0x5587560, ISD::SETLT);
SDValue node0x5587bd0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x5587980, node0x55878e0);
roots.reserve(1);
roots.push_back(node0x5587bd0);
dag->setRoot(node0x5587bd0);
      }
      break;
    case Codasip::i_btype_branches__opc_bge__xpr_general__x_0__relative_addr12__:
      if (lowlevel) {
SDValue node0x57da8e0 = dag->getConstant(-1LL, dl, MVT::i32);
SDValue node0x558f3c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x57da9e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x57daa80 = dag->getSetCC(dl, MVT::iAny, node0x558f3c0, node0x57da8e0, ISD::SETGT);
SDValue node0x57dacd0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x57daa80, node0x57da9e0);
roots.reserve(1);
roots.push_back(node0x57dacd0);
dag->setRoot(node0x57dacd0);
      } else       {
SDValue node0x57da8e0 = dag->getConstant(-1LL, dl, MVT::i32);
SDValue node0x558f3c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x57da9e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x57daa80 = dag->getSetCC(dl, MVT::i32, node0x558f3c0, node0x57da8e0, ISD::SETGT);
SDValue node0x57dacd0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x57daa80, node0x57da9e0);
roots.reserve(1);
roots.push_back(node0x57dacd0);
dag->setRoot(node0x57dacd0);
      }
      break;
    case Codasip::i_btype_branches__opc_bge__xpr_general__xpr_general__relative_addr12__:
      if (lowlevel) {
SDValue node0x558fe00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x57dc3f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x57dc4a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x57dc540 = dag->getSetCC(dl, MVT::iAny, node0x57dc3f0, node0x558fe00, ISD::SETGE);
SDValue node0x57dc790 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x57dc540, node0x57dc4a0);
roots.reserve(1);
roots.push_back(node0x57dc790);
dag->setRoot(node0x57dc790);
      } else       {
SDValue node0x558fe00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x57dc3f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x57dc4a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x57dc540 = dag->getSetCC(dl, MVT::i32, node0x57dc3f0, node0x558fe00, ISD::SETGE);
SDValue node0x57dc790 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x57dc540, node0x57dc4a0);
roots.reserve(1);
roots.push_back(node0x57dc790);
dag->setRoot(node0x57dc790);
      }
      break;
    case Codasip::i_btype_branches__opc_bgeu__x_0__x_0__relative_addr12__:
      {
SDValue node0x57dd6c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x5589670 = dag->getNode(ISD::BR, dl, MVT::Other, entry, node0x57dd6c0);
roots.reserve(1);
roots.push_back(node0x5589670);
dag->setRoot(node0x5589670);
      }
      break;
    case Codasip::i_btype_branches__opc_bgeu__x_0__xpr_general__relative_addr12__:
      if (lowlevel) {
SDValue node0x5583070 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x55831f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x55832a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x5583340 = dag->getSetCC(dl, MVT::iAny, node0x55831f0, node0x5583070, ISD::SETEQ);
SDValue node0x5583590 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x5583340, node0x55832a0);
roots.reserve(1);
roots.push_back(node0x5583590);
dag->setRoot(node0x5583590);
      } else       {
SDValue node0x5583070 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x55831f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x55832a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x5583340 = dag->getSetCC(dl, MVT::i32, node0x55831f0, node0x5583070, ISD::SETEQ);
SDValue node0x5583590 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x5583340, node0x55832a0);
roots.reserve(1);
roots.push_back(node0x5583590);
dag->setRoot(node0x5583590);
      }
      break;
    case Codasip::i_btype_branches__opc_bgeu__xpr_general__xpr_general__relative_addr12__:
      if (lowlevel) {
SDValue node0x57cf440 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x57cf4f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x57cf5a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x57cf640 = dag->getSetCC(dl, MVT::iAny, node0x57cf4f0, node0x57cf440, ISD::SETUGE);
SDValue node0x57cf890 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x57cf640, node0x57cf5a0);
roots.reserve(1);
roots.push_back(node0x57cf890);
dag->setRoot(node0x57cf890);
      } else       {
SDValue node0x57cf440 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x57cf4f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x57cf5a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x57cf640 = dag->getSetCC(dl, MVT::i32, node0x57cf4f0, node0x57cf440, ISD::SETUGE);
SDValue node0x57cf890 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x57cf640, node0x57cf5a0);
roots.reserve(1);
roots.push_back(node0x57cf890);
dag->setRoot(node0x57cf890);
      }
      break;
    case Codasip::i_btype_branches__opc_blt__x_0__xpr_general__relative_addr12__:
      if (lowlevel) {
SDValue node0x57d1450 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x57d15d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x57d1680 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x57d1720 = dag->getSetCC(dl, MVT::iAny, node0x57d15d0, node0x57d1450, ISD::SETGT);
SDValue node0x57d1970 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x57d1720, node0x57d1680);
roots.reserve(1);
roots.push_back(node0x57d1970);
dag->setRoot(node0x57d1970);
      } else       {
SDValue node0x57d1450 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x57d15d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x57d1680 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x57d1720 = dag->getSetCC(dl, MVT::i32, node0x57d15d0, node0x57d1450, ISD::SETGT);
SDValue node0x57d1970 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x57d1720, node0x57d1680);
roots.reserve(1);
roots.push_back(node0x57d1970);
dag->setRoot(node0x57d1970);
      }
      break;
    case Codasip::i_btype_branches__opc_blt__xpr_general__x_0__relative_addr12__:
      if (lowlevel) {
SDValue node0x57dfb00 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x57dfc80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x57dfd30 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x57dfdd0 = dag->getSetCC(dl, MVT::iAny, node0x57dfc80, node0x57dfb00, ISD::SETLT);
SDValue node0x57e0020 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x57dfdd0, node0x57dfd30);
roots.reserve(1);
roots.push_back(node0x57e0020);
dag->setRoot(node0x57e0020);
      } else       {
SDValue node0x57dfb00 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x57dfc80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x57dfd30 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x57dfdd0 = dag->getSetCC(dl, MVT::i32, node0x57dfc80, node0x57dfb00, ISD::SETLT);
SDValue node0x57e0020 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x57dfdd0, node0x57dfd30);
roots.reserve(1);
roots.push_back(node0x57e0020);
dag->setRoot(node0x57e0020);
      }
      break;
    case Codasip::i_btype_branches__opc_blt__xpr_general__xpr_general__relative_addr12__:
      if (lowlevel) {
SDValue node0x57e1720 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x57e17d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x57e1880 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x57e1920 = dag->getSetCC(dl, MVT::iAny, node0x57e17d0, node0x57e1720, ISD::SETLT);
SDValue node0x57e1b70 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x57e1920, node0x57e1880);
roots.reserve(1);
roots.push_back(node0x57e1b70);
dag->setRoot(node0x57e1b70);
      } else       {
SDValue node0x57e1720 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x57e17d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x57e1880 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x57e1920 = dag->getSetCC(dl, MVT::i32, node0x57e17d0, node0x57e1720, ISD::SETLT);
SDValue node0x57e1b70 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x57e1920, node0x57e1880);
roots.reserve(1);
roots.push_back(node0x57e1b70);
dag->setRoot(node0x57e1b70);
      }
      break;
    case Codasip::i_btype_branches__opc_bltu__x_0__xpr_general__relative_addr12__:
      if (lowlevel) {
SDValue node0x57e36e0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x57e3860 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x57e3910 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x57e39b0 = dag->getSetCC(dl, MVT::iAny, node0x57e3860, node0x57e36e0, ISD::SETNE);
SDValue node0x57e3c00 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x57e39b0, node0x57e3910);
roots.reserve(1);
roots.push_back(node0x57e3c00);
dag->setRoot(node0x57e3c00);
      } else       {
SDValue node0x57e36e0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x57e3860 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x57e3910 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x57e39b0 = dag->getSetCC(dl, MVT::i32, node0x57e3860, node0x57e36e0, ISD::SETNE);
SDValue node0x57e3c00 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x57e39b0, node0x57e3910);
roots.reserve(1);
roots.push_back(node0x57e3c00);
dag->setRoot(node0x57e3c00);
      }
      break;
    case Codasip::i_btype_branches__opc_bltu__xpr_general__xpr_general__relative_addr12__:
      if (lowlevel) {
SDValue node0x57d4620 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x57d46d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x57d4780 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x57d4820 = dag->getSetCC(dl, MVT::iAny, node0x57d46d0, node0x57d4620, ISD::SETULT);
SDValue node0x57d4a70 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x57d4820, node0x57d4780);
roots.reserve(1);
roots.push_back(node0x57d4a70);
dag->setRoot(node0x57d4a70);
      } else       {
SDValue node0x57d4620 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x57d46d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x57d4780 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x57d4820 = dag->getSetCC(dl, MVT::i32, node0x57d46d0, node0x57d4620, ISD::SETULT);
SDValue node0x57d4a70 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x57d4820, node0x57d4780);
roots.reserve(1);
roots.push_back(node0x57d4a70);
dag->setRoot(node0x57d4a70);
      }
      break;
    case Codasip::i_btype_branches__opc_bne__x_0__xpr_general__relative_addr12__:
      if (lowlevel) {
SDValue node0x57d6630 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x57d67b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x57d6860 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x57d6900 = dag->getSetCC(dl, MVT::iAny, node0x57d67b0, node0x57d6630, ISD::SETNE);
SDValue node0x57d6b50 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x57d6900, node0x57d6860);
roots.reserve(1);
roots.push_back(node0x57d6b50);
dag->setRoot(node0x57d6b50);
      } else       {
SDValue node0x57d6630 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x57d67b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x57d6860 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x57d6900 = dag->getSetCC(dl, MVT::i32, node0x57d67b0, node0x57d6630, ISD::SETNE);
SDValue node0x57d6b50 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x57d6900, node0x57d6860);
roots.reserve(1);
roots.push_back(node0x57d6b50);
dag->setRoot(node0x57d6b50);
      }
      break;
    case Codasip::i_btype_branches__opc_bne__xpr_general__x_0__relative_addr12__:
      if (lowlevel) {
SDValue node0x57d9020 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x57d91a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x57d9250 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x57d92f0 = dag->getSetCC(dl, MVT::iAny, node0x57d91a0, node0x57d9020, ISD::SETNE);
SDValue node0x57d9540 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x57d92f0, node0x57d9250);
roots.reserve(1);
roots.push_back(node0x57d9540);
dag->setRoot(node0x57d9540);
      } else       {
SDValue node0x57d9020 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x57d91a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x57d9250 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x57d92f0 = dag->getSetCC(dl, MVT::i32, node0x57d91a0, node0x57d9020, ISD::SETNE);
SDValue node0x57d9540 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x57d92f0, node0x57d9250);
roots.reserve(1);
roots.push_back(node0x57d9540);
dag->setRoot(node0x57d9540);
      }
      break;
    case Codasip::i_btype_branches__opc_bne__xpr_general__xpr_general__relative_addr12__:
      if (lowlevel) {
SDValue node0x54c1950 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x54c1a00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x54c1ab0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x54c1b50 = dag->getSetCC(dl, MVT::iAny, node0x54c1a00, node0x54c1950, ISD::SETNE);
SDValue node0x54c1da0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x54c1b50, node0x54c1ab0);
roots.reserve(1);
roots.push_back(node0x54c1da0);
dag->setRoot(node0x54c1da0);
      } else       {
SDValue node0x54c1950 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x54c1a00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x54c1ab0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x54c1b50 = dag->getSetCC(dl, MVT::i32, node0x54c1a00, node0x54c1950, ISD::SETNE);
SDValue node0x54c1da0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x54c1b50, node0x54c1ab0);
roots.reserve(1);
roots.push_back(node0x54c1da0);
dag->setRoot(node0x54c1da0);
      }
      break;
    case Codasip::i_btype_branches__opc_bge__xpr_general__xpr_general__relative_addr12__swappedCmpClone0__:
      if (lowlevel) {
SDValue node0x57891d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x57882b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5789370 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5789420 = dag->getSetCC(dl, MVT::iAny, node0x57882b0, node0x5789370, ISD::SETLE);
SDValue node0x57894f0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x5789420, node0x57891d0);
roots.reserve(1);
roots.push_back(node0x57894f0);
dag->setRoot(node0x57894f0);
      } else       {
SDValue node0x57891d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x57882b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5789370 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5789420 = dag->getSetCC(dl, MVT::i32, node0x57882b0, node0x5789370, ISD::SETLE);
SDValue node0x57894f0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x5789420, node0x57891d0);
roots.reserve(1);
roots.push_back(node0x57894f0);
dag->setRoot(node0x57894f0);
      }
      break;
    case Codasip::i_btype_branches__opc_bgeu__xpr_general__xpr_general__relative_addr12__swappedCmpClone0__:
      if (lowlevel) {
SDValue node0x5789e80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x578a110 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x578a1c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x578a270 = dag->getSetCC(dl, MVT::iAny, node0x578a110, node0x578a1c0, ISD::SETULE);
SDValue node0x578a340 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x578a270, node0x5789e80);
roots.reserve(1);
roots.push_back(node0x578a340);
dag->setRoot(node0x578a340);
      } else       {
SDValue node0x5789e80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x578a110 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x578a1c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x578a270 = dag->getSetCC(dl, MVT::i32, node0x578a110, node0x578a1c0, ISD::SETULE);
SDValue node0x578a340 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x578a270, node0x5789e80);
roots.reserve(1);
roots.push_back(node0x578a340);
dag->setRoot(node0x578a340);
      }
      break;
    case Codasip::i_btype_branches__opc_blt__xpr_general__xpr_general__relative_addr12__swappedCmpClone0__:
      if (lowlevel) {
SDValue node0x578acd0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x578af60 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x578b010 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x578b0c0 = dag->getSetCC(dl, MVT::iAny, node0x578af60, node0x578b010, ISD::SETGT);
SDValue node0x578b190 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x578b0c0, node0x578acd0);
roots.reserve(1);
roots.push_back(node0x578b190);
dag->setRoot(node0x578b190);
      } else       {
SDValue node0x578acd0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x578af60 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x578b010 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x578b0c0 = dag->getSetCC(dl, MVT::i32, node0x578af60, node0x578b010, ISD::SETGT);
SDValue node0x578b190 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x578b0c0, node0x578acd0);
roots.reserve(1);
roots.push_back(node0x578b190);
dag->setRoot(node0x578b190);
      }
      break;
    case Codasip::i_btype_branches__opc_bltu__xpr_general__xpr_general__relative_addr12__swappedCmpClone0__:
      if (lowlevel) {
SDValue node0x578bbc0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x578be50 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x578bf00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x578bfb0 = dag->getSetCC(dl, MVT::iAny, node0x578be50, node0x578bf00, ISD::SETUGT);
SDValue node0x578c080 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x578bfb0, node0x578bbc0);
roots.reserve(1);
roots.push_back(node0x578c080);
dag->setRoot(node0x578c080);
      } else       {
SDValue node0x578bbc0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x578be50 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x578bf00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x578bfb0 = dag->getSetCC(dl, MVT::i32, node0x578be50, node0x578bf00, ISD::SETUGT);
SDValue node0x578c080 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x578bfb0, node0x578bbc0);
roots.reserve(1);
roots.push_back(node0x578c080);
dag->setRoot(node0x578c080);
      }
      break;
    case Codasip::i_call_reg_alias__simm12__x_0__:
case Codasip::i_call_reg_alias__simm12__x_0__ES:
case Codasip::i_call_reg_alias__simm12__x_0__MC:
case Codasip::i_call_reg_alias__simm12__x_0__BA:
      if (lowlevel) {
SDValue node0x54c34f0 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x54c1ec0 = dag->getCopyToReg(entry, dl, dag->getRegister(Codasip::rf_xpr_1, MVT::i32), node0x54c34f0, SDValue());
SDValue node0x54c3900 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x54c3470 = dag->getNode(ISD::BR, dl, MVT::Other, node0x54c1ec0, node0x54c3900);
roots.reserve(2);
roots.push_back(node0x54c1ec0);
roots.push_back(node0x54c3470);
dag->setRoot(node0x54c3470);
      } else       {
dag->setRoot(entry);
      }
      break;
    case Codasip::i_itype_jlreg__opc_jalr__x_0__simm12__x_0__:
      {
SDValue node0x55e4460 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x55e4190 = dag->getNode(ISD::BR, dl, MVT::Other, entry, node0x55e4460);
roots.reserve(1);
roots.push_back(node0x55e4190);
dag->setRoot(node0x55e4190);
      }
      break;
    case Codasip::i_itype_jlreg__opc_jalr__xpr_general__simm12__x_0__:
      {
SDValue node0x55e6b70 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x55e6920 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x55e6b70, SDValue());
SDValue node0x55e6ee0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x55e6b40 = dag->getNode(ISD::BR, dl, MVT::Other, node0x55e6920, node0x55e6ee0);
roots.reserve(2);
roots.push_back(node0x55e6920);
roots.push_back(node0x55e6b40);
dag->setRoot(node0x55e6b40);
      }
      break;
    case Codasip::i_itype_alu__opc_addi__xpr_general__x_0__simm12__:
      {
SDValue node0x54c83d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x54c1f10 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x54c83d0, SDValue());
roots.reserve(1);
roots.push_back(node0x54c1f10);
dag->setRoot(node0x54c1f10);
      }
      break;
    case Codasip::i_itype_alu__opc_addi__xpr_general__xpr_general__simm12__:
      {
SDValue node0x54c95a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x54c9650 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x54c96f0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x54c95a0, node0x54c9650);
SDValue node0x54c8500 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x54c96f0, SDValue());
roots.reserve(1);
roots.push_back(node0x54c8500);
dag->setRoot(node0x54c8500);
      }
      break;
    case Codasip::i_itype_alu__opc_andi__xpr_general__xpr_general__simm12__:
      {
SDValue node0x55d01d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x55d0280 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x55d0320 = dag->getNode(ISD::AND, dl, MVT::i32, node0x55d01d0, node0x55d0280);
SDValue node0x55cf060 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x55d0320, SDValue());
roots.reserve(1);
roots.push_back(node0x55cf060);
dag->setRoot(node0x55cf060);
      }
      break;
    case Codasip::i_itype_alu__opc_ori__xpr_general__x_0__simm12__:
      {
SDValue node0x55d3a10 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x55d0440 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x55d3a10, SDValue());
roots.reserve(1);
roots.push_back(node0x55d0440);
dag->setRoot(node0x55d0440);
      }
      break;
    case Codasip::i_itype_alu__opc_ori__xpr_general__xpr_general__simm12__:
      {
SDValue node0x55d4d80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x55d4e30 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x55d4ed0 = dag->getNode(ISD::OR, dl, MVT::i32, node0x55d4d80, node0x55d4e30);
SDValue node0x55d3b40 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x55d4ed0, SDValue());
roots.reserve(1);
roots.push_back(node0x55d3b40);
dag->setRoot(node0x55d3b40);
      }
      break;
    case Codasip::i_itype_alu__opc_slti__xpr_general__x_0__simm12__:
      {
SDValue node0x55d84e0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x55d85c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x55d8660 = dag->getSetCC(dl, MVT::i32, node0x55d85c0, node0x55d84e0, ISD::SETGT);
SDValue node0x55d4ff0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x55d8660, SDValue());
roots.reserve(1);
roots.push_back(node0x55d4ff0);
dag->setRoot(node0x55d4ff0);
      }
      break;
    case Codasip::i_itype_alu__opc_slti__xpr_general__xpr_general__simm12__:
      {
SDValue node0x55d9b00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x55d9bb0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x55d9c50 = dag->getSetCC(dl, MVT::i32, node0x55d9b00, node0x55d9bb0, ISD::SETLT);
SDValue node0x55d8930 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x55d9c50, SDValue());
roots.reserve(1);
roots.push_back(node0x55d8930);
dag->setRoot(node0x55d8930);
      }
      break;
    case Codasip::i_itype_alu__opc_sltiu__xpr_general__x_0__simm12__:
      {
SDValue node0x55dd3c0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x55dd4a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x55dd540 = dag->getSetCC(dl, MVT::i32, node0x55dd4a0, node0x55dd3c0, ISD::SETNE);
SDValue node0x55dcfb0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x55dd540, SDValue());
roots.reserve(1);
roots.push_back(node0x55dcfb0);
dag->setRoot(node0x55dcfb0);
      }
      break;
    case Codasip::i_itype_alu__opc_sltiu__xpr_general__xpr_general__simm12__:
      {
SDValue node0x55dea30 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x55deae0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x55deb80 = dag->getSetCC(dl, MVT::i32, node0x55dea30, node0x55deae0, ISD::SETULT);
SDValue node0x55dd720 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x55deb80, SDValue());
roots.reserve(1);
roots.push_back(node0x55dd720);
dag->setRoot(node0x55dd720);
      }
      break;
    case Codasip::i_itype_alu__opc_xori__xpr_general__x_0__simm12__:
      {
SDValue node0x55e22e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x55de670 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x55e22e0, SDValue());
roots.reserve(1);
roots.push_back(node0x55de670);
dag->setRoot(node0x55de670);
      }
      break;
    case Codasip::i_itype_alu__opc_xori__xpr_general__xpr_general__simm12__:
      {
SDValue node0x55e3650 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x55e3700 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x55e37a0 = dag->getNode(ISD::XOR, dl, MVT::i32, node0x55e3650, node0x55e3700);
SDValue node0x55e2410 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x55e37a0, SDValue());
roots.reserve(1);
roots.push_back(node0x55e2410);
dag->setRoot(node0x55e2410);
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
SDValue node0x55ec770 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x55ea610 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x55ec770, mpi, MVT::i8, 1);
SDValue node0x55ea780 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x55ea610, SDValue());
roots.reserve(1);
roots.push_back(node0x55ea780);
dag->setRoot(node0x55ea780);
      }
      break;
    case Codasip::i_itype_loads__opc_lb__xpr_general__simm12__xpr_general__:
      {
SDValue node0x55edd00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x55eddb0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x55ede50 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x55edd00, node0x55eddb0);
SDValue node0x55e94a0 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x55ede50, mpi, MVT::i8, 1);
SDValue node0x55ecac0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x55e94a0, SDValue());
roots.reserve(1);
roots.push_back(node0x55ecac0);
dag->setRoot(node0x55ecac0);
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
SDValue node0x55f2290 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x55f0040 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x55f2290, mpi, MVT::i8, 1);
SDValue node0x55f1da0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x55f0040, SDValue());
roots.reserve(1);
roots.push_back(node0x55f1da0);
dag->setRoot(node0x55f1da0);
      }
      break;
    case Codasip::i_itype_loads__opc_lbu__xpr_general__simm12__xpr_general__:
      {
SDValue node0x55f38c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x55f3970 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x55f3a10 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x55f38c0, node0x55f3970);
SDValue node0x55eee80 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x55f3a10, mpi, MVT::i8, 1);
SDValue node0x55f1f70 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x55eee80, SDValue());
roots.reserve(1);
roots.push_back(node0x55f1f70);
dag->setRoot(node0x55f1f70);
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
SDValue node0x55f7d30 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x55f5bd0 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x55f7d30, mpi, MVT::i16, 1);
SDValue node0x55f5d40 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x55f5bd0, SDValue());
roots.reserve(1);
roots.push_back(node0x55f5d40);
dag->setRoot(node0x55f5d40);
      }
      break;
    case Codasip::i_itype_loads__opc_lh__xpr_general__simm12__xpr_general__:
      {
SDValue node0x55f92c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x55f9370 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x55f9410 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x55f92c0, node0x55f9370);
SDValue node0x55f4a10 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x55f9410, mpi, MVT::i16, 1);
SDValue node0x55f8080 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x55f4a10, SDValue());
roots.reserve(1);
roots.push_back(node0x55f8080);
dag->setRoot(node0x55f8080);
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
SDValue node0x55fd850 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x55fb600 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x55fd850, mpi, MVT::i16, 1);
SDValue node0x55fd360 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x55fb600, SDValue());
roots.reserve(1);
roots.push_back(node0x55fd360);
dag->setRoot(node0x55fd360);
      }
      break;
    case Codasip::i_itype_loads__opc_lhu__xpr_general__simm12__xpr_general__:
      {
SDValue node0x55fee80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x55fef30 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x55fefd0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x55fee80, node0x55fef30);
SDValue node0x55fa440 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x55fefd0, mpi, MVT::i16, 1);
SDValue node0x55fd530 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x55fa440, SDValue());
roots.reserve(1);
roots.push_back(node0x55fd530);
dag->setRoot(node0x55fd530);
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
SDValue node0x565d6b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x565d750 = dag->getLoad(MVT::i32, dl, entry, node0x565d6b0, mpi, 1);
SDValue node0x565b6f0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x565d750, SDValue());
roots.reserve(1);
roots.push_back(node0x565b6f0);
dag->setRoot(node0x565b6f0);
      }
      break;
    case Codasip::i_itype_loads__opc_lw__xpr_general__simm12__xpr_general__:
      {
SDValue node0x565eb90 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x565ec40 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x565ece0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x565eb90, node0x565ec40);
SDValue node0x565ed70 = dag->getLoad(MVT::i32, dl, entry, node0x565ece0, mpi, 1);
SDValue node0x565d900 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x565ed70, SDValue());
roots.reserve(1);
roots.push_back(node0x565d900);
dag->setRoot(node0x565d900);
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
SDValue node0x56784e0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x5678410 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x56784e0, SDValue());
roots.reserve(1);
roots.push_back(node0x5678410);
dag->setRoot(node0x5678410);
      }
      break;
    case Codasip::i_rtype_alu__opc_add__xpr_general__x_0__xpr_general__:
      {
SDValue node0x5679720 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5678680 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5679720, SDValue());
roots.reserve(1);
roots.push_back(node0x5678680);
dag->setRoot(node0x5678680);
      }
      break;
    case Codasip::i_rtype_alu__opc_add__xpr_general__xpr_general__x_0__:
      {
SDValue node0x567b950 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x567b680 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x567b950, SDValue());
roots.reserve(1);
roots.push_back(node0x567b680);
dag->setRoot(node0x567b680);
      }
      break;
    case Codasip::i_rtype_alu__opc_add__xpr_general__xpr_general__xpr_general__:
      {
SDValue node0x567cd70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x567ce20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x567ced0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x567cd70, node0x567ce20);
SDValue node0x567ca00 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x567ced0, SDValue());
roots.reserve(1);
roots.push_back(node0x567ca00);
dag->setRoot(node0x567ca00);
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
SDValue node0x5685b10 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x5685a40 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5685b10, SDValue());
roots.reserve(1);
roots.push_back(node0x5685a40);
dag->setRoot(node0x5685a40);
      }
      break;
    case Codasip::i_rtype_alu__opc_and__xpr_general__xpr_general__xpr_general__:
      {
SDValue node0x568a100 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x568a1b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x568a260 = dag->getNode(ISD::AND, dl, MVT::i32, node0x568a100, node0x568a1b0);
SDValue node0x5689d90 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x568a260, SDValue());
roots.reserve(1);
roots.push_back(node0x5689d90);
dag->setRoot(node0x5689d90);
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
SDValue node0x5692ea0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x5692c50 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5692ea0, SDValue());
roots.reserve(1);
roots.push_back(node0x5692c50);
dag->setRoot(node0x5692c50);
      }
      break;
    case Codasip::i_rtype_alu__opc_or__xpr_general__x_0__xpr_general__:
      {
SDValue node0x56940e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5693040 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x56940e0, SDValue());
roots.reserve(1);
roots.push_back(node0x5693040);
dag->setRoot(node0x5693040);
      }
      break;
    case Codasip::i_rtype_alu__opc_or__xpr_general__xpr_general__x_0__:
      {
SDValue node0x5696310 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5695ea0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5696310, SDValue());
roots.reserve(1);
roots.push_back(node0x5695ea0);
dag->setRoot(node0x5695ea0);
      }
      break;
    case Codasip::i_rtype_alu__opc_or__xpr_general__xpr_general__xpr_general__:
      {
SDValue node0x5697730 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x56977e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5697890 = dag->getNode(ISD::OR, dl, MVT::i32, node0x5697730, node0x56977e0);
SDValue node0x5696090 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5697890, SDValue());
roots.reserve(1);
roots.push_back(node0x5696090);
dag->setRoot(node0x5696090);
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
SDValue node0x56a04d0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x56a0400 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x56a04d0, SDValue());
roots.reserve(1);
roots.push_back(node0x56a0400);
dag->setRoot(node0x56a0400);
      }
      break;
    case Codasip::i_rtype_alu__opc_sll__xpr_general__xpr_general__x_0__:
      {
SDValue node0x56a37f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x56a3520 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x56a37f0, SDValue());
roots.reserve(1);
roots.push_back(node0x56a3520);
dag->setRoot(node0x56a3520);
      }
      break;
    case Codasip::i_rtype_alu__opc_sll__xpr_general__xpr_general__xpr_general__:
      {
SDValue node0x56a4c10 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x56a4cc0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x56a4d70 = dag->getNode(ISD::SHL, dl, MVT::i32, node0x56a4c10, node0x56a4cc0);
SDValue node0x56a48a0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x56a4d70, SDValue());
roots.reserve(1);
roots.push_back(node0x56a48a0);
dag->setRoot(node0x56a48a0);
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
SDValue node0x56ad9b0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x56ad8e0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x56ad9b0, SDValue());
roots.reserve(1);
roots.push_back(node0x56ad8e0);
dag->setRoot(node0x56ad8e0);
      }
      break;
    case Codasip::i_rtype_alu__opc_slt__xpr_general__x_0__xpr_general__:
      {
SDValue node0x56aea70 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x56aebf0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x56aeca0 = dag->getSetCC(dl, MVT::i32, node0x56aebf0, node0x56aea70, ISD::SETGT);
SDValue node0x56adb50 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x56aeca0, SDValue());
roots.reserve(1);
roots.push_back(node0x56adb50);
dag->setRoot(node0x56adb50);
      }
      break;
    case Codasip::i_rtype_alu__opc_slt__xpr_general__xpr_general__x_0__:
      {
SDValue node0x56b0e20 = dag->getConstant(31LL, dl, MVT::i32);
SDValue node0x56b1040 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x56b10f0 = dag->getNode(ISD::SRL, dl, MVT::i32, node0x56b1040, node0x56b0e20);
SDValue node0x56b0cd0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x56b10f0, SDValue());
roots.reserve(1);
roots.push_back(node0x56b0cd0);
dag->setRoot(node0x56b0cd0);
      }
      break;
    case Codasip::i_rtype_alu__opc_slt__xpr_general__xpr_general__xpr_general__:
      {
SDValue node0x56b2520 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x56b25d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x56b2680 = dag->getSetCC(dl, MVT::i32, node0x56b2520, node0x56b25d0, ISD::SETLT);
SDValue node0x56b21b0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x56b2680, SDValue());
roots.reserve(1);
roots.push_back(node0x56b21b0);
dag->setRoot(node0x56b21b0);
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
SDValue node0x5608540 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x5608470 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5608540, SDValue());
roots.reserve(1);
roots.push_back(node0x5608470);
dag->setRoot(node0x5608470);
      }
      break;
    case Codasip::i_rtype_alu__opc_sltu__xpr_general__x_0__xpr_general__:
      {
SDValue node0x5609600 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x5609780 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5609830 = dag->getSetCC(dl, MVT::i32, node0x5609780, node0x5609600, ISD::SETNE);
SDValue node0x56086e0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5609830, SDValue());
roots.reserve(1);
roots.push_back(node0x56086e0);
dag->setRoot(node0x56086e0);
      }
      break;
    case Codasip::i_rtype_alu__opc_sltu__xpr_general__xpr_general__xpr_general__:
      {
SDValue node0x560ce00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x560ceb0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x560cf60 = dag->getSetCC(dl, MVT::i32, node0x560ce00, node0x560ceb0, ISD::SETULT);
SDValue node0x560ca90 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x560cf60, SDValue());
roots.reserve(1);
roots.push_back(node0x560ca90);
dag->setRoot(node0x560ca90);
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
SDValue node0x5615c60 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x5615b90 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5615c60, SDValue());
roots.reserve(1);
roots.push_back(node0x5615b90);
dag->setRoot(node0x5615b90);
      }
      break;
    case Codasip::i_rtype_alu__opc_sra__xpr_general__xpr_general__x_0__:
      {
SDValue node0x5618f80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5618cb0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5618f80, SDValue());
roots.reserve(1);
roots.push_back(node0x5618cb0);
dag->setRoot(node0x5618cb0);
      }
      break;
    case Codasip::i_rtype_alu__opc_sra__xpr_general__xpr_general__xpr_general__:
      {
SDValue node0x561a440 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x561a4f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x561a630 = dag->getNode(ISD::SRA, dl, MVT::i32, node0x561a440, node0x561a4f0);
SDValue node0x561a030 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x561a630, SDValue());
roots.reserve(1);
roots.push_back(node0x561a030);
dag->setRoot(node0x561a030);
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
SDValue node0x56232a0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x56231d0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x56232a0, SDValue());
roots.reserve(1);
roots.push_back(node0x56231d0);
dag->setRoot(node0x56231d0);
      }
      break;
    case Codasip::i_rtype_alu__opc_srl__xpr_general__xpr_general__x_0__:
      {
SDValue node0x56265c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x56262f0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x56265c0, SDValue());
roots.reserve(1);
roots.push_back(node0x56262f0);
dag->setRoot(node0x56262f0);
      }
      break;
    case Codasip::i_rtype_alu__opc_srl__xpr_general__xpr_general__xpr_general__:
      {
SDValue node0x5627a80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5627b30 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5627c70 = dag->getNode(ISD::SRL, dl, MVT::i32, node0x5627a80, node0x5627b30);
SDValue node0x5627670 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5627c70, SDValue());
roots.reserve(1);
roots.push_back(node0x5627670);
dag->setRoot(node0x5627670);
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
SDValue node0x56308e0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x5630810 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x56308e0, SDValue());
roots.reserve(1);
roots.push_back(node0x5630810);
dag->setRoot(node0x5630810);
      }
      break;
    case Codasip::i_rtype_alu__opc_sub__xpr_general__x_0__xpr_general__:
      {
SDValue node0x5631920 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x5631b20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5631bd0 = dag->getNode(ISD::SUB, dl, MVT::i32, node0x5631920, node0x5631b20);
SDValue node0x5630a80 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5631bd0, SDValue());
roots.reserve(1);
roots.push_back(node0x5630a80);
dag->setRoot(node0x5630a80);
      }
      break;
    case Codasip::i_rtype_alu__opc_sub__xpr_general__xpr_general__x_0__:
      {
SDValue node0x5633e10 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5633b40 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5633e10, SDValue());
roots.reserve(1);
roots.push_back(node0x5633b40);
dag->setRoot(node0x5633b40);
      }
      break;
    case Codasip::i_rtype_alu__opc_sub__xpr_general__xpr_general__xpr_general__:
      {
SDValue node0x5635230 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x56352e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5635390 = dag->getNode(ISD::SUB, dl, MVT::i32, node0x5635230, node0x56352e0);
SDValue node0x5634ec0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5635390, SDValue());
roots.reserve(1);
roots.push_back(node0x5634ec0);
dag->setRoot(node0x5634ec0);
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
SDValue node0x563dfd0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x563df00 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x563dfd0, SDValue());
roots.reserve(1);
roots.push_back(node0x563df00);
dag->setRoot(node0x563df00);
      }
      break;
    case Codasip::i_rtype_alu__opc_xor__xpr_general__x_0__xpr_general__:
      {
SDValue node0x563f210 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x563e170 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x563f210, SDValue());
roots.reserve(1);
roots.push_back(node0x563e170);
dag->setRoot(node0x563e170);
      }
      break;
    case Codasip::i_rtype_alu__opc_xor__xpr_general__xpr_general__x_0__:
      {
SDValue node0x5641440 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5641170 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5641440, SDValue());
roots.reserve(1);
roots.push_back(node0x5641170);
dag->setRoot(node0x5641170);
      }
      break;
    case Codasip::i_rtype_alu__opc_xor__xpr_general__xpr_general__xpr_general__:
      {
SDValue node0x5642860 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5642910 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x56429c0 = dag->getNode(ISD::XOR, dl, MVT::i32, node0x5642860, node0x5642910);
SDValue node0x56424f0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x56429c0, SDValue());
roots.reserve(1);
roots.push_back(node0x56424f0);
dag->setRoot(node0x56424f0);
      }
      break;
    case Codasip::i_rtype_shift__opc_slli__xpr_general__xpr_general__uimm5__:
      {
SDValue node0x56476f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x56477a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5647840 = dag->getNode(ISD::SHL, dl, MVT::i32, node0x56476f0, node0x56477a0);
SDValue node0x56468a0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5647840, SDValue());
roots.reserve(1);
roots.push_back(node0x56468a0);
dag->setRoot(node0x56468a0);
      }
      break;
    case Codasip::i_rtype_shift__opc_srai__xpr_general__xpr_general__uimm5__:
      {
SDValue node0x564c570 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x564c620 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x564c6c0 = dag->getNode(ISD::SRA, dl, MVT::i32, node0x564c570, node0x564c620);
SDValue node0x564b720 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x564c6c0, SDValue());
roots.reserve(1);
roots.push_back(node0x564b720);
dag->setRoot(node0x564b720);
      }
      break;
    case Codasip::i_rtype_shift__opc_srli__xpr_general__xpr_general__uimm5__:
      {
SDValue node0x56513f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x56514a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5651540 = dag->getNode(ISD::SRL, dl, MVT::i32, node0x56513f0, node0x56514a0);
SDValue node0x56505a0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5651540, SDValue());
roots.reserve(1);
roots.push_back(node0x56505a0);
dag->setRoot(node0x56505a0);
      }
      break;
    case Codasip::i_stype_store__opc_sb__x_0__simm12__x_0__:
      {
SDValue node0x5772e80 = dag->getConstant(0LL, dl, MVT::i8);
SDValue node0x5773120 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x54aa860 = dag->getStore(entry, dl, node0x5772e80, node0x5773120, mpi, 1);
roots.reserve(1);
roots.push_back(node0x54aa860);
dag->setRoot(node0x54aa860);
      }
      break;
    case Codasip::i_stype_store__opc_sb__x_0__simm12__xpr_general__:
      {
SDValue node0x5774200 = dag->getConstant(0LL, dl, MVT::i8);
SDValue node0x5774540 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x57745f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5774690 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x5774540, node0x57745f0);
SDValue node0x5774720 = dag->getStore(entry, dl, node0x5774200, node0x5774690, mpi, 1);
roots.reserve(1);
roots.push_back(node0x5774720);
dag->setRoot(node0x5774720);
      }
      break;
    case Codasip::i_stype_store__opc_sb__xpr_general__simm12__x_0__:
      {
SDValue node0x5776b00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5776bb0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x57bd140 = dag->getTruncStore(entry, dl, node0x5776b00, node0x5776bb0, mpi, MVT::i8, 1);
roots.reserve(1);
roots.push_back(node0x57bd140);
dag->setRoot(node0x57bd140);
      }
      break;
    case Codasip::i_stype_store__opc_sb__xpr_general__simm12__xpr_general__:
      {
SDValue node0x57780f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x57781a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5778250 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x57783a0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x57781a0, node0x5778250);
SDValue node0x5776d00 = dag->getTruncStore(entry, dl, node0x57780f0, node0x57783a0, mpi, MVT::i8, 1);
roots.reserve(1);
roots.push_back(node0x5776d00);
dag->setRoot(node0x5776d00);
      }
      break;
    case Codasip::i_stype_store__opc_sh__x_0__simm12__x_0__:
      {
SDValue node0x5779000 = dag->getConstant(0LL, dl, MVT::i16);
SDValue node0x57792a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5779340 = dag->getStore(entry, dl, node0x5779000, node0x57792a0, mpi, 1);
roots.reserve(1);
roots.push_back(node0x5779340);
dag->setRoot(node0x5779340);
      }
      break;
    case Codasip::i_stype_store__opc_sh__x_0__simm12__xpr_general__:
      {
SDValue node0x577a160 = dag->getConstant(0LL, dl, MVT::i16);
SDValue node0x577a4a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x577a550 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x577a5f0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x577a4a0, node0x577a550);
SDValue node0x577a680 = dag->getStore(entry, dl, node0x577a160, node0x577a5f0, mpi, 1);
roots.reserve(1);
roots.push_back(node0x577a680);
dag->setRoot(node0x577a680);
      }
      break;
    case Codasip::i_stype_store__opc_sh__xpr_general__simm12__x_0__:
      {
SDValue node0x577ca60 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x577cb10 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x57bd6a0 = dag->getTruncStore(entry, dl, node0x577ca60, node0x577cb10, mpi, MVT::i16, 1);
roots.reserve(1);
roots.push_back(node0x57bd6a0);
dag->setRoot(node0x57bd6a0);
      }
      break;
    case Codasip::i_stype_store__opc_sh__xpr_general__simm12__xpr_general__:
      {
SDValue node0x577e050 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x577e100 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x577e1b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x577e300 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x577e100, node0x577e1b0);
SDValue node0x577cc60 = dag->getTruncStore(entry, dl, node0x577e050, node0x577e300, mpi, MVT::i16, 1);
roots.reserve(1);
roots.push_back(node0x577cc60);
dag->setRoot(node0x577cc60);
      }
      break;
    case Codasip::i_stype_store__opc_sw__x_0__simm12__x_0__:
      {
SDValue node0x577ef60 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x577f160 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x577f200 = dag->getStore(entry, dl, node0x577ef60, node0x577f160, mpi, 1);
roots.reserve(1);
roots.push_back(node0x577f200);
dag->setRoot(node0x577f200);
      }
      break;
    case Codasip::i_stype_store__opc_sw__x_0__simm12__xpr_general__:
      {
SDValue node0x5780020 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x57802c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5780370 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5780410 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x57802c0, node0x5780370);
SDValue node0x57804a0 = dag->getStore(entry, dl, node0x5780020, node0x5780410, mpi, 1);
roots.reserve(1);
roots.push_back(node0x57804a0);
dag->setRoot(node0x57804a0);
      }
      break;
    case Codasip::i_stype_store__opc_sw__xpr_general__simm12__x_0__:
      {
SDValue node0x5782880 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5782930 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x57829d0 = dag->getStore(entry, dl, node0x5782880, node0x5782930, mpi, 1);
roots.reserve(1);
roots.push_back(node0x57829d0);
dag->setRoot(node0x57829d0);
      }
      break;
    case Codasip::i_stype_store__opc_sw__xpr_general__simm12__xpr_general__:
      {
SDValue node0x5783dc0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5783e70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5783f20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5783fc0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x5783e70, node0x5783f20);
SDValue node0x5784050 = dag->getStore(entry, dl, node0x5783dc0, node0x5783fc0, mpi, 1);
roots.reserve(1);
roots.push_back(node0x5784050);
dag->setRoot(node0x5784050);
      }
      break;
    case Codasip::i_utype_ops__opc_auipc__xpr_general__uimm20__:
      {
SDValue node0x5785570 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x5785860 = dag->getConstant(-4LL, dl, MVT::i32);
SDValue node0x5785a80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5785b20 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x5785570, node0x5785a80);
SDValue node0x5785bb0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x5785b20, node0x5785860);
SDValue node0x5784980 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5785bb0, SDValue());
roots.reserve(1);
roots.push_back(node0x5784980);
dag->setRoot(node0x5784980);
      }
      break;
    case Codasip::i_utype_ops__opc_lui__xpr_general__uimm20__:
      {
SDValue node0x57873e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5786fb0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x57873e0, SDValue());
roots.reserve(1);
roots.push_back(node0x5786fb0);
dag->setRoot(node0x5786fb0);
      }
      break;
    case Codasip::i_itype_alu__opc_slti__xpr_general__x_0__simm12__immSpecClone__imm_1__0__:
      {
SDValue node0x578ceb0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x57874c0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x578ceb0, SDValue());
roots.reserve(1);
roots.push_back(node0x57874c0);
dag->setRoot(node0x57874c0);
      }
      break;
    case Codasip::i_itype_alu__opc_slti__xpr_general__x_0__simm12__immSpecClone__imm_1__1__:
      {
SDValue node0x578c7b0 = dag->getConstant(1LL, dl, MVT::i32);
SDValue node0x57886c0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x578c7b0, SDValue());
roots.reserve(1);
roots.push_back(node0x57886c0);
dag->setRoot(node0x57886c0);
      }
      break;
    case Codasip::i_itype_alu__opc_sltiu__xpr_general__x_0__simm12__immSpecClone__imm_1__0__:
      {
SDValue node0x578ddb0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x578d440 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x578ddb0, SDValue());
roots.reserve(1);
roots.push_back(node0x578d440);
dag->setRoot(node0x578d440);
      }
      break;
    case Codasip::i_itype_alu__opc_sltiu__xpr_general__x_0__simm12__immSpecClone__imm_1__1__:
      {
SDValue node0x578d610 = dag->getConstant(1LL, dl, MVT::i32);
SDValue node0x5788b00 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x578d610, SDValue());
roots.reserve(1);
roots.push_back(node0x5788b00);
dag->setRoot(node0x5788b00);
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
SDValue node0x55e91e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x55ec810 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x55e91e0, mpi, MVT::i8, 1);
SDValue node0x57b1d20 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x55ec810, SDValue());
roots.reserve(1);
roots.push_back(node0x57b1d20);
dag->setRoot(node0x57b1d20);
      }
      break;
    case Codasip::i_itype_loads__opc_lb__xpr_general__simm12__xpr_general__AEXT_CLONE_:
      {
SDValue node0x55edee0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x55ed9c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x55edfb0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x55edee0, node0x55ed9c0);
SDValue node0x57a7680 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x55edfb0, mpi, MVT::i8, 1);
SDValue node0x57b2920 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x57a7680, SDValue());
roots.reserve(1);
roots.push_back(node0x57b2920);
dag->setRoot(node0x57b2920);
      }
      break;
    case Codasip::i_itype_loads__opc_lb__xpr_general__simm12__xpr_general__immspec_1_:
      {
SDValue node0x579c480 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5792180 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x579c480, mpi, MVT::i8, 1);
SDValue node0x579b770 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5792180, SDValue());
roots.reserve(1);
roots.push_back(node0x579b770);
dag->setRoot(node0x579b770);
      }
      break;
    case Codasip::i_itype_loads__opc_lb__xpr_general__simm12__xpr_general__immspec_1_AEXT_CLONE_:
      {
SDValue node0x579c530 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5791bc0 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x579c530, mpi, MVT::i8, 1);
SDValue node0x5790ca0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5791bc0, SDValue());
roots.reserve(1);
roots.push_back(node0x5790ca0);
dag->setRoot(node0x5790ca0);
      }
      break;
    case Codasip::i_itype_loads__opc_lbu__xpr_general__simm12__x_0__AEXT_CLONE_:
      {
SDValue node0x55eec60 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x55f2330 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x55eec60, mpi, MVT::i8, 1);
SDValue node0x57b34b0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x55f2330, SDValue());
roots.reserve(1);
roots.push_back(node0x57b34b0);
dag->setRoot(node0x57b34b0);
      }
      break;
    case Codasip::i_itype_loads__opc_lbu__xpr_general__simm12__xpr_general__AEXT_CLONE_:
      {
SDValue node0x55f3aa0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x55f3580 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x55f3b70 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x55f3aa0, node0x55f3580);
SDValue node0x57b4080 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x55f3b70, mpi, MVT::i8, 1);
SDValue node0x57b4110 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x57b4080, SDValue());
roots.reserve(1);
roots.push_back(node0x57b4110);
dag->setRoot(node0x57b4110);
      }
      break;
    case Codasip::i_itype_loads__opc_lbu__xpr_general__simm12__xpr_general__immspec_1_:
      {
SDValue node0x579cf60 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5791070 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x579cf60, mpi, MVT::i8, 1);
SDValue node0x579b810 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5791070, SDValue());
roots.reserve(1);
roots.push_back(node0x579b810);
dag->setRoot(node0x579b810);
      }
      break;
    case Codasip::i_itype_loads__opc_lbu__xpr_general__simm12__xpr_general__immspec_1_AEXT_CLONE_:
      {
SDValue node0x579d010 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5790a40 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x579d010, mpi, MVT::i8, 1);
SDValue node0x54d0880 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5790a40, SDValue());
roots.reserve(1);
roots.push_back(node0x54d0880);
dag->setRoot(node0x54d0880);
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
SDValue node0x55f47d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x55f7dd0 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x55f47d0, mpi, MVT::i16, 1);
SDValue node0x57b4d70 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x55f7dd0, SDValue());
roots.reserve(1);
roots.push_back(node0x57b4d70);
dag->setRoot(node0x57b4d70);
      }
      break;
    case Codasip::i_itype_loads__opc_lh__xpr_general__simm12__xpr_general__AEXT_CLONE_:
      {
SDValue node0x55f94a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x55f8f80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x55f9570 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x55f94a0, node0x55f8f80);
SDValue node0x57b5940 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x55f9570, mpi, MVT::i16, 1);
SDValue node0x57b59d0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x57b5940, SDValue());
roots.reserve(1);
roots.push_back(node0x57b59d0);
dag->setRoot(node0x57b59d0);
      }
      break;
    case Codasip::i_itype_loads__opc_lh__xpr_general__simm12__xpr_general__immspec_1_:
      {
SDValue node0x579e220 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x579da70 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x579e220, mpi, MVT::i16, 1);
SDValue node0x579cb50 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x579da70, SDValue());
roots.reserve(1);
roots.push_back(node0x579cb50);
dag->setRoot(node0x579cb50);
      }
      break;
    case Codasip::i_itype_loads__opc_lh__xpr_general__simm12__xpr_general__immspec_1_AEXT_CLONE_:
      {
SDValue node0x579e2d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5790480 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x579e2d0, mpi, MVT::i16, 1);
SDValue node0x5798f50 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5790480, SDValue());
roots.reserve(1);
roots.push_back(node0x5798f50);
dag->setRoot(node0x5798f50);
      }
      break;
    case Codasip::i_itype_loads__opc_lhu__xpr_general__simm12__x_0__AEXT_CLONE_:
      {
SDValue node0x55fa220 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x55fd8f0 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x55fa220, mpi, MVT::i16, 1);
SDValue node0x57b6600 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x55fd8f0, SDValue());
roots.reserve(1);
roots.push_back(node0x57b6600);
dag->setRoot(node0x57b6600);
      }
      break;
    case Codasip::i_itype_loads__opc_lhu__xpr_general__simm12__xpr_general__AEXT_CLONE_:
      {
SDValue node0x55ff060 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x55feb40 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x55ff130 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x55ff060, node0x55feb40);
SDValue node0x57b71d0 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x55ff130, mpi, MVT::i16, 1);
SDValue node0x57b7260 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x57b71d0, SDValue());
roots.reserve(1);
roots.push_back(node0x57b7260);
dag->setRoot(node0x57b7260);
      }
      break;
    case Codasip::i_itype_loads__opc_lhu__xpr_general__simm12__xpr_general__immspec_1_:
      {
SDValue node0x579ed00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5792700 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x579ed00, mpi, MVT::i16, 1);
SDValue node0x579d5e0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5792700, SDValue());
roots.reserve(1);
roots.push_back(node0x579d5e0);
dag->setRoot(node0x579d5e0);
      }
      break;
    case Codasip::i_itype_loads__opc_lhu__xpr_general__simm12__xpr_general__immspec_1_AEXT_CLONE_:
      {
SDValue node0x57950f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x57946f0 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x57950f0, mpi, MVT::i16, 1);
SDValue node0x57977d0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x57946f0, SDValue());
roots.reserve(1);
roots.push_back(node0x57977d0);
dag->setRoot(node0x57977d0);
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
SDValue node0x579ffc0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x57a0070 = dag->getLoad(MVT::i32, dl, entry, node0x579ffc0, mpi, 1);
SDValue node0x579e8f0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x57a0070, SDValue());
roots.reserve(1);
roots.push_back(node0x579e8f0);
dag->setRoot(node0x579e8f0);
      }
      break;
    case Codasip::i_rtype_alu__opc_slt__xpr_general__xpr_general__xpr_general__swappedCmpClone0__:
      {
SDValue node0x578e570 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x578e6c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x578e770 = dag->getSetCC(dl, MVT::i32, node0x578e570, node0x578e6c0, ISD::SETGT);
SDValue node0x578dbe0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x578e770, SDValue());
roots.reserve(1);
roots.push_back(node0x578dbe0);
dag->setRoot(node0x578dbe0);
      }
      break;
    case Codasip::i_rtype_alu__opc_sltu__xpr_general__xpr_general__xpr_general__swappedCmpClone0__:
      {
SDValue node0x578f140 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x578f290 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x578f340 = dag->getSetCC(dl, MVT::i32, node0x578f140, node0x578f290, ISD::SETUGT);
SDValue node0x578ed60 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x578f340, SDValue());
roots.reserve(1);
roots.push_back(node0x578ed60);
dag->setRoot(node0x578ed60);
      }
      break;
    case Codasip::i_rtype_alu__opc_sra__xpr_general__xpr_general__xpr_general__SHIFT_MASK_CLONE_:
      {
SDValue node0x55ffd90 = dag->getConstant(31LL, dl, MVT::i32);
SDValue node0x54caff0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x55fffb0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x56628a0 = dag->getNode(ISD::AND, dl, MVT::i32, node0x55fffb0, node0x55ffd90);
SDValue node0x54caf60 = dag->getNode(ISD::SRA, dl, MVT::i32, node0x54caff0, node0x56628a0);
SDValue node0x57b74e0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x54caf60, SDValue());
roots.reserve(1);
roots.push_back(node0x57b74e0);
dag->setRoot(node0x57b74e0);
      }
      break;
    case Codasip::i_rtype_alu__opc_srl__xpr_general__xpr_general__xpr_general__SHIFT_MASK_CLONE_:
      {
SDValue node0x561a220 = dag->getConstant(31LL, dl, MVT::i32);
SDValue node0x54ce590 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x54ce620 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x561a5a0 = dag->getNode(ISD::AND, dl, MVT::i32, node0x54ce620, node0x561a220);
SDValue node0x5585be0 = dag->getNode(ISD::SRL, dl, MVT::i32, node0x54ce590, node0x561a5a0);
SDValue node0x54ce6b0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5585be0, SDValue());
roots.reserve(1);
roots.push_back(node0x54ce6b0);
dag->setRoot(node0x54ce6b0);
      }
      break;
    case Codasip::i_stype_store__opc_sb__x_0__simm12__xpr_general__immspec_1_:
      {
SDValue node0x57a10f0 = dag->getConstant(0LL, dl, MVT::i8);
SDValue node0x57a12f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x57a1090 = dag->getStore(entry, dl, node0x57a10f0, node0x57a12f0, mpi, 1);
roots.reserve(1);
roots.push_back(node0x57a1090);
dag->setRoot(node0x57a1090);
      }
      break;
    case Codasip::i_stype_store__opc_sb__xpr_general__simm12__xpr_general__immspec_1_:
      {
SDValue node0x57a1a70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x57a1b20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x57943c0 = dag->getTruncStore(entry, dl, node0x57a1a70, node0x57a1b20, mpi, MVT::i8, 1);
roots.reserve(1);
roots.push_back(node0x57943c0);
dag->setRoot(node0x57943c0);
      }
      break;
    case Codasip::i_stype_store__opc_sh__x_0__simm12__xpr_general__immspec_1_:
      {
SDValue node0x57a2380 = dag->getConstant(0LL, dl, MVT::i16);
SDValue node0x57a25a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x57a2320 = dag->getStore(entry, dl, node0x57a2380, node0x57a25a0, mpi, 1);
roots.reserve(1);
roots.push_back(node0x57a2320);
dag->setRoot(node0x57a2320);
      }
      break;
    case Codasip::i_stype_store__opc_sh__xpr_general__simm12__xpr_general__immspec_1_:
      {
SDValue node0x57a2d40 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x57a2df0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5796f30 = dag->getTruncStore(entry, dl, node0x57a2d40, node0x57a2df0, mpi, MVT::i16, 1);
roots.reserve(1);
roots.push_back(node0x5796f30);
dag->setRoot(node0x5796f30);
      }
      break;
    case Codasip::i_stype_store__opc_sw__x_0__simm12__xpr_general__immspec_1_:
      {
SDValue node0x57a3600 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x57a3780 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x57a35a0 = dag->getStore(entry, dl, node0x57a3600, node0x57a3780, mpi, 1);
roots.reserve(1);
roots.push_back(node0x57a35a0);
dag->setRoot(node0x57a35a0);
      }
      break;
    case Codasip::i_stype_store__opc_sw__xpr_general__simm12__xpr_general__immspec_1_:
      {
SDValue node0x57a3f20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x57a3fd0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x57a3d60 = dag->getStore(entry, dl, node0x57a3f20, node0x57a3fd0, mpi, 1);
roots.reserve(1);
roots.push_back(node0x57a3d60);
dag->setRoot(node0x57a3d60);
      }
      break;
    case Codasip::i_utype_ops__opc_auipc__xpr_general__uimm20__immspec_1_:
      {
SDValue node0x57a3b80 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x57a47c0 = dag->getConstant(-4LL, dl, MVT::i32);
SDValue node0x57a3bf0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x57a3b80, node0x57a47c0);
SDValue node0x57a3380 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x57a3bf0, SDValue());
roots.reserve(1);
roots.push_back(node0x57a3380);
dag->setRoot(node0x57a3380);
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
SDValue node0x5787d90 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5787510 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5787d90, SDValue());
roots.reserve(1);
roots.push_back(node0x5787510);
dag->setRoot(node0x5787510);
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
SDValue node0x54ebbb0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x54ebc30 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x54ec570 = dag->getTruncStore(entry, dl, node0x54ebbb0, node0x54ebc30, mpi, MVT::i8, 1);
roots.reserve(1);
roots.push_back(node0x54ec570);
dag->setRoot(node0x54ec570);
      }
      break;
    case Codasip::i_stype_store__opc_sb__x_0__simm12__xpr_general__i32_TRUNC_CLONE_:
      {
SDValue node0x54ebab0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x54eb990 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x54ebb30 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x54e8000 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x54eb990, node0x54ebb30);
SDValue node0x54ecf10 = dag->getTruncStore(entry, dl, node0x54ebab0, node0x54e8000, mpi, MVT::i8, 1);
roots.reserve(1);
roots.push_back(node0x54ecf10);
dag->setRoot(node0x54ecf10);
      }
      break;
    case Codasip::i_stype_store__opc_sh__x_0__simm12__x_0__i32_TRUNC_CLONE_:
      {
SDValue node0x54ebcb0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x54ed550 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x54ed8a0 = dag->getTruncStore(entry, dl, node0x54ebcb0, node0x54ed550, mpi, MVT::i16, 1);
roots.reserve(1);
roots.push_back(node0x54ed8a0);
dag->setRoot(node0x54ed8a0);
      }
      break;
    case Codasip::i_stype_store__opc_sh__x_0__simm12__xpr_general__i32_TRUNC_CLONE_:
      {
SDValue node0x54edee0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x54eb340 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x54edf60 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x54e8fc0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x54eb340, node0x54edf60);
SDValue node0x54ee340 = dag->getTruncStore(entry, dl, node0x54edee0, node0x54e8fc0, mpi, MVT::i16, 1);
roots.reserve(1);
roots.push_back(node0x54ee340);
dag->setRoot(node0x54ee340);
      }
      break;
    case Codasip::i_stype_store__opc_sb__x_0__simm12__xpr_general__immspec_1_i32_TRUNC_CLONE_:
      {
SDValue node0x54ee6d0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x54eb900 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x54ee8c0 = dag->getTruncStore(entry, dl, node0x54ee6d0, node0x54eb900, mpi, MVT::i8, 1);
roots.reserve(1);
roots.push_back(node0x54ee8c0);
dag->setRoot(node0x54ee8c0);
      }
      break;
    case Codasip::i_stype_store__opc_sh__x_0__simm12__xpr_general__immspec_1_i32_TRUNC_CLONE_:
      {
SDValue node0x54eecb0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x54eba20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x54eeed0 = dag->getTruncStore(entry, dl, node0x54eecb0, node0x54eba20, mpi, MVT::i16, 1);
roots.reserve(1);
roots.push_back(node0x54eeed0);
dag->setRoot(node0x54eeed0);
      }
      break;
    case Codasip::i_stype_store__opc_sw__xpr_general__simm12__xpr_general__0_REG_EMUL_:
      {
SDValue node0x54efcc0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x54ef650 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x54f0a00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x54f5b50 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x54ef650, node0x54f0a00);
SDValue node0x54eef30 = dag->getStore(entry, dl, node0x54efcc0, node0x54f5b50, mpi, 1);
roots.reserve(1);
roots.push_back(node0x54eef30);
dag->setRoot(node0x54eef30);
      }
      break;
    case Codasip::i_stype_store__opc_sw__xpr_general__simm12__xpr_general__1_BIGIMM_EMUL_:
      {
SDValue node0x54f0ac0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x54f5d80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x54f4ae0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x54f5e10 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x54f5d80, node0x54f4ae0);
SDValue node0x54f4c70 = dag->getStore(entry, dl, node0x54f0ac0, node0x54f5e10, mpi, 1);
roots.reserve(1);
roots.push_back(node0x54f4c70);
dag->setRoot(node0x54f4c70);
      }
      break;
    case Codasip::i_itype_loads__opc_lw__xpr_general__simm12__xpr_general__2_REG_EMUL_:
      {
SDValue node0x54f13a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x54f5920 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x54f2c40 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x54f13a0, node0x54f5920);
SDValue node0x54f1310 = dag->getLoad(MVT::i32, dl, entry, node0x54f2c40, mpi, 1);
SDValue node0x54f28c0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x54f1310, SDValue());
roots.reserve(1);
roots.push_back(node0x54f28c0);
dag->setRoot(node0x54f28c0);
      }
      break;
    case Codasip::i_itype_loads__opc_lw__xpr_general__simm12__xpr_general__3_BIGIMM_EMUL_:
      {
SDValue node0x54f5e80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x54f68d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x54f4620 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x54f5e80, node0x54f68d0);
SDValue node0x54f5ff0 = dag->getLoad(MVT::i32, dl, entry, node0x54f4620, mpi, 1);
SDValue node0x54f69d0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x54f5ff0, SDValue());
roots.reserve(1);
roots.push_back(node0x54f69d0);
dag->setRoot(node0x54f69d0);
      }
      break;
    case Codasip::i_stype_store__opc_sw__xpr_general__simm12__xpr_general__4_BIGIMM_EMUL_:
      {
SDValue node0x54f52c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x54f7b00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x54f7fc0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x54f4700 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x54f7b00, node0x54f7fc0);
SDValue node0x54ef6e0 = dag->getStore(entry, dl, node0x54f52c0, node0x54f4700, mpi, 1);
roots.reserve(1);
roots.push_back(node0x54ef6e0);
dag->setRoot(node0x54ef6e0);
      }
      break;
    case Codasip::i_itype_loads__opc_lw__xpr_general__simm12__xpr_general__5_BIGIMM_EMUL_:
      {
SDValue node0x54f4770 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x54f8de0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x54f3100 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x54f4770, node0x54f8de0);
SDValue node0x54f8800 = dag->getLoad(MVT::i32, dl, entry, node0x54f3100, mpi, 1);
SDValue node0x54f8ec0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x54f8800, SDValue());
roots.reserve(1);
roots.push_back(node0x54f8ec0);
dag->setRoot(node0x54f8ec0);
      }
      break;
    case Codasip::i_itype_alu__opc_addi__xpr_general__xpr_general__simm12__6_BIGIMM_EMUL_:
      {
SDValue node0x54f3b30 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x54f9c90 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x54f5860 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x54f3b30, node0x54f9c90);
SDValue node0x54f9d50 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x54f5860, SDValue());
roots.reserve(1);
roots.push_back(node0x54f9d50);
dag->setRoot(node0x54f9d50);
      }
      break;
    case Codasip::i_itype_alu__opc_addi__xpr_general__xpr_general__simm12__7_BIGIMM_EMUL_:
      {
SDValue node0x54f7b90 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x54faa50 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x54f5450 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x54f7b90, node0x54faa50);
SDValue node0x54fab10 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x54f5450, SDValue());
roots.reserve(1);
roots.push_back(node0x54fab10);
dag->setRoot(node0x54fab10);
      }
      break;
    case Codasip::i_itype_alu__opc_addi__xpr_general__xpr_general__simm12__8_BIGIMM_EMUL_:
      {
SDValue node0x54fa370 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x54fb810 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x54f51e0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x54fa370, node0x54fb810);
SDValue node0x54fb8d0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x54f51e0, SDValue());
roots.reserve(1);
roots.push_back(node0x54fb8d0);
dag->setRoot(node0x54fb8d0);
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
SDValue node0x54c4510 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x54c48e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x57d9660 = dag->getCopyToReg(entry, dl, dag->getRegister(Codasip::rf_xpr_1, MVT::i32), node0x54c4510, SDValue());
SDValue node0x54c4b90 = dag->getNode(ISD::BRIND, dl, MVT::Other, node0x57d9660, node0x54c48e0);
roots.reserve(2);
roots.push_back(node0x57d9660);
roots.push_back(node0x54c4b90);
dag->setRoot(node0x54c4b90);
      }
      break;
    case Codasip::i_itype_jlreg__opc_jalr__x_0__simm12__xpr_general__:
      {
SDValue node0x55e51b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x55e5450 = dag->getNode(ISD::BRIND, dl, MVT::Other, entry, node0x55e51b0);
roots.reserve(1);
roots.push_back(node0x55e5450);
dag->setRoot(node0x55e5450);
      }
      break;
    case Codasip::i_itype_jlreg__opc_jalr__xpr_general__simm12__xpr_general__:
      {
SDValue node0x55e7e80 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x55e7e00 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x55e7e80, SDValue());
SDValue node0x55e8380 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x55e8620 = dag->getNode(ISD::BRIND, dl, MVT::Other, node0x55e7e00, node0x55e8380);
roots.reserve(2);
roots.push_back(node0x55e7e00);
roots.push_back(node0x55e8620);
dag->setRoot(node0x55e8620);
      }
      break;
    case Codasip::i_utype_ops__opc_lui__xpr_general__uimm20__SYNTAX_CLONE_e_movi32__1_:
      {
SDValue node0x5627860 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x54cef60 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5627860, SDValue());
roots.reserve(1);
roots.push_back(node0x54cef60);
dag->setRoot(node0x54cef60);
      }
      break;
    case Codasip::i_utype_ops__opc_lui__xpr_general__uimm20__SYNTAX_CLONE_e_movi32__2_:
      {
SDValue node0x55ffd10 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x54cf700 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x55ffd10, SDValue());
roots.reserve(1);
roots.push_back(node0x54cf700);
dag->setRoot(node0x54cf700);
      }
      break;
    case Codasip::i_utype_ops__opc_lui__xpr_general__uimm20__SYNTAX_CLONE_e_movi32__5_:
      {
SDValue node0x57cf040 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x54cfeb0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x57cf040, SDValue());
roots.reserve(1);
roots.push_back(node0x54cfeb0);
dag->setRoot(node0x54cfeb0);
      }
      break;
    case Codasip::i_utype_ops__opc_lui__xpr_general__uimm20__SYNTAX_CLONE_e_movi32__6_:
      {
SDValue node0x55857c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x54d0660 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x55857c0, SDValue());
roots.reserve(1);
roots.push_back(node0x54d0660);
dag->setRoot(node0x54d0660);
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
