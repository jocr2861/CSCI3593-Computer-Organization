# Generated by CMake

if("${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION}" LESS 2.5)
   message(FATAL_ERROR "CMake >= 2.6.0 required")
endif()
cmake_policy(PUSH)
cmake_policy(VERSION 2.6)
#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Protect against multiple inclusion, which would fail when already imported targets are added once more.
set(_targetsDefined)
set(_targetsNotDefined)
set(_expectedTargets)
foreach(_expectedTarget LLVMCodasipGenCodeGen LLVMCodasipGenAsmParser LLVMCodasipGenDisassembler LLVMCodasipGenAsmPrinter LLVMCodasipGenInfo LLVMCodasipGenDesc LLVMCodasipCustomModules LLVMGengold codasip-llc codasip-llvm-mc codasip-llvm-objdump)
  list(APPEND _expectedTargets ${_expectedTarget})
  if(NOT TARGET ${_expectedTarget})
    list(APPEND _targetsNotDefined ${_expectedTarget})
  endif()
  if(TARGET ${_expectedTarget})
    list(APPEND _targetsDefined ${_expectedTarget})
  endif()
endforeach()
if("${_targetsDefined}" STREQUAL "${_expectedTargets}")
  unset(_targetsDefined)
  unset(_targetsNotDefined)
  unset(_expectedTargets)
  set(CMAKE_IMPORT_FILE_VERSION)
  cmake_policy(POP)
  return()
endif()
if(NOT "${_targetsDefined}" STREQUAL "")
  message(FATAL_ERROR "Some (but not all) targets in this export set were already defined.\nTargets Defined: ${_targetsDefined}\nTargets not yet defined: ${_targetsNotDefined}\n")
endif()
unset(_targetsDefined)
unset(_targetsNotDefined)
unset(_expectedTargets)


# Compute the installation prefix relative to this file.
get_filename_component(_IMPORT_PREFIX "${CMAKE_CURRENT_LIST_FILE}" PATH)
get_filename_component(_IMPORT_PREFIX "${_IMPORT_PREFIX}" PATH)
get_filename_component(_IMPORT_PREFIX "${_IMPORT_PREFIX}" PATH)
get_filename_component(_IMPORT_PREFIX "${_IMPORT_PREFIX}" PATH)
if(_IMPORT_PREFIX STREQUAL "/")
  set(_IMPORT_PREFIX "")
endif()

# Create imported target LLVMCodasipGenCodeGen
add_library(LLVMCodasipGenCodeGen STATIC IMPORTED)

set_target_properties(LLVMCodasipGenCodeGen PROPERTIES
  INTERFACE_LINK_LIBRARIES "LLVMCodasipCustomModules;LLVMCodasipGenAsmPrinter;LLVMCodasipGenDesc;LLVMCodasipGenInfo;LLVMTarget"
)

# Create imported target LLVMCodasipGenAsmParser
add_library(LLVMCodasipGenAsmParser STATIC IMPORTED)

set_target_properties(LLVMCodasipGenAsmParser PROPERTIES
  INTERFACE_LINK_LIBRARIES "\$<LINK_ONLY:CodasipTools::asmbasel>;\$<LINK_ONLY:CodasipTools::filesysteml>;\$<LINK_ONLY:CodasipTools::threadsl>;\$<LINK_ONLY:CodasipTools::utility>;\$<LINK_ONLY:reflex::reflex>;\$<LINK_ONLY:rt>"
)

# Create imported target LLVMCodasipGenDisassembler
add_library(LLVMCodasipGenDisassembler STATIC IMPORTED)

set_target_properties(LLVMCodasipGenDisassembler PROPERTIES
  INTERFACE_LINK_LIBRARIES "\$<LINK_ONLY:LLVMBinaryFormat>;\$<LINK_ONLY:LLVMMCDisassembler>;\$<LINK_ONLY:CodasipTools::utility>"
)

# Create imported target LLVMCodasipGenAsmPrinter
add_library(LLVMCodasipGenAsmPrinter STATIC IMPORTED)

