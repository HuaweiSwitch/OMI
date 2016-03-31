/* @migen@ */
/*
**==============================================================================
**
** WARNING: THIS FILE WAS AUTOMATICALLY GENERATED. PLEASE DO NOT EDIT.
**
**==============================================================================
*/
#ifndef _MSFT_GlobalEthernetSwitchSettingData_h
#define _MSFT_GlobalEthernetSwitchSettingData_h

#include <MI.h>
#include "CIM_SettingData.h"

/*
**==============================================================================
**
** MSFT_GlobalEthernetSwitchSettingData [MSFT_GlobalEthernetSwitchSettingData]
**
** Keys:
**    InstanceID
**
**==============================================================================
*/

typedef struct _MSFT_GlobalEthernetSwitchSettingData /* extends CIM_SettingData */
{
    MI_Instance __instance;
    /* CIM_ManagedElement properties */
    /*KEY*/ MI_ConstStringField InstanceID;
    MI_ConstStringField Caption;
    MI_ConstStringField Description;
    MI_ConstStringField ElementName;
    /* CIM_SettingData properties */
    /* MSFT_GlobalEthernetSwitchSettingData properties */
    MI_ConstBooleanField IsIPRoutingEnable;
    MI_ConstBooleanField IsIpMulticastRoutingEnable;
    MI_ConstStringField Banner;
    MI_ConstBooleanField BannerIsEnabled;
}
MSFT_GlobalEthernetSwitchSettingData;

