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

#ifndef _ProviderUtil_h
#define _ProviderUtil_h

#include <stdlib.h>
#include "MI.h"

#ifdef _MSC_VER
#include "Windows.h"
#endif

#include "Perf_Embedded.h"

#define IF_ERROR_POST_RETURN(_context, _result) \
    { if (_result != MI_RESULT_OK) \
        { MI_PostError(_context, _result, MI_RESULT_TYPE_MI, MI_T("")) ; return; } } 
        
#define IF_ERROR_POST_RETURN_WITH_RETURNVALUE(_context, _result, returnValue) \
    { if (_result != MI_RESULT_OK) \
        { MI_PostError(_context, _result, MI_RESULT_TYPE_MI, MI_T("")) ; return returnValue; } } 
        
#define IF_ERROR_DESTRUCT_POST_RETURN(_context, _result, _instance) \
    { if (_result != MI_RESULT_OK) \
        { \
        MI_Instance_Destruct(&_instance); \
        MI_PostError(_context, _result, MI_RESULT_TYPE_MI, MI_T("")); return; } } 

#define IF_ERROR_DESTRUCT_POST_RETURNVALUE(_context, _result, _instance, returnValue) \
    { if (_result != MI_RESULT_OK) \
        { \
        MI_Instance_Destruct(&_instance); \
        MI_PostError(_context, _result, MI_RESULT_TYPE_MI, MI_T("")); return returnValue; } } 

#define IF_ERROR_DELETE_ARRAY_POST_RETURN(_context, _result, _instance, _arrInstances, _arrCount) \
    { if (_result != MI_RESULT_OK) \
        { \
        for(MI_Uint32 j = 0; j < _arrCount; ++j) \
        { \
            MI_Instance_Destruct(_arrInstances[j]); \
        } \
        delete[] _arrInstances; \
        MI_Instance_Destruct(&_instance); \
        MI_PostError(_context, _result, MI_RESULT_TYPE_MI, MI_T("")); return; } } 

#define IF_ERROR_BREAK(_result) \
    { \
        if(_result != MI_RESULT_OK) \
            break; \
    } 

MI_Result FillInstance(MI_Context* context, MI_Instance* newInstance, MI_Uint64 keyValue);
MI_Result PostPsSemantics(MI_Context* context, MI_Uint32 PsSemanticsFlags, MI_Uint32 psSemanticsCount);


#endif
