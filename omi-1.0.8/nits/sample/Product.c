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

//*****************************************************************************
//	Copyright (C) 2011 Microsoft Corporation
//  All rights reserved.
//*****************************************************************************

#ifndef HOOK_BUILD
#define HOOK_BUILD
#endif

#ifdef _MSC_VER
	#include <sal.h>
	#include <windows.h>
	#include <strsafe.h>
#endif

#ifndef _MSC_VER
	#include <wchar.h>
#endif

#include <nits/base/nits.h>
#include <pal/format.h>
#include "Shim.h"

#ifndef _MSC_VER
# define OutputDebugString(s)
#endif

DWORD NotifySEC(int caseNumber, BOOL success)
{
    BOOL sent;
    PCWSTR result = success ? L"OK" : L"FAILED";
    wchar_t *str = (wchar_t *)_HeapAlloc((sizeof(wchar_t)*50), NitsHere());
    if (str == NULL)
        return ERROR_OUTOFMEMORY;

	Swprintf(str, 50, L"Completed audit number %d, result %s\n", caseNumber, result);

    sent = _SendRequest(str, NitsHere());
    SystemFree(str);

    //Removing this check is a bug.
    if (!sent)
        return ERROR_GEN_FAILURE;

    return NO_ERROR;
}

DWORD DownloadAccounts(PCWSTR company)
{
    BOOL sent;
    wchar_t *str = (wchar_t *)_HeapAlloc((sizeof(wchar_t)*50), NitsHere());
    if (str == NULL)
        return ERROR_OUTOFMEMORY;

    OutputDebugString(L"Downloading accounts...");

	Swprintf(str, 50, L"Send accounts for company %s\n", company);
    sent = _SendRequest(str, NitsHere());
    SystemFree(str);

    if (!sent)
        return ERROR_GEN_FAILURE;

    return NO_ERROR;
}

DWORD MakeReports(PCWSTR company, int caseNumber)
{
    DWORD error = DownloadAccounts(company);
    if (error) return error;

    OutputDebugString(L"Making reports...");
    //Do something with account data.

    error = NotifySEC(caseNumber, TRUE);
    if (error) return error;

    return NO_ERROR;
}

DWORD BalanceBooks(PCWSTR company, int caseNumber)
{
    DWORD error = DownloadAccounts(company);
    if (error) return error;

    //Do something with account data.

    error = NotifySEC(caseNumber, TRUE);
    if (error) return error;

    return NO_ERROR;
}

