/* @migen@ */
/*
**==============================================================================
**
** WARNING: THIS FILE WAS AUTOMATICALLY GENERATED. PLEASE DO NOT EDIT.
**
**==============================================================================
*/
#ifndef _CIM_VlanAssociationVlanEnd_h
#define _CIM_VlanAssociationVlanEnd_h

#include <MI.h>
#include "MSFT_NetworkVLAN.h"
#include "CIM_VLANEndpoint.h"

/*
**==============================================================================
**
** CIM_VlanAssociationVlanEnd [CIM_VlanAssociationVlanEnd]
**
** Keys:
**    Left
**    Right
**
**==============================================================================
*/

typedef struct _CIM_VlanAssociationVlanEnd
{
    MI_Instance __instance;
    /* CIM_VlanAssociationVlanEnd properties */
    /*KEY*/ MSFT_NetworkVLAN_ConstRef Left;
    /*KEY*/ CIM_VLANEndpoint_ConstRef Right;
}
CIM_VlanAssociationVlanEnd;

typedef struct _CIM_VlanAssociationVlanEnd_Ref
{
    CIM_VlanAssociationVlanEnd* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
CIM_VlanAssociationVlanEnd_Ref;

typedef struct _CIM_VlanAssociationVlanEnd_ConstRef
{
    MI_CONST CIM_VlanAssociationVlanEnd* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
CIM_VlanAssociationVlanEnd_ConstRef;

typedef struct _CIM_VlanAssociationVlanEnd_Array
{
    struct _CIM_VlanAssociationVlanEnd** data;
    MI_Uint32 size;
}
CIM_VlanAssociationVlanEnd_Array;

typedef struct _CIM_VlanAssociationVlanEnd_ConstArray
{
    struct _CIM_VlanAssociationVlanEnd MI_CONST* MI_CONST* data;
    MI_Uint32 size;
}
CIM_VlanAssociationVlanEnd_ConstArray;

typedef struct _CIM_VlanAssociationVlanEnd_ArrayRef
{
    CIM_VlanAssociationVlanEnd_Array value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
CIM_VlanAssociationVlanEnd_ArrayRef;

typedef struct _CIM_VlanAssociationVlanEnd_ConstArrayRef
{
    CIM_VlanAssociationVlanEnd_ConstArray value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
CIM_VlanAssociationVlanEnd_ConstArrayRef;

MI_EXTERN_C MI_CONST MI_ClassDecl CIM_VlanAssociationVlanEnd_rtti;

MI_INLINE MI_Result MI_CALL CIM_VlanAssociationVlanEnd_Construct(
    CIM_VlanAssociationVlanEnd* self,
    MI_Context* context)
{
    return MI_ConstructInstance(context, &CIM_VlanAssociationVlanEnd_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL CIM_VlanAssociationVlanEnd_Clone(
    const CIM_VlanAssociationVlanEnd* self,
    CIM_VlanAssociationVlanEnd** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Boolean MI_CALL CIM_VlanAssociationVlanEnd_IsA(
    const MI_Instance* self)
{
    MI_Boolean res = MI_FALSE;
    return MI_Instance_IsA(self, &CIM_VlanAssociationVlanEnd_rtti, &res) == MI_RESULT_OK && res;
}

MI_INLINE MI_Result MI_CALL CIM_VlanAssociationVlanEnd_Destruct(CIM_VlanAssociationVlanEnd* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL CIM_VlanAssociationVlanEnd_Delete(CIM_VlanAssociationVlanEnd* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL CIM_VlanAssociationVlanEnd_Post(
    const CIM_VlanAssociationVlanEnd* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL CIM_VlanAssociationVlanEnd_Set_Left(
    CIM_VlanAssociationVlanEnd* self,
    const MSFT_NetworkVLAN* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        0,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_VlanAssociationVlanEnd_SetPtr_Left(
    CIM_VlanAssociationVlanEnd* self,
    const MSFT_NetworkVLAN* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        0,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_VlanAssociationVlanEnd_Clear_Left(
    CIM_VlanAssociationVlanEnd* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_VlanAssociationVlanEnd_Set_Right(
    CIM_VlanAssociationVlanEnd* self,
    const CIM_VLANEndpoint* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_VlanAssociationVlanEnd_SetPtr_Right(
    CIM_VlanAssociationVlanEnd* self,
    const CIM_VLANEndpoint* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_VlanAssociationVlanEnd_Clear_Right(
    CIM_VlanAssociationVlanEnd* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        1);
}

/*
**==============================================================================
**
** CIM_VlanAssociationVlanEnd provider function prototypes
**
**==============================================================================
*/

/* The developer may optionally define this structure */
typedef struct _CIM_VlanAssociationVlanEnd_Self CIM_VlanAssociationVlanEnd_Self;

MI_EXTERN_C void MI_CALL CIM_VlanAssociationVlanEnd_Load(
    CIM_VlanAssociationVlanEnd_Self** self,
    MI_Module_Self* selfModule,
    MI_Context* context);

MI_EXTERN_C void MI_CALL CIM_VlanAssociationVlanEnd_Unload(
    CIM_VlanAssociationVlanEnd_Self* self,
    MI_Context* context);

MI_EXTERN_C void MI_CALL CIM_VlanAssociationVlanEnd_EnumerateInstances(
    CIM_VlanAssociationVlanEnd_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter);

MI_EXTERN_C void MI_CALL CIM_VlanAssociationVlanEnd_GetInstance(
    CIM_VlanAssociationVlanEnd_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_VlanAssociationVlanEnd* instanceName,
    const MI_PropertySet* propertySet);

MI_EXTERN_C void MI_CALL CIM_VlanAssociationVlanEnd_CreateInstance(
    CIM_VlanAssociationVlanEnd_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_VlanAssociationVlanEnd* newInstance);

MI_EXTERN_C void MI_CALL CIM_VlanAssociationVlanEnd_ModifyInstance(
    CIM_VlanAssociationVlanEnd_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_VlanAssociationVlanEnd* modifiedInstance,
    const MI_PropertySet* propertySet);

MI_EXTERN_C void MI_CALL CIM_VlanAssociationVlanEnd_DeleteInstance(
    CIM_VlanAssociationVlanEnd_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_VlanAssociationVlanEnd* instanceName);

MI_EXTERN_C void MI_CALL CIM_VlanAssociationVlanEnd_AssociatorInstancesLeft(
    CIM_VlanAssociationVlanEnd_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MSFT_NetworkVLAN* instanceName,
    const MI_Char* resultClass,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter);

MI_EXTERN_C void MI_CALL CIM_VlanAssociationVlanEnd_AssociatorInstancesRight(
    CIM_VlanAssociationVlanEnd_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_VLANEndpoint* instanceName,
    const MI_Char* resultClass,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter);

MI_EXTERN_C void MI_CALL CIM_VlanAssociationVlanEnd_ReferenceInstancesLeft(
    CIM_VlanAssociationVlanEnd_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MSFT_NetworkVLAN* instanceName,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter);

MI_EXTERN_C void MI_CALL CIM_VlanAssociationVlanEnd_ReferenceInstancesRight(
    CIM_VlanAssociationVlanEnd_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_VLANEndpoint* instanceName,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter);


#endif /* _CIM_VlanAssociationVlanEnd_h */
