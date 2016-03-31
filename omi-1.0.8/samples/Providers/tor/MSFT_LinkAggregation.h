/* @migen@ */
/*
**==============================================================================
**
** WARNING: THIS FILE WAS AUTOMATICALLY GENERATED. PLEASE DO NOT EDIT.
**
**==============================================================================
*/
#ifndef _MSFT_LinkAggregation_h
#define _MSFT_LinkAggregation_h

#include <MI.h>
#include "MSFT_EthernetPort.h"
#include "CIM_ConcreteJob.h"

/*
**==============================================================================
**
** MSFT_LinkAggregation [MSFT_LinkAggregation]
**
** Keys:
**    SystemCreationClassName
**    SystemName
**    CreationClassName
**    DeviceID
**
**==============================================================================
*/

typedef struct _MSFT_LinkAggregation /* extends MSFT_EthernetPort */
{
    MI_Instance __instance;
    /* CIM_ManagedElement properties */
    MI_ConstStringField InstanceID;
    MI_ConstStringField Caption;
    MI_ConstStringField Description;
    MI_ConstStringField ElementName;
    /* CIM_ManagedSystemElement properties */
    MI_ConstDatetimeField InstallDate;
    MI_ConstStringField Name;
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
    /* CIM_LogicalDevice properties */
    /*KEY*/ MI_ConstStringField SystemCreationClassName;
    /*KEY*/ MI_ConstStringField SystemName;
    /*KEY*/ MI_ConstStringField CreationClassName;
    /*KEY*/ MI_ConstStringField DeviceID;
    MI_ConstBooleanField PowerManagementSupported;
    MI_ConstUint16AField PowerManagementCapabilities;
    MI_ConstUint16Field Availability;
    MI_ConstUint16Field StatusInfo;
    MI_ConstUint32Field LastErrorCode;
    MI_ConstStringField ErrorDescription;
    MI_ConstBooleanField ErrorCleared;
    MI_ConstStringAField OtherIdentifyingInfo;
    MI_ConstUint64Field PowerOnHours;
    MI_ConstUint64Field TotalPowerOnHours;
    MI_ConstStringAField IdentifyingDescriptions;
    MI_ConstUint16AField AdditionalAvailability;
    MI_ConstUint64Field MaxQuiesceTime;
    /* CIM_LogicalPort properties */
    MI_ConstUint64Field Speed;
    MI_ConstUint64Field MaxSpeed;
    MI_ConstUint64Field RequestedSpeed;
    MI_ConstUint16Field UsageRestriction;
    MI_ConstUint16Field PortType;
    MI_ConstStringField OtherPortType;
    /* CIM_NetworkPort properties */
    MI_ConstStringField OtherNetworkPortType;
    MI_ConstUint16Field PortNumber;
    MI_ConstUint16Field LinkTechnology;
    MI_ConstStringField OtherLinkTechnology;
    MI_ConstStringField PermanentAddress;
    MI_ConstStringAField NetworkAddresses;
    MI_ConstBooleanField FullDuplex;
    MI_ConstBooleanField AutoSense;
    MI_ConstUint64Field SupportedMaximumTransmissionUnit;
    MI_ConstUint64Field ActiveMaximumTransmissionUnit;
    /* CIM_EthernetPort properties */
    MI_ConstUint32Field MaxDataSize;
    MI_ConstUint16AField Capabilities;
    MI_ConstStringAField CapabilityDescriptions;
    MI_ConstUint16AField EnabledCapabilities;
    MI_ConstStringAField OtherEnabledCapabilities;
    /* MSFT_EthernetPort properties */
    MI_ConstUint16Field LACPPortPriority;
    MI_ConstUint16Field LACPMode;
    MI_ConstUint16Field LACPGroupNumber;
    MI_ConstUint16Field SpanningTreePortType;
    MI_ConstBooleanField LLDPTransmitEnabled;
    MI_ConstBooleanField LLDPReceiveEnabled;
    MI_ConstBooleanField cdpEnabled;
    MI_ConstBooleanField SNMPLinkStatusTrapEnabled;
    MI_ConstStringAField LLDPRemotePortID;
    MI_ConstUint16AField LLDPRemotePortIDType;
    MI_ConstStringAField LLDPRemoteDeviceID;
    MI_ConstUint16AField LLDPRemoteDeviceIDType;
    /* MSFT_LinkAggregation properties */
    MI_ConstUint16Field GroupNumber;
    MI_ConstUint16Field LoadBalance;
}
MSFT_LinkAggregation;

