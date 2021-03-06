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

#include <MI.h>
#include "L_Indication.h"
#include "impl.h"
#include <pal/format.h>

MI_Result MI_CALL L_Indication_SetIndicationProperties(
    void* cfg,
    MI_Instance* indication)
{
    MI_Result r = MI_RESULT_OK;
    Config* config = (Config*)cfg;
    DEBUG_ASSERT (indication);
    {
        L_Indication* inst = (L_Indication*) indication;
        MI_Uint16 severity = rand() % 100;
        MI_Datetime now = GetCurrentTimestamp();
        MI_Uint32 numCorrelatedIndications = (rand() % 20) + 1;
        MI_Char** correlatedIndications = NULL;
        MI_Uint32 i = 0;

        r = L_Indication_Set_PerceivedSeverity(inst, severity);
        CHKSETPROPERTY(r, "perceivedseverity");
        
        r = L_Indication_Set_OtherSeverity(inst, MI_T("Very Severe - <>&;'\""));
        CHKSETPROPERTY(r, "otherseverity");
        
        r = L_Indication_Set_IndicationTime(inst, now);
        CHKSETPROPERTY(r, "indicationtime");
        
        correlatedIndications = (MI_Char**)PAL_Malloc(numCorrelatedIndications * sizeof(MI_Char*));
        ONNULLGOTO(correlatedIndications, "correlatedIndications", Cleanup);
        for ( i = 0; i < numCorrelatedIndications; i++)
        {
            correlatedIndications[i] = NULL;
            correlatedIndications[i] = (MI_Char*)PAL_Malloc(sizeof(MI_Char) * 100);
            ONNULLGOTO(correlatedIndications[i], "correlatedIndications", Cleanup);
            memset(correlatedIndications[i], 0, sizeof(MI_Char) * 100);
#ifndef _MSC_VER
            Stprintf(correlatedIndications[i], sizeof(MI_Char) * 100, MI_T("Indication Id - <>&;'\" - %u"), i);
#else
            StringCchPrintf(correlatedIndications[i], 100, MI_T("Indication Id - <>&;'\" - %u"), i);
#endif
        }

        r = L_Indication_Set_CorrelatedIndications(inst, (const MI_Char**)correlatedIndications, numCorrelatedIndications);
        CHKSETPROPERTY(r, "correlatedindications");

        r = L_Indication_Set_SequenceNumber(inst, config->count);
        CHKSETPROPERTY(r, "sequencenumber");

Cleanup:
        for (i = 0; i < numCorrelatedIndications; i++)
        {
            FREE(correlatedIndications[i]);
        }
        FREE(correlatedIndications);
    }

    return r;
}

