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
SDValue node0x5063e40 = dag->getRegister(Codasip::rf_xpr_1, MVT::i32);
SDValue node0x5063b90 = dag->getNode(ISD::BRIND, dl, MVT::Other, entry, node0x5063e40);
roots.reserve(1);
roots.push_back(node0x5063b90);
dag->setRoot(node0x5063b90);
      } else       {
dag->setRoot(entry);
      }
      break;
    case Codasip::i_call_reg_alias__simm12__xpr_general__immspec_1_:
      if (lowlevel) {
SDValue node0x518d980 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x518dcb0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x518c240 = dag->getCopyToReg(entry, dl, dag->getRegister(Codasip::rf_xpr_1, MVT::i32), node0x518d980, SDValue());
SDValue node0x518d8d0 = dag->getNode(ISD::BRIND, dl, MVT::Other, node0x518c240, node0x518dcb0);
roots.reserve(2);
roots.push_back(node0x518c240);
roots.push_back(node0x518d8d0);
dag->setRoot(node0x518d8d0);
      } else       {
dag->setRoot(entry);
      }
      break;
    case Codasip::i_itype_jlreg__opc_jalr__x_0__simm12__xpr_general__immspec_1_:
      {
SDValue node0x518e720 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x518e2d0 = dag->getNode(ISD::BRIND, dl, MVT::Other, entry, node0x518e720);
roots.reserve(1);
roots.push_back(node0x518e2d0);
dag->setRoot(node0x518e2d0);
      }
      break;
    case Codasip::i_itype_jlreg__opc_jalr__xpr_general__simm12__xpr_general__immspec_1_:
      {
SDValue node0x518ebf0 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x518ce00 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x518ebf0, SDValue());
SDValue node0x518f190 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x518f260 = dag->getNode(ISD::BRIND, dl, MVT::Other, node0x518ce00, node0x518f190);
roots.reserve(2);
roots.push_back(node0x518ce00);
roots.push_back(node0x518f260);
dag->setRoot(node0x518f260);
      }
      break;
    case Codasip::i_call_alias__relative_addr20__:
