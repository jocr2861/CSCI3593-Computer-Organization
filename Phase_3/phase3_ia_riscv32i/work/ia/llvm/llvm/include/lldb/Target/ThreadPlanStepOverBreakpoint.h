//===-- ThreadPlanStepOverBreakpoint.h --------------------------*- C++ -*-===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef liblldb_ThreadPlanStepOverBreakpoint_h_
#define liblldb_ThreadPlanStepOverBreakpoint_h_

#include "lldb/Target/Thread.h"
#include "lldb/Target/ThreadPlan.h"

namespace lldb_private {

class ThreadPlanStepOverBreakpoint : public ThreadPlan {
public:
  ThreadPlanStepOverBreakpoint(Thread &thread);

  ~ThreadPlanStepOverBreakpoint() override;

  void GetDescription(Stream *s, lldb::DescriptionLevel level) override;
  bool ValidatePlan(Stream *error) override;
  bool ShouldStop(Event *event_ptr) override;
  bool StopOthers() override;
  lldb::StateType GetPlanRunState() override;
  bool WillStop() override;
  void WillPop() override;
  bool MischiefManaged() override;
  void ThreadDestroyed() override;
  void SetAutoContinue(bool do_it);
  bool ShouldAutoContinue(Event *event_ptr) override;
  bool IsPlanStale() override;

  lldb::addr_t GetBreakpointLoadAddress() const { return m_breakpoint_addr; }
  /// ==== CODASIP ====
  void SetPcCheck(const bool value) { m_pc_check = value; };
  /// =================

protected:
  bool DoPlanExplainsStop(Event *event_ptr) override;
  bool DoWillResume(lldb::StateType resume_state, bool current_plan) override;

  void ReenableBreakpointSite();

private:
  lldb::addr_t m_breakpoint_addr;
  lldb::user_id_t m_breakpoint_site_id;
  bool m_auto_continue;
  bool m_reenabled_breakpoint_site;
  /// ==== CODASIP ====
  bool m_pc_check = true;
  /// =================

  DISALLOW_COPY_AND_ASSIGN(ThreadPlanStepOverBreakpoint);
};

} // namespace lldb_private

#endif // liblldb_ThreadPlanStepOverBreakpoint_h_
