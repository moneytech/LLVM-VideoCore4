//===-- SparcSelectionDAGInfo.cpp - Sparc SelectionDAG Info ---------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// This file implements the SparcSelectionDAGInfo class.
//
//===----------------------------------------------------------------------===//

#include "SparcTargetMachine.h"
using namespace llvm;

#define DEBUG_TYPE "sparc-selectiondag-info"

SparcSelectionDAGInfo::SparcSelectionDAGInfo(const SparcTargetMachine &TM)
  : TargetSelectionDAGInfo(TM) {
}

SparcSelectionDAGInfo::~SparcSelectionDAGInfo() {
}
