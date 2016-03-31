/* @migen@ */
/*
**==============================================================================
**
** WARNING: THIS FILE WAS AUTOMATICALLY GENERATED. PLEASE DO NOT EDIT.
**
**==============================================================================
*/
#ifndef _CIM_RegisterProfileAssociationPhyComputerSys_h
#define _CIM_RegisterProfileAssociationPhyComputerSys_h

#include <MI.h>
#include "CIM_RegisteredProfile.h"
#include "CIM_PhysicalComputerSystemView.h"

/*
**==============================================================================
**
** CIM_RegisterProfileAssociationPhyComputerSys [CIM_RegisterProfileAssociationPhyComputerSys]
**
** Keys:
**    Left
**    Right
**
**==============================================================================
*/

typedef struct _CIM_RegisterProfileAssociationPhyComputerSys
{
    MI_Instance __instance;
    /* CIM_RegisterProfileAssociationPhyComputerSys properties */
    /*KEY*/ CIM_RegisteredProfile_ConstRef Left;
    /*KEY*/ CIM_PhysicalComputerSystemView_ConstRef Right;
}
CIM_RegisterProfileAssociationPhyComputerSys;

typedef struct _CIM_RegisterProfileAssociationPhyComputerSys_Ref
{
    CIM_RegisterProfileAssociationPhyComputerSys* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
CIM_RegisterProfileAssociationPhyComputerSys_Ref;

typedef struct _CIM_RegisterProfileAssociationPhyComputerSys_ConstRef
{
    MI_CONST CIM_RegisterProfileAssociationPhyComputerSys* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
CIM_RegisterProfileAssociationPhyComputerSys_ConstRef;

typedef struct _CIM_RegisterProfileAssociationPhyComputerSys_Array
{
    struct _CIM_RegisterProfileAssociationPhyComputerSys** data;
    MI_Uint32 size;
}
CIM_RegisterProfileAssociationPhyComputerSys_Array;

typedef struct _CIM_RegisterProfileAssociationPhyComputerSys_ConstArray
{
    struct _CIM_RegisterProfileAssociationPhyComputerSys MI_CONST* MI_CONST* data;
    MI_Uint32 size;
}
CIM_RegisterProfileAssociationPhyComputerSys_ConstArray;

typedef struct _CIM_RegisterProfileAssociationPhyComputerSys_ArrayRef
{
    CIM_RegisterProfileAssociationPhyComputerSys_Array value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
CIM_RegisterProfileAssociationPhyComputerSys_ArrayRef;

typedef struct _CIM_RegisterProfileAssociationPhyComputerSys_ConstArrayRef
{
    CIM_RegisterProfileAssociationPhyComputerSys_ConstArray value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
CIM_RegisterProfileAssociationPhyComputerSys_ConstArrayRef;

MI_EXTERN_C MI_CONST MI_ClassDecl CIM_RegisterProfileAssociationPhyComputerSys_rtti;

MI_INLINE MI_Result MI_CALL CIM_RegisterProfileAssociationPhyComputerSys_Construct(
    CIM_RegisterProfileAssociationPhyComputerSys* self,
    MI_Context* context)
{
    return MI_ConstructInstance(context, &CIM_RegisterProfileAssociationPhyComputerSys_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL CIM_RegisterProfileAssociationPhyComputerSys_Clone(
    const CIM_RegisterProfileAssociationPhyComputerSys* self,
    CIM_RegisterProfileAssociationPhyComputerSys** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Boolean MI_CALL CIM_RegisterProfileAssociationPhyComputerSys_IsA(
    const MI_Instance* self)
{
    MI_Boolean res = MI_FALSE;
    return MI_Instance_IsA(self, &CIM_RegisterProfileAssociationPhyComputerSys_rtti, &res) == MI_RESULT_OK && res;
}

MI_INLINE MI_Result MI_CALL CIM_RegisterProfileAssociationPhyComputerSys_Destruct(CIM_RegisterProfileAssociationPhyComputerSys* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL CIM_RegisterProfileAssociationPhyComputerSys_Delete(CIM_RegisterProfileAssociationPhyComputerSys* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL CIM_RegisterProfileAssociationPhyComputerSys_Post(
    const CIM_RegisterProfileAssociationPhyComputerSys* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL CIM_RegisterProfileAssociationPhyComputerSys_Set_Left(
    CIM_RegisterProfileAssociationPhyComputerSys* self,
    const CIM_RegisteredProfile* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        0,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_RegisterProfileAssociationPhyComputerSys_SetPtr_Left(
    CIM_RegisterProfileAssociationPhyComputerSys* self,
    const CIM_RegisteredProfile* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        0,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_RegisterProfileAssociationPhyComputerSys_Clear_Left(
    CIM_RegisterProfileAssociationPhyComputerSys* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_RegisterProfileAssociationPhyComputerSys_Set_Right(
    CIM_RegisterProfileAssociationPhyComputerSys* self,
    const CIM_PhysicalComputerSystemView* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_RegisterProfileAssociationPhyComputerSys_SetPtr_Right(
    CIM_RegisterProfileAssociationPhyComputerSys* self,
    const CIM_PhysicalComputerSystemView* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_RegisterProfileAssociationPhyComputerSys_Clear_Right(
    CIM_RegisterProfileAssociationPhyComputerSys* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        1);
}

/*
**==============================================================================
**
** CIM_RegisterProfileAssociationPhyComputerSys provider function prototypes
**
**==============================================================================
*/

/* The developer may optionally define this structure */
typedef struct _CIM_RegisterProfileAssociationPhyComputerSys_Self CIM_RegisterProfileAssociationPhyComputerSys_Self;

MI_EXTERN_C void MI_CALL CIM_RegisterProfileAssociationPhyComputerSys_Load(
    CIM_RegisterProfileAssociationPhyComputerSys_Self** self,
    MI_Module_Self* selfModule,
    MI_Context* context);

MI_EXTERN_C void MI_CALL CIM_RegisterProfileAssociationPhyComputerSys_Unload(
    CIM_RegisterProfileAssociationPhyComputerSys_Self* self,
    MI_Context* context);

MI_EXTERN_C void MI_CALL CIM_RegisterProfileAssociationPhyComputerSys_EnumerateInstances(
    CIM_RegisterProfileAssociationPhyComputerSys_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter);

MI_EXTERN_C void MI_CALL CIM_RegisterProfileAssociationPhyComputerSys_GetInstance(
    CIM_RegisterProfileAssociationPhyComputerSys_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_RegisterProfileAssociationPhyComputerSys* instanceName,
    const MI_PropertySet* propertySet);

MI_EXTERN_C void MI_CALL CIM_RegisterProfileAssociationPhyComputerSys_CreateInstance(
    CIM_RegisterProfileAssociationPhyComputerSys_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_RegisterProfileAssociationPhyComputerSys* newInstance);

MI_EXTERN_C void MI_CALL CIM_RegisterProfileAssociationPhyComputerSys_ModifyInstance(
    CIM_RegisterProfileAssociationPhyComputerSys_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_RegisterProfileAssociationPhyComputerSys* modifiedInstance,
    const MI_PropertySet* propertySet);

MI_EXTERN_C void MI_CALL CIM_RegisterProfileAssociationPhyComputerSys_DeleteInstance(
    CIM_RegisterProfileAssociationPhyComputerSys_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_RegisterProfileAssociationPhyComputerSys* instanceName);

MI_EXTERN_C void MI_CALL CIM_RegisterProfileAssociationPhyComputerSys_AssociatorInstancesLeft(
    CIM_RegisterProfileAssociationPhyComputerSys_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_RegisteredProfile* instanceName,
    const MI_Char* resultClass,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter);

MI_EXTERN_C void MI_CALL CIM_RegisterProfileAssociationPhyComputerSys_AssociatorInstancesRight(
    CIM_RegisterProfileAssociationPhyComputerSys_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_PhysicalComputerSystemView* instanceName,
    const MI_Char* resultClass,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter);

MI_EXTERN_C void MI_CALL CIM_RegisterProfileAssociationPhyComputerSys_ReferenceInstancesLeft(
    CIM_RegisterProfileAssociationPhyComputerSys_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_RegisteredProfile* instanceName,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter);

MI_EXTERN_C void MI_CALL CIM_RegisterProfileAssociationPhyComputerSys_ReferenceInstancesRight(
    CIM_RegisterProfileAssociationPhyComputerSys_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_PhysicalComputerSystemView* instanceName,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter);


#endif /* _CIM_RegisterProfileAssociationPhyComputerSys_h */
