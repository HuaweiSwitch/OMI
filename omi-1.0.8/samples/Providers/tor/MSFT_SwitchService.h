/* @migen@ */
/*
**==============================================================================
**
** WARNING: THIS FILE WAS AUTOMATICALLY GENERATED. PLEASE DO NOT EDIT.
**
**==============================================================================
*/
#ifndef _MSFT_SwitchService_h
#define _MSFT_SwitchService_h

#include <MI.h>
#include "CIM_Service.h"
#include "CIM_ConcreteJob.h"
#include "CIM_ManagedElement.h"
#include "CIM_ProtocolEndpoint.h"
#include "CIM_SettingData.h"
#include "CIM_ComputerSystem.h"
#include "MSFT_NetworkVLAN.h"
#include "MSFT_LinkAggregation.h"
#include "CIM_EthernetPort.h"
#include "MSFT_Feature.h"
#include "MSFT_RemoteServerGroup.h"
#include "CIM_System.h"
#include "CIM_Collection.h"
#include "CIM_ServiceAccessPoint.h"
#include "CIM_EthernetPortAllocationSettingData.h"
#include "MSFT_MACTable.h"
#include "MSFT_MACTableEntry.h"

/*
**==============================================================================
**
** MSFT_SwitchService [MSFT_SwitchService]
**
** Keys:
**    Name
**    SystemCreationClassName
**    SystemName
**    CreationClassName
**
**==============================================================================
*/

typedef struct _MSFT_SwitchService /* extends CIM_Service */
{
    MI_Instance __instance;
    /* CIM_ManagedElement properties */
    MI_ConstStringField InstanceID;
    MI_ConstStringField Caption;
    MI_ConstStringField Description;
    MI_ConstStringField ElementName;
    /* CIM_ManagedSystemElement properties */
    MI_ConstDatetimeField InstallDate;
    /*KEY*/ MI_ConstStringField Name;
    MI_ConstUint16AField OperationalStatus;
    MI_ConstStringAField StatusDescriptions;
    MI_ConstStringField Status;
    MI_ConstUint16Field HealthState;
    MI_ConstUint16Field CommunicationStatus;
    MI_ConstUint16Field DetailedStatus;
    MI_ConstUint16Field OperatingStatus;
    MI_ConstUint16Field PrimaryStatus;
    /* CIM_LogicalElement properties */
    /* CIM_EnabledLogicalElement properties */
    MI_ConstUint16Field EnabledState;
    MI_ConstStringField OtherEnabledState;
    MI_ConstUint16Field RequestedState;
    MI_ConstUint16Field EnabledDefault;
    MI_ConstDatetimeField TimeOfLastStateChange;
    MI_ConstUint16AField AvailableRequestedStates;
    MI_ConstUint16Field TransitioningToState;
    /* CIM_Service properties */
    /*KEY*/ MI_ConstStringField SystemCreationClassName;
    /*KEY*/ MI_ConstStringField SystemName;
    /*KEY*/ MI_ConstStringField CreationClassName;
    MI_ConstStringField PrimaryOwnerName;
    MI_ConstStringField PrimaryOwnerContact;
    MI_ConstStringField StartMode;
    MI_ConstBooleanField Started;
    /* MSFT_SwitchService properties */
}
MSFT_SwitchService;

