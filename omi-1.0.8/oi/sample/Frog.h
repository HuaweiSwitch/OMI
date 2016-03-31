/*
**==============================================================================
**
** Open Management Infrastructure (OMI)
**
** Copyright (c) Microsoft Corporation
** 
** Licensed under the Apache License, Version 2.0 (the "License"); you may not 
** use this file except in compliance with the License. You may obtain a copy 
** of the License at 
**
**     http://www.apache.org/licenses/LICENSE-2.0 
**
** THIS CODE IS PROVIDED *AS IS* BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
** KIND, EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION ANY IMPLIED 
** WARRANTIES OR CONDITIONS OF TITLE, FITNESS FOR A PARTICULAR PURPOSE, 
** MERCHANTABLITY OR NON-INFRINGEMENT. 
**
** See the Apache 2 License for the specific language governing permissions 
** and limitations under the License.
**
**==============================================================================
*/

#ifndef _FrogEvents_h
#define _FrogEvents_h

#include "oi.h"

// This is the public interface of the Frog

void Frog_Jump(int number);
void Frog_EatFlys(int number);
void Frog_Dive(int depth, int time);

// These are the Open Instrtumentation callouts from the Frog

OI_SETDEFAULT(LEVEL(3))

OI_EVENT(1, "I have jumped %d feet")
void FrogEvents_JumpEvent(int number);

OI_EVENT(2, "I have eaten %d flys")
void FrogEvents_EatFlysEvent(int number);

OI_EVENT(3, "I have dived %d feet for %d seconds")
void FrogEvents_DiveEvent(int depth, int time);

#endif /* _FrogEvents_h */




