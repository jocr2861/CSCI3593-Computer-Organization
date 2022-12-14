/*
 * ss.h
 *
 *  Created on: Feb 28, 2014
 *      Author: ihusar
 */

#ifndef SS_H_
#define SS_H_

// TODO: includes

#include "ScheduleDAGSuperBlock.h"
#include "llvm/CodeGen/LatencyPriorityQueue.h"
#include <set>
#include <vector>

namespace llvm {

class MachineFunction;
class SuperBlock;
// class AliasAnalysis;
class MachineInstr;
class SUnit;
class InstrItineraryData;
class SuperBlock;
class MachineBasicBlock;
class MachineLoopInfo;
class MachineDominatorTree;
class LiveIntervals;

/// ScheduleSuperBlockList -  class for SuperBlock scheduler
class ScheduleSuperBlockList : public ScheduleDAGSuperBlock {
  SuperBlock *m_currSbb;
  AliasAnalysis *AA;
  std::set<MachineInstr *> compensatoryInsts;

  /// AvailableQueue - The priority queue to use for the
  /// available SUnits.
  LatencyPriorityQueue AvailableQueue;

  /// PendingQueue - This contains all of the instructions whose operands have
  /// been issued, but their results are not ready yet (due to the latency of
  /// the operation).  Once the operands becomes available, the instruction is
  /// added to the AvailableQueue.
  std::vector<SUnit *> PendingQueue;

  /// The schedule. Null SUnit*'s represent noop instructions.
  std::vector<SUnit *> Sequence;

  /// HazardRec - The hazard recognizer to use.
  ScheduleHazardRecognizer *HazardRec;

  /// virtual bundle
  std::vector<SUnit *> bundle;

  const InstrItineraryData *InstrItins;

  bool CallStartShuffle;

public:
  ScheduleSuperBlockList(MachineFunction &mf, MachineLoopInfo *MLI,
                         MachineDominatorTree *MDT, LiveIntervals *LI);
  ~ScheduleSuperBlockList() override;
  void Schedule(SuperBlock *sbb);
  void schedule() override;
  void Run(SuperBlock *sbb, AliasAnalysis *AA);
  void genCompensatoryCode();
  void tidyUpJumps();
  bool tryEraseEmptyBB(SuperBlock &sbb);
  void EmitSchedule(SuperBlock &sbb);

private:
  void ReleaseSucc(SUnit *SU, SDep *SuccEdge);
  void ReleaseSuccessors(SUnit *SU);
  void ScheduleNodeTopDown(SUnit *SU, unsigned CurCycle);
  void ListScheduleTopDown();
  void scheduleAlgorithms(unsigned &CurCycle);
  bool isInstrLiveOnlyInSBB(MachineInstr *mi, SuperBlock *sbb);
  void createNewRegAndCOPYInst(MachineInstr *mi, SuperBlock *sbb,
                               unsigned posInSeq);
  void repairInstrReg(unsigned oldVirtReg, unsigned newVirtReg,
                      unsigned posInSeq);
  MachineInstr *getNextInstruction(MachineInstr *mi);
  bool canPutLastInstToBundle(SUnit *SU);
  void callStartShuffleHandler(SUnit *SU);
};

} // namespace llvm

#endif /* SS_H_ */