typedef struct _MSFT_GlobalEthernetSwitchSettingData_Ref
{
    MSFT_GlobalEthernetSwitchSettingData* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MSFT_GlobalEthernetSwitchSettingData_Ref;

typedef struct _MSFT_GlobalEthernetSwitchSettingData_ConstRef
{
    MI_CONST MSFT_GlobalEthernetSwitchSettingData* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MSFT_GlobalEthernetSwitchSettingData_ConstRef;

typedef struct _MSFT_GlobalEthernetSwitchSettingData_Array
{
    struct _MSFT_GlobalEthernetSwitchSettingData** data;
    MI_Uint32 size;
}
MSFT_GlobalEthernetSwitchSettingData_Array;

typedef struct _MSFT_GlobalEthernetSwitchSettingData_ConstArray
{
    struct _MSFT_GlobalEthernetSwitchSettingData MI_CONST* MI_CONST* data;
    MI_Uint32 size;
}
MSFT_GlobalEthernetSwitchSettingData_ConstArray;

typedef struct _MSFT_GlobalEthernetSwitchSettingData_ArrayRef
{
    MSFT_GlobalEthernetSwitchSettingData_Array value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MSFT_GlobalEthernetSwitchSettingData_ArrayRef;

typedef struct _MSFT_GlobalEthernetSwitchSettingData_ConstArrayRef
{
    MSFT_GlobalEthernetSwitchSettingData_ConstArray value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
MSFT_GlobalEthernetSwitchSettingData_ConstArrayRef;

MI_EXTERN_C MI_CONST MI_ClassDecl MSFT_GlobalEthernetSwitchSettingData_rtti;

MI_INLINE MI_Result MI_CALL MSFT_GlobalEthernetSwitchSettingData_Construct(
    MSFT_GlobalEthernetSwitchSettingData* self,
    MI_Context* context)
{
    return MI_ConstructInstance(context, &MSFT_GlobalEthernetSwitchSettingData_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_GlobalEthernetSwitchSettingData_Clone(
    const MSFT_GlobalEthernetSwitchSettingData* self,
    MSFT_GlobalEthernetSwitchSettingData** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Boolean MI_CALL MSFT_GlobalEthernetSwitchSettingData_IsA(
    const MI_Instance* self)
{
    MI_Boolean res = MI_FALSE;
    return MI_Instance_IsA(self, &MSFT_GlobalEthernetSwitchSettingData_rtti, &res) == MI_RESULT_OK && res;
}

MI_INLINE MI_Result MI_CALL MSFT_GlobalEthernetSwitchSettingData_Destruct(MSFT_GlobalEthernetSwitchSettingData* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_GlobalEthernetSwitchSettingData_Delete(MSFT_GlobalEthernetSwitchSettingData* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_GlobalEthernetSwitchSettingData_Post(
    const MSFT_GlobalEthernetSwitchSettingData* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL MSFT_GlobalEthernetSwitchSettingData_Set_InstanceID(
    MSFT_GlobalEthernetSwitchSettingData* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        0,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_GlobalEthernetSwitchSettingData_SetPtr_InstanceID(
    MSFT_GlobalEthernetSwitchSettingData* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        0,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_GlobalEthernetSwitchSettingData_Clear_InstanceID(
    MSFT_GlobalEthernetSwitchSettingData* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_GlobalEthernetSwitchSettingData_Set_Caption(
    MSFT_GlobalEthernetSwitchSettingData* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_GlobalEthernetSwitchSettingData_SetPtr_Caption(
    MSFT_GlobalEthernetSwitchSettingData* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_GlobalEthernetSwitchSettingData_Clear_Caption(
    MSFT_GlobalEthernetSwitchSettingData* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        1);
}

MI_INLINE MI_Result MI_CALL MSFT_GlobalEthernetSwitchSettingData_Set_Description(
    MSFT_GlobalEthernetSwitchSettingData* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_GlobalEthernetSwitchSettingData_SetPtr_Description(
    MSFT_GlobalEthernetSwitchSettingData* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        2,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_GlobalEthernetSwitchSettingData_Clear_Description(
    MSFT_GlobalEthernetSwitchSettingData* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        2);
}

MI_INLINE MI_Result MI_CALL MSFT_GlobalEthernetSwitchSettingData_Set_ElementName(
    MSFT_GlobalEthernetSwitchSettingData* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_GlobalEthernetSwitchSettingData_SetPtr_ElementName(
    MSFT_GlobalEthernetSwitchSettingData* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        3,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_GlobalEthernetSwitchSettingData_Clear_ElementName(
    MSFT_GlobalEthernetSwitchSettingData* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        3);
}

MI_INLINE MI_Result MI_CALL MSFT_GlobalEthernetSwitchSettingData_Set_IsIPRoutingEnable(
    MSFT_GlobalEthernetSwitchSettingData* self,
    MI_Boolean x)
{
    ((MI_BooleanField*)&self->IsIPRoutingEnable)->value = x;
    ((MI_BooleanField*)&self->IsIPRoutingEnable)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_GlobalEthernetSwitchSettingData_Clear_IsIPRoutingEnable(
    MSFT_GlobalEthernetSwitchSettingData* self)
{
    memset((void*)&self->IsIPRoutingEnable, 0, sizeof(self->IsIPRoutingEnable));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_GlobalEthernetSwitchSettingData_Set_IsIpMulticastRoutingEnable(
    MSFT_GlobalEthernetSwitchSettingData* self,
    MI_Boolean x)
{
    ((MI_BooleanField*)&self->IsIpMulticastRoutingEnable)->value = x;
    ((MI_BooleanField*)&self->IsIpMulticastRoutingEnable)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_GlobalEthernetSwitchSettingData_Clear_IsIpMulticastRoutingEnable(
    MSFT_GlobalEthernetSwitchSettingData* self)
{
    memset((void*)&self->IsIpMulticastRoutingEnable, 0, sizeof(self->IsIpMulticastRoutingEnable));
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_GlobalEthernetSwitchSettingData_Set_Banner(
    MSFT_GlobalEthernetSwitchSettingData* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        6,
        (MI_Value*)&str,
        MI_STRING,
        0);
}

MI_INLINE MI_Result MI_CALL MSFT_GlobalEthernetSwitchSettingData_SetPtr_Banner(
    MSFT_GlobalEthernetSwitchSettingData* self,
    const MI_Char* str)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        6,
        (MI_Value*)&str,
        MI_STRING,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL MSFT_GlobalEthernetSwitchSettingData_Clear_Banner(
    MSFT_GlobalEthernetSwitchSettingData* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        6);
}

MI_INLINE MI_Result MI_CALL MSFT_GlobalEthernetSwitchSettingData_Set_BannerIsEnabled(
    MSFT_GlobalEthernetSwitchSettingData* self,
    MI_Boolean x)
{
    ((MI_BooleanField*)&self->BannerIsEnabled)->value = x;
    ((MI_BooleanField*)&self->BannerIsEnabled)->exists = 1;
    return MI_RESULT_OK;
}

MI_INLINE MI_Result MI_CALL MSFT_GlobalEthernetSwitchSettingData_Clear_BannerIsEnabled(
    MSFT_GlobalEthernetSwitchSettingData* self)
{
    memset((void*)&self->BannerIsEnabled, 0, sizeof(self->BannerIsEnabled));
    return MI_RESULT_OK;
}

/*
**==============================================================================
**
** MSFT_GlobalEthernetSwitchSettingData provider function prototypes
**
**==============================================================================
*/

/* The developer may optionally define this structure */
typedef struct _MSFT_GlobalEthernetSwitchSettingData_Self MSFT_GlobalEthernetSwitchSettingData_Self;

MI_EXTERN_C void MI_CALL MSFT_GlobalEthernetSwitchSettingData_Load(
    MSFT_GlobalEthernetSwitchSettingData_Self** self,
    MI_Module_Self* selfModule,
    MI_Context* context);

MI_EXTERN_C void MI_CALL MSFT_GlobalEthernetSwitchSettingData_Unload(
    MSFT_GlobalEthernetSwitchSettingData_Self* self,
    MI_Context* context);

MI_EXTERN_C void MI_CALL MSFT_GlobalEthernetSwitchSettingData_EnumerateInstances(
    MSFT_GlobalEthernetSwitchSettingData_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter);

MI_EXTERN_C void MI_CALL MSFT_GlobalEthernetSwitchSettingData_GetInstance(
    MSFT_GlobalEthernetSwitchSettingData_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MSFT_GlobalEthernetSwitchSettingData* instanceName,
    const MI_PropertySet* propertySet);

MI_EXTERN_C void MI_CALL MSFT_GlobalEthernetSwitchSettingData_CreateInstance(
    MSFT_GlobalEthernetSwitchSettingData_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MSFT_GlobalEthernetSwitchSettingData* newInstance);

MI_EXTERN_C void MI_CALL MSFT_GlobalEthernetSwitchSettingData_ModifyInstance(
    MSFT_GlobalEthernetSwitchSettingData_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MSFT_GlobalEthernetSwitchSettingData* modifiedInstance,
    const MI_PropertySet* propertySet);

MI_EXTERN_C void MI_CALL MSFT_GlobalEthernetSwitchSettingData_DeleteInstance(
    MSFT_GlobalEthernetSwitchSettingData_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MSFT_GlobalEthernetSwitchSettingData* instanceName);


#endif /* _MSFT_GlobalEthernetSwitchSettingData_h */