typedef struct _MSFT_SwitchService_Ref
{
    MSFT_SwitchService* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MSFT_SwitchService_Ref;

typedef struct _MSFT_SwitchService_ConstRef
{
    MI_CONST MSFT_SwitchService* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MSFT_SwitchService_ConstRef;

typedef struct _MSFT_SwitchService_Array
{
    struct _MSFT_SwitchService** data;
    MI_Uint32 size;
}
MSFT_SwitchService_Array;

typedef struct _MSFT_SwitchService_ConstArray
{
    struct _MSFT_SwitchService MI_CONST* MI_CONST* data;
    MI_Uint32 size;
}
MSFT_SwitchService_ConstArray;

typedef struct _MSFT_SwitchService_ArrayRef
{
    MSFT_SwitchService_Array value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MSFT_SwitchService_ArrayRef;

typedef struct _MSFT_SwitchService_ConstArrayRef
{
    MSFT_SwitchService_ConstArray value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MSFT_SwitchService_ConstArrayRef;

MI_EXTERN_C MI_CONST MI_ClassDecl MSFT_SwitchService_rtti;

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_Construct(
    MSFT_SwitchService* self,
    MI_Context* context)
{
    return MI_ConstructInstance(context, &MSFT_SwitchService_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_Clone(
    const MSFT_SwitchService* self,
    MSFT_SwitchService** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Boolean MI_CALL MSFT_SwitchService_IsA(
    const MI_Instance* self)
{
    MI_Boolean res = MI_FALSE;
    return MI_Instance_IsA(self, &MSFT_SwitchService_rtti, &res) == MI_RESULT_OK && res;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_Destruct(MSFT_SwitchService* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_Delete(MSFT_SwitchService* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_Post(
    const MSFT_SwitchService* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_Set_InstanceID(
    MSFT_SwitchService* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        0,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_SetPtr_InstanceID(
    MSFT_SwitchService* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        0,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_Clear_InstanceID(
    MSFT_SwitchService* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_Set_Caption(
    MSFT_SwitchService* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_SetPtr_Caption(
    MSFT_SwitchService* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_Clear_Caption(
    MSFT_SwitchService* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        1);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_Set_Description(
    MSFT_SwitchService* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_SetPtr_Description(
    MSFT_SwitchService* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_Clear_Description(
    MSFT_SwitchService* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        2);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_Set_ElementName(
    MSFT_SwitchService* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_SetPtr_ElementName(
    MSFT_SwitchService* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_Clear_ElementName(
    MSFT_SwitchService* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        3);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_Set_InstallDate(
    MSFT_SwitchService* self,
    MI_Datetime x)
{
    ((MI_DatetimeField*)&self->InstallDate)->value = x;
    ((MI_DatetimeField*)&self->InstallDate)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_Clear_InstallDate(
    MSFT_SwitchService* self)
{
    memset((void*)&self->InstallDate, 0, sizeof(self->InstallDate));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_Set_Name(
    MSFT_SwitchService* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        5,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_SetPtr_Name(
    MSFT_SwitchService* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        5,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_Clear_Name(
    MSFT_SwitchService* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        5);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_Set_OperationalStatus(
    MSFT_SwitchService* self,
    const MI_Uint16* data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        6,
        (MI_Value*)&arr,
        MI_UINT16A,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_SetPtr_OperationalStatus(
    MSFT_SwitchService* self,
    const MI_Uint16* data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        6,
        (MI_Value*)&arr,
        MI_UINT16A,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_Clear_OperationalStatus(
    MSFT_SwitchService* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        6);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_Set_StatusDescriptions(
    MSFT_SwitchService* self,
    const MI_Char** data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        7,
        (MI_Value*)&arr,
        MI_STRINGA,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_SetPtr_StatusDescriptions(
    MSFT_SwitchService* self,
    const MI_Char** data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        7,
        (MI_Value*)&arr,
        MI_STRINGA,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_Clear_StatusDescriptions(
    MSFT_SwitchService* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        7);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_Set_Status(
    MSFT_SwitchService* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        8,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_SetPtr_Status(
    MSFT_SwitchService* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        8,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_Clear_Status(
    MSFT_SwitchService* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        8);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_Set_HealthState(
    MSFT_SwitchService* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->HealthState)->value = x;
    ((MI_Uint16Field*)&self->HealthState)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_Clear_HealthState(
    MSFT_SwitchService* self)
{
    memset((void*)&self->HealthState, 0, sizeof(self->HealthState));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_Set_CommunicationStatus(
    MSFT_SwitchService* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->CommunicationStatus)->value = x;
    ((MI_Uint16Field*)&self->CommunicationStatus)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_Clear_CommunicationStatus(
    MSFT_SwitchService* self)
{
    memset((void*)&self->CommunicationStatus, 0, sizeof(self->CommunicationStatus));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_Set_DetailedStatus(
    MSFT_SwitchService* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->DetailedStatus)->value = x;
    ((MI_Uint16Field*)&self->DetailedStatus)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_Clear_DetailedStatus(
    MSFT_SwitchService* self)
{
    memset((void*)&self->DetailedStatus, 0, sizeof(self->DetailedStatus));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_Set_OperatingStatus(
    MSFT_SwitchService* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->OperatingStatus)->value = x;
    ((MI_Uint16Field*)&self->OperatingStatus)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_Clear_OperatingStatus(
    MSFT_SwitchService* self)
{
    memset((void*)&self->OperatingStatus, 0, sizeof(self->OperatingStatus));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_Set_PrimaryStatus(
    MSFT_SwitchService* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->PrimaryStatus)->value = x;
    ((MI_Uint16Field*)&self->PrimaryStatus)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_Clear_PrimaryStatus(
    MSFT_SwitchService* self)
{
    memset((void*)&self->PrimaryStatus, 0, sizeof(self->PrimaryStatus));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_Set_EnabledState(
    MSFT_SwitchService* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->EnabledState)->value = x;
    ((MI_Uint16Field*)&self->EnabledState)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_Clear_EnabledState(
    MSFT_SwitchService* self)
{
    memset((void*)&self->EnabledState, 0, sizeof(self->EnabledState));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_Set_OtherEnabledState(
    MSFT_SwitchService* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        15,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_SetPtr_OtherEnabledState(
    MSFT_SwitchService* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        15,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_Clear_OtherEnabledState(
    MSFT_SwitchService* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        15);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_Set_RequestedState(
    MSFT_SwitchService* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->RequestedState)->value = x;
    ((MI_Uint16Field*)&self->RequestedState)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_Clear_RequestedState(
    MSFT_SwitchService* self)
{
    memset((void*)&self->RequestedState, 0, sizeof(self->RequestedState));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_Set_EnabledDefault(
    MSFT_SwitchService* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->EnabledDefault)->value = x;
    ((MI_Uint16Field*)&self->EnabledDefault)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_Clear_EnabledDefault(
    MSFT_SwitchService* self)
{
    memset((void*)&self->EnabledDefault, 0, sizeof(self->EnabledDefault));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_Set_TimeOfLastStateChange(
    MSFT_SwitchService* self,
    MI_Datetime x)
{
    ((MI_DatetimeField*)&self->TimeOfLastStateChange)->value = x;
    ((MI_DatetimeField*)&self->TimeOfLastStateChange)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_Clear_TimeOfLastStateChange(
    MSFT_SwitchService* self)
{
    memset((void*)&self->TimeOfLastStateChange, 0, sizeof(self->TimeOfLastStateChange));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_Set_AvailableRequestedStates(
    MSFT_SwitchService* self,
    const MI_Uint16* data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        19,
        (MI_Value*)&arr,
        MI_UINT16A,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_SetPtr_AvailableRequestedStates(
    MSFT_SwitchService* self,
    const MI_Uint16* data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        19,
        (MI_Value*)&arr,
        MI_UINT16A,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_Clear_AvailableRequestedStates(
    MSFT_SwitchService* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        19);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_Set_TransitioningToState(
    MSFT_SwitchService* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->TransitioningToState)->value = x;
    ((MI_Uint16Field*)&self->TransitioningToState)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_Clear_TransitioningToState(
    MSFT_SwitchService* self)
{
    memset((void*)&self->TransitioningToState, 0, sizeof(self->TransitioningToState));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_Set_SystemCreationClassName(
    MSFT_SwitchService* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        21,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_SetPtr_SystemCreationClassName(
    MSFT_SwitchService* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        21,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_Clear_SystemCreationClassName(
    MSFT_SwitchService* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        21);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_Set_SystemName(
    MSFT_SwitchService* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        22,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_SetPtr_SystemName(
    MSFT_SwitchService* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        22,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_Clear_SystemName(
    MSFT_SwitchService* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        22);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_Set_CreationClassName(
    MSFT_SwitchService* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        23,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_SetPtr_CreationClassName(
    MSFT_SwitchService* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        23,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_Clear_CreationClassName(
    MSFT_SwitchService* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        23);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_Set_PrimaryOwnerName(
    MSFT_SwitchService* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        24,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_SetPtr_PrimaryOwnerName(
    MSFT_SwitchService* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        24,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_Clear_PrimaryOwnerName(
    MSFT_SwitchService* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        24);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_Set_PrimaryOwnerContact(
    MSFT_SwitchService* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        25,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_SetPtr_PrimaryOwnerContact(
    MSFT_SwitchService* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        25,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_Clear_PrimaryOwnerContact(
    MSFT_SwitchService* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        25);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_Set_StartMode(
    MSFT_SwitchService* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        26,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_SetPtr_StartMode(
    MSFT_SwitchService* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        26,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_Clear_StartMode(
    MSFT_SwitchService* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        26);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_Set_Started(
    MSFT_SwitchService* self,
    MI_Boolean x)
{
    ((MI_BooleanField*)&self->Started)->value = x;
    ((MI_BooleanField*)&self->Started)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_Clear_Started(
    MSFT_SwitchService* self)
{
    memset((void*)&self->Started, 0, sizeof(self->Started));
    return MI_RESULT_OK;
}

/*
**==============================================================================
**
** MSFT_SwitchService.RequestStateChange()
**
**==============================================================================
*/

typedef struct _MSFT_SwitchService_RequestStateChange
{
    MI_Instance __instance;
    /*OUT*/ MI_ConstUint32Field MIReturn;
    /*IN*/ MI_ConstUint16Field RequestedState;
    /*OUT*/ CIM_ConcreteJob_ConstRef Job;
    /*IN*/ MI_ConstDatetimeField TimeoutPeriod;
}
MSFT_SwitchService_RequestStateChange;

MI_EXTERN_C MI_CONST MI_MethodDecl MSFT_SwitchService_RequestStateChange_rtti;

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RequestStateChange_Construct(
    MSFT_SwitchService_RequestStateChange* self,
    MI_Context* context)
{
    return MI_ConstructParameters(context, &MSFT_SwitchService_RequestStateChange_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RequestStateChange_Clone(
    const MSFT_SwitchService_RequestStateChange* self,
    MSFT_SwitchService_RequestStateChange** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RequestStateChange_Destruct(
    MSFT_SwitchService_RequestStateChange* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RequestStateChange_Delete(
    MSFT_SwitchService_RequestStateChange* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RequestStateChange_Post(
    const MSFT_SwitchService_RequestStateChange* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RequestStateChange_Set_MIReturn(
    MSFT_SwitchService_RequestStateChange* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->MIReturn)->value = x;
    ((MI_Uint32Field*)&self->MIReturn)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RequestStateChange_Clear_MIReturn(
    MSFT_SwitchService_RequestStateChange* self)
{
    memset((void*)&self->MIReturn, 0, sizeof(self->MIReturn));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RequestStateChange_Set_RequestedState(
    MSFT_SwitchService_RequestStateChange* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->RequestedState)->value = x;
    ((MI_Uint16Field*)&self->RequestedState)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RequestStateChange_Clear_RequestedState(
    MSFT_SwitchService_RequestStateChange* self)
{
    memset((void*)&self->RequestedState, 0, sizeof(self->RequestedState));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RequestStateChange_Set_Job(
    MSFT_SwitchService_RequestStateChange* self,
    const CIM_ConcreteJob* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RequestStateChange_SetPtr_Job(
    MSFT_SwitchService_RequestStateChange* self,
    const CIM_ConcreteJob* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RequestStateChange_Clear_Job(
    MSFT_SwitchService_RequestStateChange* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        2);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RequestStateChange_Set_TimeoutPeriod(
    MSFT_SwitchService_RequestStateChange* self,
    MI_Datetime x)
{
    ((MI_DatetimeField*)&self->TimeoutPeriod)->value = x;
    ((MI_DatetimeField*)&self->TimeoutPeriod)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RequestStateChange_Clear_TimeoutPeriod(
    MSFT_SwitchService_RequestStateChange* self)
{
    memset((void*)&self->TimeoutPeriod, 0, sizeof(self->TimeoutPeriod));
    return MI_RESULT_OK;
}

/*
**==============================================================================
**
** MSFT_SwitchService.StartService()
**
**==============================================================================
*/

typedef struct _MSFT_SwitchService_StartService
{
    MI_Instance __instance;
    /*OUT*/ MI_ConstUint32Field MIReturn;
}
MSFT_SwitchService_StartService;

MI_EXTERN_C MI_CONST MI_MethodDecl MSFT_SwitchService_StartService_rtti;

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_StartService_Construct(
    MSFT_SwitchService_StartService* self,
    MI_Context* context)
{
    return MI_ConstructParameters(context, &MSFT_SwitchService_StartService_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_StartService_Clone(
    const MSFT_SwitchService_StartService* self,
    MSFT_SwitchService_StartService** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_StartService_Destruct(
    MSFT_SwitchService_StartService* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_StartService_Delete(
    MSFT_SwitchService_StartService* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_StartService_Post(
    const MSFT_SwitchService_StartService* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_StartService_Set_MIReturn(
    MSFT_SwitchService_StartService* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->MIReturn)->value = x;
    ((MI_Uint32Field*)&self->MIReturn)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_StartService_Clear_MIReturn(
    MSFT_SwitchService_StartService* self)
{
    memset((void*)&self->MIReturn, 0, sizeof(self->MIReturn));
    return MI_RESULT_OK;
}

/*
**==============================================================================
**
** MSFT_SwitchService.StopService()
**
**==============================================================================
*/

typedef struct _MSFT_SwitchService_StopService
{
    MI_Instance __instance;
    /*OUT*/ MI_ConstUint32Field MIReturn;
}
MSFT_SwitchService_StopService;

MI_EXTERN_C MI_CONST MI_MethodDecl MSFT_SwitchService_StopService_rtti;

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_StopService_Construct(
    MSFT_SwitchService_StopService* self,
    MI_Context* context)
{
    return MI_ConstructParameters(context, &MSFT_SwitchService_StopService_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_StopService_Clone(
    const MSFT_SwitchService_StopService* self,
    MSFT_SwitchService_StopService** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_StopService_Destruct(
    MSFT_SwitchService_StopService* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_StopService_Delete(
    MSFT_SwitchService_StopService* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_StopService_Post(
    const MSFT_SwitchService_StopService* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_StopService_Set_MIReturn(
    MSFT_SwitchService_StopService* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->MIReturn)->value = x;
    ((MI_Uint32Field*)&self->MIReturn)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_StopService_Clear_MIReturn(
    MSFT_SwitchService_StopService* self)
{
    memset((void*)&self->MIReturn, 0, sizeof(self->MIReturn));
    return MI_RESULT_OK;
}

/*
**==============================================================================
**
** MSFT_SwitchService.AddProtocolEndpoint()
**
**==============================================================================
*/

typedef struct _MSFT_SwitchService_AddProtocolEndpoint
{
    MI_Instance __instance;
    /*OUT*/ MI_ConstUint32Field MIReturn;
CIM_ManagedElement_ConstRef TargetInterface;
CIM_ProtocolEndpoint_ConstArrayRef ProtocolEndpoint;
CIM_SettingData_ConstArrayRef EndPointSettings;
    /*OUT*/ CIM_ProtocolEndpoint_ConstArrayRef ResultingEndpoint;
    /*OUT*/ CIM_ConcreteJob_ConstRef Job;
}
MSFT_SwitchService_AddProtocolEndpoint;

MI_EXTERN_C MI_CONST MI_MethodDecl MSFT_SwitchService_AddProtocolEndpoint_rtti;

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddProtocolEndpoint_Construct(
    MSFT_SwitchService_AddProtocolEndpoint* self,
    MI_Context* context)
{
    return MI_ConstructParameters(context, &MSFT_SwitchService_AddProtocolEndpoint_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddProtocolEndpoint_Clone(
    const MSFT_SwitchService_AddProtocolEndpoint* self,
    MSFT_SwitchService_AddProtocolEndpoint** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddProtocolEndpoint_Destruct(
    MSFT_SwitchService_AddProtocolEndpoint* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddProtocolEndpoint_Delete(
    MSFT_SwitchService_AddProtocolEndpoint* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddProtocolEndpoint_Post(
    const MSFT_SwitchService_AddProtocolEndpoint* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddProtocolEndpoint_Set_MIReturn(
    MSFT_SwitchService_AddProtocolEndpoint* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->MIReturn)->value = x;
    ((MI_Uint32Field*)&self->MIReturn)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddProtocolEndpoint_Clear_MIReturn(
    MSFT_SwitchService_AddProtocolEndpoint* self)
{
    memset((void*)&self->MIReturn, 0, sizeof(self->MIReturn));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddProtocolEndpoint_Set_TargetInterface(
    MSFT_SwitchService_AddProtocolEndpoint* self,
    const CIM_ManagedElement* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddProtocolEndpoint_SetPtr_TargetInterface(
    MSFT_SwitchService_AddProtocolEndpoint* self,
    const CIM_ManagedElement* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddProtocolEndpoint_Clear_TargetInterface(
    MSFT_SwitchService_AddProtocolEndpoint* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        1);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddProtocolEndpoint_Set_ProtocolEndpoint(
    MSFT_SwitchService_AddProtocolEndpoint* self,
    const CIM_ProtocolEndpoint * const * data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&arr,
        MI_INSTANCEA,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddProtocolEndpoint_SetPtr_ProtocolEndpoint(
    MSFT_SwitchService_AddProtocolEndpoint* self,
    const CIM_ProtocolEndpoint * const * data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&arr,
        MI_INSTANCEA,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddProtocolEndpoint_Clear_ProtocolEndpoint(
    MSFT_SwitchService_AddProtocolEndpoint* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        2);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddProtocolEndpoint_Set_EndPointSettings(
    MSFT_SwitchService_AddProtocolEndpoint* self,
    const CIM_SettingData * const * data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&arr,
        MI_INSTANCEA,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddProtocolEndpoint_SetPtr_EndPointSettings(
    MSFT_SwitchService_AddProtocolEndpoint* self,
    const CIM_SettingData * const * data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&arr,
        MI_INSTANCEA,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddProtocolEndpoint_Clear_EndPointSettings(
    MSFT_SwitchService_AddProtocolEndpoint* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        3);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddProtocolEndpoint_Set_ResultingEndpoint(
    MSFT_SwitchService_AddProtocolEndpoint* self,
    const CIM_ProtocolEndpoint* const* data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        4,
        (MI_Value*)&arr,
        MI_REFERENCEA,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddProtocolEndpoint_SetPtr_ResultingEndpoint(
    MSFT_SwitchService_AddProtocolEndpoint* self,
    const CIM_ProtocolEndpoint* const* data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        4,
        (MI_Value*)&arr,
        MI_REFERENCEA,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddProtocolEndpoint_Clear_ResultingEndpoint(
    MSFT_SwitchService_AddProtocolEndpoint* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        4);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddProtocolEndpoint_Set_Job(
    MSFT_SwitchService_AddProtocolEndpoint* self,
    const CIM_ConcreteJob* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        5,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddProtocolEndpoint_SetPtr_Job(
    MSFT_SwitchService_AddProtocolEndpoint* self,
    const CIM_ConcreteJob* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        5,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddProtocolEndpoint_Clear_Job(
    MSFT_SwitchService_AddProtocolEndpoint* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        5);
}

/*
**==============================================================================
**
** MSFT_SwitchService.RemoveProtocolEndpoint()
**
**==============================================================================
*/

typedef struct _MSFT_SwitchService_RemoveProtocolEndpoint
{
    MI_Instance __instance;
    /*OUT*/ MI_ConstUint32Field MIReturn;
CIM_ProtocolEndpoint_ConstRef Endpoint;
    /*OUT*/ CIM_ConcreteJob_ConstRef Job;
}
MSFT_SwitchService_RemoveProtocolEndpoint;

MI_EXTERN_C MI_CONST MI_MethodDecl MSFT_SwitchService_RemoveProtocolEndpoint_rtti;

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RemoveProtocolEndpoint_Construct(
    MSFT_SwitchService_RemoveProtocolEndpoint* self,
    MI_Context* context)
{
    return MI_ConstructParameters(context, &MSFT_SwitchService_RemoveProtocolEndpoint_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RemoveProtocolEndpoint_Clone(
    const MSFT_SwitchService_RemoveProtocolEndpoint* self,
    MSFT_SwitchService_RemoveProtocolEndpoint** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RemoveProtocolEndpoint_Destruct(
    MSFT_SwitchService_RemoveProtocolEndpoint* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RemoveProtocolEndpoint_Delete(
    MSFT_SwitchService_RemoveProtocolEndpoint* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RemoveProtocolEndpoint_Post(
    const MSFT_SwitchService_RemoveProtocolEndpoint* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RemoveProtocolEndpoint_Set_MIReturn(
    MSFT_SwitchService_RemoveProtocolEndpoint* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->MIReturn)->value = x;
    ((MI_Uint32Field*)&self->MIReturn)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RemoveProtocolEndpoint_Clear_MIReturn(
    MSFT_SwitchService_RemoveProtocolEndpoint* self)
{
    memset((void*)&self->MIReturn, 0, sizeof(self->MIReturn));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RemoveProtocolEndpoint_Set_Endpoint(
    MSFT_SwitchService_RemoveProtocolEndpoint* self,
    const CIM_ProtocolEndpoint* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RemoveProtocolEndpoint_SetPtr_Endpoint(
    MSFT_SwitchService_RemoveProtocolEndpoint* self,
    const CIM_ProtocolEndpoint* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RemoveProtocolEndpoint_Clear_Endpoint(
    MSFT_SwitchService_RemoveProtocolEndpoint* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        1);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RemoveProtocolEndpoint_Set_Job(
    MSFT_SwitchService_RemoveProtocolEndpoint* self,
    const CIM_ConcreteJob* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RemoveProtocolEndpoint_SetPtr_Job(
    MSFT_SwitchService_RemoveProtocolEndpoint* self,
    const CIM_ConcreteJob* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RemoveProtocolEndpoint_Clear_Job(
    MSFT_SwitchService_RemoveProtocolEndpoint* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        2);
}

/*
**==============================================================================
**
** MSFT_SwitchService.AddVLAN()
**
**==============================================================================
*/

typedef struct _MSFT_SwitchService_AddVLAN
{
    MI_Instance __instance;
    /*OUT*/ MI_ConstUint32Field MIReturn;
CIM_ComputerSystem_ConstRef TargetedSwitch;
MSFT_NetworkVLAN_ConstArrayRef NetworkVLAN;
    /*OUT*/ MSFT_NetworkVLAN_ConstArrayRef VLAN;
    /*OUT*/ CIM_ConcreteJob_ConstRef Job;
}
MSFT_SwitchService_AddVLAN;

MI_EXTERN_C MI_CONST MI_MethodDecl MSFT_SwitchService_AddVLAN_rtti;

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddVLAN_Construct(
    MSFT_SwitchService_AddVLAN* self,
    MI_Context* context)
{
    return MI_ConstructParameters(context, &MSFT_SwitchService_AddVLAN_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddVLAN_Clone(
    const MSFT_SwitchService_AddVLAN* self,
    MSFT_SwitchService_AddVLAN** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddVLAN_Destruct(
    MSFT_SwitchService_AddVLAN* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddVLAN_Delete(
    MSFT_SwitchService_AddVLAN* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddVLAN_Post(
    const MSFT_SwitchService_AddVLAN* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddVLAN_Set_MIReturn(
    MSFT_SwitchService_AddVLAN* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->MIReturn)->value = x;
    ((MI_Uint32Field*)&self->MIReturn)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddVLAN_Clear_MIReturn(
    MSFT_SwitchService_AddVLAN* self)
{
    memset((void*)&self->MIReturn, 0, sizeof(self->MIReturn));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddVLAN_Set_TargetedSwitch(
    MSFT_SwitchService_AddVLAN* self,
    const CIM_ComputerSystem* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddVLAN_SetPtr_TargetedSwitch(
    MSFT_SwitchService_AddVLAN* self,
    const CIM_ComputerSystem* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddVLAN_Clear_TargetedSwitch(
    MSFT_SwitchService_AddVLAN* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        1);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddVLAN_Set_NetworkVLAN(
    MSFT_SwitchService_AddVLAN* self,
    const MSFT_NetworkVLAN * const * data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&arr,
        MI_INSTANCEA,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddVLAN_SetPtr_NetworkVLAN(
    MSFT_SwitchService_AddVLAN* self,
    const MSFT_NetworkVLAN * const * data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&arr,
        MI_INSTANCEA,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddVLAN_Clear_NetworkVLAN(
    MSFT_SwitchService_AddVLAN* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        2);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddVLAN_Set_VLAN(
    MSFT_SwitchService_AddVLAN* self,
    const MSFT_NetworkVLAN* const* data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&arr,
        MI_REFERENCEA,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddVLAN_SetPtr_VLAN(
    MSFT_SwitchService_AddVLAN* self,
    const MSFT_NetworkVLAN* const* data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&arr,
        MI_REFERENCEA,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddVLAN_Clear_VLAN(
    MSFT_SwitchService_AddVLAN* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        3);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddVLAN_Set_Job(
    MSFT_SwitchService_AddVLAN* self,
    const CIM_ConcreteJob* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        4,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddVLAN_SetPtr_Job(
    MSFT_SwitchService_AddVLAN* self,
    const CIM_ConcreteJob* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        4,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddVLAN_Clear_Job(
    MSFT_SwitchService_AddVLAN* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        4);
}

/*
**==============================================================================
**
** MSFT_SwitchService.RemoveVLAN()
**
**==============================================================================
*/

typedef struct _MSFT_SwitchService_RemoveVLAN
{
    MI_Instance __instance;
    /*OUT*/ MI_ConstUint32Field MIReturn;
MSFT_NetworkVLAN_ConstArrayRef VLAN;
    /*OUT*/ CIM_ConcreteJob_ConstRef Job;
}
MSFT_SwitchService_RemoveVLAN;

MI_EXTERN_C MI_CONST MI_MethodDecl MSFT_SwitchService_RemoveVLAN_rtti;

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RemoveVLAN_Construct(
    MSFT_SwitchService_RemoveVLAN* self,
    MI_Context* context)
{
    return MI_ConstructParameters(context, &MSFT_SwitchService_RemoveVLAN_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RemoveVLAN_Clone(
    const MSFT_SwitchService_RemoveVLAN* self,
    MSFT_SwitchService_RemoveVLAN** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RemoveVLAN_Destruct(
    MSFT_SwitchService_RemoveVLAN* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RemoveVLAN_Delete(
    MSFT_SwitchService_RemoveVLAN* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RemoveVLAN_Post(
    const MSFT_SwitchService_RemoveVLAN* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RemoveVLAN_Set_MIReturn(
    MSFT_SwitchService_RemoveVLAN* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->MIReturn)->value = x;
    ((MI_Uint32Field*)&self->MIReturn)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RemoveVLAN_Clear_MIReturn(
    MSFT_SwitchService_RemoveVLAN* self)
{
    memset((void*)&self->MIReturn, 0, sizeof(self->MIReturn));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RemoveVLAN_Set_VLAN(
    MSFT_SwitchService_RemoveVLAN* self,
    const MSFT_NetworkVLAN* const* data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&arr,
        MI_REFERENCEA,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RemoveVLAN_SetPtr_VLAN(
    MSFT_SwitchService_RemoveVLAN* self,
    const MSFT_NetworkVLAN* const* data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&arr,
        MI_REFERENCEA,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RemoveVLAN_Clear_VLAN(
    MSFT_SwitchService_RemoveVLAN* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        1);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RemoveVLAN_Set_Job(
    MSFT_SwitchService_RemoveVLAN* self,
    const CIM_ConcreteJob* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RemoveVLAN_SetPtr_Job(
    MSFT_SwitchService_RemoveVLAN* self,
    const CIM_ConcreteJob* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RemoveVLAN_Clear_Job(
    MSFT_SwitchService_RemoveVLAN* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        2);
}

/*
**==============================================================================
**
** MSFT_SwitchService.EnableVLAN()
**
**==============================================================================
*/

typedef struct _MSFT_SwitchService_EnableVLAN
{
    MI_Instance __instance;
    /*OUT*/ MI_ConstUint32Field MIReturn;
MSFT_NetworkVLAN_ConstArrayRef VLAN;
    /*OUT*/ CIM_ConcreteJob_ConstRef Job;
}
MSFT_SwitchService_EnableVLAN;

MI_EXTERN_C MI_CONST MI_MethodDecl MSFT_SwitchService_EnableVLAN_rtti;

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_EnableVLAN_Construct(
    MSFT_SwitchService_EnableVLAN* self,
    MI_Context* context)
{
    return MI_ConstructParameters(context, &MSFT_SwitchService_EnableVLAN_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_EnableVLAN_Clone(
    const MSFT_SwitchService_EnableVLAN* self,
    MSFT_SwitchService_EnableVLAN** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_EnableVLAN_Destruct(
    MSFT_SwitchService_EnableVLAN* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_EnableVLAN_Delete(
    MSFT_SwitchService_EnableVLAN* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_EnableVLAN_Post(
    const MSFT_SwitchService_EnableVLAN* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_EnableVLAN_Set_MIReturn(
    MSFT_SwitchService_EnableVLAN* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->MIReturn)->value = x;
    ((MI_Uint32Field*)&self->MIReturn)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_EnableVLAN_Clear_MIReturn(
    MSFT_SwitchService_EnableVLAN* self)
{
    memset((void*)&self->MIReturn, 0, sizeof(self->MIReturn));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_EnableVLAN_Set_VLAN(
    MSFT_SwitchService_EnableVLAN* self,
    const MSFT_NetworkVLAN* const* data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&arr,
        MI_REFERENCEA,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_EnableVLAN_SetPtr_VLAN(
    MSFT_SwitchService_EnableVLAN* self,
    const MSFT_NetworkVLAN* const* data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&arr,
        MI_REFERENCEA,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_EnableVLAN_Clear_VLAN(
    MSFT_SwitchService_EnableVLAN* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        1);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_EnableVLAN_Set_Job(
    MSFT_SwitchService_EnableVLAN* self,
    const CIM_ConcreteJob* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_EnableVLAN_SetPtr_Job(
    MSFT_SwitchService_EnableVLAN* self,
    const CIM_ConcreteJob* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_EnableVLAN_Clear_Job(
    MSFT_SwitchService_EnableVLAN* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        2);
}

/*
**==============================================================================
**
** MSFT_SwitchService.DisableVLAN()
**
**==============================================================================
*/

typedef struct _MSFT_SwitchService_DisableVLAN
{
    MI_Instance __instance;
    /*OUT*/ MI_ConstUint32Field MIReturn;
MSFT_NetworkVLAN_ConstArrayRef VLAN;
    /*OUT*/ CIM_ConcreteJob_ConstRef Job;
}
MSFT_SwitchService_DisableVLAN;

MI_EXTERN_C MI_CONST MI_MethodDecl MSFT_SwitchService_DisableVLAN_rtti;

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_DisableVLAN_Construct(
    MSFT_SwitchService_DisableVLAN* self,
    MI_Context* context)
{
    return MI_ConstructParameters(context, &MSFT_SwitchService_DisableVLAN_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_DisableVLAN_Clone(
    const MSFT_SwitchService_DisableVLAN* self,
    MSFT_SwitchService_DisableVLAN** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_DisableVLAN_Destruct(
    MSFT_SwitchService_DisableVLAN* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_DisableVLAN_Delete(
    MSFT_SwitchService_DisableVLAN* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_DisableVLAN_Post(
    const MSFT_SwitchService_DisableVLAN* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_DisableVLAN_Set_MIReturn(
    MSFT_SwitchService_DisableVLAN* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->MIReturn)->value = x;
    ((MI_Uint32Field*)&self->MIReturn)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_DisableVLAN_Clear_MIReturn(
    MSFT_SwitchService_DisableVLAN* self)
{
    memset((void*)&self->MIReturn, 0, sizeof(self->MIReturn));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_DisableVLAN_Set_VLAN(
    MSFT_SwitchService_DisableVLAN* self,
    const MSFT_NetworkVLAN* const* data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&arr,
        MI_REFERENCEA,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_DisableVLAN_SetPtr_VLAN(
    MSFT_SwitchService_DisableVLAN* self,
    const MSFT_NetworkVLAN* const* data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&arr,
        MI_REFERENCEA,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_DisableVLAN_Clear_VLAN(
    MSFT_SwitchService_DisableVLAN* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        1);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_DisableVLAN_Set_Job(
    MSFT_SwitchService_DisableVLAN* self,
    const CIM_ConcreteJob* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_DisableVLAN_SetPtr_Job(
    MSFT_SwitchService_DisableVLAN* self,
    const CIM_ConcreteJob* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_DisableVLAN_Clear_Job(
    MSFT_SwitchService_DisableVLAN* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        2);
}

/*
**==============================================================================
**
** MSFT_SwitchService.SetVLANState()
**
**==============================================================================
*/

typedef struct _MSFT_SwitchService_SetVLANState
{
    MI_Instance __instance;
    /*OUT*/ MI_ConstUint32Field MIReturn;
MSFT_NetworkVLAN_ConstRef VLAN;
MI_ConstUint32Field State;
    /*OUT*/ CIM_ConcreteJob_ConstRef Job;
}
MSFT_SwitchService_SetVLANState;

MI_EXTERN_C MI_CONST MI_MethodDecl MSFT_SwitchService_SetVLANState_rtti;

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_SetVLANState_Construct(
    MSFT_SwitchService_SetVLANState* self,
    MI_Context* context)
{
    return MI_ConstructParameters(context, &MSFT_SwitchService_SetVLANState_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_SetVLANState_Clone(
    const MSFT_SwitchService_SetVLANState* self,
    MSFT_SwitchService_SetVLANState** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_SetVLANState_Destruct(
    MSFT_SwitchService_SetVLANState* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_SetVLANState_Delete(
    MSFT_SwitchService_SetVLANState* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_SetVLANState_Post(
    const MSFT_SwitchService_SetVLANState* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_SetVLANState_Set_MIReturn(
    MSFT_SwitchService_SetVLANState* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->MIReturn)->value = x;
    ((MI_Uint32Field*)&self->MIReturn)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_SetVLANState_Clear_MIReturn(
    MSFT_SwitchService_SetVLANState* self)
{
    memset((void*)&self->MIReturn, 0, sizeof(self->MIReturn));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_SetVLANState_Set_VLAN(
    MSFT_SwitchService_SetVLANState* self,
    const MSFT_NetworkVLAN* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_SetVLANState_SetPtr_VLAN(
    MSFT_SwitchService_SetVLANState* self,
    const MSFT_NetworkVLAN* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_SetVLANState_Clear_VLAN(
    MSFT_SwitchService_SetVLANState* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        1);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_SetVLANState_Set_State(
    MSFT_SwitchService_SetVLANState* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->State)->value = x;
    ((MI_Uint32Field*)&self->State)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_SetVLANState_Clear_State(
    MSFT_SwitchService_SetVLANState* self)
{
    memset((void*)&self->State, 0, sizeof(self->State));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_SetVLANState_Set_Job(
    MSFT_SwitchService_SetVLANState* self,
    const CIM_ConcreteJob* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_SetVLANState_SetPtr_Job(
    MSFT_SwitchService_SetVLANState* self,
    const CIM_ConcreteJob* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_SetVLANState_Clear_Job(
    MSFT_SwitchService_SetVLANState* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        3);
}

/*
**==============================================================================
**
** MSFT_SwitchService.CreateLinkAggregation()
**
**==============================================================================
*/

typedef struct _MSFT_SwitchService_CreateLinkAggregation
{
    MI_Instance __instance;
    /*OUT*/ MI_ConstUint32Field MIReturn;
MSFT_LinkAggregation_ConstArrayRef LinkAggregation;
CIM_EthernetPort_ConstArrayRef EthernetPort;
    /*OUT*/ MSFT_LinkAggregation_ConstRef ResultingLinkAggregation;
    /*OUT*/ CIM_ConcreteJob_ConstRef Job;
}
MSFT_SwitchService_CreateLinkAggregation;

MI_EXTERN_C MI_CONST MI_MethodDecl MSFT_SwitchService_CreateLinkAggregation_rtti;

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CreateLinkAggregation_Construct(
    MSFT_SwitchService_CreateLinkAggregation* self,
    MI_Context* context)
{
    return MI_ConstructParameters(context, &MSFT_SwitchService_CreateLinkAggregation_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CreateLinkAggregation_Clone(
    const MSFT_SwitchService_CreateLinkAggregation* self,
    MSFT_SwitchService_CreateLinkAggregation** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CreateLinkAggregation_Destruct(
    MSFT_SwitchService_CreateLinkAggregation* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CreateLinkAggregation_Delete(
    MSFT_SwitchService_CreateLinkAggregation* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CreateLinkAggregation_Post(
    const MSFT_SwitchService_CreateLinkAggregation* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CreateLinkAggregation_Set_MIReturn(
    MSFT_SwitchService_CreateLinkAggregation* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->MIReturn)->value = x;
    ((MI_Uint32Field*)&self->MIReturn)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CreateLinkAggregation_Clear_MIReturn(
    MSFT_SwitchService_CreateLinkAggregation* self)
{
    memset((void*)&self->MIReturn, 0, sizeof(self->MIReturn));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CreateLinkAggregation_Set_LinkAggregation(
    MSFT_SwitchService_CreateLinkAggregation* self,
    const MSFT_LinkAggregation * const * data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&arr,
        MI_INSTANCEA,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CreateLinkAggregation_SetPtr_LinkAggregation(
    MSFT_SwitchService_CreateLinkAggregation* self,
    const MSFT_LinkAggregation * const * data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&arr,
        MI_INSTANCEA,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CreateLinkAggregation_Clear_LinkAggregation(
    MSFT_SwitchService_CreateLinkAggregation* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        1);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CreateLinkAggregation_Set_EthernetPort(
    MSFT_SwitchService_CreateLinkAggregation* self,
    const CIM_EthernetPort* const* data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&arr,
        MI_REFERENCEA,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CreateLinkAggregation_SetPtr_EthernetPort(
    MSFT_SwitchService_CreateLinkAggregation* self,
    const CIM_EthernetPort* const* data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&arr,
        MI_REFERENCEA,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CreateLinkAggregation_Clear_EthernetPort(
    MSFT_SwitchService_CreateLinkAggregation* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        2);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CreateLinkAggregation_Set_ResultingLinkAggregation(
    MSFT_SwitchService_CreateLinkAggregation* self,
    const MSFT_LinkAggregation* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CreateLinkAggregation_SetPtr_ResultingLinkAggregation(
    MSFT_SwitchService_CreateLinkAggregation* self,
    const MSFT_LinkAggregation* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CreateLinkAggregation_Clear_ResultingLinkAggregation(
    MSFT_SwitchService_CreateLinkAggregation* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        3);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CreateLinkAggregation_Set_Job(
    MSFT_SwitchService_CreateLinkAggregation* self,
    const CIM_ConcreteJob* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        4,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CreateLinkAggregation_SetPtr_Job(
    MSFT_SwitchService_CreateLinkAggregation* self,
    const CIM_ConcreteJob* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        4,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CreateLinkAggregation_Clear_Job(
    MSFT_SwitchService_CreateLinkAggregation* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        4);
}

/*
**==============================================================================
**
** MSFT_SwitchService.RemoveLinkAggregation()
**
**==============================================================================
*/

typedef struct _MSFT_SwitchService_RemoveLinkAggregation
{
    MI_Instance __instance;
    /*OUT*/ MI_ConstUint32Field MIReturn;
MSFT_LinkAggregation_ConstRef LinkAggregation;
    /*OUT*/ CIM_ConcreteJob_ConstRef Job;
}
MSFT_SwitchService_RemoveLinkAggregation;

MI_EXTERN_C MI_CONST MI_MethodDecl MSFT_SwitchService_RemoveLinkAggregation_rtti;

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RemoveLinkAggregation_Construct(
    MSFT_SwitchService_RemoveLinkAggregation* self,
    MI_Context* context)
{
    return MI_ConstructParameters(context, &MSFT_SwitchService_RemoveLinkAggregation_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RemoveLinkAggregation_Clone(
    const MSFT_SwitchService_RemoveLinkAggregation* self,
    MSFT_SwitchService_RemoveLinkAggregation** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RemoveLinkAggregation_Destruct(
    MSFT_SwitchService_RemoveLinkAggregation* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RemoveLinkAggregation_Delete(
    MSFT_SwitchService_RemoveLinkAggregation* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RemoveLinkAggregation_Post(
    const MSFT_SwitchService_RemoveLinkAggregation* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RemoveLinkAggregation_Set_MIReturn(
    MSFT_SwitchService_RemoveLinkAggregation* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->MIReturn)->value = x;
    ((MI_Uint32Field*)&self->MIReturn)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RemoveLinkAggregation_Clear_MIReturn(
    MSFT_SwitchService_RemoveLinkAggregation* self)
{
    memset((void*)&self->MIReturn, 0, sizeof(self->MIReturn));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RemoveLinkAggregation_Set_LinkAggregation(
    MSFT_SwitchService_RemoveLinkAggregation* self,
    const MSFT_LinkAggregation* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RemoveLinkAggregation_SetPtr_LinkAggregation(
    MSFT_SwitchService_RemoveLinkAggregation* self,
    const MSFT_LinkAggregation* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RemoveLinkAggregation_Clear_LinkAggregation(
    MSFT_SwitchService_RemoveLinkAggregation* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        1);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RemoveLinkAggregation_Set_Job(
    MSFT_SwitchService_RemoveLinkAggregation* self,
    const CIM_ConcreteJob* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RemoveLinkAggregation_SetPtr_Job(
    MSFT_SwitchService_RemoveLinkAggregation* self,
    const CIM_ConcreteJob* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RemoveLinkAggregation_Clear_Job(
    MSFT_SwitchService_RemoveLinkAggregation* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        2);
}

/*
**==============================================================================
**
** MSFT_SwitchService.AddPortToAggregation()
**
**==============================================================================
*/

typedef struct _MSFT_SwitchService_AddPortToAggregation
{
    MI_Instance __instance;
    /*OUT*/ MI_ConstUint32Field MIReturn;
MSFT_LinkAggregation_ConstRef LinkAggregation;
CIM_EthernetPort_ConstArrayRef EthernetPort;
    /*OUT*/ CIM_ConcreteJob_ConstRef Job;
}
MSFT_SwitchService_AddPortToAggregation;

MI_EXTERN_C MI_CONST MI_MethodDecl MSFT_SwitchService_AddPortToAggregation_rtti;

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddPortToAggregation_Construct(
    MSFT_SwitchService_AddPortToAggregation* self,
    MI_Context* context)
{
    return MI_ConstructParameters(context, &MSFT_SwitchService_AddPortToAggregation_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddPortToAggregation_Clone(
    const MSFT_SwitchService_AddPortToAggregation* self,
    MSFT_SwitchService_AddPortToAggregation** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddPortToAggregation_Destruct(
    MSFT_SwitchService_AddPortToAggregation* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddPortToAggregation_Delete(
    MSFT_SwitchService_AddPortToAggregation* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddPortToAggregation_Post(
    const MSFT_SwitchService_AddPortToAggregation* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddPortToAggregation_Set_MIReturn(
    MSFT_SwitchService_AddPortToAggregation* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->MIReturn)->value = x;
    ((MI_Uint32Field*)&self->MIReturn)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddPortToAggregation_Clear_MIReturn(
    MSFT_SwitchService_AddPortToAggregation* self)
{
    memset((void*)&self->MIReturn, 0, sizeof(self->MIReturn));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddPortToAggregation_Set_LinkAggregation(
    MSFT_SwitchService_AddPortToAggregation* self,
    const MSFT_LinkAggregation* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddPortToAggregation_SetPtr_LinkAggregation(
    MSFT_SwitchService_AddPortToAggregation* self,
    const MSFT_LinkAggregation* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddPortToAggregation_Clear_LinkAggregation(
    MSFT_SwitchService_AddPortToAggregation* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        1);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddPortToAggregation_Set_EthernetPort(
    MSFT_SwitchService_AddPortToAggregation* self,
    const CIM_EthernetPort* const* data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&arr,
        MI_REFERENCEA,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddPortToAggregation_SetPtr_EthernetPort(
    MSFT_SwitchService_AddPortToAggregation* self,
    const CIM_EthernetPort* const* data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&arr,
        MI_REFERENCEA,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddPortToAggregation_Clear_EthernetPort(
    MSFT_SwitchService_AddPortToAggregation* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        2);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddPortToAggregation_Set_Job(
    MSFT_SwitchService_AddPortToAggregation* self,
    const CIM_ConcreteJob* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddPortToAggregation_SetPtr_Job(
    MSFT_SwitchService_AddPortToAggregation* self,
    const CIM_ConcreteJob* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddPortToAggregation_Clear_Job(
    MSFT_SwitchService_AddPortToAggregation* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        3);
}

/*
**==============================================================================
**
** MSFT_SwitchService.RemovePortFromLinkAggregation()
**
**==============================================================================
*/

typedef struct _MSFT_SwitchService_RemovePortFromLinkAggregation
{
    MI_Instance __instance;
    /*OUT*/ MI_ConstUint32Field MIReturn;
CIM_EthernetPort_ConstRef EthernetPort;
    /*OUT*/ CIM_ConcreteJob_ConstRef Job;
}
MSFT_SwitchService_RemovePortFromLinkAggregation;

MI_EXTERN_C MI_CONST MI_MethodDecl MSFT_SwitchService_RemovePortFromLinkAggregation_rtti;

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RemovePortFromLinkAggregation_Construct(
    MSFT_SwitchService_RemovePortFromLinkAggregation* self,
    MI_Context* context)
{
    return MI_ConstructParameters(context, &MSFT_SwitchService_RemovePortFromLinkAggregation_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RemovePortFromLinkAggregation_Clone(
    const MSFT_SwitchService_RemovePortFromLinkAggregation* self,
    MSFT_SwitchService_RemovePortFromLinkAggregation** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RemovePortFromLinkAggregation_Destruct(
    MSFT_SwitchService_RemovePortFromLinkAggregation* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RemovePortFromLinkAggregation_Delete(
    MSFT_SwitchService_RemovePortFromLinkAggregation* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RemovePortFromLinkAggregation_Post(
    const MSFT_SwitchService_RemovePortFromLinkAggregation* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RemovePortFromLinkAggregation_Set_MIReturn(
    MSFT_SwitchService_RemovePortFromLinkAggregation* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->MIReturn)->value = x;
    ((MI_Uint32Field*)&self->MIReturn)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RemovePortFromLinkAggregation_Clear_MIReturn(
    MSFT_SwitchService_RemovePortFromLinkAggregation* self)
{
    memset((void*)&self->MIReturn, 0, sizeof(self->MIReturn));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RemovePortFromLinkAggregation_Set_EthernetPort(
    MSFT_SwitchService_RemovePortFromLinkAggregation* self,
    const CIM_EthernetPort* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RemovePortFromLinkAggregation_SetPtr_EthernetPort(
    MSFT_SwitchService_RemovePortFromLinkAggregation* self,
    const CIM_EthernetPort* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RemovePortFromLinkAggregation_Clear_EthernetPort(
    MSFT_SwitchService_RemovePortFromLinkAggregation* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        1);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RemovePortFromLinkAggregation_Set_Job(
    MSFT_SwitchService_RemovePortFromLinkAggregation* self,
    const CIM_ConcreteJob* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RemovePortFromLinkAggregation_SetPtr_Job(
    MSFT_SwitchService_RemovePortFromLinkAggregation* self,
    const CIM_ConcreteJob* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RemovePortFromLinkAggregation_Clear_Job(
    MSFT_SwitchService_RemovePortFromLinkAggregation* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        2);
}

/*
**==============================================================================
**
** MSFT_SwitchService.CopyCurrentToStartup()
**
**==============================================================================
*/

typedef struct _MSFT_SwitchService_CopyCurrentToStartup
{
    MI_Instance __instance;
    /*OUT*/ MI_ConstUint32Field MIReturn;
    /*OUT*/ CIM_ConcreteJob_ConstRef Job;
}
MSFT_SwitchService_CopyCurrentToStartup;

MI_EXTERN_C MI_CONST MI_MethodDecl MSFT_SwitchService_CopyCurrentToStartup_rtti;

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyCurrentToStartup_Construct(
    MSFT_SwitchService_CopyCurrentToStartup* self,
    MI_Context* context)
{
    return MI_ConstructParameters(context, &MSFT_SwitchService_CopyCurrentToStartup_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyCurrentToStartup_Clone(
    const MSFT_SwitchService_CopyCurrentToStartup* self,
    MSFT_SwitchService_CopyCurrentToStartup** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyCurrentToStartup_Destruct(
    MSFT_SwitchService_CopyCurrentToStartup* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyCurrentToStartup_Delete(
    MSFT_SwitchService_CopyCurrentToStartup* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyCurrentToStartup_Post(
    const MSFT_SwitchService_CopyCurrentToStartup* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyCurrentToStartup_Set_MIReturn(
    MSFT_SwitchService_CopyCurrentToStartup* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->MIReturn)->value = x;
    ((MI_Uint32Field*)&self->MIReturn)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyCurrentToStartup_Clear_MIReturn(
    MSFT_SwitchService_CopyCurrentToStartup* self)
{
    memset((void*)&self->MIReturn, 0, sizeof(self->MIReturn));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyCurrentToStartup_Set_Job(
    MSFT_SwitchService_CopyCurrentToStartup* self,
    const CIM_ConcreteJob* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyCurrentToStartup_SetPtr_Job(
    MSFT_SwitchService_CopyCurrentToStartup* self,
    const CIM_ConcreteJob* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyCurrentToStartup_Clear_Job(
    MSFT_SwitchService_CopyCurrentToStartup* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        1);
}

/*
**==============================================================================
**
** MSFT_SwitchService.CopyStartupToCurrent()
**
**==============================================================================
*/

typedef struct _MSFT_SwitchService_CopyStartupToCurrent
{
    MI_Instance __instance;
    /*OUT*/ MI_ConstUint32Field MIReturn;
    /*OUT*/ CIM_ConcreteJob_ConstRef Job;
}
MSFT_SwitchService_CopyStartupToCurrent;

MI_EXTERN_C MI_CONST MI_MethodDecl MSFT_SwitchService_CopyStartupToCurrent_rtti;

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyStartupToCurrent_Construct(
    MSFT_SwitchService_CopyStartupToCurrent* self,
    MI_Context* context)
{
    return MI_ConstructParameters(context, &MSFT_SwitchService_CopyStartupToCurrent_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyStartupToCurrent_Clone(
    const MSFT_SwitchService_CopyStartupToCurrent* self,
    MSFT_SwitchService_CopyStartupToCurrent** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyStartupToCurrent_Destruct(
    MSFT_SwitchService_CopyStartupToCurrent* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyStartupToCurrent_Delete(
    MSFT_SwitchService_CopyStartupToCurrent* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyStartupToCurrent_Post(
    const MSFT_SwitchService_CopyStartupToCurrent* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyStartupToCurrent_Set_MIReturn(
    MSFT_SwitchService_CopyStartupToCurrent* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->MIReturn)->value = x;
    ((MI_Uint32Field*)&self->MIReturn)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyStartupToCurrent_Clear_MIReturn(
    MSFT_SwitchService_CopyStartupToCurrent* self)
{
    memset((void*)&self->MIReturn, 0, sizeof(self->MIReturn));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyStartupToCurrent_Set_Job(
    MSFT_SwitchService_CopyStartupToCurrent* self,
    const CIM_ConcreteJob* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyStartupToCurrent_SetPtr_Job(
    MSFT_SwitchService_CopyStartupToCurrent* self,
    const CIM_ConcreteJob* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyStartupToCurrent_Clear_Job(
    MSFT_SwitchService_CopyStartupToCurrent* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        1);
}

/*
**==============================================================================
**
** MSFT_SwitchService.CopyCurrentToFile()
**
**==============================================================================
*/

typedef struct _MSFT_SwitchService_CopyCurrentToFile
{
    MI_Instance __instance;
    /*OUT*/ MI_ConstUint32Field MIReturn;
MI_ConstStringField FileURI;
    /*OUT*/ CIM_ConcreteJob_ConstRef Job;
}
MSFT_SwitchService_CopyCurrentToFile;

MI_EXTERN_C MI_CONST MI_MethodDecl MSFT_SwitchService_CopyCurrentToFile_rtti;

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyCurrentToFile_Construct(
    MSFT_SwitchService_CopyCurrentToFile* self,
    MI_Context* context)
{
    return MI_ConstructParameters(context, &MSFT_SwitchService_CopyCurrentToFile_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyCurrentToFile_Clone(
    const MSFT_SwitchService_CopyCurrentToFile* self,
    MSFT_SwitchService_CopyCurrentToFile** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyCurrentToFile_Destruct(
    MSFT_SwitchService_CopyCurrentToFile* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyCurrentToFile_Delete(
    MSFT_SwitchService_CopyCurrentToFile* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyCurrentToFile_Post(
    const MSFT_SwitchService_CopyCurrentToFile* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyCurrentToFile_Set_MIReturn(
    MSFT_SwitchService_CopyCurrentToFile* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->MIReturn)->value = x;
    ((MI_Uint32Field*)&self->MIReturn)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyCurrentToFile_Clear_MIReturn(
    MSFT_SwitchService_CopyCurrentToFile* self)
{
    memset((void*)&self->MIReturn, 0, sizeof(self->MIReturn));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyCurrentToFile_Set_FileURI(
    MSFT_SwitchService_CopyCurrentToFile* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyCurrentToFile_SetPtr_FileURI(
    MSFT_SwitchService_CopyCurrentToFile* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyCurrentToFile_Clear_FileURI(
    MSFT_SwitchService_CopyCurrentToFile* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        1);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyCurrentToFile_Set_Job(
    MSFT_SwitchService_CopyCurrentToFile* self,
    const CIM_ConcreteJob* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyCurrentToFile_SetPtr_Job(
    MSFT_SwitchService_CopyCurrentToFile* self,
    const CIM_ConcreteJob* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyCurrentToFile_Clear_Job(
    MSFT_SwitchService_CopyCurrentToFile* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        2);
}

/*
**==============================================================================
**
** MSFT_SwitchService.CopyFile()
**
**==============================================================================
*/

typedef struct _MSFT_SwitchService_CopyFile
{
    MI_Instance __instance;
    /*OUT*/ MI_ConstUint32Field MIReturn;
MI_ConstStringField SourceFileURI;
MI_ConstStringField DestinationFileURI;
    /*OUT*/ CIM_ConcreteJob_ConstRef Job;
}
MSFT_SwitchService_CopyFile;

MI_EXTERN_C MI_CONST MI_MethodDecl MSFT_SwitchService_CopyFile_rtti;

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyFile_Construct(
    MSFT_SwitchService_CopyFile* self,
    MI_Context* context)
{
    return MI_ConstructParameters(context, &MSFT_SwitchService_CopyFile_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyFile_Clone(
    const MSFT_SwitchService_CopyFile* self,
    MSFT_SwitchService_CopyFile** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyFile_Destruct(
    MSFT_SwitchService_CopyFile* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyFile_Delete(
    MSFT_SwitchService_CopyFile* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyFile_Post(
    const MSFT_SwitchService_CopyFile* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyFile_Set_MIReturn(
    MSFT_SwitchService_CopyFile* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->MIReturn)->value = x;
    ((MI_Uint32Field*)&self->MIReturn)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyFile_Clear_MIReturn(
    MSFT_SwitchService_CopyFile* self)
{
    memset((void*)&self->MIReturn, 0, sizeof(self->MIReturn));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyFile_Set_SourceFileURI(
    MSFT_SwitchService_CopyFile* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyFile_SetPtr_SourceFileURI(
    MSFT_SwitchService_CopyFile* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyFile_Clear_SourceFileURI(
    MSFT_SwitchService_CopyFile* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        1);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyFile_Set_DestinationFileURI(
    MSFT_SwitchService_CopyFile* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyFile_SetPtr_DestinationFileURI(
    MSFT_SwitchService_CopyFile* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyFile_Clear_DestinationFileURI(
    MSFT_SwitchService_CopyFile* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        2);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyFile_Set_Job(
    MSFT_SwitchService_CopyFile* self,
    const CIM_ConcreteJob* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyFile_SetPtr_Job(
    MSFT_SwitchService_CopyFile* self,
    const CIM_ConcreteJob* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyFile_Clear_Job(
    MSFT_SwitchService_CopyFile* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        3);
}

/*
**==============================================================================
**
** MSFT_SwitchService.CopyStartupToFile()
**
**==============================================================================
*/

typedef struct _MSFT_SwitchService_CopyStartupToFile
{
    MI_Instance __instance;
    /*OUT*/ MI_ConstUint32Field MIReturn;
MI_ConstStringField FileURI;
    /*OUT*/ CIM_ConcreteJob_ConstRef Job;
}
MSFT_SwitchService_CopyStartupToFile;

MI_EXTERN_C MI_CONST MI_MethodDecl MSFT_SwitchService_CopyStartupToFile_rtti;

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyStartupToFile_Construct(
    MSFT_SwitchService_CopyStartupToFile* self,
    MI_Context* context)
{
    return MI_ConstructParameters(context, &MSFT_SwitchService_CopyStartupToFile_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyStartupToFile_Clone(
    const MSFT_SwitchService_CopyStartupToFile* self,
    MSFT_SwitchService_CopyStartupToFile** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyStartupToFile_Destruct(
    MSFT_SwitchService_CopyStartupToFile* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyStartupToFile_Delete(
    MSFT_SwitchService_CopyStartupToFile* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyStartupToFile_Post(
    const MSFT_SwitchService_CopyStartupToFile* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyStartupToFile_Set_MIReturn(
    MSFT_SwitchService_CopyStartupToFile* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->MIReturn)->value = x;
    ((MI_Uint32Field*)&self->MIReturn)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyStartupToFile_Clear_MIReturn(
    MSFT_SwitchService_CopyStartupToFile* self)
{
    memset((void*)&self->MIReturn, 0, sizeof(self->MIReturn));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyStartupToFile_Set_FileURI(
    MSFT_SwitchService_CopyStartupToFile* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyStartupToFile_SetPtr_FileURI(
    MSFT_SwitchService_CopyStartupToFile* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyStartupToFile_Clear_FileURI(
    MSFT_SwitchService_CopyStartupToFile* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        1);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyStartupToFile_Set_Job(
    MSFT_SwitchService_CopyStartupToFile* self,
    const CIM_ConcreteJob* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyStartupToFile_SetPtr_Job(
    MSFT_SwitchService_CopyStartupToFile* self,
    const CIM_ConcreteJob* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyStartupToFile_Clear_Job(
    MSFT_SwitchService_CopyStartupToFile* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        2);
}

/*
**==============================================================================
**
** MSFT_SwitchService.CopyFileToCurrent()
**
**==============================================================================
*/

typedef struct _MSFT_SwitchService_CopyFileToCurrent
{
    MI_Instance __instance;
    /*OUT*/ MI_ConstUint32Field MIReturn;
MI_ConstStringField FileURI;
    /*OUT*/ CIM_ConcreteJob_ConstRef Job;
}
MSFT_SwitchService_CopyFileToCurrent;

MI_EXTERN_C MI_CONST MI_MethodDecl MSFT_SwitchService_CopyFileToCurrent_rtti;

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyFileToCurrent_Construct(
    MSFT_SwitchService_CopyFileToCurrent* self,
    MI_Context* context)
{
    return MI_ConstructParameters(context, &MSFT_SwitchService_CopyFileToCurrent_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyFileToCurrent_Clone(
    const MSFT_SwitchService_CopyFileToCurrent* self,
    MSFT_SwitchService_CopyFileToCurrent** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyFileToCurrent_Destruct(
    MSFT_SwitchService_CopyFileToCurrent* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyFileToCurrent_Delete(
    MSFT_SwitchService_CopyFileToCurrent* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyFileToCurrent_Post(
    const MSFT_SwitchService_CopyFileToCurrent* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyFileToCurrent_Set_MIReturn(
    MSFT_SwitchService_CopyFileToCurrent* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->MIReturn)->value = x;
    ((MI_Uint32Field*)&self->MIReturn)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyFileToCurrent_Clear_MIReturn(
    MSFT_SwitchService_CopyFileToCurrent* self)
{
    memset((void*)&self->MIReturn, 0, sizeof(self->MIReturn));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyFileToCurrent_Set_FileURI(
    MSFT_SwitchService_CopyFileToCurrent* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyFileToCurrent_SetPtr_FileURI(
    MSFT_SwitchService_CopyFileToCurrent* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyFileToCurrent_Clear_FileURI(
    MSFT_SwitchService_CopyFileToCurrent* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        1);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyFileToCurrent_Set_Job(
    MSFT_SwitchService_CopyFileToCurrent* self,
    const CIM_ConcreteJob* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyFileToCurrent_SetPtr_Job(
    MSFT_SwitchService_CopyFileToCurrent* self,
    const CIM_ConcreteJob* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyFileToCurrent_Clear_Job(
    MSFT_SwitchService_CopyFileToCurrent* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        2);
}

/*
**==============================================================================
**
** MSFT_SwitchService.CopyFileToStartup()
**
**==============================================================================
*/

typedef struct _MSFT_SwitchService_CopyFileToStartup
{
    MI_Instance __instance;
    /*OUT*/ MI_ConstUint32Field MIReturn;
MI_ConstStringField FileURI;
    /*OUT*/ CIM_ConcreteJob_ConstRef Job;
}
MSFT_SwitchService_CopyFileToStartup;

MI_EXTERN_C MI_CONST MI_MethodDecl MSFT_SwitchService_CopyFileToStartup_rtti;

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyFileToStartup_Construct(
    MSFT_SwitchService_CopyFileToStartup* self,
    MI_Context* context)
{
    return MI_ConstructParameters(context, &MSFT_SwitchService_CopyFileToStartup_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyFileToStartup_Clone(
    const MSFT_SwitchService_CopyFileToStartup* self,
    MSFT_SwitchService_CopyFileToStartup** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyFileToStartup_Destruct(
    MSFT_SwitchService_CopyFileToStartup* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyFileToStartup_Delete(
    MSFT_SwitchService_CopyFileToStartup* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyFileToStartup_Post(
    const MSFT_SwitchService_CopyFileToStartup* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyFileToStartup_Set_MIReturn(
    MSFT_SwitchService_CopyFileToStartup* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->MIReturn)->value = x;
    ((MI_Uint32Field*)&self->MIReturn)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyFileToStartup_Clear_MIReturn(
    MSFT_SwitchService_CopyFileToStartup* self)
{
    memset((void*)&self->MIReturn, 0, sizeof(self->MIReturn));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyFileToStartup_Set_FileURI(
    MSFT_SwitchService_CopyFileToStartup* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyFileToStartup_SetPtr_FileURI(
    MSFT_SwitchService_CopyFileToStartup* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyFileToStartup_Clear_FileURI(
    MSFT_SwitchService_CopyFileToStartup* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        1);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyFileToStartup_Set_Job(
    MSFT_SwitchService_CopyFileToStartup* self,
    const CIM_ConcreteJob* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyFileToStartup_SetPtr_Job(
    MSFT_SwitchService_CopyFileToStartup* self,
    const CIM_ConcreteJob* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CopyFileToStartup_Clear_Job(
    MSFT_SwitchService_CopyFileToStartup* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        2);
}

/*
**==============================================================================
**
** MSFT_SwitchService.ClearCurrent()
**
**==============================================================================
*/

typedef struct _MSFT_SwitchService_ClearCurrent
{
    MI_Instance __instance;
    /*OUT*/ MI_ConstUint32Field MIReturn;
    /*OUT*/ CIM_ConcreteJob_ConstRef Job;
}
MSFT_SwitchService_ClearCurrent;

MI_EXTERN_C MI_CONST MI_MethodDecl MSFT_SwitchService_ClearCurrent_rtti;

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ClearCurrent_Construct(
    MSFT_SwitchService_ClearCurrent* self,
    MI_Context* context)
{
    return MI_ConstructParameters(context, &MSFT_SwitchService_ClearCurrent_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ClearCurrent_Clone(
    const MSFT_SwitchService_ClearCurrent* self,
    MSFT_SwitchService_ClearCurrent** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ClearCurrent_Destruct(
    MSFT_SwitchService_ClearCurrent* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ClearCurrent_Delete(
    MSFT_SwitchService_ClearCurrent* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ClearCurrent_Post(
    const MSFT_SwitchService_ClearCurrent* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ClearCurrent_Set_MIReturn(
    MSFT_SwitchService_ClearCurrent* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->MIReturn)->value = x;
    ((MI_Uint32Field*)&self->MIReturn)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ClearCurrent_Clear_MIReturn(
    MSFT_SwitchService_ClearCurrent* self)
{
    memset((void*)&self->MIReturn, 0, sizeof(self->MIReturn));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ClearCurrent_Set_Job(
    MSFT_SwitchService_ClearCurrent* self,
    const CIM_ConcreteJob* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ClearCurrent_SetPtr_Job(
    MSFT_SwitchService_ClearCurrent* self,
    const CIM_ConcreteJob* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ClearCurrent_Clear_Job(
    MSFT_SwitchService_ClearCurrent* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        1);
}

/*
**==============================================================================
**
** MSFT_SwitchService.ClearStartup()
**
**==============================================================================
*/

typedef struct _MSFT_SwitchService_ClearStartup
{
    MI_Instance __instance;
    /*OUT*/ MI_ConstUint32Field MIReturn;
    /*OUT*/ CIM_ConcreteJob_ConstRef Job;
}
MSFT_SwitchService_ClearStartup;

MI_EXTERN_C MI_CONST MI_MethodDecl MSFT_SwitchService_ClearStartup_rtti;

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ClearStartup_Construct(
    MSFT_SwitchService_ClearStartup* self,
    MI_Context* context)
{
    return MI_ConstructParameters(context, &MSFT_SwitchService_ClearStartup_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ClearStartup_Clone(
    const MSFT_SwitchService_ClearStartup* self,
    MSFT_SwitchService_ClearStartup** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ClearStartup_Destruct(
    MSFT_SwitchService_ClearStartup* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ClearStartup_Delete(
    MSFT_SwitchService_ClearStartup* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ClearStartup_Post(
    const MSFT_SwitchService_ClearStartup* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ClearStartup_Set_MIReturn(
    MSFT_SwitchService_ClearStartup* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->MIReturn)->value = x;
    ((MI_Uint32Field*)&self->MIReturn)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ClearStartup_Clear_MIReturn(
    MSFT_SwitchService_ClearStartup* self)
{
    memset((void*)&self->MIReturn, 0, sizeof(self->MIReturn));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ClearStartup_Set_Job(
    MSFT_SwitchService_ClearStartup* self,
    const CIM_ConcreteJob* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ClearStartup_SetPtr_Job(
    MSFT_SwitchService_ClearStartup* self,
    const CIM_ConcreteJob* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ClearStartup_Clear_Job(
    MSFT_SwitchService_ClearStartup* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        1);
}

/*
**==============================================================================
**
** MSFT_SwitchService.DeleteFile()
**
**==============================================================================
*/

typedef struct _MSFT_SwitchService_DeleteFile
{
    MI_Instance __instance;
    /*OUT*/ MI_ConstUint32Field MIReturn;
MI_ConstStringField FileURI;
    /*OUT*/ CIM_ConcreteJob_ConstRef Job;
}
MSFT_SwitchService_DeleteFile;

MI_EXTERN_C MI_CONST MI_MethodDecl MSFT_SwitchService_DeleteFile_rtti;

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_DeleteFile_Construct(
    MSFT_SwitchService_DeleteFile* self,
    MI_Context* context)
{
    return MI_ConstructParameters(context, &MSFT_SwitchService_DeleteFile_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_DeleteFile_Clone(
    const MSFT_SwitchService_DeleteFile* self,
    MSFT_SwitchService_DeleteFile** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_DeleteFile_Destruct(
    MSFT_SwitchService_DeleteFile* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_DeleteFile_Delete(
    MSFT_SwitchService_DeleteFile* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_DeleteFile_Post(
    const MSFT_SwitchService_DeleteFile* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_DeleteFile_Set_MIReturn(
    MSFT_SwitchService_DeleteFile* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->MIReturn)->value = x;
    ((MI_Uint32Field*)&self->MIReturn)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_DeleteFile_Clear_MIReturn(
    MSFT_SwitchService_DeleteFile* self)
{
    memset((void*)&self->MIReturn, 0, sizeof(self->MIReturn));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_DeleteFile_Set_FileURI(
    MSFT_SwitchService_DeleteFile* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_DeleteFile_SetPtr_FileURI(
    MSFT_SwitchService_DeleteFile* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_DeleteFile_Clear_FileURI(
    MSFT_SwitchService_DeleteFile* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        1);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_DeleteFile_Set_Job(
    MSFT_SwitchService_DeleteFile* self,
    const CIM_ConcreteJob* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_DeleteFile_SetPtr_Job(
    MSFT_SwitchService_DeleteFile* self,
    const CIM_ConcreteJob* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_DeleteFile_Clear_Job(
    MSFT_SwitchService_DeleteFile* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        2);
}

/*
**==============================================================================
**
** MSFT_SwitchService.CreateRemoteServerGroup()
**
**==============================================================================
*/

typedef struct _MSFT_SwitchService_CreateRemoteServerGroup
{
    MI_Instance __instance;
    /*OUT*/ MI_ConstUint32Field MIReturn;
MSFT_Feature_ConstRef AssociatedFeature;
MSFT_RemoteServerGroup_ConstRef RemoteServerGroup;
    /*OUT*/ MSFT_RemoteServerGroup_ConstRef ResultingServerGroup;
    /*OUT*/ CIM_ConcreteJob_ConstRef Job;
}
MSFT_SwitchService_CreateRemoteServerGroup;

MI_EXTERN_C MI_CONST MI_MethodDecl MSFT_SwitchService_CreateRemoteServerGroup_rtti;

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CreateRemoteServerGroup_Construct(
    MSFT_SwitchService_CreateRemoteServerGroup* self,
    MI_Context* context)
{
    return MI_ConstructParameters(context, &MSFT_SwitchService_CreateRemoteServerGroup_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CreateRemoteServerGroup_Clone(
    const MSFT_SwitchService_CreateRemoteServerGroup* self,
    MSFT_SwitchService_CreateRemoteServerGroup** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CreateRemoteServerGroup_Destruct(
    MSFT_SwitchService_CreateRemoteServerGroup* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CreateRemoteServerGroup_Delete(
    MSFT_SwitchService_CreateRemoteServerGroup* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CreateRemoteServerGroup_Post(
    const MSFT_SwitchService_CreateRemoteServerGroup* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CreateRemoteServerGroup_Set_MIReturn(
    MSFT_SwitchService_CreateRemoteServerGroup* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->MIReturn)->value = x;
    ((MI_Uint32Field*)&self->MIReturn)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CreateRemoteServerGroup_Clear_MIReturn(
    MSFT_SwitchService_CreateRemoteServerGroup* self)
{
    memset((void*)&self->MIReturn, 0, sizeof(self->MIReturn));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CreateRemoteServerGroup_Set_AssociatedFeature(
    MSFT_SwitchService_CreateRemoteServerGroup* self,
    const MSFT_Feature* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CreateRemoteServerGroup_SetPtr_AssociatedFeature(
    MSFT_SwitchService_CreateRemoteServerGroup* self,
    const MSFT_Feature* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CreateRemoteServerGroup_Clear_AssociatedFeature(
    MSFT_SwitchService_CreateRemoteServerGroup* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        1);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CreateRemoteServerGroup_Set_RemoteServerGroup(
    MSFT_SwitchService_CreateRemoteServerGroup* self,
    const MSFT_RemoteServerGroup* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&x,
        MI_INSTANCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CreateRemoteServerGroup_SetPtr_RemoteServerGroup(
    MSFT_SwitchService_CreateRemoteServerGroup* self,
    const MSFT_RemoteServerGroup* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&x,
        MI_INSTANCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CreateRemoteServerGroup_Clear_RemoteServerGroup(
    MSFT_SwitchService_CreateRemoteServerGroup* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        2);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CreateRemoteServerGroup_Set_ResultingServerGroup(
    MSFT_SwitchService_CreateRemoteServerGroup* self,
    const MSFT_RemoteServerGroup* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CreateRemoteServerGroup_SetPtr_ResultingServerGroup(
    MSFT_SwitchService_CreateRemoteServerGroup* self,
    const MSFT_RemoteServerGroup* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CreateRemoteServerGroup_Clear_ResultingServerGroup(
    MSFT_SwitchService_CreateRemoteServerGroup* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        3);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CreateRemoteServerGroup_Set_Job(
    MSFT_SwitchService_CreateRemoteServerGroup* self,
    const CIM_ConcreteJob* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        4,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CreateRemoteServerGroup_SetPtr_Job(
    MSFT_SwitchService_CreateRemoteServerGroup* self,
    const CIM_ConcreteJob* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        4,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_CreateRemoteServerGroup_Clear_Job(
    MSFT_SwitchService_CreateRemoteServerGroup* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        4);
}

/*
**==============================================================================
**
** MSFT_SwitchService.RemoveRemoteServerGroup()
**
**==============================================================================
*/

typedef struct _MSFT_SwitchService_RemoveRemoteServerGroup
{
    MI_Instance __instance;
    /*OUT*/ MI_ConstUint32Field MIReturn;
MSFT_Feature_ConstRef AssociatedFeature;
MSFT_RemoteServerGroup_ConstRef RemoteServerGroup;
    /*OUT*/ CIM_ConcreteJob_ConstRef Job;
}
MSFT_SwitchService_RemoveRemoteServerGroup;

MI_EXTERN_C MI_CONST MI_MethodDecl MSFT_SwitchService_RemoveRemoteServerGroup_rtti;

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RemoveRemoteServerGroup_Construct(
    MSFT_SwitchService_RemoveRemoteServerGroup* self,
    MI_Context* context)
{
    return MI_ConstructParameters(context, &MSFT_SwitchService_RemoveRemoteServerGroup_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RemoveRemoteServerGroup_Clone(
    const MSFT_SwitchService_RemoveRemoteServerGroup* self,
    MSFT_SwitchService_RemoveRemoteServerGroup** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RemoveRemoteServerGroup_Destruct(
    MSFT_SwitchService_RemoveRemoteServerGroup* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RemoveRemoteServerGroup_Delete(
    MSFT_SwitchService_RemoveRemoteServerGroup* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RemoveRemoteServerGroup_Post(
    const MSFT_SwitchService_RemoveRemoteServerGroup* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RemoveRemoteServerGroup_Set_MIReturn(
    MSFT_SwitchService_RemoveRemoteServerGroup* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->MIReturn)->value = x;
    ((MI_Uint32Field*)&self->MIReturn)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RemoveRemoteServerGroup_Clear_MIReturn(
    MSFT_SwitchService_RemoveRemoteServerGroup* self)
{
    memset((void*)&self->MIReturn, 0, sizeof(self->MIReturn));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RemoveRemoteServerGroup_Set_AssociatedFeature(
    MSFT_SwitchService_RemoveRemoteServerGroup* self,
    const MSFT_Feature* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RemoveRemoteServerGroup_SetPtr_AssociatedFeature(
    MSFT_SwitchService_RemoveRemoteServerGroup* self,
    const MSFT_Feature* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RemoveRemoteServerGroup_Clear_AssociatedFeature(
    MSFT_SwitchService_RemoveRemoteServerGroup* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        1);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RemoveRemoteServerGroup_Set_RemoteServerGroup(
    MSFT_SwitchService_RemoveRemoteServerGroup* self,
    const MSFT_RemoteServerGroup* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RemoveRemoteServerGroup_SetPtr_RemoteServerGroup(
    MSFT_SwitchService_RemoveRemoteServerGroup* self,
    const MSFT_RemoteServerGroup* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RemoveRemoteServerGroup_Clear_RemoteServerGroup(
    MSFT_SwitchService_RemoveRemoteServerGroup* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        2);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RemoveRemoteServerGroup_Set_Job(
    MSFT_SwitchService_RemoveRemoteServerGroup* self,
    const CIM_ConcreteJob* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RemoveRemoteServerGroup_SetPtr_Job(
    MSFT_SwitchService_RemoveRemoteServerGroup* self,
    const CIM_ConcreteJob* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_RemoveRemoteServerGroup_Clear_Job(
    MSFT_SwitchService_RemoveRemoteServerGroup* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        3);
}

/*
**==============================================================================
**
** MSFT_SwitchService.ConfigureSeviceAccessPoint()
**
**==============================================================================
*/

typedef struct _MSFT_SwitchService_ConfigureSeviceAccessPoint
{
    MI_Instance __instance;
    /*OUT*/ MI_ConstUint32Field MIReturn;
CIM_System_ConstRef TargetSystem;
CIM_Collection_ConstRef Group;
CIM_ServiceAccessPoint_ConstRef ServiceAccessPoint;
    /*OUT*/ CIM_ServiceAccessPoint_ConstRef ResultingServiceAccessPoint;
    /*OUT*/ CIM_ConcreteJob_ConstRef Job;
}
MSFT_SwitchService_ConfigureSeviceAccessPoint;

MI_EXTERN_C MI_CONST MI_MethodDecl MSFT_SwitchService_ConfigureSeviceAccessPoint_rtti;

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ConfigureSeviceAccessPoint_Construct(
    MSFT_SwitchService_ConfigureSeviceAccessPoint* self,
    MI_Context* context)
{
    return MI_ConstructParameters(context, &MSFT_SwitchService_ConfigureSeviceAccessPoint_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ConfigureSeviceAccessPoint_Clone(
    const MSFT_SwitchService_ConfigureSeviceAccessPoint* self,
    MSFT_SwitchService_ConfigureSeviceAccessPoint** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ConfigureSeviceAccessPoint_Destruct(
    MSFT_SwitchService_ConfigureSeviceAccessPoint* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ConfigureSeviceAccessPoint_Delete(
    MSFT_SwitchService_ConfigureSeviceAccessPoint* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ConfigureSeviceAccessPoint_Post(
    const MSFT_SwitchService_ConfigureSeviceAccessPoint* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ConfigureSeviceAccessPoint_Set_MIReturn(
    MSFT_SwitchService_ConfigureSeviceAccessPoint* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->MIReturn)->value = x;
    ((MI_Uint32Field*)&self->MIReturn)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ConfigureSeviceAccessPoint_Clear_MIReturn(
    MSFT_SwitchService_ConfigureSeviceAccessPoint* self)
{
    memset((void*)&self->MIReturn, 0, sizeof(self->MIReturn));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ConfigureSeviceAccessPoint_Set_TargetSystem(
    MSFT_SwitchService_ConfigureSeviceAccessPoint* self,
    const CIM_System* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ConfigureSeviceAccessPoint_SetPtr_TargetSystem(
    MSFT_SwitchService_ConfigureSeviceAccessPoint* self,
    const CIM_System* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ConfigureSeviceAccessPoint_Clear_TargetSystem(
    MSFT_SwitchService_ConfigureSeviceAccessPoint* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        1);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ConfigureSeviceAccessPoint_Set_Group(
    MSFT_SwitchService_ConfigureSeviceAccessPoint* self,
    const CIM_Collection* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ConfigureSeviceAccessPoint_SetPtr_Group(
    MSFT_SwitchService_ConfigureSeviceAccessPoint* self,
    const CIM_Collection* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ConfigureSeviceAccessPoint_Clear_Group(
    MSFT_SwitchService_ConfigureSeviceAccessPoint* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        2);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ConfigureSeviceAccessPoint_Set_ServiceAccessPoint(
    MSFT_SwitchService_ConfigureSeviceAccessPoint* self,
    const CIM_ServiceAccessPoint* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&x,
        MI_INSTANCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ConfigureSeviceAccessPoint_SetPtr_ServiceAccessPoint(
    MSFT_SwitchService_ConfigureSeviceAccessPoint* self,
    const CIM_ServiceAccessPoint* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&x,
        MI_INSTANCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ConfigureSeviceAccessPoint_Clear_ServiceAccessPoint(
    MSFT_SwitchService_ConfigureSeviceAccessPoint* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        3);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ConfigureSeviceAccessPoint_Set_ResultingServiceAccessPoint(
    MSFT_SwitchService_ConfigureSeviceAccessPoint* self,
    const CIM_ServiceAccessPoint* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        4,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ConfigureSeviceAccessPoint_SetPtr_ResultingServiceAccessPoint(
    MSFT_SwitchService_ConfigureSeviceAccessPoint* self,
    const CIM_ServiceAccessPoint* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        4,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ConfigureSeviceAccessPoint_Clear_ResultingServiceAccessPoint(
    MSFT_SwitchService_ConfigureSeviceAccessPoint* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        4);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ConfigureSeviceAccessPoint_Set_Job(
    MSFT_SwitchService_ConfigureSeviceAccessPoint* self,
    const CIM_ConcreteJob* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        5,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ConfigureSeviceAccessPoint_SetPtr_Job(
    MSFT_SwitchService_ConfigureSeviceAccessPoint* self,
    const CIM_ConcreteJob* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        5,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ConfigureSeviceAccessPoint_Clear_Job(
    MSFT_SwitchService_ConfigureSeviceAccessPoint* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        5);
}

/*
**==============================================================================
**
** MSFT_SwitchService.ModifySeviceAccessPoint()
**
**==============================================================================
*/

typedef struct _MSFT_SwitchService_ModifySeviceAccessPoint
{
    MI_Instance __instance;
    /*OUT*/ MI_ConstUint32Field MIReturn;
CIM_System_ConstRef TargetSystem;
CIM_Collection_ConstRef Group;
CIM_ServiceAccessPoint_ConstRef ServiceAccessPoint;
    /*OUT*/ CIM_ConcreteJob_ConstRef Job;
}
MSFT_SwitchService_ModifySeviceAccessPoint;

MI_EXTERN_C MI_CONST MI_MethodDecl MSFT_SwitchService_ModifySeviceAccessPoint_rtti;

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ModifySeviceAccessPoint_Construct(
    MSFT_SwitchService_ModifySeviceAccessPoint* self,
    MI_Context* context)
{
    return MI_ConstructParameters(context, &MSFT_SwitchService_ModifySeviceAccessPoint_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ModifySeviceAccessPoint_Clone(
    const MSFT_SwitchService_ModifySeviceAccessPoint* self,
    MSFT_SwitchService_ModifySeviceAccessPoint** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ModifySeviceAccessPoint_Destruct(
    MSFT_SwitchService_ModifySeviceAccessPoint* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ModifySeviceAccessPoint_Delete(
    MSFT_SwitchService_ModifySeviceAccessPoint* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ModifySeviceAccessPoint_Post(
    const MSFT_SwitchService_ModifySeviceAccessPoint* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ModifySeviceAccessPoint_Set_MIReturn(
    MSFT_SwitchService_ModifySeviceAccessPoint* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->MIReturn)->value = x;
    ((MI_Uint32Field*)&self->MIReturn)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ModifySeviceAccessPoint_Clear_MIReturn(
    MSFT_SwitchService_ModifySeviceAccessPoint* self)
{
    memset((void*)&self->MIReturn, 0, sizeof(self->MIReturn));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ModifySeviceAccessPoint_Set_TargetSystem(
    MSFT_SwitchService_ModifySeviceAccessPoint* self,
    const CIM_System* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ModifySeviceAccessPoint_SetPtr_TargetSystem(
    MSFT_SwitchService_ModifySeviceAccessPoint* self,
    const CIM_System* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ModifySeviceAccessPoint_Clear_TargetSystem(
    MSFT_SwitchService_ModifySeviceAccessPoint* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        1);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ModifySeviceAccessPoint_Set_Group(
    MSFT_SwitchService_ModifySeviceAccessPoint* self,
    const CIM_Collection* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ModifySeviceAccessPoint_SetPtr_Group(
    MSFT_SwitchService_ModifySeviceAccessPoint* self,
    const CIM_Collection* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ModifySeviceAccessPoint_Clear_Group(
    MSFT_SwitchService_ModifySeviceAccessPoint* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        2);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ModifySeviceAccessPoint_Set_ServiceAccessPoint(
    MSFT_SwitchService_ModifySeviceAccessPoint* self,
    const CIM_ServiceAccessPoint* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ModifySeviceAccessPoint_SetPtr_ServiceAccessPoint(
    MSFT_SwitchService_ModifySeviceAccessPoint* self,
    const CIM_ServiceAccessPoint* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ModifySeviceAccessPoint_Clear_ServiceAccessPoint(
    MSFT_SwitchService_ModifySeviceAccessPoint* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        3);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ModifySeviceAccessPoint_Set_Job(
    MSFT_SwitchService_ModifySeviceAccessPoint* self,
    const CIM_ConcreteJob* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        4,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ModifySeviceAccessPoint_SetPtr_Job(
    MSFT_SwitchService_ModifySeviceAccessPoint* self,
    const CIM_ConcreteJob* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        4,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ModifySeviceAccessPoint_Clear_Job(
    MSFT_SwitchService_ModifySeviceAccessPoint* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        4);
}

/*
**==============================================================================
**
** MSFT_SwitchService.DeleteSeviceAccessPoint()
**
**==============================================================================
*/

typedef struct _MSFT_SwitchService_DeleteSeviceAccessPoint
{
    MI_Instance __instance;
    /*OUT*/ MI_ConstUint32Field MIReturn;
CIM_System_ConstRef TargetSystem;
CIM_Collection_ConstRef Group;
CIM_ServiceAccessPoint_ConstRef ServiceAccessPoint;
    /*OUT*/ CIM_ConcreteJob_ConstRef Job;
}
MSFT_SwitchService_DeleteSeviceAccessPoint;

MI_EXTERN_C MI_CONST MI_MethodDecl MSFT_SwitchService_DeleteSeviceAccessPoint_rtti;

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_DeleteSeviceAccessPoint_Construct(
    MSFT_SwitchService_DeleteSeviceAccessPoint* self,
    MI_Context* context)
{
    return MI_ConstructParameters(context, &MSFT_SwitchService_DeleteSeviceAccessPoint_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_DeleteSeviceAccessPoint_Clone(
    const MSFT_SwitchService_DeleteSeviceAccessPoint* self,
    MSFT_SwitchService_DeleteSeviceAccessPoint** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_DeleteSeviceAccessPoint_Destruct(
    MSFT_SwitchService_DeleteSeviceAccessPoint* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_DeleteSeviceAccessPoint_Delete(
    MSFT_SwitchService_DeleteSeviceAccessPoint* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_DeleteSeviceAccessPoint_Post(
    const MSFT_SwitchService_DeleteSeviceAccessPoint* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_DeleteSeviceAccessPoint_Set_MIReturn(
    MSFT_SwitchService_DeleteSeviceAccessPoint* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->MIReturn)->value = x;
    ((MI_Uint32Field*)&self->MIReturn)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_DeleteSeviceAccessPoint_Clear_MIReturn(
    MSFT_SwitchService_DeleteSeviceAccessPoint* self)
{
    memset((void*)&self->MIReturn, 0, sizeof(self->MIReturn));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_DeleteSeviceAccessPoint_Set_TargetSystem(
    MSFT_SwitchService_DeleteSeviceAccessPoint* self,
    const CIM_System* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_DeleteSeviceAccessPoint_SetPtr_TargetSystem(
    MSFT_SwitchService_DeleteSeviceAccessPoint* self,
    const CIM_System* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_DeleteSeviceAccessPoint_Clear_TargetSystem(
    MSFT_SwitchService_DeleteSeviceAccessPoint* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        1);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_DeleteSeviceAccessPoint_Set_Group(
    MSFT_SwitchService_DeleteSeviceAccessPoint* self,
    const CIM_Collection* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_DeleteSeviceAccessPoint_SetPtr_Group(
    MSFT_SwitchService_DeleteSeviceAccessPoint* self,
    const CIM_Collection* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_DeleteSeviceAccessPoint_Clear_Group(
    MSFT_SwitchService_DeleteSeviceAccessPoint* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        2);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_DeleteSeviceAccessPoint_Set_ServiceAccessPoint(
    MSFT_SwitchService_DeleteSeviceAccessPoint* self,
    const CIM_ServiceAccessPoint* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_DeleteSeviceAccessPoint_SetPtr_ServiceAccessPoint(
    MSFT_SwitchService_DeleteSeviceAccessPoint* self,
    const CIM_ServiceAccessPoint* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_DeleteSeviceAccessPoint_Clear_ServiceAccessPoint(
    MSFT_SwitchService_DeleteSeviceAccessPoint* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        3);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_DeleteSeviceAccessPoint_Set_Job(
    MSFT_SwitchService_DeleteSeviceAccessPoint* self,
    const CIM_ConcreteJob* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        4,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_DeleteSeviceAccessPoint_SetPtr_Job(
    MSFT_SwitchService_DeleteSeviceAccessPoint* self,
    const CIM_ConcreteJob* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        4,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_DeleteSeviceAccessPoint_Clear_Job(
    MSFT_SwitchService_DeleteSeviceAccessPoint* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        4);
}

/*
**==============================================================================
**
** MSFT_SwitchService.ApplyPortProfile()
**
**==============================================================================
*/

typedef struct _MSFT_SwitchService_ApplyPortProfile
{
    MI_Instance __instance;
    /*OUT*/ MI_ConstUint32Field MIReturn;
CIM_EthernetPort_ConstRef TargetInterface;
CIM_EthernetPortAllocationSettingData_ConstRef PortProfile;
    /*OUT*/ CIM_ConcreteJob_ConstRef Job;
}
MSFT_SwitchService_ApplyPortProfile;

MI_EXTERN_C MI_CONST MI_MethodDecl MSFT_SwitchService_ApplyPortProfile_rtti;

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ApplyPortProfile_Construct(
    MSFT_SwitchService_ApplyPortProfile* self,
    MI_Context* context)
{
    return MI_ConstructParameters(context, &MSFT_SwitchService_ApplyPortProfile_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ApplyPortProfile_Clone(
    const MSFT_SwitchService_ApplyPortProfile* self,
    MSFT_SwitchService_ApplyPortProfile** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ApplyPortProfile_Destruct(
    MSFT_SwitchService_ApplyPortProfile* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ApplyPortProfile_Delete(
    MSFT_SwitchService_ApplyPortProfile* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ApplyPortProfile_Post(
    const MSFT_SwitchService_ApplyPortProfile* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ApplyPortProfile_Set_MIReturn(
    MSFT_SwitchService_ApplyPortProfile* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->MIReturn)->value = x;
    ((MI_Uint32Field*)&self->MIReturn)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ApplyPortProfile_Clear_MIReturn(
    MSFT_SwitchService_ApplyPortProfile* self)
{
    memset((void*)&self->MIReturn, 0, sizeof(self->MIReturn));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ApplyPortProfile_Set_TargetInterface(
    MSFT_SwitchService_ApplyPortProfile* self,
    const CIM_EthernetPort* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ApplyPortProfile_SetPtr_TargetInterface(
    MSFT_SwitchService_ApplyPortProfile* self,
    const CIM_EthernetPort* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ApplyPortProfile_Clear_TargetInterface(
    MSFT_SwitchService_ApplyPortProfile* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        1);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ApplyPortProfile_Set_PortProfile(
    MSFT_SwitchService_ApplyPortProfile* self,
    const CIM_EthernetPortAllocationSettingData* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&x,
        MI_INSTANCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ApplyPortProfile_SetPtr_PortProfile(
    MSFT_SwitchService_ApplyPortProfile* self,
    const CIM_EthernetPortAllocationSettingData* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&x,
        MI_INSTANCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ApplyPortProfile_Clear_PortProfile(
    MSFT_SwitchService_ApplyPortProfile* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        2);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ApplyPortProfile_Set_Job(
    MSFT_SwitchService_ApplyPortProfile* self,
    const CIM_ConcreteJob* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ApplyPortProfile_SetPtr_Job(
    MSFT_SwitchService_ApplyPortProfile* self,
    const CIM_ConcreteJob* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ApplyPortProfile_Clear_Job(
    MSFT_SwitchService_ApplyPortProfile* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        3);
}

/*
**==============================================================================
**
** MSFT_SwitchService.ReloadSwitch()
**
**==============================================================================
*/

typedef struct _MSFT_SwitchService_ReloadSwitch
{
    MI_Instance __instance;
    /*OUT*/ MI_ConstUint32Field MIReturn;
CIM_ComputerSystem_ConstRef TargetedSwitch;
    /*OUT*/ CIM_ConcreteJob_ConstRef Job;
}
MSFT_SwitchService_ReloadSwitch;

MI_EXTERN_C MI_CONST MI_MethodDecl MSFT_SwitchService_ReloadSwitch_rtti;

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ReloadSwitch_Construct(
    MSFT_SwitchService_ReloadSwitch* self,
    MI_Context* context)
{
    return MI_ConstructParameters(context, &MSFT_SwitchService_ReloadSwitch_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ReloadSwitch_Clone(
    const MSFT_SwitchService_ReloadSwitch* self,
    MSFT_SwitchService_ReloadSwitch** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ReloadSwitch_Destruct(
    MSFT_SwitchService_ReloadSwitch* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ReloadSwitch_Delete(
    MSFT_SwitchService_ReloadSwitch* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ReloadSwitch_Post(
    const MSFT_SwitchService_ReloadSwitch* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ReloadSwitch_Set_MIReturn(
    MSFT_SwitchService_ReloadSwitch* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->MIReturn)->value = x;
    ((MI_Uint32Field*)&self->MIReturn)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ReloadSwitch_Clear_MIReturn(
    MSFT_SwitchService_ReloadSwitch* self)
{
    memset((void*)&self->MIReturn, 0, sizeof(self->MIReturn));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ReloadSwitch_Set_TargetedSwitch(
    MSFT_SwitchService_ReloadSwitch* self,
    const CIM_ComputerSystem* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ReloadSwitch_SetPtr_TargetedSwitch(
    MSFT_SwitchService_ReloadSwitch* self,
    const CIM_ComputerSystem* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ReloadSwitch_Clear_TargetedSwitch(
    MSFT_SwitchService_ReloadSwitch* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        1);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ReloadSwitch_Set_Job(
    MSFT_SwitchService_ReloadSwitch* self,
    const CIM_ConcreteJob* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ReloadSwitch_SetPtr_Job(
    MSFT_SwitchService_ReloadSwitch* self,
    const CIM_ConcreteJob* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ReloadSwitch_Clear_Job(
    MSFT_SwitchService_ReloadSwitch* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        2);
}

/*
**==============================================================================
**
** MSFT_SwitchService.SetMACAddressAgingTime()
**
**==============================================================================
*/

typedef struct _MSFT_SwitchService_SetMACAddressAgingTime
{
    MI_Instance __instance;
    /*OUT*/ MI_ConstUint32Field MIReturn;
MI_ConstUint32Field AgingTime;
MSFT_NetworkVLAN_ConstRef VLAN;
    /*OUT*/ CIM_ConcreteJob_ConstRef Job;
}
MSFT_SwitchService_SetMACAddressAgingTime;

MI_EXTERN_C MI_CONST MI_MethodDecl MSFT_SwitchService_SetMACAddressAgingTime_rtti;

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_SetMACAddressAgingTime_Construct(
    MSFT_SwitchService_SetMACAddressAgingTime* self,
    MI_Context* context)
{
    return MI_ConstructParameters(context, &MSFT_SwitchService_SetMACAddressAgingTime_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_SetMACAddressAgingTime_Clone(
    const MSFT_SwitchService_SetMACAddressAgingTime* self,
    MSFT_SwitchService_SetMACAddressAgingTime** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_SetMACAddressAgingTime_Destruct(
    MSFT_SwitchService_SetMACAddressAgingTime* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_SetMACAddressAgingTime_Delete(
    MSFT_SwitchService_SetMACAddressAgingTime* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_SetMACAddressAgingTime_Post(
    const MSFT_SwitchService_SetMACAddressAgingTime* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_SetMACAddressAgingTime_Set_MIReturn(
    MSFT_SwitchService_SetMACAddressAgingTime* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->MIReturn)->value = x;
    ((MI_Uint32Field*)&self->MIReturn)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_SetMACAddressAgingTime_Clear_MIReturn(
    MSFT_SwitchService_SetMACAddressAgingTime* self)
{
    memset((void*)&self->MIReturn, 0, sizeof(self->MIReturn));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_SetMACAddressAgingTime_Set_AgingTime(
    MSFT_SwitchService_SetMACAddressAgingTime* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->AgingTime)->value = x;
    ((MI_Uint32Field*)&self->AgingTime)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_SetMACAddressAgingTime_Clear_AgingTime(
    MSFT_SwitchService_SetMACAddressAgingTime* self)
{
    memset((void*)&self->AgingTime, 0, sizeof(self->AgingTime));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_SetMACAddressAgingTime_Set_VLAN(
    MSFT_SwitchService_SetMACAddressAgingTime* self,
    const MSFT_NetworkVLAN* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_SetMACAddressAgingTime_SetPtr_VLAN(
    MSFT_SwitchService_SetMACAddressAgingTime* self,
    const MSFT_NetworkVLAN* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_SetMACAddressAgingTime_Clear_VLAN(
    MSFT_SwitchService_SetMACAddressAgingTime* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        2);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_SetMACAddressAgingTime_Set_Job(
    MSFT_SwitchService_SetMACAddressAgingTime* self,
    const CIM_ConcreteJob* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_SetMACAddressAgingTime_SetPtr_Job(
    MSFT_SwitchService_SetMACAddressAgingTime* self,
    const CIM_ConcreteJob* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_SetMACAddressAgingTime_Clear_Job(
    MSFT_SwitchService_SetMACAddressAgingTime* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        3);
}

/*
**==============================================================================
**
** MSFT_SwitchService.AddStaticMACTableEntry()
**
**==============================================================================
*/

typedef struct _MSFT_SwitchService_AddStaticMACTableEntry
{
    MI_Instance __instance;
    /*OUT*/ MI_ConstUint32Field MIReturn;
MSFT_MACTable_ConstRef MACTable;
MSFT_MACTableEntry_ConstRef MACTableEntry;
    /*OUT*/ MSFT_MACTableEntry_ConstRef ResultingEntry;
    /*OUT*/ CIM_ConcreteJob_ConstRef Job;
}
MSFT_SwitchService_AddStaticMACTableEntry;

MI_EXTERN_C MI_CONST MI_MethodDecl MSFT_SwitchService_AddStaticMACTableEntry_rtti;

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddStaticMACTableEntry_Construct(
    MSFT_SwitchService_AddStaticMACTableEntry* self,
    MI_Context* context)
{
    return MI_ConstructParameters(context, &MSFT_SwitchService_AddStaticMACTableEntry_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddStaticMACTableEntry_Clone(
    const MSFT_SwitchService_AddStaticMACTableEntry* self,
    MSFT_SwitchService_AddStaticMACTableEntry** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddStaticMACTableEntry_Destruct(
    MSFT_SwitchService_AddStaticMACTableEntry* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddStaticMACTableEntry_Delete(
    MSFT_SwitchService_AddStaticMACTableEntry* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddStaticMACTableEntry_Post(
    const MSFT_SwitchService_AddStaticMACTableEntry* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddStaticMACTableEntry_Set_MIReturn(
    MSFT_SwitchService_AddStaticMACTableEntry* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->MIReturn)->value = x;
    ((MI_Uint32Field*)&self->MIReturn)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddStaticMACTableEntry_Clear_MIReturn(
    MSFT_SwitchService_AddStaticMACTableEntry* self)
{
    memset((void*)&self->MIReturn, 0, sizeof(self->MIReturn));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddStaticMACTableEntry_Set_MACTable(
    MSFT_SwitchService_AddStaticMACTableEntry* self,
    const MSFT_MACTable* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddStaticMACTableEntry_SetPtr_MACTable(
    MSFT_SwitchService_AddStaticMACTableEntry* self,
    const MSFT_MACTable* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddStaticMACTableEntry_Clear_MACTable(
    MSFT_SwitchService_AddStaticMACTableEntry* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        1);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddStaticMACTableEntry_Set_MACTableEntry(
    MSFT_SwitchService_AddStaticMACTableEntry* self,
    const MSFT_MACTableEntry* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&x,
        MI_INSTANCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddStaticMACTableEntry_SetPtr_MACTableEntry(
    MSFT_SwitchService_AddStaticMACTableEntry* self,
    const MSFT_MACTableEntry* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&x,
        MI_INSTANCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddStaticMACTableEntry_Clear_MACTableEntry(
    MSFT_SwitchService_AddStaticMACTableEntry* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        2);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddStaticMACTableEntry_Set_ResultingEntry(
    MSFT_SwitchService_AddStaticMACTableEntry* self,
    const MSFT_MACTableEntry* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddStaticMACTableEntry_SetPtr_ResultingEntry(
    MSFT_SwitchService_AddStaticMACTableEntry* self,
    const MSFT_MACTableEntry* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddStaticMACTableEntry_Clear_ResultingEntry(
    MSFT_SwitchService_AddStaticMACTableEntry* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        3);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddStaticMACTableEntry_Set_Job(
    MSFT_SwitchService_AddStaticMACTableEntry* self,
    const CIM_ConcreteJob* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        4,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddStaticMACTableEntry_SetPtr_Job(
    MSFT_SwitchService_AddStaticMACTableEntry* self,
    const CIM_ConcreteJob* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        4,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_AddStaticMACTableEntry_Clear_Job(
    MSFT_SwitchService_AddStaticMACTableEntry* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        4);
}

/*
**==============================================================================
**
** MSFT_SwitchService.ClearStaticMACTableEntry()
**
**==============================================================================
*/

typedef struct _MSFT_SwitchService_ClearStaticMACTableEntry
{
    MI_Instance __instance;
    /*OUT*/ MI_ConstUint32Field MIReturn;
MSFT_MACTable_ConstRef MACTable;
MSFT_MACTableEntry_ConstRef MACTableEntry;
    /*OUT*/ CIM_ConcreteJob_ConstRef Job;
}
MSFT_SwitchService_ClearStaticMACTableEntry;

MI_EXTERN_C MI_CONST MI_MethodDecl MSFT_SwitchService_ClearStaticMACTableEntry_rtti;

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ClearStaticMACTableEntry_Construct(
    MSFT_SwitchService_ClearStaticMACTableEntry* self,
    MI_Context* context)
{
    return MI_ConstructParameters(context, &MSFT_SwitchService_ClearStaticMACTableEntry_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ClearStaticMACTableEntry_Clone(
    const MSFT_SwitchService_ClearStaticMACTableEntry* self,
    MSFT_SwitchService_ClearStaticMACTableEntry** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ClearStaticMACTableEntry_Destruct(
    MSFT_SwitchService_ClearStaticMACTableEntry* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ClearStaticMACTableEntry_Delete(
    MSFT_SwitchService_ClearStaticMACTableEntry* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ClearStaticMACTableEntry_Post(
    const MSFT_SwitchService_ClearStaticMACTableEntry* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ClearStaticMACTableEntry_Set_MIReturn(
    MSFT_SwitchService_ClearStaticMACTableEntry* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->MIReturn)->value = x;
    ((MI_Uint32Field*)&self->MIReturn)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ClearStaticMACTableEntry_Clear_MIReturn(
    MSFT_SwitchService_ClearStaticMACTableEntry* self)
{
    memset((void*)&self->MIReturn, 0, sizeof(self->MIReturn));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ClearStaticMACTableEntry_Set_MACTable(
    MSFT_SwitchService_ClearStaticMACTableEntry* self,
    const MSFT_MACTable* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ClearStaticMACTableEntry_SetPtr_MACTable(
    MSFT_SwitchService_ClearStaticMACTableEntry* self,
    const MSFT_MACTable* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ClearStaticMACTableEntry_Clear_MACTable(
    MSFT_SwitchService_ClearStaticMACTableEntry* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        1);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ClearStaticMACTableEntry_Set_MACTableEntry(
    MSFT_SwitchService_ClearStaticMACTableEntry* self,
    const MSFT_MACTableEntry* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ClearStaticMACTableEntry_SetPtr_MACTableEntry(
    MSFT_SwitchService_ClearStaticMACTableEntry* self,
    const MSFT_MACTableEntry* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ClearStaticMACTableEntry_Clear_MACTableEntry(
    MSFT_SwitchService_ClearStaticMACTableEntry* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        2);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ClearStaticMACTableEntry_Set_Job(
    MSFT_SwitchService_ClearStaticMACTableEntry* self,
    const CIM_ConcreteJob* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ClearStaticMACTableEntry_SetPtr_Job(
    MSFT_SwitchService_ClearStaticMACTableEntry* self,
    const CIM_ConcreteJob* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ClearStaticMACTableEntry_Clear_Job(
    MSFT_SwitchService_ClearStaticMACTableEntry* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        3);
}

/*
**==============================================================================
**
** MSFT_SwitchService.ClearDynamicMACTableEntries()
**
**==============================================================================
*/

typedef struct _MSFT_SwitchService_ClearDynamicMACTableEntries
{
    MI_Instance __instance;
    /*OUT*/ MI_ConstUint32Field MIReturn;
MSFT_MACTable_ConstRef MACTable;
    /*OUT*/ CIM_ConcreteJob_ConstRef Job;
}
MSFT_SwitchService_ClearDynamicMACTableEntries;

MI_EXTERN_C MI_CONST MI_MethodDecl MSFT_SwitchService_ClearDynamicMACTableEntries_rtti;

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ClearDynamicMACTableEntries_Construct(
    MSFT_SwitchService_ClearDynamicMACTableEntries* self,
    MI_Context* context)
{
    return MI_ConstructParameters(context, &MSFT_SwitchService_ClearDynamicMACTableEntries_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ClearDynamicMACTableEntries_Clone(
    const MSFT_SwitchService_ClearDynamicMACTableEntries* self,
    MSFT_SwitchService_ClearDynamicMACTableEntries** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ClearDynamicMACTableEntries_Destruct(
    MSFT_SwitchService_ClearDynamicMACTableEntries* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ClearDynamicMACTableEntries_Delete(
    MSFT_SwitchService_ClearDynamicMACTableEntries* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ClearDynamicMACTableEntries_Post(
    const MSFT_SwitchService_ClearDynamicMACTableEntries* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ClearDynamicMACTableEntries_Set_MIReturn(
    MSFT_SwitchService_ClearDynamicMACTableEntries* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->MIReturn)->value = x;
    ((MI_Uint32Field*)&self->MIReturn)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ClearDynamicMACTableEntries_Clear_MIReturn(
    MSFT_SwitchService_ClearDynamicMACTableEntries* self)
{
    memset((void*)&self->MIReturn, 0, sizeof(self->MIReturn));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ClearDynamicMACTableEntries_Set_MACTable(
    MSFT_SwitchService_ClearDynamicMACTableEntries* self,
    const MSFT_MACTable* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ClearDynamicMACTableEntries_SetPtr_MACTable(
    MSFT_SwitchService_ClearDynamicMACTableEntries* self,
    const MSFT_MACTable* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ClearDynamicMACTableEntries_Clear_MACTable(
    MSFT_SwitchService_ClearDynamicMACTableEntries* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        1);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ClearDynamicMACTableEntries_Set_Job(
    MSFT_SwitchService_ClearDynamicMACTableEntries* self,
    const CIM_ConcreteJob* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ClearDynamicMACTableEntries_SetPtr_Job(
    MSFT_SwitchService_ClearDynamicMACTableEntries* self,
    const CIM_ConcreteJob* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_SwitchService_ClearDynamicMACTableEntries_Clear_Job(
    MSFT_SwitchService_ClearDynamicMACTableEntries* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        2);
}

/*
**==============================================================================
**
** MSFT_SwitchService provider function prototypes
**
**==============================================================================
*/

/* The developer may optionally define this structure */
typedef struct _MSFT_SwitchService_Self MSFT_SwitchService_Self;

MI_EXTERN_C void MI_CALL MSFT_SwitchService_Load(
    MSFT_SwitchService_Self** self,
    MI_Module_Self* selfModule,
    MI_Context* context);

MI_EXTERN_C void MI_CALL MSFT_SwitchService_Unload(
    MSFT_SwitchService_Self* self,
    MI_Context* context);

MI_EXTERN_C void MI_CALL MSFT_SwitchService_EnumerateInstances(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter);

MI_EXTERN_C void MI_CALL MSFT_SwitchService_GetInstance(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MSFT_SwitchService* instanceName,
    const MI_PropertySet* propertySet);

MI_EXTERN_C void MI_CALL MSFT_SwitchService_CreateInstance(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MSFT_SwitchService* newInstance);

MI_EXTERN_C void MI_CALL MSFT_SwitchService_ModifyInstance(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MSFT_SwitchService* modifiedInstance,
    const MI_PropertySet* propertySet);

MI_EXTERN_C void MI_CALL MSFT_SwitchService_DeleteInstance(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MSFT_SwitchService* instanceName);

MI_EXTERN_C void MI_CALL MSFT_SwitchService_Invoke_RequestStateChange(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_SwitchService* instanceName,
    const MSFT_SwitchService_RequestStateChange* in);

MI_EXTERN_C void MI_CALL MSFT_SwitchService_Invoke_StartService(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_SwitchService* instanceName,
    const MSFT_SwitchService_StartService* in);

MI_EXTERN_C void MI_CALL MSFT_SwitchService_Invoke_StopService(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_SwitchService* instanceName,
    const MSFT_SwitchService_StopService* in);

MI_EXTERN_C void MI_CALL MSFT_SwitchService_Invoke_AddProtocolEndpoint(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_SwitchService* instanceName,
    const MSFT_SwitchService_AddProtocolEndpoint* in);

MI_EXTERN_C void MI_CALL MSFT_SwitchService_Invoke_RemoveProtocolEndpoint(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_SwitchService* instanceName,
    const MSFT_SwitchService_RemoveProtocolEndpoint* in);

MI_EXTERN_C void MI_CALL MSFT_SwitchService_Invoke_AddVLAN(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_SwitchService* instanceName,
    const MSFT_SwitchService_AddVLAN* in);

MI_EXTERN_C void MI_CALL MSFT_SwitchService_Invoke_RemoveVLAN(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_SwitchService* instanceName,
    const MSFT_SwitchService_RemoveVLAN* in);

MI_EXTERN_C void MI_CALL MSFT_SwitchService_Invoke_EnableVLAN(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_SwitchService* instanceName,
    const MSFT_SwitchService_EnableVLAN* in);

MI_EXTERN_C void MI_CALL MSFT_SwitchService_Invoke_DisableVLAN(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_SwitchService* instanceName,
    const MSFT_SwitchService_DisableVLAN* in);

MI_EXTERN_C void MI_CALL MSFT_SwitchService_Invoke_SetVLANState(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_SwitchService* instanceName,
    const MSFT_SwitchService_SetVLANState* in);

MI_EXTERN_C void MI_CALL MSFT_SwitchService_Invoke_CreateLinkAggregation(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_SwitchService* instanceName,
    const MSFT_SwitchService_CreateLinkAggregation* in);

MI_EXTERN_C void MI_CALL MSFT_SwitchService_Invoke_RemoveLinkAggregation(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_SwitchService* instanceName,
    const MSFT_SwitchService_RemoveLinkAggregation* in);

MI_EXTERN_C void MI_CALL MSFT_SwitchService_Invoke_AddPortToAggregation(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_SwitchService* instanceName,
    const MSFT_SwitchService_AddPortToAggregation* in);

MI_EXTERN_C void MI_CALL MSFT_SwitchService_Invoke_RemovePortFromLinkAggregation(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_SwitchService* instanceName,
    const MSFT_SwitchService_RemovePortFromLinkAggregation* in);

MI_EXTERN_C void MI_CALL MSFT_SwitchService_Invoke_CopyCurrentToStartup(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_SwitchService* instanceName,
    const MSFT_SwitchService_CopyCurrentToStartup* in);

MI_EXTERN_C void MI_CALL MSFT_SwitchService_Invoke_CopyStartupToCurrent(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_SwitchService* instanceName,
    const MSFT_SwitchService_CopyStartupToCurrent* in);

MI_EXTERN_C void MI_CALL MSFT_SwitchService_Invoke_CopyCurrentToFile(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_SwitchService* instanceName,
    const MSFT_SwitchService_CopyCurrentToFile* in);

MI_EXTERN_C void MI_CALL MSFT_SwitchService_Invoke_CopyFile(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_SwitchService* instanceName,
    const MSFT_SwitchService_CopyFile* in);

MI_EXTERN_C void MI_CALL MSFT_SwitchService_Invoke_CopyStartupToFile(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_SwitchService* instanceName,
    const MSFT_SwitchService_CopyStartupToFile* in);

MI_EXTERN_C void MI_CALL MSFT_SwitchService_Invoke_CopyFileToCurrent(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_SwitchService* instanceName,
    const MSFT_SwitchService_CopyFileToCurrent* in);

MI_EXTERN_C void MI_CALL MSFT_SwitchService_Invoke_CopyFileToStartup(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_SwitchService* instanceName,
    const MSFT_SwitchService_CopyFileToStartup* in);

MI_EXTERN_C void MI_CALL MSFT_SwitchService_Invoke_ClearCurrent(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_SwitchService* instanceName,
    const MSFT_SwitchService_ClearCurrent* in);

MI_EXTERN_C void MI_CALL MSFT_SwitchService_Invoke_ClearStartup(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_SwitchService* instanceName,
    const MSFT_SwitchService_ClearStartup* in);

MI_EXTERN_C void MI_CALL MSFT_SwitchService_Invoke_DeleteFile(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_SwitchService* instanceName,
    const MSFT_SwitchService_DeleteFile* in);

MI_EXTERN_C void MI_CALL MSFT_SwitchService_Invoke_CreateRemoteServerGroup(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_SwitchService* instanceName,
    const MSFT_SwitchService_CreateRemoteServerGroup* in);

MI_EXTERN_C void MI_CALL MSFT_SwitchService_Invoke_RemoveRemoteServerGroup(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_SwitchService* instanceName,
    const MSFT_SwitchService_RemoveRemoteServerGroup* in);

MI_EXTERN_C void MI_CALL MSFT_SwitchService_Invoke_ConfigureSeviceAccessPoint(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_SwitchService* instanceName,
    const MSFT_SwitchService_ConfigureSeviceAccessPoint* in);

MI_EXTERN_C void MI_CALL MSFT_SwitchService_Invoke_ModifySeviceAccessPoint(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_SwitchService* instanceName,
    const MSFT_SwitchService_ModifySeviceAccessPoint* in);

MI_EXTERN_C void MI_CALL MSFT_SwitchService_Invoke_DeleteSeviceAccessPoint(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_SwitchService* instanceName,
    const MSFT_SwitchService_DeleteSeviceAccessPoint* in);

MI_EXTERN_C void MI_CALL MSFT_SwitchService_Invoke_ApplyPortProfile(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_SwitchService* instanceName,
    const MSFT_SwitchService_ApplyPortProfile* in);

MI_EXTERN_C void MI_CALL MSFT_SwitchService_Invoke_ReloadSwitch(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_SwitchService* instanceName,
    const MSFT_SwitchService_ReloadSwitch* in);

MI_EXTERN_C void MI_CALL MSFT_SwitchService_Invoke_SetMACAddressAgingTime(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_SwitchService* instanceName,
    const MSFT_SwitchService_SetMACAddressAgingTime* in);

MI_EXTERN_C void MI_CALL MSFT_SwitchService_Invoke_AddStaticMACTableEntry(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_SwitchService* instanceName,
    const MSFT_SwitchService_AddStaticMACTableEntry* in);

MI_EXTERN_C void MI_CALL MSFT_SwitchService_Invoke_ClearStaticMACTableEntry(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_SwitchService* instanceName,
    const MSFT_SwitchService_ClearStaticMACTableEntry* in);

MI_EXTERN_C void MI_CALL MSFT_SwitchService_Invoke_ClearDynamicMACTableEntries(
    MSFT_SwitchService_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_SwitchService* instanceName,
    const MSFT_SwitchService_ClearDynamicMACTableEntries* in);


#endif /* _MSFT_SwitchService_h */
