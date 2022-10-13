//===-- StringExtractorGDBRemote.h ------------------------------*- C++ -*-===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef LLDB_UTILITY_STRINGEXTRACTORGDBREMOTE_H
#define LLDB_UTILITY_STRINGEXTRACTORGDBREMOTE_H

#include "lldb/Utility/Status.h"
#include "lldb/Utility/StringExtractor.h"
#include "llvm/ADT/StringRef.h"

#include <string>

#include <stddef.h>
#include <stdint.h>

class StringExtractorGDBRemote : public StringExtractor {
public:
  typedef bool (*ResponseValidatorCallback)(
      void *baton, const StringExtractorGDBRemote &response);

  StringExtractorGDBRemote() : StringExtractor(), m_validator(nullptr) {}

  StringExtractorGDBRemote(llvm::StringRef str)
      : StringExtractor(str), m_validator(nullptr) {}

  StringExtractorGDBRemote(const char *cstr)
      : StringExtractor(cstr), m_validator(nullptr) {}

  StringExtractorGDBRemote(const StringExtractorGDBRemote &rhs)
      : StringExtractor(rhs), m_validator(rhs.m_validator) {}

  ~StringExtractorGDBRemote() override {}

  bool ValidateResponse() const;

  void CopyResponseValidator(const StringExtractorGDBRemote &rhs);

  void SetResponseValidator(ResponseValidatorCallback callback, void *baton);

  void SetResponseValidatorToOKErrorNotSupported();

  void SetResponseValidatorToASCIIHexBytes();

  void SetResponseValidatorToJSON();

  /// ===== CODASIP ====
  void SetResponseValidatorToRegisterInfo();
  /// ==================

  enum ServerPacketType {
    eServerPacketType_nack = 0,
    eServerPacketType_ack,
    eServerPacketType_invalid,
    eServerPacketType_unimplemented,
    eServerPacketType_interrupt, // CTRL+c packet or "\x03"
    eServerPacketType_A,         // Program arguments packet
    eServerPacketType_qfProcessInfo,
    eServerPacketType_qsProcessInfo,
    eServerPacketType_qC,
    eServerPacketType_qEcho,
    eServerPacketType_qGroupName,
    eServerPacketType_qHostInfo,
    eServerPacketType_qLaunchGDBServer,
    eServerPacketType_qQueryGDBServer,
    eServerPacketType_qKillSpawnedProcess,
    eServerPacketType_qLaunchSuccess,
    eServerPacketType_qModuleInfo,
    eServerPacketType_qProcessInfoPID,
    eServerPacketType_qSpeedTest,
    eServerPacketType_qUserName,
    eServerPacketType_qGetWorkingDir,
    eServerPacketType_qFileLoadAddress,
    eServerPacketType_QEnvironment,
    eServerPacketType_QEnableErrorStrings,
    eServerPacketType_QLaunchArch,
    eServerPacketType_QSetDisableASLR,
    eServerPacketType_QSetDetachOnError,
    eServerPacketType_QSetSTDIN,
    eServerPacketType_QSetSTDOUT,
    eServerPacketType_QSetSTDERR,
    eServerPacketType_QSetWorkingDir,
    eServerPacketType_QStartNoAckMode,
    eServerPacketType_qPlatform_shell,
    eServerPacketType_qPlatform_mkdir,
    eServerPacketType_qPlatform_chmod,
    eServerPacketType_vFile_open,
    eServerPacketType_vFile_close,
    eServerPacketType_vFile_pread,
    eServerPacketType_vFile_pwrite,
    eServerPacketType_vFile_size,
    eServerPacketType_vFile_mode,
    eServerPacketType_vFile_exists,
    eServerPacketType_vFile_md5,
    eServerPacketType_vFile_stat,
    eServerPacketType_vFile_symlink,
    eServerPacketType_vFile_unlink,
    // debug server packages
    eServerPacketType_QEnvironmentHexEncoded,
    eServerPacketType_QListThreadsInStopReply,
    eServerPacketType_QPassSignals,
    eServerPacketType_QRestoreRegisterState,
    eServerPacketType_QSaveRegisterState,
    eServerPacketType_QSetLogging,
    eServerPacketType_QSetMaxPacketSize,
    eServerPacketType_QSetMaxPayloadSize,
    eServerPacketType_QSetEnableAsyncProfiling,
    eServerPacketType_QSyncThreadState,
    eServerPacketType_QThreadSuffixSupported,

    eServerPacketType_jThreadsInfo,
    eServerPacketType_qsThreadInfo,
    eServerPacketType_qfThreadInfo,
    eServerPacketType_qGetPid,
    eServerPacketType_qGetProfileData,
    eServerPacketType_qGDBServerVersion,
    eServerPacketType_qMemoryRegionInfo,
    eServerPacketType_qMemoryRegionInfoSupported,
    eServerPacketType_qProcessInfo,
    eServerPacketType_qRcmd,
    eServerPacketType_qRegisterInfo,
    eServerPacketType_qShlibInfoAddr,
    eServerPacketType_qStepPacketSupported,
    eServerPacketType_qSupported,
    eServerPacketType_qSyncThreadStateSupported,
    eServerPacketType_qThreadExtraInfo,
    eServerPacketType_qThreadStopInfo,
    eServerPacketType_qVAttachOrWaitSupported,
    eServerPacketType_qWatchpointSupportInfo,
    eServerPacketType_qWatchpointSupportInfoSupported,
    eServerPacketType_qXfer,

    eServerPacketType_jSignalsInfo,
    eServerPacketType_jModulesInfo,

    eServerPacketType_vAttach,
    eServerPacketType_vAttachWait,
    eServerPacketType_vAttachOrWait,
    eServerPacketType_vAttachName,
    eServerPacketType_vCont,
    eServerPacketType_vCont_actions, // vCont?

    eServerPacketType_stop_reason, // '?'

    eServerPacketType_c,
    eServerPacketType_C,
    eServerPacketType_D,
    eServerPacketType_g,
    eServerPacketType_G,
    eServerPacketType_H,
    eServerPacketType_I, // stdin notification
    eServerPacketType_k,
    eServerPacketType_m,
    eServerPacketType_M,
    eServerPacketType_p,
    eServerPacketType_P,
    eServerPacketType_s,
    eServerPacketType_S,
    eServerPacketType_T,
    eServerPacketType_x,
    eServerPacketType_X,
    eServerPacketType_Z,
    eServerPacketType_z,

    eServerPacketType__M,
    eServerPacketType__m,
    eServerPacketType_notify, // '%' notification

    eServerPacketType_jTraceStart,
    eServerPacketType_jTraceBufferRead,
    eServerPacketType_jTraceMetaRead,
    eServerPacketType_jTraceStop,
    eServerPacketType_jTraceConfigRead,
  };

  ServerPacketType GetServerPacketType() const;

  enum ResponseType { eUnsupported = 0, eAck, eNack, eError, eOK, eResponse };

  ResponseType GetResponseType() const;

  bool IsOKResponse() const;

  bool IsUnsupportedResponse() const;

  bool IsNormalResponse() const;

  bool IsErrorResponse() const;

  // Returns zero if the packet isn't a EXX packet where XX are two hex digits.
  // Otherwise the error encoded in XX is returned.
  uint8_t GetError();

  lldb_private::Status GetStatus();

  size_t GetEscapedBinaryData(std::string &str);

protected:
  ResponseValidatorCallback m_validator;
  void *m_validator_baton;
};

#endif // LLDB_UTILITY_STRINGEXTRACTORGDBREMOTE_H