set_target_properties(LLVMCodasipGenAsmPrinter PROPERTIES
  INTERFACE_LINK_LIBRARIES "LLVMTarget;\$<LINK_ONLY:LLVMAsmPrinter>"
)

# Create imported target LLVMCodasipGenInfo
add_library(LLVMCodasipGenInfo STATIC IMPORTED)

# Create imported target LLVMCodasipGenDesc
add_library(LLVMCodasipGenDesc STATIC IMPORTED)

set_target_properties(LLVMCodasipGenDesc PROPERTIES
  INTERFACE_LINK_LIBRARIES "LLVMCodasipGenAsmPrinter;LLVMCodasipGenInfo"
)

# Create imported target LLVMCodasipCustomModules
add_library(LLVMCodasipCustomModules STATIC IMPORTED)

set_target_properties(LLVMCodasipCustomModules PROPERTIES
  INTERFACE_LINK_LIBRARIES "LLVMTarget"
)

# Create imported target LLVMGengold
add_library(LLVMGengold SHARED IMPORTED)

set_target_properties(LLVMGengold PROPERTIES
  INTERFACE_LINK_LIBRARIES "goldarch;LLVMLTO;LLVMLinker;LLVMPasses;LLVMAggressiveInstCombine;LLVMCodasipGenAsmParser;LLVMCodasipGenDesc;LLVMCodasipGenAsmPrinter;LLVMCodasipGenCodeGen;LLVMCodasipGenInfo;LLVMExtractorCodeGen;LLVMExtractorDesc;LLVMExtractorInfo;LLVMAsmPrinter;LLVMipo;LLVMIRReader;LLVMAsmParser;LLVMBitWriter;LLVMSelectionDAG;LLVMAnalysis;LLVMMCParser;LLVMCodeGen;LLVMInstrumentation;LLVMMIRParser;LLVMScalarOpts;LLVMInstCombine;LLVMTransformUtils;LLVMAnalysis;LLVMTarget;LLVMCore;LLVMMC;LLVMSupport;LLVMDebugInfoCodeView;LLVMCodasipMisc;LLVMDebugInfoMSF;LLVMDemangle;LLVMVectorize;LLVMBinaryFormat;LLVMObject;LLVMBitReader;LLVMProfileData;LLVMCodasipJumpThreading;LLVMRemarks;LLVMDebugInfoDWARF;LLVMBitstreamReader;tinfo;ncurses;dl;pthread;m;z;CodasipTools::protectorl;CodasipTools::utility"
)

# Create imported target codasip-llc
add_executable(codasip-llc IMPORTED)

# Create imported target codasip-llvm-mc
add_executable(codasip-llvm-mc IMPORTED)

# Create imported target codasip-llvm-objdump
add_executable(codasip-llvm-objdump IMPORTED)

if(CMAKE_VERSION VERSION_LESS 2.8.12)
  message(FATAL_ERROR "This file relies on consumers using CMake 2.8.12 or greater.")
endif()

# Load information for each installed configuration.
get_filename_component(_DIR "${CMAKE_CURRENT_LIST_FILE}" PATH)
file(GLOB CONFIG_FILES "${_DIR}/LLVMExports-*.cmake")
foreach(f ${CONFIG_FILES})
  include(${f})
endforeach()

# Cleanup temporary variables.
set(_IMPORT_PREFIX)

# Loop over all imported files and verify that they actually exist
foreach(target ${_IMPORT_CHECK_TARGETS} )
  foreach(file ${_IMPORT_CHECK_FILES_FOR_${target}} )
    if(NOT EXISTS "${file}" )
      message(FATAL_ERROR "The imported target \"${target}\" references the file
   \"${file}\"
but this file does not exist.  Possible reasons include:
* The file was deleted, renamed, or moved to another location.
* An install or uninstall procedure did not complete successfully.
* The installation package was faulty and contained
   \"${CMAKE_CURRENT_LIST_FILE}\"
but not all the files it references.
")
    endif()
  endforeach()
  unset(_IMPORT_CHECK_FILES_FOR_${target})
endforeach()
unset(_IMPORT_CHECK_TARGETS)

# This file does not depend on other imported targets which have
# been exported from the same project but in a separate export set.

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
cmake_policy(POP)