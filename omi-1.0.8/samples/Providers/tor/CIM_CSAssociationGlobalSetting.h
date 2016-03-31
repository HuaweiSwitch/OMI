/* @migen@ */
/*
**==============================================================================
**
** WARNING: THIS FILE WAS AUTOMATICALLY GENERATED. PLEASE DO NOT EDIT.
**
**==============================================================================
*/
#ifndef _CIM_CSAssociationGlobalSetting_h
#define _CIM_CSAssociationGlobalSetting_h

#include <MI.h>
#include "CIM_ComputerSystem.h"
#include "MSFT_GlobalEthernetSwitchSettingData.h"

/*
**==============================================================================
**
** CIM_CSAssociationGlobalSetting [CIM_CSAssociationGlobalSetting]
**
** Keys:
**    Left
**    Right
**
**==============================================================================
*/

typedef struct _CIM_CSAssociationGlobalSetting
{
    MI_Instance __instance;
    /* CIM_CSAssociationGlobalSetting properties */
    /*KEY*/ CIM_ComputerSystem_ConstRef Left;
    /*KEY*/ MSFT_GlobalEthernetSwitchSettingData_ConstRef Right;
}
CIM_CSAssociationGlobalSetting;

typedef struct _CIM_CSAssociationGlobalSetting_Ref
{
    CIM_CSAssociationGlobalSetting* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
CIM_CSAssociationGlobalSetting_Ref;

typedef struct _CIM_CSAssociationGlobalSetting_ConstRef
{
    MI_CONST CIM_CSAssociationGlobalSetting* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
CIM_CSAssociationGlobalSetting_ConstRef;

typedef struct _CIM_CSAssociationGlobalSetting_Array
{
    struct _CIM_CSAssociationGlobalSetting** data;
    MI_Uint32 size;
}
CIM_CSAssociationGlobalSetting_Array;

typedef struct _CIM_CSAssociationGlobalSetting_ConstArray
{
    struct _CIM_CSAssociationGlobalSetting MI_CONST* MI_CONST* data;
    MI_Uint32 size;
}
CIM_CSAssociationGlobalSetting_ConstArray;

typedef struct _CIM_CSAssociationGlobalSetting_ArrayRef
{
    CIM_CSAssociationGlobalSetting_Array value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
CIM_CSAssociationGlobalSetting_ArrayRef;

typedef struct _CIM_CSAssociationGlobalSetting_ConstArrayRef
{
    CIM_CSAssociationGlobalSetting_ConstArray value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
CIM_CSAssociationGlobalSetting_ConstArrayRef;

MI_EXTERN_C MI_CONST MI_ClassDecl CIM_CSAssociationGlobalSetting_rtti;

MI_INLINE MI_Result MI_CALL CIM_CSAssociationGlobalSetting_Construct(
    CIM_CSAssociationGlobalSetting* self,
    MI_Context* context)
{
    return MI_ConstructInstance(context, &CIM_CSAssociationGlobalSetting_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL CIM_CSAssociationGlobalSetting_Clone(
    const CIM_CSAssociationGlobalSetting* self,
    CIM_CSAssociationGlobalSetting** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Boolean MI_CALL CIM_CSAssociationGlobalSetting_IsA(
    const MI_Instance* self)
{
    MI_Boolean res = MI_FALSE;
    return MI_Instance_IsA(self, &CIM_CSAssociationGlobalSetting_rtti, &res) == MI_RESULT_OK && res;
}

MI_INLINE MI_Result MI_CALL CIM_CSAssociationGlobalSetting_Destruct(CIM_CSAssociationGlobalSetting* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL CIM_CSAssociationGlobalSetting_Delete(CIM_CSAssociationGlobalSetting* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL CIM_CSAssociationGlobalSetting_Post(
    const CIM_CSAssociationGlobalSetting* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL CIM_CSAssociationGlobalSetting_Set_Left(
    CIM_CSAssociationGlobalSetting* self,
    const CIM_ComputerSystem* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        0,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_CSAssociationGlobalSetting_SetPtr_Left(
    CIM_CSAssociationGlobalSetting* self,
    const CIM_ComputerSystem* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        0,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_CSAssociationGlobalSetting_Clear_Left(
    CIM_CSAssociationGlobalSetting* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_CSAssociationGlobalSetting_Set_Right(
    CIM_CSAssociationGlobalSetting* self,
    const MSFT_GlobalEthernetSwitchSettingData* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_CSAssociationGlobalSetting_SetPtr_Right(
    CIM_CSAssociationGlobalSetting* self,
    const MSFT_GlobalEthernetSwitchSettingData* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_CSAssociationGlobalSetting_Clear_Right(
    CIM_CSAssociationGlobalSetting* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        1);
}

/*
**==============================================================================
**
** CIM_CSAssociationGlobalSetting provider function prototypes
**
**==============================================================================
*/

/* The developer may optionally define this structure */
typedef struct _CIM_CSAssociationGlobalSetting_Self CIM_CSAssociationGlobalSetting_Self;

MI_EXTERN_C void MI_CALL CIM_CSAssociationGlobalSetting_Load(
    CIM_CSAssociationGlobalSetting_Self** self,
    MI_Module_Self* selfModule,
    MI_Context* context);

MI_EXTERN_C void MI_CALL CIM_CSAssociationGlobalSetting_Unload(
    CIM_CSAssociationGlobalSetting_Self* self,
    MI_Context* context);

MI_EXTERN_C void MI_CALL CIM_CSAssociationGlobalSetting_EnumerateInstances(
    CIM_CSAssociationGlobalSetting_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter);

MI_EXTERN_C void MI_CALL CIM_CSAssociationGlobalSetting_GetInstance(
    CIM_CSAssociationGlobalSetting_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_CSAssociationGlobalSetting* instanceName,
    const MI_PropertySet* propertySet);

MI_EXTERN_C void MI_CALL CIM_CSAssociationGlobalSetting_CreateInstance(
    CIM_CSAssociationGlobalSetting_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_CSAssociationGlobalSetting* newInstance);

MI_EXTERN_C void MI_CALL CIM_CSAssociationGlobalSetting_ModifyInstance(
    CIM_CSAssociationGlobalSetting_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_CSAssociationGlobalSetting* modifiedInstance,
    const MI_PropertySet* propertySet);

MI_EXTERN_C void MI_CALL CIM_CSAssociationGlobalSetting_DeleteInstance(
    CIM_CSAssociationGlobalSetting_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_CSAssociationGlobalSetting* instanceName);

MI_EXTERN_C void MI_CALL CIM_CSAssociationGlobalSetting_AssociatorInstancesLeft(
    CIM_CSAssociationGlobalSetting_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_ComputerSystem* instanceName,
    const MI_Char* resultClass,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter);

MI_EXTERN_C void MI_CALL CIM_CSAssociationGlobalSetting_AssociatorInstancesRight(
    CIM_CSAssociationGlobalSetting_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MSFT_GlobalEthernetSwitchSettingData* instanceName,
    const MI_Char* resultClass,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter);

MI_EXTERN_C void MI_CALL CIM_CSAssociationGlobalSetting_ReferenceInstancesLeft(
    CIM_CSAssociationGlobalSetting_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_ComputerSystem* instanceName,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter);

MI_EXTERN_C void MI_CALL CIM_CSAssociationGlobalSetting_ReferenceInstancesRight(
    CIM_CSAssociationGlobalSetting_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MSFT_GlobalEthernetSwitchSettingData* instanceName,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter);


#endif /* _CIM_CSAssociationGlobalSetting_h */
