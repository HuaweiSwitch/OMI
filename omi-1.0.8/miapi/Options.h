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

#ifndef _miapi_options_h_
#define _miapi_options_h_

#include <MI.h>
#include <base/instance.h>

extern MI_DestinationOptionsFT g_destinationOptionsFT;
extern MI_OperationOptionsFT g_operationOptionsFT;
extern MI_SubscriptionDeliveryOptionsFT g_subscriptionDeliveryOptionsFT;


/*==========================================================================================================*/
/*======================================== Options structures ==============================================*/
/*==========================================================================================================*/

struct _GenericOptions
{
    Batch *batch;
    MI_Instance *optionsInstance;
    MI_Instance *credentialInstance;
    volatile ptrdiff_t referenceCount;
};

struct _GenericOptions_Handle
{
    MI_Uint64 reserved1;
    struct _GenericOptions *genericOptions;
    void * ft;

};


MI_Result MI_CALL OperationOptions_Create(
    _In_  MI_Application *application,
    MI_Boolean customOptionsMustUnderstand,
    _Out_ MI_OperationOptions *options);


MI_Result MI_CALL  DestinationOptions_Create(
    _In_  MI_Application *application,
    _Out_ MI_DestinationOptions *options);

MI_Result MI_CALL DestinationOptions_MigrateOptions(
    _In_ const MI_DestinationOptions *source, 
    _Inout_ MI_DestinationOptions *destination,
    _In_opt_z_ const MI_Char *protocol,
    _Outptr_opt_result_maybenull_ MI_Instance **extendedError);

MI_Result MI_CALL OperationOptions_MigrateOptions(
    _In_opt_ const MI_OperationOptions *source, 
    _Inout_ MI_OperationOptions *destination);

void MI_CALL DestinationOptions_Duplicate(
    _Inout_ const MI_DestinationOptions *source, 
    _Out_ MI_DestinationOptions *destination);

MI_Result MI_CALL  SubscriptionDeliveryOptions_Create(
    _In_  MI_Application *application,
    _In_  MI_SubscriptionDeliveryType deliveryType,
    _Out_ MI_SubscriptionDeliveryOptions *options);

MI_Result MI_CALL SubscriptionDeliveryOptions_MigrateOptions(
    _In_ const MI_SubscriptionDeliveryOptions *source, 
    _Inout_ MI_SubscriptionDeliveryOptions *destination);


#endif /* _miapi_options_h_ */
