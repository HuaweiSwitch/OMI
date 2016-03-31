/* @migen@ */
/*
**==============================================================================
**
** WARNING: THIS FILE WAS AUTOMATICALLY GENERATED. PLEASE DO NOT EDIT.
**
**==============================================================================
*/
#ifndef _CIM_VlanEndAssociationData_h
#define _CIM_VlanEndAssociationData_h

#include <MI.h>
#include "CIM_VLANEndpoint.h"
#include "CIM_VLANEndpointSettingData.h"

/*
**==============================================================================
**
** CIM_VlanEndAssociationData [CIM_VlanEndAssociationData]
**
** Keys:
**    Left
**    Right
**
**==============================================================================
*/

typedef struct _CIM_VlanEndAssociationData
{
    MI_Instance __instance;
    /* CIM_VlanEndAssociationData properties */
    /*KEY*/ CIM_VLANEndpoint_ConstRef Left;
    /*KEY*/ CIM_VLANEndpointSettingData_ConstRef Right;
}
CIM_VlanEndAssociationData;

typedef struct _CIM_VlanEndAssociationData_Ref
{
    CIM_VlanEndAssociationData* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
CIM_VlanEndAssociationData_Ref;

typedef struct _CIM_VlanEndAssociationData_ConstRef
{
    MI_CONST CIM_VlanEndAssociationData* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
CIM_VlanEndAssociationData_ConstRef;

typedef struct _CIM_VlanEndAssociationData_Array
{
    struct _CIM_VlanEndAssociationData** data;
    MI_Uint32 size;
}
CIM_VlanEndAssociationData_Array;

typedef struct _CIM_VlanEndAssociationData_ConstArray
{
    struct _CIM_VlanEndAssociationData MI_CONST* MI_CONST* data;
    MI_Uint32 size;
}
CIM_VlanEndAssociationData_ConstArray;

typedef struct _CIM_VlanEndAssociationData_ArrayRef
{
    CIM_VlanEndAssociationData_Array value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
CIM_VlanEndAssociationData_ArrayRef;

typedef struct _CIM_VlanEndAssociationData_ConstArrayRef
{
    CIM_VlanEndAssociationData_ConstArray value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
CIM_VlanEndAssociationData_ConstArrayRef;

MI_EXTERN_C MI_CONST MI_ClassDecl CIM_VlanEndAssociationData_rtti;

MI_INLINE MI_Result MI_CALL CIM_VlanEndAssociationData_Construct(
    CIM_VlanEndAssociationData* self,
    MI_Context* context)
{
    return MI_ConstructInstance(context, &CIM_VlanEndAssociationData_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL CIM_VlanEndAssociationData_Clone(
    const CIM_VlanEndAssociationData* self,
    CIM_VlanEndAssociationData** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Boolean MI_CALL CIM_VlanEndAssociationData_IsA(
    const MI_Instance* self)
{
    MI_Boolean res = MI_FALSE;
    return MI_Instance_IsA(self, &CIM_VlanEndAssociationData_rtti, &res) == MI_RESULT_OK && res;
}

MI_INLINE MI_Result MI_CALL CIM_VlanEndAssociationData_Destruct(CIM_VlanEndAssociationData* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL CIM_VlanEndAssociationData_Delete(CIM_VlanEndAssociationData* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL CIM_VlanEndAssociationData_Post(
    const CIM_VlanEndAssociationData* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL CIM_VlanEndAssociationData_Set_Left(
    CIM_VlanEndAssociationData* self,
    const CIM_VLANEndpoint* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        0,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_VlanEndAssociationData_SetPtr_Left(
    CIM_VlanEndAssociationData* self,
    const CIM_VLANEndpoint* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        0,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_VlanEndAssociationData_Clear_Left(
    CIM_VlanEndAssociationData* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_VlanEndAssociationData_Set_Right(
    CIM_VlanEndAssociationData* self,
    const CIM_VLANEndpointSettingData* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_VlanEndAssociationData_SetPtr_Right(
    CIM_VlanEndAssociationData* self,
    const CIM_VLANEndpointSettingData* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_VlanEndAssociationData_Clear_Right(
    CIM_VlanEndAssociationData* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        1);
}

/*
**==============================================================================
**
** CIM_VlanEndAssociationData provider function prototypes
**
**==============================================================================
*/

/* The developer may optionally define this structure */
typedef struct _CIM_VlanEndAssociationData_Self CIM_VlanEndAssociationData_Self;

MI_EXTERN_C void MI_CALL CIM_VlanEndAssociationData_Load(
    CIM_VlanEndAssociationData_Self** self,
    MI_Module_Self* selfModule,
    MI_Context* context);

MI_EXTERN_C void MI_CALL CIM_VlanEndAssociationData_Unload(
    CIM_VlanEndAssociationData_Self* self,
    MI_Context* context);

MI_EXTERN_C void MI_CALL CIM_VlanEndAssociationData_EnumerateInstances(
    CIM_VlanEndAssociationData_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter);

MI_EXTERN_C void MI_CALL CIM_VlanEndAssociationData_GetInstance(
    CIM_VlanEndAssociationData_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_VlanEndAssociationData* instanceName,
    const MI_PropertySet* propertySet);

MI_EXTERN_C void MI_CALL CIM_VlanEndAssociationData_CreateInstance(
    CIM_VlanEndAssociationData_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_VlanEndAssociationData* newInstance);

MI_EXTERN_C void MI_CALL CIM_VlanEndAssociationData_ModifyInstance(
    CIM_VlanEndAssociationData_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_VlanEndAssociationData* modifiedInstance,
    const MI_PropertySet* propertySet);

MI_EXTERN_C void MI_CALL CIM_VlanEndAssociationData_DeleteInstance(
    CIM_VlanEndAssociationData_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_VlanEndAssociationData* instanceName);

MI_EXTERN_C void MI_CALL CIM_VlanEndAssociationData_AssociatorInstancesLeft(
    CIM_VlanEndAssociationData_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_VLANEndpoint* instanceName,
    const MI_Char* resultClass,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter);

MI_EXTERN_C void MI_CALL CIM_VlanEndAssociationData_AssociatorInstancesRight(
    CIM_VlanEndAssociationData_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_VLANEndpointSettingData* instanceName,
    const MI_Char* resultClass,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter);

MI_EXTERN_C void MI_CALL CIM_VlanEndAssociationData_ReferenceInstancesLeft(
    CIM_VlanEndAssociationData_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_VLANEndpoint* instanceName,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter);

MI_EXTERN_C void MI_CALL CIM_VlanEndAssociationData_ReferenceInstancesRight(
    CIM_VlanEndAssociationData_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_VLANEndpointSettingData* instanceName,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter);


#endif /* _CIM_VlanEndAssociationData_h */
