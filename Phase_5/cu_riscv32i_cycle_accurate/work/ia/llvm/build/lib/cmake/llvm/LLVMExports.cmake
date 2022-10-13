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

# Import target "LLVMCodasipGenCodeGen" for configuration "Release"
set_property(TARGET LLVMCodasipGenCodeGen APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(LLVMCodasipGenCodeGen PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "/home/project/cu_riscv32i_cycle_accurate/work/ia/llvm/build/lib/libLLVMCodasipGenCodeGen.a"
  )

# Import target "LLVMCodasipGenAsmParser" for configuration "Release"
set_property(TARGET LLVMCodasipGenAsmParser APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(LLVMCodasipGenAsmParser PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "/home/project/cu_riscv32i_cycle_accurate/work/ia/llvm/build/lib/libLLVMCodasipGenAsmParser.a"
  )

# Import target "LLVMCodasipGenDisassembler" for configuration "Release"
set_property(TARGET LLVMCodasipGenDisassembler APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(LLVMCodasipGenDisassembler PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "/home/project/cu_riscv32i_cycle_accurate/work/ia/llvm/build/lib/libLLVMCodasipGenDisassembler.a"
  )

# Import target "LLVMCodasipGenAsmPrinter" for configuration "Release"
set_property(TARGET LLVMCodasipGenAsmPrinter APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(LLVMCodasipGenAsmPrinter PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "/home/project/cu_riscv32i_cycle_accurate/work/ia/llvm/build/lib/libLLVMCodasipGenAsmPrinter.a"
  )

# Import target "LLVMCodasipGenInfo" for configuration "Release"
set_property(TARGET LLVMCodasipGenInfo APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(LLVMCodasipGenInfo PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "/home/project/cu_riscv32i_cycle_accurate/work/ia/llvm/build/lib/libLLVMCodasipGenInfo.a"
  )

# Import target "LLVMCodasipGenDesc" for configuration "Release"
set_property(TARGET LLVMCodasipGenDesc APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(LLVMCodasipGenDesc PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "/home/project/cu_riscv32i_cycle_accurate/work/ia/llvm/build/lib/libLLVMCodasipGenDesc.a"
  )

# Import target "LLVMCodasipCustomModules" for configuration "Release"
set_property(TARGET LLVMCodasipCustomModules APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(LLVMCodasipCustomModules PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "/home/project/cu_riscv32i_cycle_accurate/work/ia/llvm/build/lib/libLLVMCodasipCustomModules.a"
  )

# Import target "LLVMGengold" for configuration "Release"
set_property(TARGET LLVMGengold APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(LLVMGengold PROPERTIES
  IMPORTED_LOCATION_RELEASE "/home/project/cu_riscv32i_cycle_accurate/work/ia/llvm/build/lib/libLLVMgold.so.9"
  IMPORTED_SONAME_RELEASE "libLLVMgold.so.9"
  )

# Import target "codasip-llc" for configuration "Release"
set_property(TARGET codasip-llc APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(codasip-llc PROPERTIES
  IMPORTED_LOCATION_RELEASE "/home/project/cu_riscv32i_cycle_accurate/work/ia/llvm/build/bin/llc"
  )

# Import target "codasip-llvm-mc" for configuration "Release"
set_property(TARGET codasip-llvm-mc APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(codasip-llvm-mc PROPERTIES
  IMPORTED_LOCATION_RELEASE "/home/project/cu_riscv32i_cycle_accurate/work/ia/llvm/build/bin/llvm-mc"
  )

# Import target "codasip-llvm-objdump" for configuration "Release"
set_property(TARGET codasip-llvm-objdump APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(codasip-llvm-objdump PROPERTIES
  IMPORTED_LOCATION_RELEASE "/home/project/cu_riscv32i_cycle_accurate/work/ia/llvm/build/bin/llvm-objdump"
  )

# This file does not depend on other imported targets which have
# been exported from the same project but in a separate export set.

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
cmake_policy(POP)
