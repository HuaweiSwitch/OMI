/* @migen@ */
/*
**==============================================================================
**
** WARNING: THIS FILE WAS AUTOMATICALLY GENERATED. PLEASE DO NOT EDIT.
**
**==============================================================================
*/
#ifndef _CIM_EthernetPortAllocationSettingData_h
#define _CIM_EthernetPortAllocationSettingData_h

#include <MI.h>
#include "CIM_ResourceAllocationSettingData.h"

/*
**==============================================================================
**
** CIM_EthernetPortAllocationSettingData [CIM_EthernetPortAllocationSettingData]
**
** Keys:
**    InstanceID
**
**==============================================================================
*/

typedef struct _CIM_EthernetPortAllocationSettingData /* extends CIM_ResourceAllocationSettingData */
{
    MI_Instance __instance;
    /* CIM_ManagedElement properties */
    /*KEY*/ MI_ConstStringField InstanceID;
    MI_ConstStringField Caption;
    MI_ConstStringField Description;
    MI_ConstStringField ElementName;
    /* CIM_SettingData properties */
    /* CIM_ResourceAllocationSettingData properties */
    MI_ConstUint16Field ResourceType;
    MI_ConstStringField OtherResourceType;
    MI_ConstStringField ResourceSubType;
    MI_ConstStringField PoolID;
    MI_ConstUint16Field ConsumerVisibility;
    MI_ConstStringAField HostResource;
    MI_ConstStringField AllocationUnits;
    MI_ConstUint64Field VirtualQuantity;
    MI_ConstUint64Field Reservation;
    MI_ConstUint64Field Limit;
    MI_ConstUint32Field Weight;
    MI_ConstBooleanField AutomaticAllocation;
    MI_ConstBooleanField AutomaticDeallocation;
    MI_ConstStringField Parent;
    MI_ConstStringAField Connection;
    MI_ConstStringField Address;
    MI_ConstUint16Field MappingBehavior;
    MI_ConstStringField AddressOnParent;
    MI_ConstStringField VirtualQuantityUnits;
    /* CIM_EthernetPortAllocationSettingData properties */
    MI_ConstUint16Field DesiredVLANEndpointMode;
    MI_ConstStringField OtherEndpointMode;
    MI_ConstUint16AField AllowedPriorities;
    MI_ConstStringAField AllowedToReceiveMACAddresses;
    MI_ConstUint16AField AllowedToReceiveVLANs;
    MI_ConstStringAField AllowedToTransmitMACAddresses;
    MI_ConstUint16AField AllowedToTransmitVLANs;
    MI_ConstUint16Field DefaultPortVID;
    MI_ConstUint16Field DefaultPriority;
    MI_ConstUint32Field GroupID;
    MI_ConstUint32Field ManagerID;
    MI_ConstStringField NetworkPortProfileID;
    MI_ConstUint16Field NetworkPortProfileIDType;
    MI_ConstStringField OtherNetworkPortProfileIDTypeInfo;
    MI_ConstStringField PortCorrelationID;
    MI_ConstUint16Field PortVID;
    MI_ConstBooleanField Promiscuous;
    MI_ConstUint64Field ReceiveBandwidthLimit;
    MI_ConstUint64Field ReceiveBandwidthReservation;
    MI_ConstBooleanField SourceMACFilteringEnabled;
}
CIM_EthernetPortAllocationSettingData;