case Codasip::i_call_alias__relative_addr20__ES:
case Codasip::i_call_alias__relative_addr20__MC:
case Codasip::i_call_alias__relative_addr20__BA:
      if (lowlevel) {
SDValue node0x4eb68a0 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x4eb5e60 = dag->getCopyToReg(entry, dl, dag->getRegister(Codasip::rf_xpr_1, MVT::i32), node0x4eb68a0, SDValue());
SDValue node0x4eb6cb0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x4eb6ed0 = dag->getNode(ISD::BR, dl, MVT::Other, node0x4eb5e60, node0x4eb6cb0);
roots.reserve(2);
roots.push_back(node0x4eb5e60);
roots.push_back(node0x4eb6ed0);
dag->setRoot(node0x4eb6ed0);
      } else       {
dag->setRoot(entry);
      }
      break;
    case Codasip::i_jal_abs_calias__opc_jal__x_0__relative_addr20__:
      {
SDValue node0x50541b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x5053e60 = dag->getNode(ISD::BR, dl, MVT::Other, entry, node0x50541b0);
roots.reserve(1);
roots.push_back(node0x5053e60);
dag->setRoot(node0x5053e60);
      }
      break;
    case Codasip::i_jal_abs_calias__opc_jal__xpr_general__relative_addr20__:
      {
SDValue node0x50549a0 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x5052fb0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x50549a0, SDValue());
SDValue node0x5054d10 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x5054970 = dag->getNode(ISD::BR, dl, MVT::Other, node0x5052fb0, node0x5054d10);
roots.reserve(2);
roots.push_back(node0x5052fb0);
roots.push_back(node0x5054970);
dag->setRoot(node0x5054970);
      }
      break;
    case Codasip::i_jtype_jlink__opc_jal__x_0__relative_addr20__:
      {
SDValue node0x5056760 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x5056920 = dag->getNode(ISD::BR, dl, MVT::Other, entry, node0x5056760);
roots.reserve(1);
roots.push_back(node0x5056920);
dag->setRoot(node0x5056920);
      }
      break;
    case Codasip::i_jtype_jlink__opc_jal__xpr_general__relative_addr20__:
      {
SDValue node0x5057570 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x5056a40 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5057570, SDValue());
SDValue node0x5057980 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x5057b70 = dag->getNode(ISD::BR, dl, MVT::Other, node0x5056a40, node0x5057980);
roots.reserve(2);
roots.push_back(node0x5056a40);
roots.push_back(node0x5057b70);
dag->setRoot(node0x5057b70);
      }
      break;
    case Codasip::i_btype_branches__opc_beq__x_0__x_0__relative_addr12__:
      {
SDValue node0x4fc05f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x4e905b0 = dag->getNode(ISD::BR, dl, MVT::Other, entry, node0x4fc05f0);
roots.reserve(1);
roots.push_back(node0x4e905b0);
dag->setRoot(node0x4e905b0);
      }
      break;
    case Codasip::i_btype_branches__opc_beq__x_0__xpr_general__relative_addr12__:
      if (lowlevel) {
SDValue node0x4e9eb10 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x4e7c4f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x4e9ecb0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x4e9ed50 = dag->getSetCC(dl, MVT::iAny, node0x4e7c4f0, node0x4e9eb10, ISD::SETEQ);
SDValue node0x4e9eec0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x4e9ed50, node0x4e9ecb0);
roots.reserve(1);
roots.push_back(node0x4e9eec0);
dag->setRoot(node0x4e9eec0);
      } else       {
SDValue node0x4e9eb10 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x4e7c4f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x4e9ecb0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x4e9ed50 = dag->getSetCC(dl, MVT::i32, node0x4e7c4f0, node0x4e9eb10, ISD::SETEQ);
SDValue node0x4e9eec0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x4e9ed50, node0x4e9ecb0);
roots.reserve(1);
roots.push_back(node0x4e9eec0);
dag->setRoot(node0x4e9eec0);
      }
      break;
    case Codasip::i_btype_branches__opc_beq__xpr_general__x_0__relative_addr12__:
      if (lowlevel) {
SDValue node0x4f959e0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x51bdbc0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x4f95b80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x4f95c20 = dag->getSetCC(dl, MVT::iAny, node0x51bdbc0, node0x4f959e0, ISD::SETEQ);
SDValue node0x4f95e70 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x4f95c20, node0x4f95b80);
roots.reserve(1);
roots.push_back(node0x4f95e70);
dag->setRoot(node0x4f95e70);
      } else       {
SDValue node0x4f959e0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x51bdbc0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x4f95b80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x4f95c20 = dag->getSetCC(dl, MVT::i32, node0x51bdbc0, node0x4f959e0, ISD::SETEQ);
SDValue node0x4f95e70 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x4f95c20, node0x4f95b80);
roots.reserve(1);
roots.push_back(node0x4f95e70);
dag->setRoot(node0x4f95e70);
      }
      break;
    case Codasip::i_btype_branches__opc_beq__xpr_general__xpr_general__relative_addr12__:
      if (lowlevel) {
SDValue node0x4e6d150 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4e77f90 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x4f975b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x4f97650 = dag->getSetCC(dl, MVT::iAny, node0x4e77f90, node0x4e6d150, ISD::SETEQ);
SDValue node0x4f978a0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x4f97650, node0x4f975b0);
roots.reserve(1);
roots.push_back(node0x4f978a0);
dag->setRoot(node0x4f978a0);
      } else       {
SDValue node0x4e6d150 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4e77f90 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x4f975b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x4f97650 = dag->getSetCC(dl, MVT::i32, node0x4e77f90, node0x4e6d150, ISD::SETEQ);
SDValue node0x4f978a0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x4f97650, node0x4f975b0);
roots.reserve(1);
roots.push_back(node0x4f978a0);
dag->setRoot(node0x4f978a0);
      }
      break;
    case Codasip::i_btype_branches__opc_bge__x_0__x_0__relative_addr12__:
      {
SDValue node0x4f7a4a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x4f7a6c0 = dag->getNode(ISD::BR, dl, MVT::Other, entry, node0x4f7a4a0);
roots.reserve(1);
roots.push_back(node0x4f7a6c0);
dag->setRoot(node0x4f7a6c0);
      }
      break;
    case Codasip::i_btype_branches__opc_bge__x_0__xpr_general__relative_addr12__:
      if (lowlevel) {
SDValue node0x4f7b550 = dag->getConstant(1LL, dl, MVT::i32);
SDValue node0x4f82d40 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x4f7b8d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x4f7b970 = dag->getSetCC(dl, MVT::iAny, node0x4f82d40, node0x4f7b550, ISD::SETLT);
SDValue node0x4f7bbc0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x4f7b970, node0x4f7b8d0);
roots.reserve(1);
roots.push_back(node0x4f7bbc0);
dag->setRoot(node0x4f7bbc0);
      } else       {
SDValue node0x4f7b550 = dag->getConstant(1LL, dl, MVT::i32);
SDValue node0x4f82d40 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x4f7b8d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x4f7b970 = dag->getSetCC(dl, MVT::i32, node0x4f82d40, node0x4f7b550, ISD::SETLT);
SDValue node0x4f7bbc0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x4f7b970, node0x4f7b8d0);
roots.reserve(1);
roots.push_back(node0x4f7bbc0);
dag->setRoot(node0x4f7bbc0);
      }
      break;
    case Codasip::i_btype_branches__opc_bge__xpr_general__x_0__relative_addr12__:
      if (lowlevel) {
SDValue node0x51ce8d0 = dag->getConstant(-1LL, dl, MVT::i32);
SDValue node0x4f833b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x51ce9d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x51cea70 = dag->getSetCC(dl, MVT::iAny, node0x4f833b0, node0x51ce8d0, ISD::SETGT);
SDValue node0x51cecc0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x51cea70, node0x51ce9d0);
roots.reserve(1);
roots.push_back(node0x51cecc0);
dag->setRoot(node0x51cecc0);
      } else       {
SDValue node0x51ce8d0 = dag->getConstant(-1LL, dl, MVT::i32);
SDValue node0x4f833b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x51ce9d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x51cea70 = dag->getSetCC(dl, MVT::i32, node0x4f833b0, node0x51ce8d0, ISD::SETGT);
SDValue node0x51cecc0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x51cea70, node0x51ce9d0);
roots.reserve(1);
roots.push_back(node0x51cecc0);
dag->setRoot(node0x51cecc0);
      }
      break;
    case Codasip::i_btype_branches__opc_bge__xpr_general__xpr_general__relative_addr12__:
      if (lowlevel) {
SDValue node0x4f83df0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x51d03e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x51d0490 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x51d0530 = dag->getSetCC(dl, MVT::iAny, node0x51d03e0, node0x4f83df0, ISD::SETGE);
SDValue node0x51d0780 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x51d0530, node0x51d0490);
roots.reserve(1);
roots.push_back(node0x51d0780);
dag->setRoot(node0x51d0780);
      } else       {
SDValue node0x4f83df0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x51d03e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x51d0490 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x51d0530 = dag->getSetCC(dl, MVT::i32, node0x51d03e0, node0x4f83df0, ISD::SETGE);
SDValue node0x51d0780 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x51d0530, node0x51d0490);
roots.reserve(1);
roots.push_back(node0x51d0780);
dag->setRoot(node0x51d0780);
      }
      break;
    case Codasip::i_btype_branches__opc_bgeu__x_0__x_0__relative_addr12__:
      {
SDValue node0x51d16b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x4f7d660 = dag->getNode(ISD::BR, dl, MVT::Other, entry, node0x51d16b0);
roots.reserve(1);
roots.push_back(node0x4f7d660);
dag->setRoot(node0x4f7d660);
      }
      break;
    case Codasip::i_btype_branches__opc_bgeu__x_0__xpr_general__relative_addr12__:
      if (lowlevel) {
SDValue node0x4f77060 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x4f771e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x4f77290 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x4f77330 = dag->getSetCC(dl, MVT::iAny, node0x4f771e0, node0x4f77060, ISD::SETEQ);
SDValue node0x4f77580 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x4f77330, node0x4f77290);
roots.reserve(1);
roots.push_back(node0x4f77580);
dag->setRoot(node0x4f77580);
      } else       {
SDValue node0x4f77060 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x4f771e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x4f77290 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x4f77330 = dag->getSetCC(dl, MVT::i32, node0x4f771e0, node0x4f77060, ISD::SETEQ);
SDValue node0x4f77580 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x4f77330, node0x4f77290);
roots.reserve(1);
roots.push_back(node0x4f77580);
dag->setRoot(node0x4f77580);
      }
      break;
    case Codasip::i_btype_branches__opc_bgeu__xpr_general__xpr_general__relative_addr12__:
      if (lowlevel) {
SDValue node0x51c3430 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x51c34e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x51c3590 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x51c3630 = dag->getSetCC(dl, MVT::iAny, node0x51c34e0, node0x51c3430, ISD::SETUGE);
SDValue node0x51c3880 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x51c3630, node0x51c3590);
roots.reserve(1);
roots.push_back(node0x51c3880);
dag->setRoot(node0x51c3880);
      } else       {
SDValue node0x51c3430 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x51c34e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x51c3590 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x51c3630 = dag->getSetCC(dl, MVT::i32, node0x51c34e0, node0x51c3430, ISD::SETUGE);
SDValue node0x51c3880 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x51c3630, node0x51c3590);
roots.reserve(1);
roots.push_back(node0x51c3880);
dag->setRoot(node0x51c3880);
      }
      break;
    case Codasip::i_btype_branches__opc_blt__x_0__xpr_general__relative_addr12__:
      if (lowlevel) {
SDValue node0x51c5440 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x51c55c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x51c5670 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x51c5710 = dag->getSetCC(dl, MVT::iAny, node0x51c55c0, node0x51c5440, ISD::SETGT);
SDValue node0x51c5960 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x51c5710, node0x51c5670);
roots.reserve(1);
roots.push_back(node0x51c5960);
dag->setRoot(node0x51c5960);
      } else       {
SDValue node0x51c5440 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x51c55c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x51c5670 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x51c5710 = dag->getSetCC(dl, MVT::i32, node0x51c55c0, node0x51c5440, ISD::SETGT);
SDValue node0x51c5960 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x51c5710, node0x51c5670);
roots.reserve(1);
roots.push_back(node0x51c5960);
dag->setRoot(node0x51c5960);
      }
      break;
    case Codasip::i_btype_branches__opc_blt__xpr_general__x_0__relative_addr12__:
      if (lowlevel) {
SDValue node0x51d3af0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x51d3c70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x51d3d20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x51d3dc0 = dag->getSetCC(dl, MVT::iAny, node0x51d3c70, node0x51d3af0, ISD::SETLT);
SDValue node0x51d4010 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x51d3dc0, node0x51d3d20);
roots.reserve(1);
roots.push_back(node0x51d4010);
dag->setRoot(node0x51d4010);
      } else       {
SDValue node0x51d3af0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x51d3c70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x51d3d20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x51d3dc0 = dag->getSetCC(dl, MVT::i32, node0x51d3c70, node0x51d3af0, ISD::SETLT);
SDValue node0x51d4010 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x51d3dc0, node0x51d3d20);
roots.reserve(1);
roots.push_back(node0x51d4010);
dag->setRoot(node0x51d4010);
      }
      break;
    case Codasip::i_btype_branches__opc_blt__xpr_general__xpr_general__relative_addr12__:
      if (lowlevel) {
SDValue node0x51d5710 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x51d57c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x51d5870 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x51d5910 = dag->getSetCC(dl, MVT::iAny, node0x51d57c0, node0x51d5710, ISD::SETLT);
SDValue node0x51d5b60 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x51d5910, node0x51d5870);
roots.reserve(1);
roots.push_back(node0x51d5b60);
dag->setRoot(node0x51d5b60);
      } else       {
SDValue node0x51d5710 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x51d57c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x51d5870 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x51d5910 = dag->getSetCC(dl, MVT::i32, node0x51d57c0, node0x51d5710, ISD::SETLT);
SDValue node0x51d5b60 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x51d5910, node0x51d5870);
roots.reserve(1);
roots.push_back(node0x51d5b60);
dag->setRoot(node0x51d5b60);
      }
      break;
    case Codasip::i_btype_branches__opc_bltu__x_0__xpr_general__relative_addr12__:
      if (lowlevel) {
SDValue node0x51d76d0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x51d7850 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x51d7900 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x51d79a0 = dag->getSetCC(dl, MVT::iAny, node0x51d7850, node0x51d76d0, ISD::SETNE);
SDValue node0x51d7bf0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x51d79a0, node0x51d7900);
roots.reserve(1);
roots.push_back(node0x51d7bf0);
dag->setRoot(node0x51d7bf0);
      } else       {
SDValue node0x51d76d0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x51d7850 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x51d7900 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x51d79a0 = dag->getSetCC(dl, MVT::i32, node0x51d7850, node0x51d76d0, ISD::SETNE);
SDValue node0x51d7bf0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x51d79a0, node0x51d7900);
roots.reserve(1);
roots.push_back(node0x51d7bf0);
dag->setRoot(node0x51d7bf0);
      }
      break;
    case Codasip::i_btype_branches__opc_bltu__xpr_general__xpr_general__relative_addr12__:
      if (lowlevel) {
SDValue node0x51c8610 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x51c86c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x51c8770 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x51c8810 = dag->getSetCC(dl, MVT::iAny, node0x51c86c0, node0x51c8610, ISD::SETULT);
SDValue node0x51c8a60 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x51c8810, node0x51c8770);
roots.reserve(1);
roots.push_back(node0x51c8a60);
dag->setRoot(node0x51c8a60);
      } else       {
SDValue node0x51c8610 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x51c86c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x51c8770 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x51c8810 = dag->getSetCC(dl, MVT::i32, node0x51c86c0, node0x51c8610, ISD::SETULT);
SDValue node0x51c8a60 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x51c8810, node0x51c8770);
roots.reserve(1);
roots.push_back(node0x51c8a60);
dag->setRoot(node0x51c8a60);
      }
      break;
    case Codasip::i_btype_branches__opc_bne__x_0__xpr_general__relative_addr12__:
      if (lowlevel) {
SDValue node0x51ca620 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x51ca7a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x51ca850 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x51ca8f0 = dag->getSetCC(dl, MVT::iAny, node0x51ca7a0, node0x51ca620, ISD::SETNE);
SDValue node0x51cab40 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x51ca8f0, node0x51ca850);
roots.reserve(1);
roots.push_back(node0x51cab40);
dag->setRoot(node0x51cab40);
      } else       {
SDValue node0x51ca620 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x51ca7a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x51ca850 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x51ca8f0 = dag->getSetCC(dl, MVT::i32, node0x51ca7a0, node0x51ca620, ISD::SETNE);
SDValue node0x51cab40 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x51ca8f0, node0x51ca850);
roots.reserve(1);
roots.push_back(node0x51cab40);
dag->setRoot(node0x51cab40);
      }
      break;
    case Codasip::i_btype_branches__opc_bne__xpr_general__x_0__relative_addr12__:
      if (lowlevel) {
SDValue node0x51cd010 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x51cd190 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x51cd240 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x51cd2e0 = dag->getSetCC(dl, MVT::iAny, node0x51cd190, node0x51cd010, ISD::SETNE);
SDValue node0x51cd530 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x51cd2e0, node0x51cd240);
roots.reserve(1);
roots.push_back(node0x51cd530);
dag->setRoot(node0x51cd530);
      } else       {
SDValue node0x51cd010 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x51cd190 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x51cd240 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x51cd2e0 = dag->getSetCC(dl, MVT::i32, node0x51cd190, node0x51cd010, ISD::SETNE);
SDValue node0x51cd530 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x51cd2e0, node0x51cd240);
roots.reserve(1);
roots.push_back(node0x51cd530);
dag->setRoot(node0x51cd530);
      }
      break;
    case Codasip::i_btype_branches__opc_bne__xpr_general__xpr_general__relative_addr12__:
      if (lowlevel) {
SDValue node0x4eb5940 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4eb59f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x4eb5aa0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x4eb5b40 = dag->getSetCC(dl, MVT::iAny, node0x4eb59f0, node0x4eb5940, ISD::SETNE);
SDValue node0x4eb5d90 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x4eb5b40, node0x4eb5aa0);
roots.reserve(1);
roots.push_back(node0x4eb5d90);
dag->setRoot(node0x4eb5d90);
      } else       {
SDValue node0x4eb5940 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4eb59f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x4eb5aa0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x4eb5b40 = dag->getSetCC(dl, MVT::i32, node0x4eb59f0, node0x4eb5940, ISD::SETNE);
SDValue node0x4eb5d90 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x4eb5b40, node0x4eb5aa0);
roots.reserve(1);
roots.push_back(node0x4eb5d90);
dag->setRoot(node0x4eb5d90);
      }
      break;
    case Codasip::i_btype_branches__opc_bge__xpr_general__xpr_general__relative_addr12__swappedCmpClone0__:
      if (lowlevel) {
SDValue node0x517d1c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x517c2a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x517d360 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x517d410 = dag->getSetCC(dl, MVT::iAny, node0x517c2a0, node0x517d360, ISD::SETLE);
SDValue node0x517d4e0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x517d410, node0x517d1c0);
roots.reserve(1);
roots.push_back(node0x517d4e0);
dag->setRoot(node0x517d4e0);
      } else       {
SDValue node0x517d1c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x517c2a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x517d360 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x517d410 = dag->getSetCC(dl, MVT::i32, node0x517c2a0, node0x517d360, ISD::SETLE);
SDValue node0x517d4e0 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x517d410, node0x517d1c0);
roots.reserve(1);
roots.push_back(node0x517d4e0);
dag->setRoot(node0x517d4e0);
      }
      break;
    case Codasip::i_btype_branches__opc_bgeu__xpr_general__xpr_general__relative_addr12__swappedCmpClone0__:
      if (lowlevel) {
SDValue node0x517de70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x517e100 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x517e1b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x517e260 = dag->getSetCC(dl, MVT::iAny, node0x517e100, node0x517e1b0, ISD::SETULE);
SDValue node0x517e330 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x517e260, node0x517de70);
roots.reserve(1);
roots.push_back(node0x517e330);
dag->setRoot(node0x517e330);
      } else       {
SDValue node0x517de70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x517e100 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x517e1b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x517e260 = dag->getSetCC(dl, MVT::i32, node0x517e100, node0x517e1b0, ISD::SETULE);
SDValue node0x517e330 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x517e260, node0x517de70);
roots.reserve(1);
roots.push_back(node0x517e330);
dag->setRoot(node0x517e330);
      }
      break;
    case Codasip::i_btype_branches__opc_blt__xpr_general__xpr_general__relative_addr12__swappedCmpClone0__:
      if (lowlevel) {
SDValue node0x517ecc0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x517ef50 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x517f000 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x517f0b0 = dag->getSetCC(dl, MVT::iAny, node0x517ef50, node0x517f000, ISD::SETGT);
SDValue node0x517f180 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x517f0b0, node0x517ecc0);
roots.reserve(1);
roots.push_back(node0x517f180);
dag->setRoot(node0x517f180);
      } else       {
SDValue node0x517ecc0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x517ef50 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x517f000 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x517f0b0 = dag->getSetCC(dl, MVT::i32, node0x517ef50, node0x517f000, ISD::SETGT);
SDValue node0x517f180 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x517f0b0, node0x517ecc0);
roots.reserve(1);
roots.push_back(node0x517f180);
dag->setRoot(node0x517f180);
      }
      break;
    case Codasip::i_btype_branches__opc_bltu__xpr_general__xpr_general__relative_addr12__swappedCmpClone0__:
      if (lowlevel) {
SDValue node0x517fbb0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x517fe40 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x517fef0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x517ffa0 = dag->getSetCC(dl, MVT::iAny, node0x517fe40, node0x517fef0, ISD::SETUGT);
SDValue node0x5180070 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x517ffa0, node0x517fbb0);
roots.reserve(1);
roots.push_back(node0x5180070);
dag->setRoot(node0x5180070);
      } else       {
SDValue node0x517fbb0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::Other);
SDValue node0x517fe40 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x517fef0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x517ffa0 = dag->getSetCC(dl, MVT::i32, node0x517fe40, node0x517fef0, ISD::SETUGT);
SDValue node0x5180070 = dag->getNode(ISD::BRCOND, dl, MVT::Other, entry, node0x517ffa0, node0x517fbb0);
roots.reserve(1);
roots.push_back(node0x5180070);
dag->setRoot(node0x5180070);
      }
      break;
    case Codasip::i_call_reg_alias__simm12__x_0__:
