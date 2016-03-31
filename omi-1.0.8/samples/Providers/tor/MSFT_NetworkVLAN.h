/* @migen@ */
/*
**==============================================================================
**
** WARNING: THIS FILE WAS AUTOMATICALLY GENERATED. PLEASE DO NOT EDIT.
**
**==============================================================================
*/
#ifndef _MSFT_NetworkVLAN_h
#define _MSFT_NetworkVLAN_h

#include <MI.h>
#include "CIM_NetworkVLAN.h"

/*
**==============================================================================
**
** MSFT_NetworkVLAN [MSFT_NetworkVLAN]
**
** Keys:
**    InstanceID
**
**==============================================================================
*/

typedef struct _MSFT_NetworkVLAN /* extends CIM_NetworkVLAN */
{
    MI_Instance __instance;
    /* CIM_ManagedElement properties */
    /*KEY*/ MI_ConstStringField InstanceID;
    MI_ConstStringField Caption;
    MI_ConstStringField Description;
    MI_ConstStringField ElementName;
    /* CIM_Collection properties */
    /* CIM_SystemSpecificCollection properties */
    /* CIM_ConnectivityCollection properties */
    MI_ConstUint16Field ConnectivityStatus;
    /* CIM_NetworkVLAN properties */
    MI_ConstUint16Field VLANId;
    MI_ConstUint32Field SAIdentifier;
    MI_ConstSint32Field TransmissionSize;
    MI_ConstUint16Field TypeOfMedia;
    MI_ConstStringField OtherTypeDescription;
    /* MSFT_NetworkVLAN properties */
    MI_ConstBooleanField IsEnabled;
    MI_ConstUint32Field State;
    MI_ConstUint32Field PrivateVLANType;
    MI_ConstUint16Field PrimaryVLANId;
    MI_ConstUint16AField AssociatedVLANIds;
    MI_ConstUint32Field MACAddressAgingTime;
}
MSFT_NetworkVLAN;