typedef struct _MSFT_LinkAggregation_Ref
{
    MSFT_LinkAggregation* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MSFT_LinkAggregation_Ref;

typedef struct _MSFT_LinkAggregation_ConstRef
{
    MI_CONST MSFT_LinkAggregation* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MSFT_LinkAggregation_ConstRef;

typedef struct _MSFT_LinkAggregation_Array
{
    struct _MSFT_LinkAggregation** data;
    MI_Uint32 size;
}
MSFT_LinkAggregation_Array;

typedef struct _MSFT_LinkAggregation_ConstArray
{
    struct _MSFT_LinkAggregation MI_CONST* MI_CONST* data;
    MI_Uint32 size;
}
MSFT_LinkAggregation_ConstArray;

typedef struct _MSFT_LinkAggregation_ArrayRef
{
    MSFT_LinkAggregation_Array value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MSFT_LinkAggregation_ArrayRef;

typedef struct _MSFT_LinkAggregation_ConstArrayRef
{
    MSFT_LinkAggregation_ConstArray value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MSFT_LinkAggregation_ConstArrayRef;

MI_EXTERN_C MI_CONST MI_ClassDecl MSFT_LinkAggregation_rtti;

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Construct(
    MSFT_LinkAggregation* self,
    MI_Context* context)
{
    return MI_ConstructInstance(context, &MSFT_LinkAggregation_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Clone(
    const MSFT_LinkAggregation* self,
    MSFT_LinkAggregation** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Boolean MI_CALL MSFT_LinkAggregation_IsA(
    const MI_Instance* self)
{
    MI_Boolean res = MI_FALSE;
    return MI_Instance_IsA(self, &MSFT_LinkAggregation_rtti, &res) == MI_RESULT_OK && res;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Destruct(MSFT_LinkAggregation* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Delete(MSFT_LinkAggregation* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Post(
    const MSFT_LinkAggregation* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Set_InstanceID(
    MSFT_LinkAggregation* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        0,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_SetPtr_InstanceID(
    MSFT_LinkAggregation* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        0,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Clear_InstanceID(
    MSFT_LinkAggregation* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Set_Caption(
    MSFT_LinkAggregation* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_SetPtr_Caption(
    MSFT_LinkAggregation* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Clear_Caption(
    MSFT_LinkAggregation* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        1);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Set_Description(
    MSFT_LinkAggregation* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_SetPtr_Description(
    MSFT_LinkAggregation* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Clear_Description(
    MSFT_LinkAggregation* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        2);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Set_ElementName(
    MSFT_LinkAggregation* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_SetPtr_ElementName(
    MSFT_LinkAggregation* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Clear_ElementName(
    MSFT_LinkAggregation* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        3);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Set_InstallDate(
    MSFT_LinkAggregation* self,
    MI_Datetime x)
{
    ((MI_DatetimeField*)&self->InstallDate)->value = x;
    ((MI_DatetimeField*)&self->InstallDate)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Clear_InstallDate(
    MSFT_LinkAggregation* self)
{
    memset((void*)&self->InstallDate, 0, sizeof(self->InstallDate));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Set_Name(
    MSFT_LinkAggregation* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        5,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_SetPtr_Name(
    MSFT_LinkAggregation* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        5,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Clear_Name(
    MSFT_LinkAggregation* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        5);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Set_OperationalStatus(
    MSFT_LinkAggregation* self,
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

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_SetPtr_OperationalStatus(
    MSFT_LinkAggregation* self,
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

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Clear_OperationalStatus(
    MSFT_LinkAggregation* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        6);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Set_StatusDescriptions(
    MSFT_LinkAggregation* self,
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

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_SetPtr_StatusDescriptions(
    MSFT_LinkAggregation* self,
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

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Clear_StatusDescriptions(
    MSFT_LinkAggregation* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        7);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Set_Status(
    MSFT_LinkAggregation* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        8,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_SetPtr_Status(
    MSFT_LinkAggregation* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        8,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Clear_Status(
    MSFT_LinkAggregation* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        8);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Set_HealthState(
    MSFT_LinkAggregation* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->HealthState)->value = x;
    ((MI_Uint16Field*)&self->HealthState)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Clear_HealthState(
    MSFT_LinkAggregation* self)
{
    memset((void*)&self->HealthState, 0, sizeof(self->HealthState));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Set_CommunicationStatus(
    MSFT_LinkAggregation* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->CommunicationStatus)->value = x;
    ((MI_Uint16Field*)&self->CommunicationStatus)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Clear_CommunicationStatus(
    MSFT_LinkAggregation* self)
{
    memset((void*)&self->CommunicationStatus, 0, sizeof(self->CommunicationStatus));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Set_DetailedStatus(
    MSFT_LinkAggregation* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->DetailedStatus)->value = x;
    ((MI_Uint16Field*)&self->DetailedStatus)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Clear_DetailedStatus(
    MSFT_LinkAggregation* self)
{
    memset((void*)&self->DetailedStatus, 0, sizeof(self->DetailedStatus));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Set_OperatingStatus(
    MSFT_LinkAggregation* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->OperatingStatus)->value = x;
    ((MI_Uint16Field*)&self->OperatingStatus)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Clear_OperatingStatus(
    MSFT_LinkAggregation* self)
{
    memset((void*)&self->OperatingStatus, 0, sizeof(self->OperatingStatus));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Set_PrimaryStatus(
    MSFT_LinkAggregation* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->PrimaryStatus)->value = x;
    ((MI_Uint16Field*)&self->PrimaryStatus)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Clear_PrimaryStatus(
    MSFT_LinkAggregation* self)
{
    memset((void*)&self->PrimaryStatus, 0, sizeof(self->PrimaryStatus));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Set_EnabledState(
    MSFT_LinkAggregation* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->EnabledState)->value = x;
    ((MI_Uint16Field*)&self->EnabledState)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Clear_EnabledState(
    MSFT_LinkAggregation* self)
{
    memset((void*)&self->EnabledState, 0, sizeof(self->EnabledState));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Set_OtherEnabledState(
    MSFT_LinkAggregation* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        15,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_SetPtr_OtherEnabledState(
    MSFT_LinkAggregation* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        15,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Clear_OtherEnabledState(
    MSFT_LinkAggregation* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        15);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Set_RequestedState(
    MSFT_LinkAggregation* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->RequestedState)->value = x;
    ((MI_Uint16Field*)&self->RequestedState)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Clear_RequestedState(
    MSFT_LinkAggregation* self)
{
    memset((void*)&self->RequestedState, 0, sizeof(self->RequestedState));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Set_EnabledDefault(
    MSFT_LinkAggregation* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->EnabledDefault)->value = x;
    ((MI_Uint16Field*)&self->EnabledDefault)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Clear_EnabledDefault(
    MSFT_LinkAggregation* self)
{
    memset((void*)&self->EnabledDefault, 0, sizeof(self->EnabledDefault));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Set_TimeOfLastStateChange(
    MSFT_LinkAggregation* self,
    MI_Datetime x)
{
    ((MI_DatetimeField*)&self->TimeOfLastStateChange)->value = x;
    ((MI_DatetimeField*)&self->TimeOfLastStateChange)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Clear_TimeOfLastStateChange(
    MSFT_LinkAggregation* self)
{
    memset((void*)&self->TimeOfLastStateChange, 0, sizeof(self->TimeOfLastStateChange));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Set_AvailableRequestedStates(
    MSFT_LinkAggregation* self,
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

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_SetPtr_AvailableRequestedStates(
    MSFT_LinkAggregation* self,
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

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Clear_AvailableRequestedStates(
    MSFT_LinkAggregation* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        19);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Set_TransitioningToState(
    MSFT_LinkAggregation* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->TransitioningToState)->value = x;
    ((MI_Uint16Field*)&self->TransitioningToState)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Clear_TransitioningToState(
    MSFT_LinkAggregation* self)
{
    memset((void*)&self->TransitioningToState, 0, sizeof(self->TransitioningToState));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Set_SystemCreationClassName(
    MSFT_LinkAggregation* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        21,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_SetPtr_SystemCreationClassName(
    MSFT_LinkAggregation* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        21,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Clear_SystemCreationClassName(
    MSFT_LinkAggregation* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        21);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Set_SystemName(
    MSFT_LinkAggregation* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        22,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_SetPtr_SystemName(
    MSFT_LinkAggregation* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        22,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Clear_SystemName(
    MSFT_LinkAggregation* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        22);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Set_CreationClassName(
    MSFT_LinkAggregation* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        23,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_SetPtr_CreationClassName(
    MSFT_LinkAggregation* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        23,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Clear_CreationClassName(
    MSFT_LinkAggregation* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        23);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Set_DeviceID(
    MSFT_LinkAggregation* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        24,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_SetPtr_DeviceID(
    MSFT_LinkAggregation* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        24,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Clear_DeviceID(
    MSFT_LinkAggregation* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        24);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Set_PowerManagementSupported(
    MSFT_LinkAggregation* self,
    MI_Boolean x)
{
    ((MI_BooleanField*)&self->PowerManagementSupported)->value = x;
    ((MI_BooleanField*)&self->PowerManagementSupported)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Clear_PowerManagementSupported(
    MSFT_LinkAggregation* self)
{
    memset((void*)&self->PowerManagementSupported, 0, sizeof(self->PowerManagementSupported));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Set_PowerManagementCapabilities(
    MSFT_LinkAggregation* self,
    const MI_Uint16* data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        26,
        (MI_Value*)&arr,
        MI_UINT16A,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_SetPtr_PowerManagementCapabilities(
    MSFT_LinkAggregation* self,
    const MI_Uint16* data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        26,
        (MI_Value*)&arr,
        MI_UINT16A,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Clear_PowerManagementCapabilities(
    MSFT_LinkAggregation* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        26);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Set_Availability(
    MSFT_LinkAggregation* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->Availability)->value = x;
    ((MI_Uint16Field*)&self->Availability)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Clear_Availability(
    MSFT_LinkAggregation* self)
{
    memset((void*)&self->Availability, 0, sizeof(self->Availability));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Set_StatusInfo(
    MSFT_LinkAggregation* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->StatusInfo)->value = x;
    ((MI_Uint16Field*)&self->StatusInfo)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Clear_StatusInfo(
    MSFT_LinkAggregation* self)
{
    memset((void*)&self->StatusInfo, 0, sizeof(self->StatusInfo));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Set_LastErrorCode(
    MSFT_LinkAggregation* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->LastErrorCode)->value = x;
    ((MI_Uint32Field*)&self->LastErrorCode)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Clear_LastErrorCode(
    MSFT_LinkAggregation* self)
{
    memset((void*)&self->LastErrorCode, 0, sizeof(self->LastErrorCode));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Set_ErrorDescription(
    MSFT_LinkAggregation* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        30,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_SetPtr_ErrorDescription(
    MSFT_LinkAggregation* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        30,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Clear_ErrorDescription(
    MSFT_LinkAggregation* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        30);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Set_ErrorCleared(
    MSFT_LinkAggregation* self,
    MI_Boolean x)
{
    ((MI_BooleanField*)&self->ErrorCleared)->value = x;
    ((MI_BooleanField*)&self->ErrorCleared)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Clear_ErrorCleared(
    MSFT_LinkAggregation* self)
{
    memset((void*)&self->ErrorCleared, 0, sizeof(self->ErrorCleared));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Set_OtherIdentifyingInfo(
    MSFT_LinkAggregation* self,
    const MI_Char** data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        32,
        (MI_Value*)&arr,
        MI_STRINGA,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_SetPtr_OtherIdentifyingInfo(
    MSFT_LinkAggregation* self,
    const MI_Char** data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        32,
        (MI_Value*)&arr,
        MI_STRINGA,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Clear_OtherIdentifyingInfo(
    MSFT_LinkAggregation* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        32);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Set_PowerOnHours(
    MSFT_LinkAggregation* self,
    MI_Uint64 x)
{
    ((MI_Uint64Field*)&self->PowerOnHours)->value = x;
    ((MI_Uint64Field*)&self->PowerOnHours)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Clear_PowerOnHours(
    MSFT_LinkAggregation* self)
{
    memset((void*)&self->PowerOnHours, 0, sizeof(self->PowerOnHours));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Set_TotalPowerOnHours(
    MSFT_LinkAggregation* self,
    MI_Uint64 x)
{
    ((MI_Uint64Field*)&self->TotalPowerOnHours)->value = x;
    ((MI_Uint64Field*)&self->TotalPowerOnHours)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Clear_TotalPowerOnHours(
    MSFT_LinkAggregation* self)
{
    memset((void*)&self->TotalPowerOnHours, 0, sizeof(self->TotalPowerOnHours));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Set_IdentifyingDescriptions(
    MSFT_LinkAggregation* self,
    const MI_Char** data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        35,
        (MI_Value*)&arr,
        MI_STRINGA,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_SetPtr_IdentifyingDescriptions(
    MSFT_LinkAggregation* self,
    const MI_Char** data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        35,
        (MI_Value*)&arr,
        MI_STRINGA,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Clear_IdentifyingDescriptions(
    MSFT_LinkAggregation* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        35);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Set_AdditionalAvailability(
    MSFT_LinkAggregation* self,
    const MI_Uint16* data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        36,
        (MI_Value*)&arr,
        MI_UINT16A,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_SetPtr_AdditionalAvailability(
    MSFT_LinkAggregation* self,
    const MI_Uint16* data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        36,
        (MI_Value*)&arr,
        MI_UINT16A,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Clear_AdditionalAvailability(
    MSFT_LinkAggregation* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        36);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Set_MaxQuiesceTime(
    MSFT_LinkAggregation* self,
    MI_Uint64 x)
{
    ((MI_Uint64Field*)&self->MaxQuiesceTime)->value = x;
    ((MI_Uint64Field*)&self->MaxQuiesceTime)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Clear_MaxQuiesceTime(
    MSFT_LinkAggregation* self)
{
    memset((void*)&self->MaxQuiesceTime, 0, sizeof(self->MaxQuiesceTime));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Set_Speed(
    MSFT_LinkAggregation* self,
    MI_Uint64 x)
{
    ((MI_Uint64Field*)&self->Speed)->value = x;
    ((MI_Uint64Field*)&self->Speed)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Clear_Speed(
    MSFT_LinkAggregation* self)
{
    memset((void*)&self->Speed, 0, sizeof(self->Speed));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Set_MaxSpeed(
    MSFT_LinkAggregation* self,
    MI_Uint64 x)
{
    ((MI_Uint64Field*)&self->MaxSpeed)->value = x;
    ((MI_Uint64Field*)&self->MaxSpeed)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Clear_MaxSpeed(
    MSFT_LinkAggregation* self)
{
    memset((void*)&self->MaxSpeed, 0, sizeof(self->MaxSpeed));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Set_RequestedSpeed(
    MSFT_LinkAggregation* self,
    MI_Uint64 x)
{
    ((MI_Uint64Field*)&self->RequestedSpeed)->value = x;
    ((MI_Uint64Field*)&self->RequestedSpeed)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Clear_RequestedSpeed(
    MSFT_LinkAggregation* self)
{
    memset((void*)&self->RequestedSpeed, 0, sizeof(self->RequestedSpeed));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Set_UsageRestriction(
    MSFT_LinkAggregation* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->UsageRestriction)->value = x;
    ((MI_Uint16Field*)&self->UsageRestriction)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Clear_UsageRestriction(
    MSFT_LinkAggregation* self)
{
    memset((void*)&self->UsageRestriction, 0, sizeof(self->UsageRestriction));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Set_PortType(
    MSFT_LinkAggregation* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->PortType)->value = x;
    ((MI_Uint16Field*)&self->PortType)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Clear_PortType(
    MSFT_LinkAggregation* self)
{
    memset((void*)&self->PortType, 0, sizeof(self->PortType));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Set_OtherPortType(
    MSFT_LinkAggregation* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        43,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_SetPtr_OtherPortType(
    MSFT_LinkAggregation* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        43,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Clear_OtherPortType(
    MSFT_LinkAggregation* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        43);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Set_OtherNetworkPortType(
    MSFT_LinkAggregation* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        44,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_SetPtr_OtherNetworkPortType(
    MSFT_LinkAggregation* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        44,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Clear_OtherNetworkPortType(
    MSFT_LinkAggregation* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        44);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Set_PortNumber(
    MSFT_LinkAggregation* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->PortNumber)->value = x;
    ((MI_Uint16Field*)&self->PortNumber)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Clear_PortNumber(
    MSFT_LinkAggregation* self)
{
    memset((void*)&self->PortNumber, 0, sizeof(self->PortNumber));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Set_LinkTechnology(
    MSFT_LinkAggregation* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->LinkTechnology)->value = x;
    ((MI_Uint16Field*)&self->LinkTechnology)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Clear_LinkTechnology(
    MSFT_LinkAggregation* self)
{
    memset((void*)&self->LinkTechnology, 0, sizeof(self->LinkTechnology));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Set_OtherLinkTechnology(
    MSFT_LinkAggregation* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        47,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_SetPtr_OtherLinkTechnology(
    MSFT_LinkAggregation* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        47,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Clear_OtherLinkTechnology(
    MSFT_LinkAggregation* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        47);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Set_PermanentAddress(
    MSFT_LinkAggregation* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        48,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_SetPtr_PermanentAddress(
    MSFT_LinkAggregation* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        48,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Clear_PermanentAddress(
    MSFT_LinkAggregation* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        48);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Set_NetworkAddresses(
    MSFT_LinkAggregation* self,
    const MI_Char** data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        49,
        (MI_Value*)&arr,
        MI_STRINGA,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_SetPtr_NetworkAddresses(
    MSFT_LinkAggregation* self,
    const MI_Char** data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        49,
        (MI_Value*)&arr,
        MI_STRINGA,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Clear_NetworkAddresses(
    MSFT_LinkAggregation* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        49);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Set_FullDuplex(
    MSFT_LinkAggregation* self,
    MI_Boolean x)
{
    ((MI_BooleanField*)&self->FullDuplex)->value = x;
    ((MI_BooleanField*)&self->FullDuplex)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Clear_FullDuplex(
    MSFT_LinkAggregation* self)
{
    memset((void*)&self->FullDuplex, 0, sizeof(self->FullDuplex));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Set_AutoSense(
    MSFT_LinkAggregation* self,
    MI_Boolean x)
{
    ((MI_BooleanField*)&self->AutoSense)->value = x;
    ((MI_BooleanField*)&self->AutoSense)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Clear_AutoSense(
    MSFT_LinkAggregation* self)
{
    memset((void*)&self->AutoSense, 0, sizeof(self->AutoSense));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Set_SupportedMaximumTransmissionUnit(
    MSFT_LinkAggregation* self,
    MI_Uint64 x)
{
    ((MI_Uint64Field*)&self->SupportedMaximumTransmissionUnit)->value = x;
    ((MI_Uint64Field*)&self->SupportedMaximumTransmissionUnit)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Clear_SupportedMaximumTransmissionUnit(
    MSFT_LinkAggregation* self)
{
    memset((void*)&self->SupportedMaximumTransmissionUnit, 0, sizeof(self->SupportedMaximumTransmissionUnit));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Set_ActiveMaximumTransmissionUnit(
    MSFT_LinkAggregation* self,
    MI_Uint64 x)
{
    ((MI_Uint64Field*)&self->ActiveMaximumTransmissionUnit)->value = x;
    ((MI_Uint64Field*)&self->ActiveMaximumTransmissionUnit)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Clear_ActiveMaximumTransmissionUnit(
    MSFT_LinkAggregation* self)
{
    memset((void*)&self->ActiveMaximumTransmissionUnit, 0, sizeof(self->ActiveMaximumTransmissionUnit));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Set_MaxDataSize(
    MSFT_LinkAggregation* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->MaxDataSize)->value = x;
    ((MI_Uint32Field*)&self->MaxDataSize)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Clear_MaxDataSize(
    MSFT_LinkAggregation* self)
{
    memset((void*)&self->MaxDataSize, 0, sizeof(self->MaxDataSize));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Set_Capabilities(
    MSFT_LinkAggregation* self,
    const MI_Uint16* data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        55,
        (MI_Value*)&arr,
        MI_UINT16A,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_SetPtr_Capabilities(
    MSFT_LinkAggregation* self,
    const MI_Uint16* data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        55,
        (MI_Value*)&arr,
        MI_UINT16A,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Clear_Capabilities(
    MSFT_LinkAggregation* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        55);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Set_CapabilityDescriptions(
    MSFT_LinkAggregation* self,
    const MI_Char** data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        56,
        (MI_Value*)&arr,
        MI_STRINGA,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_SetPtr_CapabilityDescriptions(
    MSFT_LinkAggregation* self,
    const MI_Char** data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        56,
        (MI_Value*)&arr,
        MI_STRINGA,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Clear_CapabilityDescriptions(
    MSFT_LinkAggregation* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        56);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Set_EnabledCapabilities(
    MSFT_LinkAggregation* self,
    const MI_Uint16* data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        57,
        (MI_Value*)&arr,
        MI_UINT16A,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_SetPtr_EnabledCapabilities(
    MSFT_LinkAggregation* self,
    const MI_Uint16* data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        57,
        (MI_Value*)&arr,
        MI_UINT16A,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Clear_EnabledCapabilities(
    MSFT_LinkAggregation* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        57);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Set_OtherEnabledCapabilities(
    MSFT_LinkAggregation* self,
    const MI_Char** data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        58,
        (MI_Value*)&arr,
        MI_STRINGA,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_SetPtr_OtherEnabledCapabilities(
    MSFT_LinkAggregation* self,
    const MI_Char** data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        58,
        (MI_Value*)&arr,
        MI_STRINGA,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Clear_OtherEnabledCapabilities(
    MSFT_LinkAggregation* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        58);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Set_LACPPortPriority(
    MSFT_LinkAggregation* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->LACPPortPriority)->value = x;
    ((MI_Uint16Field*)&self->LACPPortPriority)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Clear_LACPPortPriority(
    MSFT_LinkAggregation* self)
{
    memset((void*)&self->LACPPortPriority, 0, sizeof(self->LACPPortPriority));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Set_LACPMode(
    MSFT_LinkAggregation* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->LACPMode)->value = x;
    ((MI_Uint16Field*)&self->LACPMode)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Clear_LACPMode(
    MSFT_LinkAggregation* self)
{
    memset((void*)&self->LACPMode, 0, sizeof(self->LACPMode));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Set_LACPGroupNumber(
    MSFT_LinkAggregation* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->LACPGroupNumber)->value = x;
    ((MI_Uint16Field*)&self->LACPGroupNumber)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Clear_LACPGroupNumber(
    MSFT_LinkAggregation* self)
{
    memset((void*)&self->LACPGroupNumber, 0, sizeof(self->LACPGroupNumber));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Set_SpanningTreePortType(
    MSFT_LinkAggregation* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->SpanningTreePortType)->value = x;
    ((MI_Uint16Field*)&self->SpanningTreePortType)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Clear_SpanningTreePortType(
    MSFT_LinkAggregation* self)
{
    memset((void*)&self->SpanningTreePortType, 0, sizeof(self->SpanningTreePortType));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Set_LLDPTransmitEnabled(
    MSFT_LinkAggregation* self,
    MI_Boolean x)
{
    ((MI_BooleanField*)&self->LLDPTransmitEnabled)->value = x;
    ((MI_BooleanField*)&self->LLDPTransmitEnabled)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Clear_LLDPTransmitEnabled(
    MSFT_LinkAggregation* self)
{
    memset((void*)&self->LLDPTransmitEnabled, 0, sizeof(self->LLDPTransmitEnabled));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Set_LLDPReceiveEnabled(
    MSFT_LinkAggregation* self,
    MI_Boolean x)
{
    ((MI_BooleanField*)&self->LLDPReceiveEnabled)->value = x;
    ((MI_BooleanField*)&self->LLDPReceiveEnabled)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Clear_LLDPReceiveEnabled(
    MSFT_LinkAggregation* self)
{
    memset((void*)&self->LLDPReceiveEnabled, 0, sizeof(self->LLDPReceiveEnabled));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Set_cdpEnabled(
    MSFT_LinkAggregation* self,
    MI_Boolean x)
{
    ((MI_BooleanField*)&self->cdpEnabled)->value = x;
    ((MI_BooleanField*)&self->cdpEnabled)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Clear_cdpEnabled(
    MSFT_LinkAggregation* self)
{
    memset((void*)&self->cdpEnabled, 0, sizeof(self->cdpEnabled));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Set_SNMPLinkStatusTrapEnabled(
    MSFT_LinkAggregation* self,
    MI_Boolean x)
{
    ((MI_BooleanField*)&self->SNMPLinkStatusTrapEnabled)->value = x;
    ((MI_BooleanField*)&self->SNMPLinkStatusTrapEnabled)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Clear_SNMPLinkStatusTrapEnabled(
    MSFT_LinkAggregation* self)
{
    memset((void*)&self->SNMPLinkStatusTrapEnabled, 0, sizeof(self->SNMPLinkStatusTrapEnabled));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Set_LLDPRemotePortID(
    MSFT_LinkAggregation* self,
    const MI_Char** data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        67,
        (MI_Value*)&arr,
        MI_STRINGA,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_SetPtr_LLDPRemotePortID(
    MSFT_LinkAggregation* self,
    const MI_Char** data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        67,
        (MI_Value*)&arr,
        MI_STRINGA,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Clear_LLDPRemotePortID(
    MSFT_LinkAggregation* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        67);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Set_LLDPRemotePortIDType(
    MSFT_LinkAggregation* self,
    const MI_Uint16* data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        68,
        (MI_Value*)&arr,
        MI_UINT16A,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_SetPtr_LLDPRemotePortIDType(
    MSFT_LinkAggregation* self,
    const MI_Uint16* data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        68,
        (MI_Value*)&arr,
        MI_UINT16A,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Clear_LLDPRemotePortIDType(
    MSFT_LinkAggregation* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        68);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Set_LLDPRemoteDeviceID(
    MSFT_LinkAggregation* self,
    const MI_Char** data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        69,
        (MI_Value*)&arr,
        MI_STRINGA,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_SetPtr_LLDPRemoteDeviceID(
    MSFT_LinkAggregation* self,
    const MI_Char** data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        69,
        (MI_Value*)&arr,
        MI_STRINGA,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Clear_LLDPRemoteDeviceID(
    MSFT_LinkAggregation* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        69);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Set_LLDPRemoteDeviceIDType(
    MSFT_LinkAggregation* self,
    const MI_Uint16* data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        70,
        (MI_Value*)&arr,
        MI_UINT16A,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_SetPtr_LLDPRemoteDeviceIDType(
    MSFT_LinkAggregation* self,
    const MI_Uint16* data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        70,
        (MI_Value*)&arr,
        MI_UINT16A,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Clear_LLDPRemoteDeviceIDType(
    MSFT_LinkAggregation* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        70);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Set_GroupNumber(
    MSFT_LinkAggregation* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->GroupNumber)->value = x;
    ((MI_Uint16Field*)&self->GroupNumber)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Clear_GroupNumber(
    MSFT_LinkAggregation* self)
{
    memset((void*)&self->GroupNumber, 0, sizeof(self->GroupNumber));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Set_LoadBalance(
    MSFT_LinkAggregation* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->LoadBalance)->value = x;
    ((MI_Uint16Field*)&self->LoadBalance)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Clear_LoadBalance(
    MSFT_LinkAggregation* self)
{
    memset((void*)&self->LoadBalance, 0, sizeof(self->LoadBalance));
    return MI_RESULT_OK;
}

/*
**==============================================================================
**
** MSFT_LinkAggregation.RequestStateChange()
**
**==============================================================================
*/

typedef struct _MSFT_LinkAggregation_RequestStateChange
{
    MI_Instance __instance;
    /*OUT*/ MI_ConstUint32Field MIReturn;
    /*IN*/ MI_ConstUint16Field RequestedState;
    /*OUT*/ CIM_ConcreteJob_ConstRef Job;
    /*IN*/ MI_ConstDatetimeField TimeoutPeriod;
}
MSFT_LinkAggregation_RequestStateChange;

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_RequestStateChange_Set_MIReturn(
    MSFT_LinkAggregation_RequestStateChange* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->MIReturn)->value = x;
    ((MI_Uint32Field*)&self->MIReturn)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_RequestStateChange_Clear_MIReturn(
    MSFT_LinkAggregation_RequestStateChange* self)
{
    memset((void*)&self->MIReturn, 0, sizeof(self->MIReturn));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_RequestStateChange_Set_RequestedState(
    MSFT_LinkAggregation_RequestStateChange* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->RequestedState)->value = x;
    ((MI_Uint16Field*)&self->RequestedState)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_RequestStateChange_Clear_RequestedState(
    MSFT_LinkAggregation_RequestStateChange* self)
{
    memset((void*)&self->RequestedState, 0, sizeof(self->RequestedState));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_RequestStateChange_Set_Job(
    MSFT_LinkAggregation_RequestStateChange* self,
    const CIM_ConcreteJob* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_RequestStateChange_SetPtr_Job(
    MSFT_LinkAggregation_RequestStateChange* self,
    const CIM_ConcreteJob* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_RequestStateChange_Clear_Job(
    MSFT_LinkAggregation_RequestStateChange* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        2);
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_RequestStateChange_Set_TimeoutPeriod(
    MSFT_LinkAggregation_RequestStateChange* self,
    MI_Datetime x)
{
    ((MI_DatetimeField*)&self->TimeoutPeriod)->value = x;
    ((MI_DatetimeField*)&self->TimeoutPeriod)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_RequestStateChange_Clear_TimeoutPeriod(
    MSFT_LinkAggregation_RequestStateChange* self)
{
    memset((void*)&self->TimeoutPeriod, 0, sizeof(self->TimeoutPeriod));
    return MI_RESULT_OK;
}

/*
**==============================================================================
**
** MSFT_LinkAggregation.SetPowerState()
**
**==============================================================================
*/

typedef struct _MSFT_LinkAggregation_SetPowerState
{
    MI_Instance __instance;
    /*OUT*/ MI_ConstUint32Field MIReturn;
    /*IN*/ MI_ConstUint16Field PowerState;
    /*IN*/ MI_ConstDatetimeField Time;
}
MSFT_LinkAggregation_SetPowerState;

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_SetPowerState_Set_MIReturn(
    MSFT_LinkAggregation_SetPowerState* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->MIReturn)->value = x;
    ((MI_Uint32Field*)&self->MIReturn)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_SetPowerState_Clear_MIReturn(
    MSFT_LinkAggregation_SetPowerState* self)
{
    memset((void*)&self->MIReturn, 0, sizeof(self->MIReturn));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_SetPowerState_Set_PowerState(
    MSFT_LinkAggregation_SetPowerState* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->PowerState)->value = x;
    ((MI_Uint16Field*)&self->PowerState)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_SetPowerState_Clear_PowerState(
    MSFT_LinkAggregation_SetPowerState* self)
{
    memset((void*)&self->PowerState, 0, sizeof(self->PowerState));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_SetPowerState_Set_Time(
    MSFT_LinkAggregation_SetPowerState* self,
    MI_Datetime x)
{
    ((MI_DatetimeField*)&self->Time)->value = x;
    ((MI_DatetimeField*)&self->Time)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_SetPowerState_Clear_Time(
    MSFT_LinkAggregation_SetPowerState* self)
{
    memset((void*)&self->Time, 0, sizeof(self->Time));
    return MI_RESULT_OK;
}

/*
**==============================================================================
**
** MSFT_LinkAggregation.Reset()
**
**==============================================================================
*/

typedef struct _MSFT_LinkAggregation_Reset
{
    MI_Instance __instance;
    /*OUT*/ MI_ConstUint32Field MIReturn;
}
MSFT_LinkAggregation_Reset;

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Reset_Set_MIReturn(
    MSFT_LinkAggregation_Reset* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->MIReturn)->value = x;
    ((MI_Uint32Field*)&self->MIReturn)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_Reset_Clear_MIReturn(
    MSFT_LinkAggregation_Reset* self)
{
    memset((void*)&self->MIReturn, 0, sizeof(self->MIReturn));
    return MI_RESULT_OK;
}

/*
**==============================================================================
**
** MSFT_LinkAggregation.EnableDevice()
**
**==============================================================================
*/

typedef struct _MSFT_LinkAggregation_EnableDevice
{
    MI_Instance __instance;
    /*OUT*/ MI_ConstUint32Field MIReturn;
    /*IN*/ MI_ConstBooleanField Enabled;
}
MSFT_LinkAggregation_EnableDevice;

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_EnableDevice_Set_MIReturn(
    MSFT_LinkAggregation_EnableDevice* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->MIReturn)->value = x;
    ((MI_Uint32Field*)&self->MIReturn)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_EnableDevice_Clear_MIReturn(
    MSFT_LinkAggregation_EnableDevice* self)
{
    memset((void*)&self->MIReturn, 0, sizeof(self->MIReturn));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_EnableDevice_Set_Enabled(
    MSFT_LinkAggregation_EnableDevice* self,
    MI_Boolean x)
{
    ((MI_BooleanField*)&self->Enabled)->value = x;
    ((MI_BooleanField*)&self->Enabled)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_EnableDevice_Clear_Enabled(
    MSFT_LinkAggregation_EnableDevice* self)
{
    memset((void*)&self->Enabled, 0, sizeof(self->Enabled));
    return MI_RESULT_OK;
}

/*
**==============================================================================
**
** MSFT_LinkAggregation.OnlineDevice()
**
**==============================================================================
*/

typedef struct _MSFT_LinkAggregation_OnlineDevice
{
    MI_Instance __instance;
    /*OUT*/ MI_ConstUint32Field MIReturn;
    /*IN*/ MI_ConstBooleanField Online;
}
MSFT_LinkAggregation_OnlineDevice;

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_OnlineDevice_Set_MIReturn(
    MSFT_LinkAggregation_OnlineDevice* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->MIReturn)->value = x;
    ((MI_Uint32Field*)&self->MIReturn)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_OnlineDevice_Clear_MIReturn(
    MSFT_LinkAggregation_OnlineDevice* self)
{
    memset((void*)&self->MIReturn, 0, sizeof(self->MIReturn));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_OnlineDevice_Set_Online(
    MSFT_LinkAggregation_OnlineDevice* self,
    MI_Boolean x)
{
    ((MI_BooleanField*)&self->Online)->value = x;
    ((MI_BooleanField*)&self->Online)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_OnlineDevice_Clear_Online(
    MSFT_LinkAggregation_OnlineDevice* self)
{
    memset((void*)&self->Online, 0, sizeof(self->Online));
    return MI_RESULT_OK;
}

/*
**==============================================================================
**
** MSFT_LinkAggregation.QuiesceDevice()
**
**==============================================================================
*/

typedef struct _MSFT_LinkAggregation_QuiesceDevice
{
    MI_Instance __instance;
    /*OUT*/ MI_ConstUint32Field MIReturn;
    /*IN*/ MI_ConstBooleanField Quiesce;
}
MSFT_LinkAggregation_QuiesceDevice;

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_QuiesceDevice_Set_MIReturn(
    MSFT_LinkAggregation_QuiesceDevice* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->MIReturn)->value = x;
    ((MI_Uint32Field*)&self->MIReturn)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_QuiesceDevice_Clear_MIReturn(
    MSFT_LinkAggregation_QuiesceDevice* self)
{
    memset((void*)&self->MIReturn, 0, sizeof(self->MIReturn));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_QuiesceDevice_Set_Quiesce(
    MSFT_LinkAggregation_QuiesceDevice* self,
    MI_Boolean x)
{
    ((MI_BooleanField*)&self->Quiesce)->value = x;
    ((MI_BooleanField*)&self->Quiesce)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_QuiesceDevice_Clear_Quiesce(
    MSFT_LinkAggregation_QuiesceDevice* self)
{
    memset((void*)&self->Quiesce, 0, sizeof(self->Quiesce));
    return MI_RESULT_OK;
}

/*
**==============================================================================
**
** MSFT_LinkAggregation.SaveProperties()
**
**==============================================================================
*/

typedef struct _MSFT_LinkAggregation_SaveProperties
{
    MI_Instance __instance;
    /*OUT*/ MI_ConstUint32Field MIReturn;
}
MSFT_LinkAggregation_SaveProperties;

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_SaveProperties_Set_MIReturn(
    MSFT_LinkAggregation_SaveProperties* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->MIReturn)->value = x;
    ((MI_Uint32Field*)&self->MIReturn)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_SaveProperties_Clear_MIReturn(
    MSFT_LinkAggregation_SaveProperties* self)
{
    memset((void*)&self->MIReturn, 0, sizeof(self->MIReturn));
    return MI_RESULT_OK;
}

/*
**==============================================================================
**
** MSFT_LinkAggregation.RestoreProperties()
**
**==============================================================================
*/

typedef struct _MSFT_LinkAggregation_RestoreProperties
{
    MI_Instance __instance;
    /*OUT*/ MI_ConstUint32Field MIReturn;
}
MSFT_LinkAggregation_RestoreProperties;

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_RestoreProperties_Set_MIReturn(
    MSFT_LinkAggregation_RestoreProperties* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->MIReturn)->value = x;
    ((MI_Uint32Field*)&self->MIReturn)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_LinkAggregation_RestoreProperties_Clear_MIReturn(
    MSFT_LinkAggregation_RestoreProperties* self)
{
    memset((void*)&self->MIReturn, 0, sizeof(self->MIReturn));
    return MI_RESULT_OK;
}


#endif /* _MSFT_LinkAggregation_h */
