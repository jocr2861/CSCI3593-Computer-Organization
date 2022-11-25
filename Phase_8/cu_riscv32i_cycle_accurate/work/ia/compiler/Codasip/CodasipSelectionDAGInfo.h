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


#ifndef CODASIPSELECTIONDAGINFO_H_
#define CODASIPSELECTIONDAGINFO_H_

#include "CodasipGenSelectionDAGInfo.h"

namespace llvm {

class CodasipSelectionDAGInfo: public CodasipGenSelectionDAGInfo
{
public:
  explicit CodasipSelectionDAGInfo(const CodasipTargetMachine &TM): CodasipGenSelectionDAGInfo(TM) {}
};

}

#endif /* CODASIPSELECTIONDAGINFO_H_ */
