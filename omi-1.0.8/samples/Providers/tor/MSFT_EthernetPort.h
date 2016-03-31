/* @migen@ */
/*
**==============================================================================
**
** WARNING: THIS FILE WAS AUTOMATICALLY GENERATED. PLEASE DO NOT EDIT.
**
**==============================================================================
*/
#ifndef _MSFT_EthernetPort_h
#define _MSFT_EthernetPort_h

#include <MI.h>
#include "CIM_EthernetPort.h"
#include "CIM_ConcreteJob.h"

/*
**==============================================================================
**
** MSFT_EthernetPort [MSFT_EthernetPort]
**
** Keys:
**    SystemCreationClassName
**    SystemName
**    CreationClassName
**    DeviceID
**
**==============================================================================
*/

typedef struct _MSFT_EthernetPort /* extends CIM_EthernetPort */
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
}
MSFT_EthernetPort;

typedef struct _MSFT_EthernetPort_Ref
{
    MSFT_EthernetPort* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MSFT_EthernetPort_Ref;

typedef struct _MSFT_EthernetPort_ConstRef
{
    MI_CONST MSFT_EthernetPort* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MSFT_EthernetPort_ConstRef;

typedef struct _MSFT_EthernetPort_Array
{
    struct _MSFT_EthernetPort** data;
    MI_Uint32 size;
}
MSFT_EthernetPort_Array;

typedef struct _MSFT_EthernetPort_ConstArray
{
    struct _MSFT_EthernetPort MI_CONST* MI_CONST* data;
    MI_Uint32 size;
}
MSFT_EthernetPort_ConstArray;

typedef struct _MSFT_EthernetPort_ArrayRef
{
    MSFT_EthernetPort_Array value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MSFT_EthernetPort_ArrayRef;

typedef struct _MSFT_EthernetPort_ConstArrayRef
{
    MSFT_EthernetPort_ConstArray value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MSFT_EthernetPort_ConstArrayRef;

MI_EXTERN_C MI_CONST MI_ClassDecl MSFT_EthernetPort_rtti;

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Construct(
    MSFT_EthernetPort* self,
    MI_Context* context)
{
    return MI_ConstructInstance(context, &MSFT_EthernetPort_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Clone(
    const MSFT_EthernetPort* self,
    MSFT_EthernetPort** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Boolean MI_CALL MSFT_EthernetPort_IsA(
    const MI_Instance* self)
{
    MI_Boolean res = MI_FALSE;
    return MI_Instance_IsA(self, &MSFT_EthernetPort_rtti, &res) == MI_RESULT_OK && res;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Destruct(MSFT_EthernetPort* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Delete(MSFT_EthernetPort* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Post(
    const MSFT_EthernetPort* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Set_InstanceID(
    MSFT_EthernetPort* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        0,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_SetPtr_InstanceID(
    MSFT_EthernetPort* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        0,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Clear_InstanceID(
    MSFT_EthernetPort* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Set_Caption(
    MSFT_EthernetPort* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_SetPtr_Caption(
    MSFT_EthernetPort* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Clear_Caption(
    MSFT_EthernetPort* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        1);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Set_Description(
    MSFT_EthernetPort* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_SetPtr_Description(
    MSFT_EthernetPort* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Clear_Description(
    MSFT_EthernetPort* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        2);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Set_ElementName(
    MSFT_EthernetPort* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_SetPtr_ElementName(
    MSFT_EthernetPort* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Clear_ElementName(
    MSFT_EthernetPort* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        3);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Set_InstallDate(
    MSFT_EthernetPort* self,
    MI_Datetime x)
{
    ((MI_DatetimeField*)&self->InstallDate)->value = x;
    ((MI_DatetimeField*)&self->InstallDate)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Clear_InstallDate(
    MSFT_EthernetPort* self)
{
    memset((void*)&self->InstallDate, 0, sizeof(self->InstallDate));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Set_Name(
    MSFT_EthernetPort* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        5,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_SetPtr_Name(
    MSFT_EthernetPort* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        5,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Clear_Name(
    MSFT_EthernetPort* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        5);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Set_OperationalStatus(
    MSFT_EthernetPort* self,
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

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_SetPtr_OperationalStatus(
    MSFT_EthernetPort* self,
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

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Clear_OperationalStatus(
    MSFT_EthernetPort* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        6);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Set_StatusDescriptions(
    MSFT_EthernetPort* self,
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

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_SetPtr_StatusDescriptions(
    MSFT_EthernetPort* self,
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

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Clear_StatusDescriptions(
    MSFT_EthernetPort* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        7);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Set_Status(
    MSFT_EthernetPort* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        8,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_SetPtr_Status(
    MSFT_EthernetPort* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        8,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Clear_Status(
    MSFT_EthernetPort* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        8);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Set_HealthState(
    MSFT_EthernetPort* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->HealthState)->value = x;
    ((MI_Uint16Field*)&self->HealthState)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Clear_HealthState(
    MSFT_EthernetPort* self)
{
    memset((void*)&self->HealthState, 0, sizeof(self->HealthState));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Set_CommunicationStatus(
    MSFT_EthernetPort* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->CommunicationStatus)->value = x;
    ((MI_Uint16Field*)&self->CommunicationStatus)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Clear_CommunicationStatus(
    MSFT_EthernetPort* self)
{
    memset((void*)&self->CommunicationStatus, 0, sizeof(self->CommunicationStatus));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Set_DetailedStatus(
    MSFT_EthernetPort* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->DetailedStatus)->value = x;
    ((MI_Uint16Field*)&self->DetailedStatus)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Clear_DetailedStatus(
    MSFT_EthernetPort* self)
{
    memset((void*)&self->DetailedStatus, 0, sizeof(self->DetailedStatus));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Set_OperatingStatus(
    MSFT_EthernetPort* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->OperatingStatus)->value = x;
    ((MI_Uint16Field*)&self->OperatingStatus)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Clear_OperatingStatus(
    MSFT_EthernetPort* self)
{
    memset((void*)&self->OperatingStatus, 0, sizeof(self->OperatingStatus));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Set_PrimaryStatus(
    MSFT_EthernetPort* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->PrimaryStatus)->value = x;
    ((MI_Uint16Field*)&self->PrimaryStatus)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Clear_PrimaryStatus(
    MSFT_EthernetPort* self)
{
    memset((void*)&self->PrimaryStatus, 0, sizeof(self->PrimaryStatus));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Set_EnabledState(
    MSFT_EthernetPort* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->EnabledState)->value = x;
    ((MI_Uint16Field*)&self->EnabledState)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Clear_EnabledState(
    MSFT_EthernetPort* self)
{
    memset((void*)&self->EnabledState, 0, sizeof(self->EnabledState));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Set_OtherEnabledState(
    MSFT_EthernetPort* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        15,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_SetPtr_OtherEnabledState(
    MSFT_EthernetPort* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        15,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Clear_OtherEnabledState(
    MSFT_EthernetPort* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        15);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Set_RequestedState(
    MSFT_EthernetPort* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->RequestedState)->value = x;
    ((MI_Uint16Field*)&self->RequestedState)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Clear_RequestedState(
    MSFT_EthernetPort* self)
{
    memset((void*)&self->RequestedState, 0, sizeof(self->RequestedState));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Set_EnabledDefault(
    MSFT_EthernetPort* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->EnabledDefault)->value = x;
    ((MI_Uint16Field*)&self->EnabledDefault)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Clear_EnabledDefault(
    MSFT_EthernetPort* self)
{
    memset((void*)&self->EnabledDefault, 0, sizeof(self->EnabledDefault));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Set_TimeOfLastStateChange(
    MSFT_EthernetPort* self,
    MI_Datetime x)
{
    ((MI_DatetimeField*)&self->TimeOfLastStateChange)->value = x;
    ((MI_DatetimeField*)&self->TimeOfLastStateChange)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Clear_TimeOfLastStateChange(
    MSFT_EthernetPort* self)
{
    memset((void*)&self->TimeOfLastStateChange, 0, sizeof(self->TimeOfLastStateChange));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Set_AvailableRequestedStates(
    MSFT_EthernetPort* self,
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

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_SetPtr_AvailableRequestedStates(
    MSFT_EthernetPort* self,
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

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Clear_AvailableRequestedStates(
    MSFT_EthernetPort* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        19);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Set_TransitioningToState(
    MSFT_EthernetPort* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->TransitioningToState)->value = x;
    ((MI_Uint16Field*)&self->TransitioningToState)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Clear_TransitioningToState(
    MSFT_EthernetPort* self)
{
    memset((void*)&self->TransitioningToState, 0, sizeof(self->TransitioningToState));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Set_SystemCreationClassName(
    MSFT_EthernetPort* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        21,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_SetPtr_SystemCreationClassName(
    MSFT_EthernetPort* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        21,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Clear_SystemCreationClassName(
    MSFT_EthernetPort* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        21);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Set_SystemName(
    MSFT_EthernetPort* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        22,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_SetPtr_SystemName(
    MSFT_EthernetPort* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        22,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Clear_SystemName(
    MSFT_EthernetPort* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        22);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Set_CreationClassName(
    MSFT_EthernetPort* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        23,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_SetPtr_CreationClassName(
    MSFT_EthernetPort* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        23,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Clear_CreationClassName(
    MSFT_EthernetPort* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        23);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Set_DeviceID(
    MSFT_EthernetPort* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        24,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_SetPtr_DeviceID(
    MSFT_EthernetPort* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        24,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Clear_DeviceID(
    MSFT_EthernetPort* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        24);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Set_PowerManagementSupported(
    MSFT_EthernetPort* self,
    MI_Boolean x)
{
    ((MI_BooleanField*)&self->PowerManagementSupported)->value = x;
    ((MI_BooleanField*)&self->PowerManagementSupported)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Clear_PowerManagementSupported(
    MSFT_EthernetPort* self)
{
    memset((void*)&self->PowerManagementSupported, 0, sizeof(self->PowerManagementSupported));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Set_PowerManagementCapabilities(
    MSFT_EthernetPort* self,
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

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_SetPtr_PowerManagementCapabilities(
    MSFT_EthernetPort* self,
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

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Clear_PowerManagementCapabilities(
    MSFT_EthernetPort* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        26);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Set_Availability(
    MSFT_EthernetPort* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->Availability)->value = x;
    ((MI_Uint16Field*)&self->Availability)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Clear_Availability(
    MSFT_EthernetPort* self)
{
    memset((void*)&self->Availability, 0, sizeof(self->Availability));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Set_StatusInfo(
    MSFT_EthernetPort* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->StatusInfo)->value = x;
    ((MI_Uint16Field*)&self->StatusInfo)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Clear_StatusInfo(
    MSFT_EthernetPort* self)
{
    memset((void*)&self->StatusInfo, 0, sizeof(self->StatusInfo));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Set_LastErrorCode(
    MSFT_EthernetPort* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->LastErrorCode)->value = x;
    ((MI_Uint32Field*)&self->LastErrorCode)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Clear_LastErrorCode(
    MSFT_EthernetPort* self)
{
    memset((void*)&self->LastErrorCode, 0, sizeof(self->LastErrorCode));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Set_ErrorDescription(
    MSFT_EthernetPort* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        30,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_SetPtr_ErrorDescription(
    MSFT_EthernetPort* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        30,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Clear_ErrorDescription(
    MSFT_EthernetPort* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        30);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Set_ErrorCleared(
    MSFT_EthernetPort* self,
    MI_Boolean x)
{
    ((MI_BooleanField*)&self->ErrorCleared)->value = x;
    ((MI_BooleanField*)&self->ErrorCleared)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Clear_ErrorCleared(
    MSFT_EthernetPort* self)
{
    memset((void*)&self->ErrorCleared, 0, sizeof(self->ErrorCleared));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Set_OtherIdentifyingInfo(
    MSFT_EthernetPort* self,
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

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_SetPtr_OtherIdentifyingInfo(
    MSFT_EthernetPort* self,
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

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Clear_OtherIdentifyingInfo(
    MSFT_EthernetPort* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        32);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Set_PowerOnHours(
    MSFT_EthernetPort* self,
    MI_Uint64 x)
{
    ((MI_Uint64Field*)&self->PowerOnHours)->value = x;
    ((MI_Uint64Field*)&self->PowerOnHours)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Clear_PowerOnHours(
    MSFT_EthernetPort* self)
{
    memset((void*)&self->PowerOnHours, 0, sizeof(self->PowerOnHours));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Set_TotalPowerOnHours(
    MSFT_EthernetPort* self,
    MI_Uint64 x)
{
    ((MI_Uint64Field*)&self->TotalPowerOnHours)->value = x;
    ((MI_Uint64Field*)&self->TotalPowerOnHours)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Clear_TotalPowerOnHours(
    MSFT_EthernetPort* self)
{
    memset((void*)&self->TotalPowerOnHours, 0, sizeof(self->TotalPowerOnHours));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Set_IdentifyingDescriptions(
    MSFT_EthernetPort* self,
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

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_SetPtr_IdentifyingDescriptions(
    MSFT_EthernetPort* self,
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

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Clear_IdentifyingDescriptions(
    MSFT_EthernetPort* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        35);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Set_AdditionalAvailability(
    MSFT_EthernetPort* self,
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

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_SetPtr_AdditionalAvailability(
    MSFT_EthernetPort* self,
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

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Clear_AdditionalAvailability(
    MSFT_EthernetPort* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        36);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Set_MaxQuiesceTime(
    MSFT_EthernetPort* self,
    MI_Uint64 x)
{
    ((MI_Uint64Field*)&self->MaxQuiesceTime)->value = x;
    ((MI_Uint64Field*)&self->MaxQuiesceTime)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Clear_MaxQuiesceTime(
    MSFT_EthernetPort* self)
{
    memset((void*)&self->MaxQuiesceTime, 0, sizeof(self->MaxQuiesceTime));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Set_Speed(
    MSFT_EthernetPort* self,
    MI_Uint64 x)
{
    ((MI_Uint64Field*)&self->Speed)->value = x;
    ((MI_Uint64Field*)&self->Speed)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Clear_Speed(
    MSFT_EthernetPort* self)
{
    memset((void*)&self->Speed, 0, sizeof(self->Speed));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Set_MaxSpeed(
    MSFT_EthernetPort* self,
    MI_Uint64 x)
{
    ((MI_Uint64Field*)&self->MaxSpeed)->value = x;
    ((MI_Uint64Field*)&self->MaxSpeed)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Clear_MaxSpeed(
    MSFT_EthernetPort* self)
{
    memset((void*)&self->MaxSpeed, 0, sizeof(self->MaxSpeed));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Set_RequestedSpeed(
    MSFT_EthernetPort* self,
    MI_Uint64 x)
{
    ((MI_Uint64Field*)&self->RequestedSpeed)->value = x;
    ((MI_Uint64Field*)&self->RequestedSpeed)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Clear_RequestedSpeed(
    MSFT_EthernetPort* self)
{
    memset((void*)&self->RequestedSpeed, 0, sizeof(self->RequestedSpeed));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Set_UsageRestriction(
    MSFT_EthernetPort* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->UsageRestriction)->value = x;
    ((MI_Uint16Field*)&self->UsageRestriction)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Clear_UsageRestriction(
    MSFT_EthernetPort* self)
{
    memset((void*)&self->UsageRestriction, 0, sizeof(self->UsageRestriction));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Set_PortType(
    MSFT_EthernetPort* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->PortType)->value = x;
    ((MI_Uint16Field*)&self->PortType)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Clear_PortType(
    MSFT_EthernetPort* self)
{
    memset((void*)&self->PortType, 0, sizeof(self->PortType));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Set_OtherPortType(
    MSFT_EthernetPort* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        43,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_SetPtr_OtherPortType(
    MSFT_EthernetPort* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        43,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Clear_OtherPortType(
    MSFT_EthernetPort* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        43);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Set_OtherNetworkPortType(
    MSFT_EthernetPort* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        44,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_SetPtr_OtherNetworkPortType(
    MSFT_EthernetPort* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        44,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Clear_OtherNetworkPortType(
    MSFT_EthernetPort* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        44);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Set_PortNumber(
    MSFT_EthernetPort* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->PortNumber)->value = x;
    ((MI_Uint16Field*)&self->PortNumber)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Clear_PortNumber(
    MSFT_EthernetPort* self)
{
    memset((void*)&self->PortNumber, 0, sizeof(self->PortNumber));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Set_LinkTechnology(
    MSFT_EthernetPort* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->LinkTechnology)->value = x;
    ((MI_Uint16Field*)&self->LinkTechnology)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Clear_LinkTechnology(
    MSFT_EthernetPort* self)
{
    memset((void*)&self->LinkTechnology, 0, sizeof(self->LinkTechnology));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Set_OtherLinkTechnology(
    MSFT_EthernetPort* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        47,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_SetPtr_OtherLinkTechnology(
    MSFT_EthernetPort* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        47,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Clear_OtherLinkTechnology(
    MSFT_EthernetPort* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        47);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Set_PermanentAddress(
    MSFT_EthernetPort* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        48,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_SetPtr_PermanentAddress(
    MSFT_EthernetPort* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        48,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Clear_PermanentAddress(
    MSFT_EthernetPort* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        48);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Set_NetworkAddresses(
    MSFT_EthernetPort* self,
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

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_SetPtr_NetworkAddresses(
    MSFT_EthernetPort* self,
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

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Clear_NetworkAddresses(
    MSFT_EthernetPort* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        49);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Set_FullDuplex(
    MSFT_EthernetPort* self,
    MI_Boolean x)
{
    ((MI_BooleanField*)&self->FullDuplex)->value = x;
    ((MI_BooleanField*)&self->FullDuplex)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Clear_FullDuplex(
    MSFT_EthernetPort* self)
{
    memset((void*)&self->FullDuplex, 0, sizeof(self->FullDuplex));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Set_AutoSense(
    MSFT_EthernetPort* self,
    MI_Boolean x)
{
    ((MI_BooleanField*)&self->AutoSense)->value = x;
    ((MI_BooleanField*)&self->AutoSense)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Clear_AutoSense(
    MSFT_EthernetPort* self)
{
    memset((void*)&self->AutoSense, 0, sizeof(self->AutoSense));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Set_SupportedMaximumTransmissionUnit(
    MSFT_EthernetPort* self,
    MI_Uint64 x)
{
    ((MI_Uint64Field*)&self->SupportedMaximumTransmissionUnit)->value = x;
    ((MI_Uint64Field*)&self->SupportedMaximumTransmissionUnit)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Clear_SupportedMaximumTransmissionUnit(
    MSFT_EthernetPort* self)
{
    memset((void*)&self->SupportedMaximumTransmissionUnit, 0, sizeof(self->SupportedMaximumTransmissionUnit));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Set_ActiveMaximumTransmissionUnit(
    MSFT_EthernetPort* self,
    MI_Uint64 x)
{
    ((MI_Uint64Field*)&self->ActiveMaximumTransmissionUnit)->value = x;
    ((MI_Uint64Field*)&self->ActiveMaximumTransmissionUnit)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Clear_ActiveMaximumTransmissionUnit(
    MSFT_EthernetPort* self)
{
    memset((void*)&self->ActiveMaximumTransmissionUnit, 0, sizeof(self->ActiveMaximumTransmissionUnit));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Set_MaxDataSize(
    MSFT_EthernetPort* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->MaxDataSize)->value = x;
    ((MI_Uint32Field*)&self->MaxDataSize)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Clear_MaxDataSize(
    MSFT_EthernetPort* self)
{
    memset((void*)&self->MaxDataSize, 0, sizeof(self->MaxDataSize));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Set_Capabilities(
    MSFT_EthernetPort* self,
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

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_SetPtr_Capabilities(
    MSFT_EthernetPort* self,
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

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Clear_Capabilities(
    MSFT_EthernetPort* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        55);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Set_CapabilityDescriptions(
    MSFT_EthernetPort* self,
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

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_SetPtr_CapabilityDescriptions(
    MSFT_EthernetPort* self,
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

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Clear_CapabilityDescriptions(
    MSFT_EthernetPort* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        56);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Set_EnabledCapabilities(
    MSFT_EthernetPort* self,
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

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_SetPtr_EnabledCapabilities(
    MSFT_EthernetPort* self,
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

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Clear_EnabledCapabilities(
    MSFT_EthernetPort* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        57);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Set_OtherEnabledCapabilities(
    MSFT_EthernetPort* self,
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

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_SetPtr_OtherEnabledCapabilities(
    MSFT_EthernetPort* self,
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

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Clear_OtherEnabledCapabilities(
    MSFT_EthernetPort* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        58);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Set_LACPPortPriority(
    MSFT_EthernetPort* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->LACPPortPriority)->value = x;
    ((MI_Uint16Field*)&self->LACPPortPriority)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Clear_LACPPortPriority(
    MSFT_EthernetPort* self)
{
    memset((void*)&self->LACPPortPriority, 0, sizeof(self->LACPPortPriority));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Set_LACPMode(
    MSFT_EthernetPort* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->LACPMode)->value = x;
    ((MI_Uint16Field*)&self->LACPMode)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Clear_LACPMode(
    MSFT_EthernetPort* self)
{
    memset((void*)&self->LACPMode, 0, sizeof(self->LACPMode));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Set_LACPGroupNumber(
    MSFT_EthernetPort* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->LACPGroupNumber)->value = x;
    ((MI_Uint16Field*)&self->LACPGroupNumber)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Clear_LACPGroupNumber(
    MSFT_EthernetPort* self)
{
    memset((void*)&self->LACPGroupNumber, 0, sizeof(self->LACPGroupNumber));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Set_SpanningTreePortType(
    MSFT_EthernetPort* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->SpanningTreePortType)->value = x;
    ((MI_Uint16Field*)&self->SpanningTreePortType)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Clear_SpanningTreePortType(
    MSFT_EthernetPort* self)
{
    memset((void*)&self->SpanningTreePortType, 0, sizeof(self->SpanningTreePortType));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Set_LLDPTransmitEnabled(
    MSFT_EthernetPort* self,
    MI_Boolean x)
{
    ((MI_BooleanField*)&self->LLDPTransmitEnabled)->value = x;
    ((MI_BooleanField*)&self->LLDPTransmitEnabled)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Clear_LLDPTransmitEnabled(
    MSFT_EthernetPort* self)
{
    memset((void*)&self->LLDPTransmitEnabled, 0, sizeof(self->LLDPTransmitEnabled));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Set_LLDPReceiveEnabled(
    MSFT_EthernetPort* self,
    MI_Boolean x)
{
    ((MI_BooleanField*)&self->LLDPReceiveEnabled)->value = x;
    ((MI_BooleanField*)&self->LLDPReceiveEnabled)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Clear_LLDPReceiveEnabled(
    MSFT_EthernetPort* self)
{
    memset((void*)&self->LLDPReceiveEnabled, 0, sizeof(self->LLDPReceiveEnabled));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Set_cdpEnabled(
    MSFT_EthernetPort* self,
    MI_Boolean x)
{
    ((MI_BooleanField*)&self->cdpEnabled)->value = x;
    ((MI_BooleanField*)&self->cdpEnabled)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Clear_cdpEnabled(
    MSFT_EthernetPort* self)
{
    memset((void*)&self->cdpEnabled, 0, sizeof(self->cdpEnabled));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Set_SNMPLinkStatusTrapEnabled(
    MSFT_EthernetPort* self,
    MI_Boolean x)
{
    ((MI_BooleanField*)&self->SNMPLinkStatusTrapEnabled)->value = x;
    ((MI_BooleanField*)&self->SNMPLinkStatusTrapEnabled)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Clear_SNMPLinkStatusTrapEnabled(
    MSFT_EthernetPort* self)
{
    memset((void*)&self->SNMPLinkStatusTrapEnabled, 0, sizeof(self->SNMPLinkStatusTrapEnabled));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Set_LLDPRemotePortID(
    MSFT_EthernetPort* self,
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

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_SetPtr_LLDPRemotePortID(
    MSFT_EthernetPort* self,
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

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Clear_LLDPRemotePortID(
    MSFT_EthernetPort* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        67);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Set_LLDPRemotePortIDType(
    MSFT_EthernetPort* self,
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

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_SetPtr_LLDPRemotePortIDType(
    MSFT_EthernetPort* self,
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

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Clear_LLDPRemotePortIDType(
    MSFT_EthernetPort* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        68);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Set_LLDPRemoteDeviceID(
    MSFT_EthernetPort* self,
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

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_SetPtr_LLDPRemoteDeviceID(
    MSFT_EthernetPort* self,
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

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Clear_LLDPRemoteDeviceID(
    MSFT_EthernetPort* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        69);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Set_LLDPRemoteDeviceIDType(
    MSFT_EthernetPort* self,
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

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_SetPtr_LLDPRemoteDeviceIDType(
    MSFT_EthernetPort* self,
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

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Clear_LLDPRemoteDeviceIDType(
    MSFT_EthernetPort* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        70);
}

/*
**==============================================================================
**
** MSFT_EthernetPort.RequestStateChange()
**
**==============================================================================
*/

typedef struct _MSFT_EthernetPort_RequestStateChange
{
    MI_Instance __instance;
    /*OUT*/ MI_ConstUint32Field MIReturn;
    /*IN*/ MI_ConstUint16Field RequestedState;
    /*OUT*/ CIM_ConcreteJob_ConstRef Job;
    /*IN*/ MI_ConstDatetimeField TimeoutPeriod;
}
MSFT_EthernetPort_RequestStateChange;

MI_EXTERN_C MI_CONST MI_MethodDecl MSFT_EthernetPort_RequestStateChange_rtti;

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_RequestStateChange_Construct(
    MSFT_EthernetPort_RequestStateChange* self,
    MI_Context* context)
{
    return MI_ConstructParameters(context, &MSFT_EthernetPort_RequestStateChange_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_RequestStateChange_Clone(
    const MSFT_EthernetPort_RequestStateChange* self,
    MSFT_EthernetPort_RequestStateChange** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_RequestStateChange_Destruct(
    MSFT_EthernetPort_RequestStateChange* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_RequestStateChange_Delete(
    MSFT_EthernetPort_RequestStateChange* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_RequestStateChange_Post(
    const MSFT_EthernetPort_RequestStateChange* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_RequestStateChange_Set_MIReturn(
    MSFT_EthernetPort_RequestStateChange* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->MIReturn)->value = x;
    ((MI_Uint32Field*)&self->MIReturn)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_RequestStateChange_Clear_MIReturn(
    MSFT_EthernetPort_RequestStateChange* self)
{
    memset((void*)&self->MIReturn, 0, sizeof(self->MIReturn));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_RequestStateChange_Set_RequestedState(
    MSFT_EthernetPort_RequestStateChange* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->RequestedState)->value = x;
    ((MI_Uint16Field*)&self->RequestedState)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_RequestStateChange_Clear_RequestedState(
    MSFT_EthernetPort_RequestStateChange* self)
{
    memset((void*)&self->RequestedState, 0, sizeof(self->RequestedState));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_RequestStateChange_Set_Job(
    MSFT_EthernetPort_RequestStateChange* self,
    const CIM_ConcreteJob* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_RequestStateChange_SetPtr_Job(
    MSFT_EthernetPort_RequestStateChange* self,
    const CIM_ConcreteJob* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_RequestStateChange_Clear_Job(
    MSFT_EthernetPort_RequestStateChange* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        2);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_RequestStateChange_Set_TimeoutPeriod(
    MSFT_EthernetPort_RequestStateChange* self,
    MI_Datetime x)
{
    ((MI_DatetimeField*)&self->TimeoutPeriod)->value = x;
    ((MI_DatetimeField*)&self->TimeoutPeriod)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_RequestStateChange_Clear_TimeoutPeriod(
    MSFT_EthernetPort_RequestStateChange* self)
{
    memset((void*)&self->TimeoutPeriod, 0, sizeof(self->TimeoutPeriod));
    return MI_RESULT_OK;
}

/*
**==============================================================================
**
** MSFT_EthernetPort.SetPowerState()
**
**==============================================================================
*/

typedef struct _MSFT_EthernetPort_SetPowerState
{
    MI_Instance __instance;
    /*OUT*/ MI_ConstUint32Field MIReturn;
    /*IN*/ MI_ConstUint16Field PowerState;
    /*IN*/ MI_ConstDatetimeField Time;
}
MSFT_EthernetPort_SetPowerState;

MI_EXTERN_C MI_CONST MI_MethodDecl MSFT_EthernetPort_SetPowerState_rtti;

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_SetPowerState_Construct(
    MSFT_EthernetPort_SetPowerState* self,
    MI_Context* context)
{
    return MI_ConstructParameters(context, &MSFT_EthernetPort_SetPowerState_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_SetPowerState_Clone(
    const MSFT_EthernetPort_SetPowerState* self,
    MSFT_EthernetPort_SetPowerState** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_SetPowerState_Destruct(
    MSFT_EthernetPort_SetPowerState* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_SetPowerState_Delete(
    MSFT_EthernetPort_SetPowerState* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_SetPowerState_Post(
    const MSFT_EthernetPort_SetPowerState* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_SetPowerState_Set_MIReturn(
    MSFT_EthernetPort_SetPowerState* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->MIReturn)->value = x;
    ((MI_Uint32Field*)&self->MIReturn)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_SetPowerState_Clear_MIReturn(
    MSFT_EthernetPort_SetPowerState* self)
{
    memset((void*)&self->MIReturn, 0, sizeof(self->MIReturn));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_SetPowerState_Set_PowerState(
    MSFT_EthernetPort_SetPowerState* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->PowerState)->value = x;
    ((MI_Uint16Field*)&self->PowerState)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_SetPowerState_Clear_PowerState(
    MSFT_EthernetPort_SetPowerState* self)
{
    memset((void*)&self->PowerState, 0, sizeof(self->PowerState));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_SetPowerState_Set_Time(
    MSFT_EthernetPort_SetPowerState* self,
    MI_Datetime x)
{
    ((MI_DatetimeField*)&self->Time)->value = x;
    ((MI_DatetimeField*)&self->Time)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_SetPowerState_Clear_Time(
    MSFT_EthernetPort_SetPowerState* self)
{
    memset((void*)&self->Time, 0, sizeof(self->Time));
    return MI_RESULT_OK;
}

/*
**==============================================================================
**
** MSFT_EthernetPort.Reset()
**
**==============================================================================
*/

typedef struct _MSFT_EthernetPort_Reset
{
    MI_Instance __instance;
    /*OUT*/ MI_ConstUint32Field MIReturn;
}
MSFT_EthernetPort_Reset;

MI_EXTERN_C MI_CONST MI_MethodDecl MSFT_EthernetPort_Reset_rtti;

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Reset_Construct(
    MSFT_EthernetPort_Reset* self,
    MI_Context* context)
{
    return MI_ConstructParameters(context, &MSFT_EthernetPort_Reset_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Reset_Clone(
    const MSFT_EthernetPort_Reset* self,
    MSFT_EthernetPort_Reset** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Reset_Destruct(
    MSFT_EthernetPort_Reset* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Reset_Delete(
    MSFT_EthernetPort_Reset* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Reset_Post(
    const MSFT_EthernetPort_Reset* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Reset_Set_MIReturn(
    MSFT_EthernetPort_Reset* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->MIReturn)->value = x;
    ((MI_Uint32Field*)&self->MIReturn)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_Reset_Clear_MIReturn(
    MSFT_EthernetPort_Reset* self)
{
    memset((void*)&self->MIReturn, 0, sizeof(self->MIReturn));
    return MI_RESULT_OK;
}

/*
**==============================================================================
**
** MSFT_EthernetPort.EnableDevice()
**
**==============================================================================
*/

typedef struct _MSFT_EthernetPort_EnableDevice
{
    MI_Instance __instance;
    /*OUT*/ MI_ConstUint32Field MIReturn;
    /*IN*/ MI_ConstBooleanField Enabled;
}
MSFT_EthernetPort_EnableDevice;

MI_EXTERN_C MI_CONST MI_MethodDecl MSFT_EthernetPort_EnableDevice_rtti;

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_EnableDevice_Construct(
    MSFT_EthernetPort_EnableDevice* self,
    MI_Context* context)
{
    return MI_ConstructParameters(context, &MSFT_EthernetPort_EnableDevice_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_EnableDevice_Clone(
    const MSFT_EthernetPort_EnableDevice* self,
    MSFT_EthernetPort_EnableDevice** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_EnableDevice_Destruct(
    MSFT_EthernetPort_EnableDevice* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_EnableDevice_Delete(
    MSFT_EthernetPort_EnableDevice* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_EnableDevice_Post(
    const MSFT_EthernetPort_EnableDevice* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_EnableDevice_Set_MIReturn(
    MSFT_EthernetPort_EnableDevice* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->MIReturn)->value = x;
    ((MI_Uint32Field*)&self->MIReturn)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_EnableDevice_Clear_MIReturn(
    MSFT_EthernetPort_EnableDevice* self)
{
    memset((void*)&self->MIReturn, 0, sizeof(self->MIReturn));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_EnableDevice_Set_Enabled(
    MSFT_EthernetPort_EnableDevice* self,
    MI_Boolean x)
{
    ((MI_BooleanField*)&self->Enabled)->value = x;
    ((MI_BooleanField*)&self->Enabled)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_EnableDevice_Clear_Enabled(
    MSFT_EthernetPort_EnableDevice* self)
{
    memset((void*)&self->Enabled, 0, sizeof(self->Enabled));
    return MI_RESULT_OK;
}

/*
**==============================================================================
**
** MSFT_EthernetPort.OnlineDevice()
**
**==============================================================================
*/

typedef struct _MSFT_EthernetPort_OnlineDevice
{
    MI_Instance __instance;
    /*OUT*/ MI_ConstUint32Field MIReturn;
    /*IN*/ MI_ConstBooleanField Online;
}
MSFT_EthernetPort_OnlineDevice;

MI_EXTERN_C MI_CONST MI_MethodDecl MSFT_EthernetPort_OnlineDevice_rtti;

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_OnlineDevice_Construct(
    MSFT_EthernetPort_OnlineDevice* self,
    MI_Context* context)
{
    return MI_ConstructParameters(context, &MSFT_EthernetPort_OnlineDevice_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_OnlineDevice_Clone(
    const MSFT_EthernetPort_OnlineDevice* self,
    MSFT_EthernetPort_OnlineDevice** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_OnlineDevice_Destruct(
    MSFT_EthernetPort_OnlineDevice* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_OnlineDevice_Delete(
    MSFT_EthernetPort_OnlineDevice* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_OnlineDevice_Post(
    const MSFT_EthernetPort_OnlineDevice* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_OnlineDevice_Set_MIReturn(
    MSFT_EthernetPort_OnlineDevice* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->MIReturn)->value = x;
    ((MI_Uint32Field*)&self->MIReturn)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_OnlineDevice_Clear_MIReturn(
    MSFT_EthernetPort_OnlineDevice* self)
{
    memset((void*)&self->MIReturn, 0, sizeof(self->MIReturn));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_OnlineDevice_Set_Online(
    MSFT_EthernetPort_OnlineDevice* self,
    MI_Boolean x)
{
    ((MI_BooleanField*)&self->Online)->value = x;
    ((MI_BooleanField*)&self->Online)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_OnlineDevice_Clear_Online(
    MSFT_EthernetPort_OnlineDevice* self)
{
    memset((void*)&self->Online, 0, sizeof(self->Online));
    return MI_RESULT_OK;
}

/*
**==============================================================================
**
** MSFT_EthernetPort.QuiesceDevice()
**
**==============================================================================
*/

typedef struct _MSFT_EthernetPort_QuiesceDevice
{
    MI_Instance __instance;
    /*OUT*/ MI_ConstUint32Field MIReturn;
    /*IN*/ MI_ConstBooleanField Quiesce;
}
MSFT_EthernetPort_QuiesceDevice;

MI_EXTERN_C MI_CONST MI_MethodDecl MSFT_EthernetPort_QuiesceDevice_rtti;

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_QuiesceDevice_Construct(
    MSFT_EthernetPort_QuiesceDevice* self,
    MI_Context* context)
{
    return MI_ConstructParameters(context, &MSFT_EthernetPort_QuiesceDevice_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_QuiesceDevice_Clone(
    const MSFT_EthernetPort_QuiesceDevice* self,
    MSFT_EthernetPort_QuiesceDevice** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_QuiesceDevice_Destruct(
    MSFT_EthernetPort_QuiesceDevice* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_QuiesceDevice_Delete(
    MSFT_EthernetPort_QuiesceDevice* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_QuiesceDevice_Post(
    const MSFT_EthernetPort_QuiesceDevice* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_QuiesceDevice_Set_MIReturn(
    MSFT_EthernetPort_QuiesceDevice* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->MIReturn)->value = x;
    ((MI_Uint32Field*)&self->MIReturn)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_QuiesceDevice_Clear_MIReturn(
    MSFT_EthernetPort_QuiesceDevice* self)
{
    memset((void*)&self->MIReturn, 0, sizeof(self->MIReturn));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_QuiesceDevice_Set_Quiesce(
    MSFT_EthernetPort_QuiesceDevice* self,
    MI_Boolean x)
{
    ((MI_BooleanField*)&self->Quiesce)->value = x;
    ((MI_BooleanField*)&self->Quiesce)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_QuiesceDevice_Clear_Quiesce(
    MSFT_EthernetPort_QuiesceDevice* self)
{
    memset((void*)&self->Quiesce, 0, sizeof(self->Quiesce));
    return MI_RESULT_OK;
}

/*
**==============================================================================
**
** MSFT_EthernetPort.SaveProperties()
**
**==============================================================================
*/

typedef struct _MSFT_EthernetPort_SaveProperties
{
    MI_Instance __instance;
    /*OUT*/ MI_ConstUint32Field MIReturn;
}
MSFT_EthernetPort_SaveProperties;

MI_EXTERN_C MI_CONST MI_MethodDecl MSFT_EthernetPort_SaveProperties_rtti;

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_SaveProperties_Construct(
    MSFT_EthernetPort_SaveProperties* self,
    MI_Context* context)
{
    return MI_ConstructParameters(context, &MSFT_EthernetPort_SaveProperties_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_SaveProperties_Clone(
    const MSFT_EthernetPort_SaveProperties* self,
    MSFT_EthernetPort_SaveProperties** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_SaveProperties_Destruct(
    MSFT_EthernetPort_SaveProperties* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_SaveProperties_Delete(
    MSFT_EthernetPort_SaveProperties* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_SaveProperties_Post(
    const MSFT_EthernetPort_SaveProperties* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_SaveProperties_Set_MIReturn(
    MSFT_EthernetPort_SaveProperties* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->MIReturn)->value = x;
    ((MI_Uint32Field*)&self->MIReturn)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_SaveProperties_Clear_MIReturn(
    MSFT_EthernetPort_SaveProperties* self)
{
    memset((void*)&self->MIReturn, 0, sizeof(self->MIReturn));
    return MI_RESULT_OK;
}

/*
**==============================================================================
**
** MSFT_EthernetPort.RestoreProperties()
**
**==============================================================================
*/

typedef struct _MSFT_EthernetPort_RestoreProperties
{
    MI_Instance __instance;
    /*OUT*/ MI_ConstUint32Field MIReturn;
}
MSFT_EthernetPort_RestoreProperties;

MI_EXTERN_C MI_CONST MI_MethodDecl MSFT_EthernetPort_RestoreProperties_rtti;

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_RestoreProperties_Construct(
    MSFT_EthernetPort_RestoreProperties* self,
    MI_Context* context)
{
    return MI_ConstructParameters(context, &MSFT_EthernetPort_RestoreProperties_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_RestoreProperties_Clone(
    const MSFT_EthernetPort_RestoreProperties* self,
    MSFT_EthernetPort_RestoreProperties** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_RestoreProperties_Destruct(
    MSFT_EthernetPort_RestoreProperties* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_RestoreProperties_Delete(
    MSFT_EthernetPort_RestoreProperties* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_RestoreProperties_Post(
    const MSFT_EthernetPort_RestoreProperties* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_RestoreProperties_Set_MIReturn(
    MSFT_EthernetPort_RestoreProperties* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->MIReturn)->value = x;
    ((MI_Uint32Field*)&self->MIReturn)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_EthernetPort_RestoreProperties_Clear_MIReturn(
    MSFT_EthernetPort_RestoreProperties* self)
{
    memset((void*)&self->MIReturn, 0, sizeof(self->MIReturn));
    return MI_RESULT_OK;
}

/*
**==============================================================================
**
** MSFT_EthernetPort provider function prototypes
**
**==============================================================================
*/

/* The developer may optionally define this structure */
typedef struct _MSFT_EthernetPort_Self MSFT_EthernetPort_Self;

MI_EXTERN_C void MI_CALL MSFT_EthernetPort_Load(
    MSFT_EthernetPort_Self** self,
    MI_Module_Self* selfModule,
    MI_Context* context);

MI_EXTERN_C void MI_CALL MSFT_EthernetPort_Unload(
    MSFT_EthernetPort_Self* self,
    MI_Context* context);

MI_EXTERN_C void MI_CALL MSFT_EthernetPort_EnumerateInstances(
    MSFT_EthernetPort_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter);

MI_EXTERN_C void MI_CALL MSFT_EthernetPort_GetInstance(
    MSFT_EthernetPort_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MSFT_EthernetPort* instanceName,
    const MI_PropertySet* propertySet);

MI_EXTERN_C void MI_CALL MSFT_EthernetPort_CreateInstance(
    MSFT_EthernetPort_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MSFT_EthernetPort* newInstance);

MI_EXTERN_C void MI_CALL MSFT_EthernetPort_ModifyInstance(
    MSFT_EthernetPort_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MSFT_EthernetPort* modifiedInstance,
    const MI_PropertySet* propertySet);

MI_EXTERN_C void MI_CALL MSFT_EthernetPort_DeleteInstance(
    MSFT_EthernetPort_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MSFT_EthernetPort* instanceName);

MI_EXTERN_C void MI_CALL MSFT_EthernetPort_Invoke_RequestStateChange(
    MSFT_EthernetPort_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_EthernetPort* instanceName,
    const MSFT_EthernetPort_RequestStateChange* in);

MI_EXTERN_C void MI_CALL MSFT_EthernetPort_Invoke_SetPowerState(
    MSFT_EthernetPort_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_EthernetPort* instanceName,
    const MSFT_EthernetPort_SetPowerState* in);

MI_EXTERN_C void MI_CALL MSFT_EthernetPort_Invoke_Reset(
    MSFT_EthernetPort_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_EthernetPort* instanceName,
    const MSFT_EthernetPort_Reset* in);

MI_EXTERN_C void MI_CALL MSFT_EthernetPort_Invoke_EnableDevice(
    MSFT_EthernetPort_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_EthernetPort* instanceName,
    const MSFT_EthernetPort_EnableDevice* in);

MI_EXTERN_C void MI_CALL MSFT_EthernetPort_Invoke_OnlineDevice(
    MSFT_EthernetPort_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_EthernetPort* instanceName,
    const MSFT_EthernetPort_OnlineDevice* in);

MI_EXTERN_C void MI_CALL MSFT_EthernetPort_Invoke_QuiesceDevice(
    MSFT_EthernetPort_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_EthernetPort* instanceName,
    const MSFT_EthernetPort_QuiesceDevice* in);

MI_EXTERN_C void MI_CALL MSFT_EthernetPort_Invoke_SaveProperties(
    MSFT_EthernetPort_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_EthernetPort* instanceName,
    const MSFT_EthernetPort_SaveProperties* in);

MI_EXTERN_C void MI_CALL MSFT_EthernetPort_Invoke_RestoreProperties(
    MSFT_EthernetPort_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Char* methodName,
    const MSFT_EthernetPort* instanceName,
    const MSFT_EthernetPort_RestoreProperties* in);


#endif /* _MSFT_EthernetPort_h */