typedef struct _MSFT_NetworkVLAN_Ref
{
    MSFT_NetworkVLAN* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MSFT_NetworkVLAN_Ref;

typedef struct _MSFT_NetworkVLAN_ConstRef
{
    MI_CONST MSFT_NetworkVLAN* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MSFT_NetworkVLAN_ConstRef;

typedef struct _MSFT_NetworkVLAN_Array
{
    struct _MSFT_NetworkVLAN** data;
    MI_Uint32 size;
}
MSFT_NetworkVLAN_Array;

typedef struct _MSFT_NetworkVLAN_ConstArray
{
    struct _MSFT_NetworkVLAN MI_CONST* MI_CONST* data;
    MI_Uint32 size;
}
MSFT_NetworkVLAN_ConstArray;

typedef struct _MSFT_NetworkVLAN_ArrayRef
{
    MSFT_NetworkVLAN_Array value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MSFT_NetworkVLAN_ArrayRef;

typedef struct _MSFT_NetworkVLAN_ConstArrayRef
{
    MSFT_NetworkVLAN_ConstArray value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MSFT_NetworkVLAN_ConstArrayRef;

MI_EXTERN_C MI_CONST MI_ClassDecl MSFT_NetworkVLAN_rtti;

MI_INLINE MI_Result MI_CALL MSFT_NetworkVLAN_Construct(
    MSFT_NetworkVLAN* self,
    MI_Context* context)
{
    return MI_ConstructInstance(context, &MSFT_NetworkVLAN_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_NetworkVLAN_Clone(
    const MSFT_NetworkVLAN* self,
    MSFT_NetworkVLAN** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Boolean MI_CALL MSFT_NetworkVLAN_IsA(
    const MI_Instance* self)
{
    MI_Boolean res = MI_FALSE;
    return MI_Instance_IsA(self, &MSFT_NetworkVLAN_rtti, &res) == MI_RESULT_OK && res;
}

MI_INLINE MI_Result MI_CALL MSFT_NetworkVLAN_Destruct(MSFT_NetworkVLAN* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_NetworkVLAN_Delete(MSFT_NetworkVLAN* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_NetworkVLAN_Post(
    const MSFT_NetworkVLAN* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_NetworkVLAN_Set_InstanceID(
    MSFT_NetworkVLAN* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        0,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_NetworkVLAN_SetPtr_InstanceID(
    MSFT_NetworkVLAN* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        0,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_NetworkVLAN_Clear_InstanceID(
    MSFT_NetworkVLAN* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_NetworkVLAN_Set_Caption(
    MSFT_NetworkVLAN* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_NetworkVLAN_SetPtr_Caption(
    MSFT_NetworkVLAN* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_NetworkVLAN_Clear_Caption(
    MSFT_NetworkVLAN* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        1);
}

MI_INLINE MI_Result MI_CALL MSFT_NetworkVLAN_Set_Description(
    MSFT_NetworkVLAN* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_NetworkVLAN_SetPtr_Description(
    MSFT_NetworkVLAN* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_NetworkVLAN_Clear_Description(
    MSFT_NetworkVLAN* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        2);
}

MI_INLINE MI_Result MI_CALL MSFT_NetworkVLAN_Set_ElementName(
    MSFT_NetworkVLAN* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_NetworkVLAN_SetPtr_ElementName(
    MSFT_NetworkVLAN* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_NetworkVLAN_Clear_ElementName(
    MSFT_NetworkVLAN* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        3);
}

MI_INLINE MI_Result MI_CALL MSFT_NetworkVLAN_Set_ConnectivityStatus(
    MSFT_NetworkVLAN* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->ConnectivityStatus)->value = x;
    ((MI_Uint16Field*)&self->ConnectivityStatus)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_NetworkVLAN_Clear_ConnectivityStatus(
    MSFT_NetworkVLAN* self)
{
    memset((void*)&self->ConnectivityStatus, 0, sizeof(self->ConnectivityStatus));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_NetworkVLAN_Set_VLANId(
    MSFT_NetworkVLAN* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->VLANId)->value = x;
    ((MI_Uint16Field*)&self->VLANId)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_NetworkVLAN_Clear_VLANId(
    MSFT_NetworkVLAN* self)
{
    memset((void*)&self->VLANId, 0, sizeof(self->VLANId));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_NetworkVLAN_Set_SAIdentifier(
    MSFT_NetworkVLAN* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->SAIdentifier)->value = x;
    ((MI_Uint32Field*)&self->SAIdentifier)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_NetworkVLAN_Clear_SAIdentifier(
    MSFT_NetworkVLAN* self)
{
    memset((void*)&self->SAIdentifier, 0, sizeof(self->SAIdentifier));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_NetworkVLAN_Set_TransmissionSize(
    MSFT_NetworkVLAN* self,
    MI_Sint32 x)
{
    ((MI_Sint32Field*)&self->TransmissionSize)->value = x;
    ((MI_Sint32Field*)&self->TransmissionSize)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_NetworkVLAN_Clear_TransmissionSize(
    MSFT_NetworkVLAN* self)
{
    memset((void*)&self->TransmissionSize, 0, sizeof(self->TransmissionSize));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_NetworkVLAN_Set_TypeOfMedia(
    MSFT_NetworkVLAN* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->TypeOfMedia)->value = x;
    ((MI_Uint16Field*)&self->TypeOfMedia)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_NetworkVLAN_Clear_TypeOfMedia(
    MSFT_NetworkVLAN* self)
{
    memset((void*)&self->TypeOfMedia, 0, sizeof(self->TypeOfMedia));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_NetworkVLAN_Set_OtherTypeDescription(
    MSFT_NetworkVLAN* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        9,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_NetworkVLAN_SetPtr_OtherTypeDescription(
    MSFT_NetworkVLAN* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        9,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_NetworkVLAN_Clear_OtherTypeDescription(
    MSFT_NetworkVLAN* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        9);
}

MI_INLINE MI_Result MI_CALL MSFT_NetworkVLAN_Set_IsEnabled(
    MSFT_NetworkVLAN* self,
    MI_Boolean x)
{
    ((MI_BooleanField*)&self->IsEnabled)->value = x;
    ((MI_BooleanField*)&self->IsEnabled)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_NetworkVLAN_Clear_IsEnabled(
    MSFT_NetworkVLAN* self)
{
    memset((void*)&self->IsEnabled, 0, sizeof(self->IsEnabled));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_NetworkVLAN_Set_State(
    MSFT_NetworkVLAN* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->State)->value = x;
    ((MI_Uint32Field*)&self->State)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_NetworkVLAN_Clear_State(
    MSFT_NetworkVLAN* self)
{
    memset((void*)&self->State, 0, sizeof(self->State));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_NetworkVLAN_Set_PrivateVLANType(
    MSFT_NetworkVLAN* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->PrivateVLANType)->value = x;
    ((MI_Uint32Field*)&self->PrivateVLANType)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_NetworkVLAN_Clear_PrivateVLANType(
    MSFT_NetworkVLAN* self)
{
    memset((void*)&self->PrivateVLANType, 0, sizeof(self->PrivateVLANType));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_NetworkVLAN_Set_PrimaryVLANId(
    MSFT_NetworkVLAN* self,
    MI_Uint16 x)
{
    ((MI_Uint16Field*)&self->PrimaryVLANId)->value = x;
    ((MI_Uint16Field*)&self->PrimaryVLANId)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_NetworkVLAN_Clear_PrimaryVLANId(
    MSFT_NetworkVLAN* self)
{
    memset((void*)&self->PrimaryVLANId, 0, sizeof(self->PrimaryVLANId));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_NetworkVLAN_Set_AssociatedVLANIds(
    MSFT_NetworkVLAN* self,
    const MI_Uint16* data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        14,
        (MI_Value*)&arr,
        MI_UINT16A,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_NetworkVLAN_SetPtr_AssociatedVLANIds(
    MSFT_NetworkVLAN* self,
    const MI_Uint16* data,
    MI_Uint32 size)
{
    MI_Array arr;
    arr.data = (void*)data;
    arr.size = size;
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        14,
        (MI_Value*)&arr,
        MI_UINT16A,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_NetworkVLAN_Clear_AssociatedVLANIds(
    MSFT_NetworkVLAN* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        14);
}

MI_INLINE MI_Result MI_CALL MSFT_NetworkVLAN_Set_MACAddressAgingTime(
    MSFT_NetworkVLAN* self,
    MI_Uint32 x)
{
    ((MI_Uint32Field*)&self->MACAddressAgingTime)->value = x;
    ((MI_Uint32Field*)&self->MACAddressAgingTime)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_NetworkVLAN_Clear_MACAddressAgingTime(
    MSFT_NetworkVLAN* self)
{
    memset((void*)&self->MACAddressAgingTime, 0, sizeof(self->MACAddressAgingTime));
    return MI_RESULT_OK;
}

/*
**==============================================================================
**
** MSFT_NetworkVLAN provider function prototypes
**
**==============================================================================
*/

/* The developer may optionally define this structure */
typedef struct _MSFT_NetworkVLAN_Self MSFT_NetworkVLAN_Self;

MI_EXTERN_C void MI_CALL MSFT_NetworkVLAN_Load(
    MSFT_NetworkVLAN_Self** self,
    MI_Module_Self* selfModule,
    MI_Context* context);

MI_EXTERN_C void MI_CALL MSFT_NetworkVLAN_Unload(
    MSFT_NetworkVLAN_Self* self,
    MI_Context* context);

MI_EXTERN_C void MI_CALL MSFT_NetworkVLAN_EnumerateInstances(
    MSFT_NetworkVLAN_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter);

MI_EXTERN_C void MI_CALL MSFT_NetworkVLAN_GetInstance(
    MSFT_NetworkVLAN_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MSFT_NetworkVLAN* instanceName,
    const MI_PropertySet* propertySet);

MI_EXTERN_C void MI_CALL MSFT_NetworkVLAN_CreateInstance(
    MSFT_NetworkVLAN_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MSFT_NetworkVLAN* newInstance);

MI_EXTERN_C void MI_CALL MSFT_NetworkVLAN_ModifyInstance(
    MSFT_NetworkVLAN_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MSFT_NetworkVLAN* modifiedInstance,
    const MI_PropertySet* propertySet);

MI_EXTERN_C void MI_CALL MSFT_NetworkVLAN_DeleteInstance(
    MSFT_NetworkVLAN_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MSFT_NetworkVLAN* instanceName);


#endif /* _MSFT_NetworkVLAN_h */