case Codasip::i_call_reg_alias__simm12__x_0__ES:
case Codasip::i_call_reg_alias__simm12__x_0__MC:
case Codasip::i_call_reg_alias__simm12__x_0__BA:
      if (lowlevel) {
SDValue node0x4eb74e0 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x4eb5eb0 = dag->getCopyToReg(entry, dl, dag->getRegister(Codasip::rf_xpr_1, MVT::i32), node0x4eb74e0, SDValue());
SDValue node0x4eb78f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x4eb7460 = dag->getNode(ISD::BR, dl, MVT::Other, node0x4eb5eb0, node0x4eb78f0);
roots.reserve(2);
roots.push_back(node0x4eb5eb0);
roots.push_back(node0x4eb7460);
dag->setRoot(node0x4eb7460);
      } else       {
dag->setRoot(entry);
      }
      break;
    case Codasip::i_itype_jlreg__opc_jalr__x_0__simm12__x_0__:
      {
SDValue node0x4fd8450 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::Other);
SDValue node0x4fd8180 = dag->getNode(ISD::BR, dl, MVT::Other, entry, node0x4fd8450);
roots.reserve(1);
roots.push_back(node0x4fd8180);
dag->setRoot(node0x4fd8180);
      }
      break;
    case Codasip::i_itype_jlreg__opc_jalr__xpr_general__simm12__x_0__:
      {
SDValue node0x4fdab60 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x4fda910 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4fdab60, SDValue());
SDValue node0x4fdaed0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::Other);
SDValue node0x4fdab30 = dag->getNode(ISD::BR, dl, MVT::Other, node0x4fda910, node0x4fdaed0);
roots.reserve(2);
roots.push_back(node0x4fda910);
roots.push_back(node0x4fdab30);
dag->setRoot(node0x4fdab30);
      }
      break;
    case Codasip::i_itype_alu__opc_addi__xpr_general__x_0__simm12__:
      {
SDValue node0x4ebc3c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4eb5f00 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4ebc3c0, SDValue());
roots.reserve(1);
roots.push_back(node0x4eb5f00);
dag->setRoot(node0x4eb5f00);
      }
      break;
    case Codasip::i_itype_alu__opc_addi__xpr_general__xpr_general__simm12__:
      {
SDValue node0x4ebd590 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4ebd640 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x4ebd6e0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x4ebd590, node0x4ebd640);
SDValue node0x4ebc4f0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4ebd6e0, SDValue());
roots.reserve(1);
roots.push_back(node0x4ebc4f0);
dag->setRoot(node0x4ebc4f0);
      }
      break;
    case Codasip::i_itype_alu__opc_andi__xpr_general__xpr_general__simm12__:
      {
SDValue node0x4fc41c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4fc4270 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x4fc4310 = dag->getNode(ISD::AND, dl, MVT::i32, node0x4fc41c0, node0x4fc4270);
SDValue node0x4fc3050 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4fc4310, SDValue());
roots.reserve(1);
roots.push_back(node0x4fc3050);
dag->setRoot(node0x4fc3050);
      }
      break;
    case Codasip::i_itype_alu__opc_ori__xpr_general__x_0__simm12__:
      {
SDValue node0x4fc7a00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4fc4430 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4fc7a00, SDValue());
roots.reserve(1);
roots.push_back(node0x4fc4430);
dag->setRoot(node0x4fc4430);
      }
      break;
    case Codasip::i_itype_alu__opc_ori__xpr_general__xpr_general__simm12__:
      {
SDValue node0x4fc8d70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4fc8e20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x4fc8ec0 = dag->getNode(ISD::OR, dl, MVT::i32, node0x4fc8d70, node0x4fc8e20);
SDValue node0x4fc7b30 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4fc8ec0, SDValue());
roots.reserve(1);
roots.push_back(node0x4fc7b30);
dag->setRoot(node0x4fc7b30);
      }
      break;
    case Codasip::i_itype_alu__opc_slti__xpr_general__x_0__simm12__:
      {
SDValue node0x4fcc4d0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x4fcc5b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4fcc650 = dag->getSetCC(dl, MVT::i32, node0x4fcc5b0, node0x4fcc4d0, ISD::SETGT);
SDValue node0x4fc8fe0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4fcc650, SDValue());
roots.reserve(1);
roots.push_back(node0x4fc8fe0);
dag->setRoot(node0x4fc8fe0);
      }
      break;
    case Codasip::i_itype_alu__opc_slti__xpr_general__xpr_general__simm12__:
      {
SDValue node0x4fcdaf0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4fcdba0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x4fcdc40 = dag->getSetCC(dl, MVT::i32, node0x4fcdaf0, node0x4fcdba0, ISD::SETLT);
SDValue node0x4fcc920 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4fcdc40, SDValue());
roots.reserve(1);
roots.push_back(node0x4fcc920);
dag->setRoot(node0x4fcc920);
      }
      break;
    case Codasip::i_itype_alu__opc_sltiu__xpr_general__x_0__simm12__:
      {
SDValue node0x4fd13b0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x4fd1490 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4fd1530 = dag->getSetCC(dl, MVT::i32, node0x4fd1490, node0x4fd13b0, ISD::SETNE);
SDValue node0x4fd0fa0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4fd1530, SDValue());
roots.reserve(1);
roots.push_back(node0x4fd0fa0);
dag->setRoot(node0x4fd0fa0);
      }
      break;
    case Codasip::i_itype_alu__opc_sltiu__xpr_general__xpr_general__simm12__:
      {
SDValue node0x4fd2a20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4fd2ad0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x4fd2b70 = dag->getSetCC(dl, MVT::i32, node0x4fd2a20, node0x4fd2ad0, ISD::SETULT);
SDValue node0x4fd1710 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4fd2b70, SDValue());
roots.reserve(1);
roots.push_back(node0x4fd1710);
dag->setRoot(node0x4fd1710);
      }
      break;
    case Codasip::i_itype_alu__opc_xori__xpr_general__x_0__simm12__:
      {
SDValue node0x4fd62d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4fd2660 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4fd62d0, SDValue());
roots.reserve(1);
roots.push_back(node0x4fd2660);
dag->setRoot(node0x4fd2660);
      }
      break;
    case Codasip::i_itype_alu__opc_xori__xpr_general__xpr_general__simm12__:
      {
SDValue node0x4fd7640 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4fd76f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x4fd7790 = dag->getNode(ISD::XOR, dl, MVT::i32, node0x4fd7640, node0x4fd76f0);
SDValue node0x4fd6400 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4fd7790, SDValue());
roots.reserve(1);
roots.push_back(node0x4fd6400);
dag->setRoot(node0x4fd6400);
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
SDValue node0x4fe0760 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4fde600 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x4fe0760, mpi, MVT::i8, 1);
SDValue node0x4fde770 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4fde600, SDValue());
roots.reserve(1);
roots.push_back(node0x4fde770);
dag->setRoot(node0x4fde770);
      }
      break;
    case Codasip::i_itype_loads__opc_lb__xpr_general__simm12__xpr_general__:
      {
SDValue node0x4fe1cf0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4fe1da0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x4fe1e40 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x4fe1cf0, node0x4fe1da0);
SDValue node0x4fdd490 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x4fe1e40, mpi, MVT::i8, 1);
SDValue node0x4fe0ab0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4fdd490, SDValue());
roots.reserve(1);
roots.push_back(node0x4fe0ab0);
dag->setRoot(node0x4fe0ab0);
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
SDValue node0x4fe6280 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4fe4030 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x4fe6280, mpi, MVT::i8, 1);
SDValue node0x4fe5d90 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4fe4030, SDValue());
roots.reserve(1);
roots.push_back(node0x4fe5d90);
dag->setRoot(node0x4fe5d90);
      }
      break;
    case Codasip::i_itype_loads__opc_lbu__xpr_general__simm12__xpr_general__:
      {
SDValue node0x4fe78b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4fe7960 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x4fe7a00 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x4fe78b0, node0x4fe7960);
SDValue node0x4fe2e70 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x4fe7a00, mpi, MVT::i8, 1);
SDValue node0x4fe5f60 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4fe2e70, SDValue());
roots.reserve(1);
roots.push_back(node0x4fe5f60);
dag->setRoot(node0x4fe5f60);
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
SDValue node0x4febd20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4fe9bc0 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x4febd20, mpi, MVT::i16, 1);
SDValue node0x4fe9d30 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4fe9bc0, SDValue());
roots.reserve(1);
roots.push_back(node0x4fe9d30);
dag->setRoot(node0x4fe9d30);
      }
      break;
    case Codasip::i_itype_loads__opc_lh__xpr_general__simm12__xpr_general__:
      {
SDValue node0x4fed2b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4fed360 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x4fed400 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x4fed2b0, node0x4fed360);
SDValue node0x4fe8a00 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x4fed400, mpi, MVT::i16, 1);
SDValue node0x4fec070 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4fe8a00, SDValue());
roots.reserve(1);
roots.push_back(node0x4fec070);
dag->setRoot(node0x4fec070);
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
SDValue node0x4ff1840 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4fef5f0 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x4ff1840, mpi, MVT::i16, 1);
SDValue node0x4ff1350 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4fef5f0, SDValue());
roots.reserve(1);
roots.push_back(node0x4ff1350);
dag->setRoot(node0x4ff1350);
      }
      break;
    case Codasip::i_itype_loads__opc_lhu__xpr_general__simm12__xpr_general__:
      {
SDValue node0x4ff2e70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4ff2f20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x4ff2fc0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x4ff2e70, node0x4ff2f20);
SDValue node0x4fee430 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x4ff2fc0, mpi, MVT::i16, 1);
SDValue node0x4ff1520 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4fee430, SDValue());
roots.reserve(1);
roots.push_back(node0x4ff1520);
dag->setRoot(node0x4ff1520);
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
SDValue node0x50516a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5051740 = dag->getLoad(MVT::i32, dl, entry, node0x50516a0, mpi, 1);
SDValue node0x504f6e0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5051740, SDValue());
roots.reserve(1);
roots.push_back(node0x504f6e0);
dag->setRoot(node0x504f6e0);
      }
      break;
    case Codasip::i_itype_loads__opc_lw__xpr_general__simm12__xpr_general__:
      {
SDValue node0x5052b80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5052c30 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5052cd0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x5052b80, node0x5052c30);
SDValue node0x5052d60 = dag->getLoad(MVT::i32, dl, entry, node0x5052cd0, mpi, 1);
SDValue node0x50518f0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5052d60, SDValue());
roots.reserve(1);
roots.push_back(node0x50518f0);
dag->setRoot(node0x50518f0);
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
SDValue node0x506c4d0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x506c400 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x506c4d0, SDValue());
roots.reserve(1);
roots.push_back(node0x506c400);
dag->setRoot(node0x506c400);
      }
      break;
    case Codasip::i_rtype_alu__opc_add__xpr_general__x_0__xpr_general__:
      {
SDValue node0x506d710 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x506c670 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x506d710, SDValue());
roots.reserve(1);
roots.push_back(node0x506c670);
dag->setRoot(node0x506c670);
      }
      break;
    case Codasip::i_rtype_alu__opc_add__xpr_general__xpr_general__x_0__:
      {
SDValue node0x506f940 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x506f670 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x506f940, SDValue());
roots.reserve(1);
roots.push_back(node0x506f670);
dag->setRoot(node0x506f670);
      }
      break;
    case Codasip::i_rtype_alu__opc_add__xpr_general__xpr_general__xpr_general__:
      {
SDValue node0x5070d60 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5070e10 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5070ec0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x5070d60, node0x5070e10);
SDValue node0x50709f0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5070ec0, SDValue());
roots.reserve(1);
roots.push_back(node0x50709f0);
dag->setRoot(node0x50709f0);
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
SDValue node0x5079b00 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x5079a30 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5079b00, SDValue());
roots.reserve(1);
roots.push_back(node0x5079a30);
dag->setRoot(node0x5079a30);
      }
      break;
    case Codasip::i_rtype_alu__opc_and__xpr_general__xpr_general__xpr_general__:
      {
SDValue node0x507e0f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x507e1a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x507e250 = dag->getNode(ISD::AND, dl, MVT::i32, node0x507e0f0, node0x507e1a0);
SDValue node0x507dd80 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x507e250, SDValue());
roots.reserve(1);
roots.push_back(node0x507dd80);
dag->setRoot(node0x507dd80);
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
SDValue node0x5086e90 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x5086c40 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5086e90, SDValue());
roots.reserve(1);
roots.push_back(node0x5086c40);
dag->setRoot(node0x5086c40);
      }
      break;
    case Codasip::i_rtype_alu__opc_or__xpr_general__x_0__xpr_general__:
      {
SDValue node0x50880d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5087030 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x50880d0, SDValue());
roots.reserve(1);
roots.push_back(node0x5087030);
dag->setRoot(node0x5087030);
      }
      break;
    case Codasip::i_rtype_alu__opc_or__xpr_general__xpr_general__x_0__:
      {
SDValue node0x508a300 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5089e90 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x508a300, SDValue());
roots.reserve(1);
roots.push_back(node0x5089e90);
dag->setRoot(node0x5089e90);
      }
      break;
    case Codasip::i_rtype_alu__opc_or__xpr_general__xpr_general__xpr_general__:
      {
SDValue node0x508b720 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x508b7d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x508b880 = dag->getNode(ISD::OR, dl, MVT::i32, node0x508b720, node0x508b7d0);
SDValue node0x508a080 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x508b880, SDValue());
roots.reserve(1);
roots.push_back(node0x508a080);
dag->setRoot(node0x508a080);
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
SDValue node0x50944c0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x50943f0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x50944c0, SDValue());
roots.reserve(1);
roots.push_back(node0x50943f0);
dag->setRoot(node0x50943f0);
      }
      break;
    case Codasip::i_rtype_alu__opc_sll__xpr_general__xpr_general__x_0__:
      {
SDValue node0x50977e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5097510 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x50977e0, SDValue());
roots.reserve(1);
roots.push_back(node0x5097510);
dag->setRoot(node0x5097510);
      }
      break;
    case Codasip::i_rtype_alu__opc_sll__xpr_general__xpr_general__xpr_general__:
      {
SDValue node0x5098c00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5098cb0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5098d60 = dag->getNode(ISD::SHL, dl, MVT::i32, node0x5098c00, node0x5098cb0);
SDValue node0x5098890 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5098d60, SDValue());
roots.reserve(1);
roots.push_back(node0x5098890);
dag->setRoot(node0x5098890);
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
SDValue node0x50a19a0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x50a18d0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x50a19a0, SDValue());
roots.reserve(1);
roots.push_back(node0x50a18d0);
dag->setRoot(node0x50a18d0);
      }
      break;
    case Codasip::i_rtype_alu__opc_slt__xpr_general__x_0__xpr_general__:
      {
SDValue node0x50a2a60 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x50a2be0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x50a2c90 = dag->getSetCC(dl, MVT::i32, node0x50a2be0, node0x50a2a60, ISD::SETGT);
SDValue node0x50a1b40 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x50a2c90, SDValue());
roots.reserve(1);
roots.push_back(node0x50a1b40);
dag->setRoot(node0x50a1b40);
      }
      break;
    case Codasip::i_rtype_alu__opc_slt__xpr_general__xpr_general__x_0__:
      {
SDValue node0x50a4e10 = dag->getConstant(31LL, dl, MVT::i32);
SDValue node0x50a5030 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x50a50e0 = dag->getNode(ISD::SRL, dl, MVT::i32, node0x50a5030, node0x50a4e10);
SDValue node0x50a4cc0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x50a50e0, SDValue());
roots.reserve(1);
roots.push_back(node0x50a4cc0);
dag->setRoot(node0x50a4cc0);
      }
      break;
    case Codasip::i_rtype_alu__opc_slt__xpr_general__xpr_general__xpr_general__:
      {
SDValue node0x50a6510 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x50a65c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x50a6670 = dag->getSetCC(dl, MVT::i32, node0x50a6510, node0x50a65c0, ISD::SETLT);
SDValue node0x50a61a0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x50a6670, SDValue());
roots.reserve(1);
roots.push_back(node0x50a61a0);
dag->setRoot(node0x50a61a0);
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
SDValue node0x4ffc530 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x4ffc460 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4ffc530, SDValue());
roots.reserve(1);
roots.push_back(node0x4ffc460);
dag->setRoot(node0x4ffc460);
      }
      break;
    case Codasip::i_rtype_alu__opc_sltu__xpr_general__x_0__xpr_general__:
      {
SDValue node0x4ffd5f0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x4ffd770 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4ffd820 = dag->getSetCC(dl, MVT::i32, node0x4ffd770, node0x4ffd5f0, ISD::SETNE);
SDValue node0x4ffc6d0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4ffd820, SDValue());
roots.reserve(1);
roots.push_back(node0x4ffc6d0);
dag->setRoot(node0x4ffc6d0);
      }
      break;
    case Codasip::i_rtype_alu__opc_sltu__xpr_general__xpr_general__xpr_general__:
      {
SDValue node0x5000df0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5000ea0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5000f50 = dag->getSetCC(dl, MVT::i32, node0x5000df0, node0x5000ea0, ISD::SETULT);
SDValue node0x5000a80 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5000f50, SDValue());
roots.reserve(1);
roots.push_back(node0x5000a80);
dag->setRoot(node0x5000a80);
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
SDValue node0x5009c50 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x5009b80 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5009c50, SDValue());
roots.reserve(1);
roots.push_back(node0x5009b80);
dag->setRoot(node0x5009b80);
      }
      break;
    case Codasip::i_rtype_alu__opc_sra__xpr_general__xpr_general__x_0__:
      {
SDValue node0x500cf70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x500cca0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x500cf70, SDValue());
roots.reserve(1);
roots.push_back(node0x500cca0);
dag->setRoot(node0x500cca0);
      }
      break;
    case Codasip::i_rtype_alu__opc_sra__xpr_general__xpr_general__xpr_general__:
      {
SDValue node0x500e430 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x500e4e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x500e620 = dag->getNode(ISD::SRA, dl, MVT::i32, node0x500e430, node0x500e4e0);
SDValue node0x500e020 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x500e620, SDValue());
roots.reserve(1);
roots.push_back(node0x500e020);
dag->setRoot(node0x500e020);
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
SDValue node0x5017290 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x50171c0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5017290, SDValue());
roots.reserve(1);
roots.push_back(node0x50171c0);
dag->setRoot(node0x50171c0);
      }
      break;
    case Codasip::i_rtype_alu__opc_srl__xpr_general__xpr_general__x_0__:
      {
SDValue node0x501a5b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x501a2e0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x501a5b0, SDValue());
roots.reserve(1);
roots.push_back(node0x501a2e0);
dag->setRoot(node0x501a2e0);
      }
      break;
    case Codasip::i_rtype_alu__opc_srl__xpr_general__xpr_general__xpr_general__:
      {
SDValue node0x501ba70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x501bb20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x501bc60 = dag->getNode(ISD::SRL, dl, MVT::i32, node0x501ba70, node0x501bb20);
SDValue node0x501b660 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x501bc60, SDValue());
roots.reserve(1);
roots.push_back(node0x501b660);
dag->setRoot(node0x501b660);
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
SDValue node0x50248d0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x5024800 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x50248d0, SDValue());
roots.reserve(1);
roots.push_back(node0x5024800);
dag->setRoot(node0x5024800);
      }
      break;
    case Codasip::i_rtype_alu__opc_sub__xpr_general__x_0__xpr_general__:
      {
SDValue node0x5025910 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x5025b10 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5025bc0 = dag->getNode(ISD::SUB, dl, MVT::i32, node0x5025910, node0x5025b10);
SDValue node0x5024a70 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5025bc0, SDValue());
roots.reserve(1);
roots.push_back(node0x5024a70);
dag->setRoot(node0x5024a70);
      }
      break;
    case Codasip::i_rtype_alu__opc_sub__xpr_general__xpr_general__x_0__:
      {
SDValue node0x5027e00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5027b30 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5027e00, SDValue());
roots.reserve(1);
roots.push_back(node0x5027b30);
dag->setRoot(node0x5027b30);
      }
      break;
    case Codasip::i_rtype_alu__opc_sub__xpr_general__xpr_general__xpr_general__:
      {
SDValue node0x5029220 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x50292d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5029380 = dag->getNode(ISD::SUB, dl, MVT::i32, node0x5029220, node0x50292d0);
SDValue node0x5028eb0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5029380, SDValue());
roots.reserve(1);
roots.push_back(node0x5028eb0);
dag->setRoot(node0x5028eb0);
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
SDValue node0x5031fc0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x5031ef0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5031fc0, SDValue());
roots.reserve(1);
roots.push_back(node0x5031ef0);
dag->setRoot(node0x5031ef0);
      }
      break;
    case Codasip::i_rtype_alu__opc_xor__xpr_general__x_0__xpr_general__:
      {
SDValue node0x5033200 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5032160 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5033200, SDValue());
roots.reserve(1);
roots.push_back(node0x5032160);
dag->setRoot(node0x5032160);
      }
      break;
    case Codasip::i_rtype_alu__opc_xor__xpr_general__xpr_general__x_0__:
      {
SDValue node0x5035430 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5035160 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5035430, SDValue());
roots.reserve(1);
roots.push_back(node0x5035160);
dag->setRoot(node0x5035160);
      }
      break;
    case Codasip::i_rtype_alu__opc_xor__xpr_general__xpr_general__xpr_general__:
      {
SDValue node0x5036850 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5036900 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x50369b0 = dag->getNode(ISD::XOR, dl, MVT::i32, node0x5036850, node0x5036900);
SDValue node0x50364e0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x50369b0, SDValue());
roots.reserve(1);
roots.push_back(node0x50364e0);
dag->setRoot(node0x50364e0);
      }
      break;
    case Codasip::i_rtype_shift__opc_slli__xpr_general__xpr_general__uimm5__:
      {
SDValue node0x503b6e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x503b790 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x503b830 = dag->getNode(ISD::SHL, dl, MVT::i32, node0x503b6e0, node0x503b790);
SDValue node0x503a890 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x503b830, SDValue());
roots.reserve(1);
roots.push_back(node0x503a890);
dag->setRoot(node0x503a890);
      }
      break;
    case Codasip::i_rtype_shift__opc_srai__xpr_general__xpr_general__uimm5__:
      {
SDValue node0x5040560 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5040610 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x50406b0 = dag->getNode(ISD::SRA, dl, MVT::i32, node0x5040560, node0x5040610);
SDValue node0x503f710 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x50406b0, SDValue());
roots.reserve(1);
roots.push_back(node0x503f710);
dag->setRoot(node0x503f710);
      }
      break;
    case Codasip::i_rtype_shift__opc_srli__xpr_general__xpr_general__uimm5__:
      {
SDValue node0x50453e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5045490 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5045530 = dag->getNode(ISD::SRL, dl, MVT::i32, node0x50453e0, node0x5045490);
SDValue node0x5044590 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5045530, SDValue());
roots.reserve(1);
roots.push_back(node0x5044590);
dag->setRoot(node0x5044590);
      }
      break;
    case Codasip::i_stype_store__opc_sb__x_0__simm12__x_0__:
      {
SDValue node0x5166e70 = dag->getConstant(0LL, dl, MVT::i8);
SDValue node0x5167110 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x4e9e850 = dag->getStore(entry, dl, node0x5166e70, node0x5167110, mpi, 1);
roots.reserve(1);
roots.push_back(node0x4e9e850);
dag->setRoot(node0x4e9e850);
      }
      break;
    case Codasip::i_stype_store__opc_sb__x_0__simm12__xpr_general__:
      {
SDValue node0x51681f0 = dag->getConstant(0LL, dl, MVT::i8);
SDValue node0x5168530 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x51685e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5168680 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x5168530, node0x51685e0);
SDValue node0x5168710 = dag->getStore(entry, dl, node0x51681f0, node0x5168680, mpi, 1);
roots.reserve(1);
roots.push_back(node0x5168710);
dag->setRoot(node0x5168710);
      }
      break;
    case Codasip::i_stype_store__opc_sb__xpr_general__simm12__x_0__:
      {
SDValue node0x516aaf0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x516aba0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x51b1130 = dag->getTruncStore(entry, dl, node0x516aaf0, node0x516aba0, mpi, MVT::i8, 1);
roots.reserve(1);
roots.push_back(node0x51b1130);
dag->setRoot(node0x51b1130);
      }
      break;
    case Codasip::i_stype_store__opc_sb__xpr_general__simm12__xpr_general__:
      {
SDValue node0x516c0e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x516c190 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x516c240 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x516c390 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x516c190, node0x516c240);
SDValue node0x516acf0 = dag->getTruncStore(entry, dl, node0x516c0e0, node0x516c390, mpi, MVT::i8, 1);
roots.reserve(1);
roots.push_back(node0x516acf0);
dag->setRoot(node0x516acf0);
      }
      break;
    case Codasip::i_stype_store__opc_sh__x_0__simm12__x_0__:
      {
SDValue node0x516cff0 = dag->getConstant(0LL, dl, MVT::i16);
SDValue node0x516d290 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x516d330 = dag->getStore(entry, dl, node0x516cff0, node0x516d290, mpi, 1);
roots.reserve(1);
roots.push_back(node0x516d330);
dag->setRoot(node0x516d330);
      }
      break;
    case Codasip::i_stype_store__opc_sh__x_0__simm12__xpr_general__:
      {
SDValue node0x516e150 = dag->getConstant(0LL, dl, MVT::i16);
SDValue node0x516e490 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x516e540 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x516e5e0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x516e490, node0x516e540);
SDValue node0x516e670 = dag->getStore(entry, dl, node0x516e150, node0x516e5e0, mpi, 1);
roots.reserve(1);
roots.push_back(node0x516e670);
dag->setRoot(node0x516e670);
      }
      break;
    case Codasip::i_stype_store__opc_sh__xpr_general__simm12__x_0__:
      {
SDValue node0x5170a50 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5170b00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x51b1690 = dag->getTruncStore(entry, dl, node0x5170a50, node0x5170b00, mpi, MVT::i16, 1);
roots.reserve(1);
roots.push_back(node0x51b1690);
dag->setRoot(node0x51b1690);
      }
      break;
    case Codasip::i_stype_store__opc_sh__xpr_general__simm12__xpr_general__:
      {
SDValue node0x5172040 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x51720f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x51721a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x51722f0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x51720f0, node0x51721a0);
SDValue node0x5170c50 = dag->getTruncStore(entry, dl, node0x5172040, node0x51722f0, mpi, MVT::i16, 1);
roots.reserve(1);
roots.push_back(node0x5170c50);
dag->setRoot(node0x5170c50);
      }
      break;
    case Codasip::i_stype_store__opc_sw__x_0__simm12__x_0__:
      {
SDValue node0x5172f50 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x5173150 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x51731f0 = dag->getStore(entry, dl, node0x5172f50, node0x5173150, mpi, 1);
roots.reserve(1);
roots.push_back(node0x51731f0);
dag->setRoot(node0x51731f0);
      }
      break;
    case Codasip::i_stype_store__opc_sw__x_0__simm12__xpr_general__:
      {
SDValue node0x5174010 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x51742b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5174360 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5174400 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x51742b0, node0x5174360);
SDValue node0x5174490 = dag->getStore(entry, dl, node0x5174010, node0x5174400, mpi, 1);
roots.reserve(1);
roots.push_back(node0x5174490);
dag->setRoot(node0x5174490);
      }
      break;
    case Codasip::i_stype_store__opc_sw__xpr_general__simm12__x_0__:
      {
SDValue node0x5176870 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5176920 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x51769c0 = dag->getStore(entry, dl, node0x5176870, node0x5176920, mpi, 1);
roots.reserve(1);
roots.push_back(node0x51769c0);
dag->setRoot(node0x51769c0);
      }
      break;
    case Codasip::i_stype_store__opc_sw__xpr_general__simm12__xpr_general__:
      {
SDValue node0x5177db0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5177e60 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5177f10 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5177fb0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x5177e60, node0x5177f10);
SDValue node0x5178040 = dag->getStore(entry, dl, node0x5177db0, node0x5177fb0, mpi, 1);
roots.reserve(1);
roots.push_back(node0x5178040);
dag->setRoot(node0x5178040);
      }
      break;
    case Codasip::i_utype_ops__opc_auipc__xpr_general__uimm20__:
      {
SDValue node0x5179560 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x5179850 = dag->getConstant(-4LL, dl, MVT::i32);
SDValue node0x5179a70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5179b10 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x5179560, node0x5179a70);
SDValue node0x5179ba0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x5179b10, node0x5179850);
SDValue node0x5178970 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5179ba0, SDValue());
roots.reserve(1);
roots.push_back(node0x5178970);
dag->setRoot(node0x5178970);
      }
      break;
    case Codasip::i_utype_ops__opc_lui__xpr_general__uimm20__:
      {
SDValue node0x517b3d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x517afa0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x517b3d0, SDValue());
roots.reserve(1);
roots.push_back(node0x517afa0);
dag->setRoot(node0x517afa0);
      }
      break;
    case Codasip::i_itype_alu__opc_slti__xpr_general__x_0__simm12__immSpecClone__imm_1__0__:
      {
SDValue node0x5180ea0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x517b4b0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5180ea0, SDValue());
roots.reserve(1);
roots.push_back(node0x517b4b0);
dag->setRoot(node0x517b4b0);
      }
      break;
    case Codasip::i_itype_alu__opc_slti__xpr_general__x_0__simm12__immSpecClone__imm_1__1__:
      {
SDValue node0x51807a0 = dag->getConstant(1LL, dl, MVT::i32);
SDValue node0x517c6b0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x51807a0, SDValue());
roots.reserve(1);
roots.push_back(node0x517c6b0);
dag->setRoot(node0x517c6b0);
      }
      break;
    case Codasip::i_itype_alu__opc_sltiu__xpr_general__x_0__simm12__immSpecClone__imm_1__0__:
      {
SDValue node0x5181da0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x5181430 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5181da0, SDValue());
roots.reserve(1);
roots.push_back(node0x5181430);
dag->setRoot(node0x5181430);
      }
      break;
    case Codasip::i_itype_alu__opc_sltiu__xpr_general__x_0__simm12__immSpecClone__imm_1__1__:
      {
SDValue node0x5181600 = dag->getConstant(1LL, dl, MVT::i32);
SDValue node0x517caf0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5181600, SDValue());
roots.reserve(1);
roots.push_back(node0x517caf0);
dag->setRoot(node0x517caf0);
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
SDValue node0x4fdd1d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4fe0800 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x4fdd1d0, mpi, MVT::i8, 1);
SDValue node0x51a5d10 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4fe0800, SDValue());
roots.reserve(1);
roots.push_back(node0x51a5d10);
dag->setRoot(node0x51a5d10);
      }
      break;
    case Codasip::i_itype_loads__opc_lb__xpr_general__simm12__xpr_general__AEXT_CLONE_:
      {
SDValue node0x4fe1ed0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4fe19b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x4fe1fa0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x4fe1ed0, node0x4fe19b0);
SDValue node0x519b670 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x4fe1fa0, mpi, MVT::i8, 1);
SDValue node0x51a6910 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x519b670, SDValue());
roots.reserve(1);
roots.push_back(node0x51a6910);
dag->setRoot(node0x51a6910);
      }
      break;
    case Codasip::i_itype_loads__opc_lb__xpr_general__simm12__xpr_general__immspec_1_:
      {
SDValue node0x5190470 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5186170 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x5190470, mpi, MVT::i8, 1);
SDValue node0x518f760 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5186170, SDValue());
roots.reserve(1);
roots.push_back(node0x518f760);
dag->setRoot(node0x518f760);
      }
      break;
    case Codasip::i_itype_loads__opc_lb__xpr_general__simm12__xpr_general__immspec_1_AEXT_CLONE_:
      {
SDValue node0x5190520 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5185bb0 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x5190520, mpi, MVT::i8, 1);
SDValue node0x5184c90 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5185bb0, SDValue());
roots.reserve(1);
roots.push_back(node0x5184c90);
dag->setRoot(node0x5184c90);
      }
      break;
    case Codasip::i_itype_loads__opc_lbu__xpr_general__simm12__x_0__AEXT_CLONE_:
      {
SDValue node0x4fe2c50 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4fe6320 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x4fe2c50, mpi, MVT::i8, 1);
SDValue node0x51a74a0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4fe6320, SDValue());
roots.reserve(1);
roots.push_back(node0x51a74a0);
dag->setRoot(node0x51a74a0);
      }
      break;
    case Codasip::i_itype_loads__opc_lbu__xpr_general__simm12__xpr_general__AEXT_CLONE_:
      {
SDValue node0x4fe7a90 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4fe7570 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x4fe7b60 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x4fe7a90, node0x4fe7570);
SDValue node0x51a8070 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x4fe7b60, mpi, MVT::i8, 1);
SDValue node0x51a8100 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x51a8070, SDValue());
roots.reserve(1);
roots.push_back(node0x51a8100);
dag->setRoot(node0x51a8100);
      }
      break;
    case Codasip::i_itype_loads__opc_lbu__xpr_general__simm12__xpr_general__immspec_1_:
      {
SDValue node0x5190f50 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5185060 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x5190f50, mpi, MVT::i8, 1);
SDValue node0x518f800 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5185060, SDValue());
roots.reserve(1);
roots.push_back(node0x518f800);
dag->setRoot(node0x518f800);
      }
      break;
    case Codasip::i_itype_loads__opc_lbu__xpr_general__simm12__xpr_general__immspec_1_AEXT_CLONE_:
      {
SDValue node0x5191000 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5184a30 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x5191000, mpi, MVT::i8, 1);
SDValue node0x4ec4870 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5184a30, SDValue());
roots.reserve(1);
roots.push_back(node0x4ec4870);
dag->setRoot(node0x4ec4870);
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
SDValue node0x4fe87c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4febdc0 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x4fe87c0, mpi, MVT::i16, 1);
SDValue node0x51a8d60 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4febdc0, SDValue());
roots.reserve(1);
roots.push_back(node0x51a8d60);
dag->setRoot(node0x51a8d60);
      }
      break;
    case Codasip::i_itype_loads__opc_lh__xpr_general__simm12__xpr_general__AEXT_CLONE_:
      {
SDValue node0x4fed490 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4fecf70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x4fed560 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x4fed490, node0x4fecf70);
SDValue node0x51a9930 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x4fed560, mpi, MVT::i16, 1);
SDValue node0x51a99c0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x51a9930, SDValue());
roots.reserve(1);
roots.push_back(node0x51a99c0);
dag->setRoot(node0x51a99c0);
      }
      break;
    case Codasip::i_itype_loads__opc_lh__xpr_general__simm12__xpr_general__immspec_1_:
      {
SDValue node0x5192210 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5191a60 = dag->getExtLoad(ISD::SEXTLOAD, dl, MVT::i32, entry, node0x5192210, mpi, MVT::i16, 1);
SDValue node0x5190b40 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5191a60, SDValue());
roots.reserve(1);
roots.push_back(node0x5190b40);
dag->setRoot(node0x5190b40);
      }
      break;
    case Codasip::i_itype_loads__opc_lh__xpr_general__simm12__xpr_general__immspec_1_AEXT_CLONE_:
      {
SDValue node0x51922c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5184470 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x51922c0, mpi, MVT::i16, 1);
SDValue node0x518cf40 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5184470, SDValue());
roots.reserve(1);
roots.push_back(node0x518cf40);
dag->setRoot(node0x518cf40);
      }
      break;
    case Codasip::i_itype_loads__opc_lhu__xpr_general__simm12__x_0__AEXT_CLONE_:
      {
SDValue node0x4fee210 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4ff18e0 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x4fee210, mpi, MVT::i16, 1);
SDValue node0x51aa5f0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4ff18e0, SDValue());
roots.reserve(1);
roots.push_back(node0x51aa5f0);
dag->setRoot(node0x51aa5f0);
      }
      break;
    case Codasip::i_itype_loads__opc_lhu__xpr_general__simm12__xpr_general__AEXT_CLONE_:
      {
SDValue node0x4ff3050 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4ff2b30 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x4ff3120 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x4ff3050, node0x4ff2b30);
SDValue node0x51ab1c0 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x4ff3120, mpi, MVT::i16, 1);
SDValue node0x51ab250 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x51ab1c0, SDValue());
roots.reserve(1);
roots.push_back(node0x51ab250);
dag->setRoot(node0x51ab250);
      }
      break;
    case Codasip::i_itype_loads__opc_lhu__xpr_general__simm12__xpr_general__immspec_1_:
      {
SDValue node0x5192cf0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x51866f0 = dag->getExtLoad(ISD::ZEXTLOAD, dl, MVT::i32, entry, node0x5192cf0, mpi, MVT::i16, 1);
SDValue node0x51915d0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x51866f0, SDValue());
roots.reserve(1);
roots.push_back(node0x51915d0);
dag->setRoot(node0x51915d0);
      }
      break;
    case Codasip::i_itype_loads__opc_lhu__xpr_general__simm12__xpr_general__immspec_1_AEXT_CLONE_:
      {
SDValue node0x51890e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x51886e0 = dag->getExtLoad(ISD::EXTLOAD, dl, MVT::i32, entry, node0x51890e0, mpi, MVT::i16, 1);
SDValue node0x518b7c0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x51886e0, SDValue());
roots.reserve(1);
roots.push_back(node0x518b7c0);
dag->setRoot(node0x518b7c0);
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
SDValue node0x5193fb0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5194060 = dag->getLoad(MVT::i32, dl, entry, node0x5193fb0, mpi, 1);
SDValue node0x51928e0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5194060, SDValue());
roots.reserve(1);
roots.push_back(node0x51928e0);
dag->setRoot(node0x51928e0);
      }
      break;
    case Codasip::i_rtype_alu__opc_slt__xpr_general__xpr_general__xpr_general__swappedCmpClone0__:
      {
SDValue node0x5182560 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x51826b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5182760 = dag->getSetCC(dl, MVT::i32, node0x5182560, node0x51826b0, ISD::SETGT);
SDValue node0x5181bd0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5182760, SDValue());
roots.reserve(1);
roots.push_back(node0x5181bd0);
dag->setRoot(node0x5181bd0);
      }
      break;
    case Codasip::i_rtype_alu__opc_sltu__xpr_general__xpr_general__xpr_general__swappedCmpClone0__:
      {
SDValue node0x5183130 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5183280 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5183330 = dag->getSetCC(dl, MVT::i32, node0x5183130, node0x5183280, ISD::SETUGT);
SDValue node0x5182d50 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5183330, SDValue());
roots.reserve(1);
roots.push_back(node0x5182d50);
dag->setRoot(node0x5182d50);
      }
      break;
    case Codasip::i_rtype_alu__opc_sra__xpr_general__xpr_general__xpr_general__SHIFT_MASK_CLONE_:
      {
SDValue node0x4ff3d80 = dag->getConstant(31LL, dl, MVT::i32);
SDValue node0x4ebefe0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4ff3fa0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x5056890 = dag->getNode(ISD::AND, dl, MVT::i32, node0x4ff3fa0, node0x4ff3d80);
SDValue node0x4ebef50 = dag->getNode(ISD::SRA, dl, MVT::i32, node0x4ebefe0, node0x5056890);
SDValue node0x51ab4d0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4ebef50, SDValue());
roots.reserve(1);
roots.push_back(node0x51ab4d0);
dag->setRoot(node0x51ab4d0);
      }
      break;
    case Codasip::i_rtype_alu__opc_srl__xpr_general__xpr_general__xpr_general__SHIFT_MASK_CLONE_:
      {
SDValue node0x500e210 = dag->getConstant(31LL, dl, MVT::i32);
SDValue node0x4ec2580 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4ec2610 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x500e590 = dag->getNode(ISD::AND, dl, MVT::i32, node0x4ec2610, node0x500e210);
SDValue node0x4f79bd0 = dag->getNode(ISD::SRL, dl, MVT::i32, node0x4ec2580, node0x500e590);
SDValue node0x4ec26a0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4f79bd0, SDValue());
roots.reserve(1);
roots.push_back(node0x4ec26a0);
dag->setRoot(node0x4ec26a0);
      }
      break;
    case Codasip::i_stype_store__opc_sb__x_0__simm12__xpr_general__immspec_1_:
      {
SDValue node0x51950e0 = dag->getConstant(0LL, dl, MVT::i8);
SDValue node0x51952e0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5195080 = dag->getStore(entry, dl, node0x51950e0, node0x51952e0, mpi, 1);
roots.reserve(1);
roots.push_back(node0x5195080);
dag->setRoot(node0x5195080);
      }
      break;
    case Codasip::i_stype_store__opc_sb__xpr_general__simm12__xpr_general__immspec_1_:
      {
SDValue node0x5195a60 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5195b10 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x51883b0 = dag->getTruncStore(entry, dl, node0x5195a60, node0x5195b10, mpi, MVT::i8, 1);
roots.reserve(1);
roots.push_back(node0x51883b0);
dag->setRoot(node0x51883b0);
      }
      break;
    case Codasip::i_stype_store__opc_sh__x_0__simm12__xpr_general__immspec_1_:
      {
SDValue node0x5196370 = dag->getConstant(0LL, dl, MVT::i16);
SDValue node0x5196590 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5196310 = dag->getStore(entry, dl, node0x5196370, node0x5196590, mpi, 1);
roots.reserve(1);
roots.push_back(node0x5196310);
dag->setRoot(node0x5196310);
      }
      break;
    case Codasip::i_stype_store__opc_sh__xpr_general__simm12__xpr_general__immspec_1_:
      {
SDValue node0x5196d30 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5196de0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x518af20 = dag->getTruncStore(entry, dl, node0x5196d30, node0x5196de0, mpi, MVT::i16, 1);
roots.reserve(1);
roots.push_back(node0x518af20);
dag->setRoot(node0x518af20);
      }
      break;
    case Codasip::i_stype_store__opc_sw__x_0__simm12__xpr_general__immspec_1_:
      {
SDValue node0x51975f0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x5197770 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5197590 = dag->getStore(entry, dl, node0x51975f0, node0x5197770, mpi, 1);
roots.reserve(1);
roots.push_back(node0x5197590);
dag->setRoot(node0x5197590);
      }
      break;
    case Codasip::i_stype_store__opc_sw__xpr_general__simm12__xpr_general__immspec_1_:
      {
SDValue node0x5197f10 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x5197fc0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x5197d50 = dag->getStore(entry, dl, node0x5197f10, node0x5197fc0, mpi, 1);
roots.reserve(1);
roots.push_back(node0x5197d50);
dag->setRoot(node0x5197d50);
      }
      break;
    case Codasip::i_utype_ops__opc_auipc__xpr_general__uimm20__immspec_1_:
      {
SDValue node0x5197b70 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x51987b0 = dag->getConstant(-4LL, dl, MVT::i32);
SDValue node0x5197be0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x5197b70, node0x51987b0);
SDValue node0x5197370 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x5197be0, SDValue());
roots.reserve(1);
roots.push_back(node0x5197370);
dag->setRoot(node0x5197370);
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
SDValue node0x517bd80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x517b500 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x517bd80, SDValue());
roots.reserve(1);
roots.push_back(node0x517b500);
dag->setRoot(node0x517b500);
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
SDValue node0x4edfba0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x4edfc20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x4ee0560 = dag->getTruncStore(entry, dl, node0x4edfba0, node0x4edfc20, mpi, MVT::i8, 1);
roots.reserve(1);
roots.push_back(node0x4ee0560);
dag->setRoot(node0x4ee0560);
      }
      break;
    case Codasip::i_stype_store__opc_sb__x_0__simm12__xpr_general__i32_TRUNC_CLONE_:
      {
SDValue node0x4edfaa0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x4edf980 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x4edfb20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4edbff0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x4edf980, node0x4edfb20);
SDValue node0x4ee0f00 = dag->getTruncStore(entry, dl, node0x4edfaa0, node0x4edbff0, mpi, MVT::i8, 1);
roots.reserve(1);
roots.push_back(node0x4ee0f00);
dag->setRoot(node0x4ee0f00);
      }
      break;
    case Codasip::i_stype_store__opc_sh__x_0__simm12__x_0__i32_TRUNC_CLONE_:
      {
SDValue node0x4edfca0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x4ee1540 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x4ee1890 = dag->getTruncStore(entry, dl, node0x4edfca0, node0x4ee1540, mpi, MVT::i16, 1);
roots.reserve(1);
roots.push_back(node0x4ee1890);
dag->setRoot(node0x4ee1890);
      }
      break;
    case Codasip::i_stype_store__opc_sh__x_0__simm12__xpr_general__i32_TRUNC_CLONE_:
      {
SDValue node0x4ee1ed0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x4edf330 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x4ee1f50 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4edcfb0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x4edf330, node0x4ee1f50);
SDValue node0x4ee2330 = dag->getTruncStore(entry, dl, node0x4ee1ed0, node0x4edcfb0, mpi, MVT::i16, 1);
roots.reserve(1);
roots.push_back(node0x4ee2330);
dag->setRoot(node0x4ee2330);
      }
      break;
    case Codasip::i_stype_store__opc_sb__x_0__simm12__xpr_general__immspec_1_i32_TRUNC_CLONE_:
      {
SDValue node0x4ee26c0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x4edf8f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x4ee28b0 = dag->getTruncStore(entry, dl, node0x4ee26c0, node0x4edf8f0, mpi, MVT::i8, 1);
roots.reserve(1);
roots.push_back(node0x4ee28b0);
dag->setRoot(node0x4ee28b0);
      }
      break;
    case Codasip::i_stype_store__opc_sh__x_0__simm12__xpr_general__immspec_1_i32_TRUNC_CLONE_:
      {
SDValue node0x4ee2ca0 = dag->getConstant(0LL, dl, MVT::i32);
SDValue node0x4edfa10 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x4ee2ec0 = dag->getTruncStore(entry, dl, node0x4ee2ca0, node0x4edfa10, mpi, MVT::i16, 1);
roots.reserve(1);
roots.push_back(node0x4ee2ec0);
dag->setRoot(node0x4ee2ec0);
      }
      break;
    case Codasip::i_stype_store__opc_sw__xpr_general__simm12__xpr_general__0_REG_EMUL_:
      {
SDValue node0x4ee3cb0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x4ee3640 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4ee49f0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x4ee9b40 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x4ee3640, node0x4ee49f0);
SDValue node0x4ee2f20 = dag->getStore(entry, dl, node0x4ee3cb0, node0x4ee9b40, mpi, 1);
roots.reserve(1);
roots.push_back(node0x4ee2f20);
dag->setRoot(node0x4ee2f20);
      }
      break;
    case Codasip::i_stype_store__opc_sw__xpr_general__simm12__xpr_general__1_BIGIMM_EMUL_:
      {
SDValue node0x4ee4ab0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x4ee9d70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4ee8ad0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x4ee9e00 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x4ee9d70, node0x4ee8ad0);
SDValue node0x4ee8c60 = dag->getStore(entry, dl, node0x4ee4ab0, node0x4ee9e00, mpi, 1);
roots.reserve(1);
roots.push_back(node0x4ee8c60);
dag->setRoot(node0x4ee8c60);
      }
      break;
    case Codasip::i_itype_loads__opc_lw__xpr_general__simm12__xpr_general__2_REG_EMUL_:
      {
SDValue node0x4ee5390 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4ee9910 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x4ee6c30 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x4ee5390, node0x4ee9910);
SDValue node0x4ee5300 = dag->getLoad(MVT::i32, dl, entry, node0x4ee6c30, mpi, 1);
SDValue node0x4ee68b0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4ee5300, SDValue());
roots.reserve(1);
roots.push_back(node0x4ee68b0);
dag->setRoot(node0x4ee68b0);
      }
      break;
    case Codasip::i_itype_loads__opc_lw__xpr_general__simm12__xpr_general__3_BIGIMM_EMUL_:
      {
SDValue node0x4ee9e70 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4eea8c0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x4ee8610 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x4ee9e70, node0x4eea8c0);
SDValue node0x4ee9fe0 = dag->getLoad(MVT::i32, dl, entry, node0x4ee8610, mpi, 1);
SDValue node0x4eea9c0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4ee9fe0, SDValue());
roots.reserve(1);
roots.push_back(node0x4eea9c0);
dag->setRoot(node0x4eea9c0);
      }
      break;
    case Codasip::i_stype_store__opc_sw__xpr_general__simm12__xpr_general__4_BIGIMM_EMUL_:
      {
SDValue node0x4ee92b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x4eebaf0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4eebfb0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x4ee86f0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x4eebaf0, node0x4eebfb0);
SDValue node0x4ee36d0 = dag->getStore(entry, dl, node0x4ee92b0, node0x4ee86f0, mpi, 1);
roots.reserve(1);
roots.push_back(node0x4ee36d0);
dag->setRoot(node0x4ee36d0);
      }
      break;
    case Codasip::i_itype_loads__opc_lw__xpr_general__simm12__xpr_general__5_BIGIMM_EMUL_:
      {
SDValue node0x4ee8760 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4eecdd0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x4ee70f0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x4ee8760, node0x4eecdd0);
SDValue node0x4eec7f0 = dag->getLoad(MVT::i32, dl, entry, node0x4ee70f0, mpi, 1);
SDValue node0x4eeceb0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4eec7f0, SDValue());
roots.reserve(1);
roots.push_back(node0x4eeceb0);
dag->setRoot(node0x4eeceb0);
      }
      break;
    case Codasip::i_itype_alu__opc_addi__xpr_general__xpr_general__simm12__6_BIGIMM_EMUL_:
      {
SDValue node0x4ee7b20 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4eedc80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x4ee9850 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x4ee7b20, node0x4eedc80);
SDValue node0x4eedd40 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4ee9850, SDValue());
roots.reserve(1);
roots.push_back(node0x4eedd40);
dag->setRoot(node0x4eedd40);
      }
      break;
    case Codasip::i_itype_alu__opc_addi__xpr_general__xpr_general__simm12__7_BIGIMM_EMUL_:
      {
SDValue node0x4eebb80 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4eeea40 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x4ee9440 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x4eebb80, node0x4eeea40);
SDValue node0x4eeeb00 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4ee9440, SDValue());
roots.reserve(1);
roots.push_back(node0x4eeeb00);
dag->setRoot(node0x4eeeb00);
      }
      break;
    case Codasip::i_itype_alu__opc_addi__xpr_general__xpr_general__simm12__8_BIGIMM_EMUL_:
      {
SDValue node0x4eee360 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4eef800 = dag->getRegister(TargetRegisterInfo::index2VirtReg(2), MVT::i32);
SDValue node0x4ee91d0 = dag->getNode(ISD::ADD, dl, MVT::i32, node0x4eee360, node0x4eef800);
SDValue node0x4eef8c0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4ee91d0, SDValue());
roots.reserve(1);
roots.push_back(node0x4eef8c0);
dag->setRoot(node0x4eef8c0);
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
SDValue node0x4eb8500 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x4eb88d0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x51cd650 = dag->getCopyToReg(entry, dl, dag->getRegister(Codasip::rf_xpr_1, MVT::i32), node0x4eb8500, SDValue());
SDValue node0x4eb8b80 = dag->getNode(ISD::BRIND, dl, MVT::Other, node0x51cd650, node0x4eb88d0);
roots.reserve(2);
roots.push_back(node0x51cd650);
roots.push_back(node0x4eb8b80);
dag->setRoot(node0x4eb8b80);
      }
      break;
    case Codasip::i_itype_jlreg__opc_jalr__x_0__simm12__xpr_general__:
      {
SDValue node0x4fd91a0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32);
SDValue node0x4fd9440 = dag->getNode(ISD::BRIND, dl, MVT::Other, entry, node0x4fd91a0);
roots.reserve(1);
roots.push_back(node0x4fd9440);
dag->setRoot(node0x4fd9440);
      }
      break;
    case Codasip::i_itype_jlreg__opc_jalr__xpr_general__simm12__xpr_general__:
      {
SDValue node0x4fdbe70 = dag->getNode(CodasipISD::GET_PC, dl, MVT::i32);
SDValue node0x4fdbdf0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4fdbe70, SDValue());
SDValue node0x4fdc370 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4fdc610 = dag->getNode(ISD::BRIND, dl, MVT::Other, node0x4fdbdf0, node0x4fdc370);
roots.reserve(2);
roots.push_back(node0x4fdbdf0);
roots.push_back(node0x4fdc610);
dag->setRoot(node0x4fdc610);
      }
      break;
    case Codasip::i_utype_ops__opc_lui__xpr_general__uimm20__SYNTAX_CLONE_e_movi32__1_:
      {
SDValue node0x501b850 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4ec2f50 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x501b850, SDValue());
roots.reserve(1);
roots.push_back(node0x4ec2f50);
dag->setRoot(node0x4ec2f50);
      }
      break;
    case Codasip::i_utype_ops__opc_lui__xpr_general__uimm20__SYNTAX_CLONE_e_movi32__2_:
      {
SDValue node0x4ff3d00 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4ec36f0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4ff3d00, SDValue());
roots.reserve(1);
roots.push_back(node0x4ec36f0);
dag->setRoot(node0x4ec36f0);
      }
      break;
    case Codasip::i_utype_ops__opc_lui__xpr_general__uimm20__SYNTAX_CLONE_e_movi32__5_:
      {
SDValue node0x51c3030 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4ec3ea0 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x51c3030, SDValue());
roots.reserve(1);
roots.push_back(node0x4ec3ea0);
dag->setRoot(node0x4ec3ea0);
      }
      break;
    case Codasip::i_utype_ops__opc_lui__xpr_general__uimm20__SYNTAX_CLONE_e_movi32__6_:
      {
SDValue node0x4f797b0 = dag->getRegister(TargetRegisterInfo::index2VirtReg(1), MVT::i32);
SDValue node0x4ec4650 = dag->getCopyToReg(entry, dl, dag->getRegister(TargetRegisterInfo::index2VirtReg(0), MVT::i32), node0x4f797b0, SDValue());
roots.reserve(1);
roots.push_back(node0x4ec4650);
dag->setRoot(node0x4ec4650);
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