typedef struct _CIM_EthernetPortAllocationSettingData_Ref
{
    CIM_EthernetPortAllocationSettingData* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
CIM_EthernetPortAllocationSettingData_Ref;

typedef struct _CIM_EthernetPortAllocationSettingData_ConstRef
{
    MI_CONST CIM_EthernetPortAllocationSettingData* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
CIM_EthernetPortAllocationSettingData_ConstRef;

typedef struct _CIM_EthernetPortAllocationSettingData_Array
{
    struct _CIM_EthernetPortAllocationSettingData** data;
    MI_Uint32 size;
}
CIM_EthernetPortAllocationSettingData_Array;

typedef struct _CIM_EthernetPortAllocationSettingData_ConstArray
{
    struct _CIM_EthernetPortAllocationSettingData MI_CONST* MI_CONST* data;
    MI_Uint32 size;
}
CIM_EthernetPortAllocationSettingData_ConstArray;

typedef struct _CIM_EthernetPortAllocationSettingData_ArrayRef
{
    CIM_EthernetPortAllocationSettingData_Array value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
CIM_EthernetPortAllocationSettingData_ArrayRef;

typedef struct _CIM_EthernetPortAllocationSettingData_ConstArrayRef
{
    CIM_EthernetPortAllocationSettingData_ConstArray value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
CIM_EthernetPortAllocationSettingData_ConstArrayRef;

MI_EXTERN_C MI_CONST MI_ClassDecl CIM_EthernetPortAllocationSettingData_rtti;

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Construct(
    CIM_EthernetPortAllocationSettingData* self,
    MI_Context* context)
{
    return MI_ConstructInstance(context, &CIM_EthernetPortAllocationSettingData_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Clone(
    const CIM_EthernetPortAllocationSettingData* self,
    CIM_EthernetPortAllocationSettingData** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Boolean MI_CALL CIM_EthernetPortAllocationSettingData_IsA(
    const MI_Instance* self)
{
    MI_Boolean res = MI_FALSE;
    return MI_Instance_IsA(self, &CIM_EthernetPortAllocationSettingData_rtti, &res) == MI_RESULT_OK && res;
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Destruct(CIM_EthernetPortAllocationSettingData* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Delete(CIM_EthernetPortAllocationSettingData* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Post(
    const CIM_EthernetPortAllocationSettingData* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Set_InstanceID(
    CIM_EthernetPortAllocationSettingData* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        0,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_SetPtr_InstanceID(
    CIM_EthernetPortAllocationSettingData* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        0,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Clear_InstanceID(
    CIM_EthernetPortAllocationSettingData* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Set_Caption(
    CIM_EthernetPortAllocationSettingData* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_SetPtr_Caption(
    CIM_EthernetPortAllocationSettingData* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Clear_Caption(
    CIM_EthernetPortAllocationSettingData* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        1);
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Set_Description(
    CIM_EthernetPortAllocationSettingData* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_SetPtr_Description(
    CIM_EthernetPortAllocationSettingData* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Clear_Description(
    CIM_EthernetPortAllocationSettingData* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        2);
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Set_ElementName(
    CIM_EthernetPortAllocationSettingData* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_SetPtr_ElementName(
    CIM_EthernetPortAllocationSettingData* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Clear_ElementName(
    CIM_EthernetPortAllocationSettingData* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        3);
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Set_ResourceType(
    CIM_EthernetPortAllocationSettingData* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->ResourceType)->value = x;
    ((MI_Uint16Field*)&self->ResourceType)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Clear_ResourceType(
    CIM_EthernetPortAllocationSettingData* self)
{
    memset((void*)&self->ResourceType, 0, sizeof(self->ResourceType));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Set_OtherResourceType(
    CIM_EthernetPortAllocationSettingData* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        5,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_SetPtr_OtherResourceType(
    CIM_EthernetPortAllocationSettingData* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        5,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Clear_OtherResourceType(
    CIM_EthernetPortAllocationSettingData* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        5);
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Set_ResourceSubType(
    CIM_EthernetPortAllocationSettingData* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        6,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_SetPtr_ResourceSubType(
    CIM_EthernetPortAllocationSettingData* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        6,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Clear_ResourceSubType(
    CIM_EthernetPortAllocationSettingData* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        6);
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Set_PoolID(
    CIM_EthernetPortAllocationSettingData* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        7,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_SetPtr_PoolID(
    CIM_EthernetPortAllocationSettingData* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        7,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Clear_PoolID(
    CIM_EthernetPortAllocationSettingData* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        7);
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Set_ConsumerVisibility(
    CIM_EthernetPortAllocationSettingData* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->ConsumerVisibility)->value = x;
    ((MI_Uint16Field*)&self->ConsumerVisibility)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Clear_ConsumerVisibility(
    CIM_EthernetPortAllocationSettingData* self)
{
    memset((void*)&self->ConsumerVisibility, 0, sizeof(self->ConsumerVisibility));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Set_HostResource(
    CIM_EthernetPortAllocationSettingData* self,
    const MI_Char** data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        9,
        (MI_Value*)&arr,
        MI_STRINGA,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_SetPtr_HostResource(
    CIM_EthernetPortAllocationSettingData* self,
    const MI_Char** data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        9,
        (MI_Value*)&arr,
        MI_STRINGA,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Clear_HostResource(
    CIM_EthernetPortAllocationSettingData* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        9);
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Set_AllocationUnits(
    CIM_EthernetPortAllocationSettingData* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        10,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_SetPtr_AllocationUnits(
    CIM_EthernetPortAllocationSettingData* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        10,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Clear_AllocationUnits(
    CIM_EthernetPortAllocationSettingData* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        10);
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Set_VirtualQuantity(
    CIM_EthernetPortAllocationSettingData* self,
    MI_Uint64 x)
{
    ((MI_Uint64Field*)&self->VirtualQuantity)->value = x;
    ((MI_Uint64Field*)&self->VirtualQuantity)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Clear_VirtualQuantity(
    CIM_EthernetPortAllocationSettingData* self)
{
    memset((void*)&self->VirtualQuantity, 0, sizeof(self->VirtualQuantity));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Set_Reservation(
    CIM_EthernetPortAllocationSettingData* self,
    MI_Uint64 x)
{
    ((MI_Uint64Field*)&self->Reservation)->value = x;
    ((MI_Uint64Field*)&self->Reservation)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Clear_Reservation(
    CIM_EthernetPortAllocationSettingData* self)
{
    memset((void*)&self->Reservation, 0, sizeof(self->Reservation));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Set_Limit(
    CIM_EthernetPortAllocationSettingData* self,
    MI_Uint64 x)
{
    ((MI_Uint64Field*)&self->Limit)->value = x;
    ((MI_Uint64Field*)&self->Limit)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Clear_Limit(
    CIM_EthernetPortAllocationSettingData* self)
{
    memset((void*)&self->Limit, 0, sizeof(self->Limit));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Set_Weight(
    CIM_EthernetPortAllocationSettingData* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->Weight)->value = x;
    ((MI_Uint32Field*)&self->Weight)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Clear_Weight(
    CIM_EthernetPortAllocationSettingData* self)
{
    memset((void*)&self->Weight, 0, sizeof(self->Weight));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Set_AutomaticAllocation(
    CIM_EthernetPortAllocationSettingData* self,
    MI_Boolean x)
{
    ((MI_BooleanField*)&self->AutomaticAllocation)->value = x;
    ((MI_BooleanField*)&self->AutomaticAllocation)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Clear_AutomaticAllocation(
    CIM_EthernetPortAllocationSettingData* self)
{
    memset((void*)&self->AutomaticAllocation, 0, sizeof(self->AutomaticAllocation));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Set_AutomaticDeallocation(
    CIM_EthernetPortAllocationSettingData* self,
    MI_Boolean x)
{
    ((MI_BooleanField*)&self->AutomaticDeallocation)->value = x;
    ((MI_BooleanField*)&self->AutomaticDeallocation)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Clear_AutomaticDeallocation(
    CIM_EthernetPortAllocationSettingData* self)
{
    memset((void*)&self->AutomaticDeallocation, 0, sizeof(self->AutomaticDeallocation));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Set_Parent(
    CIM_EthernetPortAllocationSettingData* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        17,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_SetPtr_Parent(
    CIM_EthernetPortAllocationSettingData* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        17,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Clear_Parent(
    CIM_EthernetPortAllocationSettingData* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        17);
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Set_Connection(
    CIM_EthernetPortAllocationSettingData* self,
    const MI_Char** data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        18,
        (MI_Value*)&arr,
        MI_STRINGA,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_SetPtr_Connection(
    CIM_EthernetPortAllocationSettingData* self,
    const MI_Char** data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        18,
        (MI_Value*)&arr,
        MI_STRINGA,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Clear_Connection(
    CIM_EthernetPortAllocationSettingData* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        18);
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Set_Address(
    CIM_EthernetPortAllocationSettingData* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        19,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_SetPtr_Address(
    CIM_EthernetPortAllocationSettingData* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        19,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Clear_Address(
    CIM_EthernetPortAllocationSettingData* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        19);
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Set_MappingBehavior(
    CIM_EthernetPortAllocationSettingData* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->MappingBehavior)->value = x;
    ((MI_Uint16Field*)&self->MappingBehavior)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Clear_MappingBehavior(
    CIM_EthernetPortAllocationSettingData* self)
{
    memset((void*)&self->MappingBehavior, 0, sizeof(self->MappingBehavior));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Set_AddressOnParent(
    CIM_EthernetPortAllocationSettingData* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        21,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_SetPtr_AddressOnParent(
    CIM_EthernetPortAllocationSettingData* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        21,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Clear_AddressOnParent(
    CIM_EthernetPortAllocationSettingData* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        21);
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Set_VirtualQuantityUnits(
    CIM_EthernetPortAllocationSettingData* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        22,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_SetPtr_VirtualQuantityUnits(
    CIM_EthernetPortAllocationSettingData* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        22,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Clear_VirtualQuantityUnits(
    CIM_EthernetPortAllocationSettingData* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        22);
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Set_DesiredVLANEndpointMode(
    CIM_EthernetPortAllocationSettingData* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->DesiredVLANEndpointMode)->value = x;
    ((MI_Uint16Field*)&self->DesiredVLANEndpointMode)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Clear_DesiredVLANEndpointMode(
    CIM_EthernetPortAllocationSettingData* self)
{
    memset((void*)&self->DesiredVLANEndpointMode, 0, sizeof(self->DesiredVLANEndpointMode));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Set_OtherEndpointMode(
    CIM_EthernetPortAllocationSettingData* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        24,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_SetPtr_OtherEndpointMode(
    CIM_EthernetPortAllocationSettingData* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        24,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Clear_OtherEndpointMode(
    CIM_EthernetPortAllocationSettingData* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        24);
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Set_AllowedPriorities(
    CIM_EthernetPortAllocationSettingData* self,
    const MI_Uint16* data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        25,
        (MI_Value*)&arr,
        MI_UINT16A,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_SetPtr_AllowedPriorities(
    CIM_EthernetPortAllocationSettingData* self,
    const MI_Uint16* data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        25,
        (MI_Value*)&arr,
        MI_UINT16A,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Clear_AllowedPriorities(
    CIM_EthernetPortAllocationSettingData* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        25);
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Set_AllowedToReceiveMACAddresses(
    CIM_EthernetPortAllocationSettingData* self,
    const MI_Char** data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        26,
        (MI_Value*)&arr,
        MI_STRINGA,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_SetPtr_AllowedToReceiveMACAddresses(
    CIM_EthernetPortAllocationSettingData* self,
    const MI_Char** data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        26,
        (MI_Value*)&arr,
        MI_STRINGA,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Clear_AllowedToReceiveMACAddresses(
    CIM_EthernetPortAllocationSettingData* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        26);
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Set_AllowedToReceiveVLANs(
    CIM_EthernetPortAllocationSettingData* self,
    const MI_Uint16* data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        27,
        (MI_Value*)&arr,
        MI_UINT16A,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_SetPtr_AllowedToReceiveVLANs(
    CIM_EthernetPortAllocationSettingData* self,
    const MI_Uint16* data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        27,
        (MI_Value*)&arr,
        MI_UINT16A,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Clear_AllowedToReceiveVLANs(
    CIM_EthernetPortAllocationSettingData* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        27);
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Set_AllowedToTransmitMACAddresses(
    CIM_EthernetPortAllocationSettingData* self,
    const MI_Char** data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        28,
        (MI_Value*)&arr,
        MI_STRINGA,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_SetPtr_AllowedToTransmitMACAddresses(
    CIM_EthernetPortAllocationSettingData* self,
    const MI_Char** data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        28,
        (MI_Value*)&arr,
        MI_STRINGA,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Clear_AllowedToTransmitMACAddresses(
    CIM_EthernetPortAllocationSettingData* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        28);
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Set_AllowedToTransmitVLANs(
    CIM_EthernetPortAllocationSettingData* self,
    const MI_Uint16* data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        29,
        (MI_Value*)&arr,
        MI_UINT16A,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_SetPtr_AllowedToTransmitVLANs(
    CIM_EthernetPortAllocationSettingData* self,
    const MI_Uint16* data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        29,
        (MI_Value*)&arr,
        MI_UINT16A,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Clear_AllowedToTransmitVLANs(
    CIM_EthernetPortAllocationSettingData* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        29);
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Set_DefaultPortVID(
    CIM_EthernetPortAllocationSettingData* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->DefaultPortVID)->value = x;
    ((MI_Uint16Field*)&self->DefaultPortVID)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Clear_DefaultPortVID(
    CIM_EthernetPortAllocationSettingData* self)
{
    memset((void*)&self->DefaultPortVID, 0, sizeof(self->DefaultPortVID));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Set_DefaultPriority(
    CIM_EthernetPortAllocationSettingData* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->DefaultPriority)->value = x;
    ((MI_Uint16Field*)&self->DefaultPriority)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Clear_DefaultPriority(
    CIM_EthernetPortAllocationSettingData* self)
{
    memset((void*)&self->DefaultPriority, 0, sizeof(self->DefaultPriority));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Set_GroupID(
    CIM_EthernetPortAllocationSettingData* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->GroupID)->value = x;
    ((MI_Uint32Field*)&self->GroupID)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Clear_GroupID(
    CIM_EthernetPortAllocationSettingData* self)
{
    memset((void*)&self->GroupID, 0, sizeof(self->GroupID));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Set_ManagerID(
    CIM_EthernetPortAllocationSettingData* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->ManagerID)->value = x;
    ((MI_Uint32Field*)&self->ManagerID)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Clear_ManagerID(
    CIM_EthernetPortAllocationSettingData* self)
{
    memset((void*)&self->ManagerID, 0, sizeof(self->ManagerID));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Set_NetworkPortProfileID(
    CIM_EthernetPortAllocationSettingData* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        34,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_SetPtr_NetworkPortProfileID(
    CIM_EthernetPortAllocationSettingData* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        34,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Clear_NetworkPortProfileID(
    CIM_EthernetPortAllocationSettingData* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        34);
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Set_NetworkPortProfileIDType(
    CIM_EthernetPortAllocationSettingData* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->NetworkPortProfileIDType)->value = x;
    ((MI_Uint16Field*)&self->NetworkPortProfileIDType)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Clear_NetworkPortProfileIDType(
    CIM_EthernetPortAllocationSettingData* self)
{
    memset((void*)&self->NetworkPortProfileIDType, 0, sizeof(self->NetworkPortProfileIDType));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Set_OtherNetworkPortProfileIDTypeInfo(
    CIM_EthernetPortAllocationSettingData* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        36,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_SetPtr_OtherNetworkPortProfileIDTypeInfo(
    CIM_EthernetPortAllocationSettingData* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        36,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Clear_OtherNetworkPortProfileIDTypeInfo(
    CIM_EthernetPortAllocationSettingData* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        36);
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Set_PortCorrelationID(
    CIM_EthernetPortAllocationSettingData* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        37,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_SetPtr_PortCorrelationID(
    CIM_EthernetPortAllocationSettingData* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        37,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Clear_PortCorrelationID(
    CIM_EthernetPortAllocationSettingData* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        37);
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Set_PortVID(
    CIM_EthernetPortAllocationSettingData* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->PortVID)->value = x;
    ((MI_Uint16Field*)&self->PortVID)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Clear_PortVID(
    CIM_EthernetPortAllocationSettingData* self)
{
    memset((void*)&self->PortVID, 0, sizeof(self->PortVID));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Set_Promiscuous(
    CIM_EthernetPortAllocationSettingData* self,
    MI_Boolean x)
{
    ((MI_BooleanField*)&self->Promiscuous)->value = x;
    ((MI_BooleanField*)&self->Promiscuous)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Clear_Promiscuous(
    CIM_EthernetPortAllocationSettingData* self)
{
    memset((void*)&self->Promiscuous, 0, sizeof(self->Promiscuous));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Set_ReceiveBandwidthLimit(
    CIM_EthernetPortAllocationSettingData* self,
    MI_Uint64 x)
{
    ((MI_Uint64Field*)&self->ReceiveBandwidthLimit)->value = x;
    ((MI_Uint64Field*)&self->ReceiveBandwidthLimit)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Clear_ReceiveBandwidthLimit(
    CIM_EthernetPortAllocationSettingData* self)
{
    memset((void*)&self->ReceiveBandwidthLimit, 0, sizeof(self->ReceiveBandwidthLimit));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Set_ReceiveBandwidthReservation(
    CIM_EthernetPortAllocationSettingData* self,
    MI_Uint64 x)
{
    ((MI_Uint64Field*)&self->ReceiveBandwidthReservation)->value = x;
    ((MI_Uint64Field*)&self->ReceiveBandwidthReservation)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Clear_ReceiveBandwidthReservation(
    CIM_EthernetPortAllocationSettingData* self)
{
    memset((void*)&self->ReceiveBandwidthReservation, 0, sizeof(self->ReceiveBandwidthReservation));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Set_SourceMACFilteringEnabled(
    CIM_EthernetPortAllocationSettingData* self,
    MI_Boolean x)
{
    ((MI_BooleanField*)&self->SourceMACFilteringEnabled)->value = x;
    ((MI_BooleanField*)&self->SourceMACFilteringEnabled)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL CIM_EthernetPortAllocationSettingData_Clear_SourceMACFilteringEnabled(
    CIM_EthernetPortAllocationSettingData* self)
{
    memset((void*)&self->SourceMACFilteringEnabled, 0, sizeof(self->SourceMACFilteringEnabled));
    return MI_RESULT_OK;
}

/*
**==============================================================================
**
** CIM_EthernetPortAllocationSettingData provider function prototypes
**
**==============================================================================
*/

/* The developer may optionally define this structure */
typedef struct _CIM_EthernetPortAllocationSettingData_Self CIM_EthernetPortAllocationSettingData_Self;

MI_EXTERN_C void MI_CALL CIM_EthernetPortAllocationSettingData_Load(
    CIM_EthernetPortAllocationSettingData_Self** self,
    MI_Module_Self* selfModule,
    MI_Context* context);

MI_EXTERN_C void MI_CALL CIM_EthernetPortAllocationSettingData_Unload(
    CIM_EthernetPortAllocationSettingData_Self* self,
    MI_Context* context);

MI_EXTERN_C void MI_CALL CIM_EthernetPortAllocationSettingData_EnumerateInstances(
    CIM_EthernetPortAllocationSettingData_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter);

MI_EXTERN_C void MI_CALL CIM_EthernetPortAllocationSettingData_GetInstance(
    CIM_EthernetPortAllocationSettingData_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_EthernetPortAllocationSettingData* instanceName,
    const MI_PropertySet* propertySet);

MI_EXTERN_C void MI_CALL CIM_EthernetPortAllocationSettingData_CreateInstance(
    CIM_EthernetPortAllocationSettingData_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_EthernetPortAllocationSettingData* newInstance);

MI_EXTERN_C void MI_CALL CIM_EthernetPortAllocationSettingData_ModifyInstance(
    CIM_EthernetPortAllocationSettingData_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_EthernetPortAllocationSettingData* modifiedInstance,
    const MI_PropertySet* propertySet);

MI_EXTERN_C void MI_CALL CIM_EthernetPortAllocationSettingData_DeleteInstance(
    CIM_EthernetPortAllocationSettingData_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_EthernetPortAllocationSettingData* instanceName);


#endif /* _CIM_EthernetPortAllocationSettingData_h */
