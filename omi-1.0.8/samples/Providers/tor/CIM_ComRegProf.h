/* @migen@ */
/*
**==============================================================================
**
** WARNING: THIS FILE WAS AUTOMATICALLY GENERATED. PLEASE DO NOT EDIT.
**
**==============================================================================
*/
#ifndef _CIM_ComRegProf_h
#define _CIM_ComRegProf_h

#include <MI.h>
#include "CIM_RegisteredProfile.h"
#include "CIM_ComputerSystem.h"

/*
**==============================================================================
**
** CIM_ComRegProf [CIM_ComRegProf]
**
** Keys:
**    Left
**    Right
**
**==============================================================================
*/

typedef struct _CIM_ComRegProf
{
    MI_Instance __instance;
    /* CIM_ComRegProf properties */
    /*KEY*/ CIM_RegisteredProfile_ConstRef Left;
    /*KEY*/ CIM_ComputerSystem_ConstRef Right;
}
CIM_ComRegProf;

typedef struct _CIM_ComRegProf_Ref
{
    CIM_ComRegProf* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
CIM_ComRegProf_Ref;

typedef struct _CIM_ComRegProf_ConstRef
{
    MI_CONST CIM_ComRegProf* value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
CIM_ComRegProf_ConstRef;

typedef struct _CIM_ComRegProf_Array
{
    struct _CIM_ComRegProf** data;
    MI_Uint32 size;
}
CIM_ComRegProf_Array;

typedef struct _CIM_ComRegProf_ConstArray
{
    struct _CIM_ComRegProf MI_CONST* MI_CONST* data;
    MI_Uint32 size;
}
CIM_ComRegProf_ConstArray;

typedef struct _CIM_ComRegProf_ArrayRef
{
    CIM_ComRegProf_Array value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
CIM_ComRegProf_ArrayRef;

typedef struct _CIM_ComRegProf_ConstArrayRef
{
    CIM_ComRegProf_ConstArray value;
    MI_Boolean exists;
    MI_Uint8 flags;
}
CIM_ComRegProf_ConstArrayRef;

MI_EXTERN_C MI_CONST MI_ClassDecl CIM_ComRegProf_rtti;

MI_INLINE MI_Result MI_CALL CIM_ComRegProf_Construct(
    CIM_ComRegProf* self,
    MI_Context* context)
{
    return MI_ConstructInstance(context, &CIM_ComRegProf_rtti,
        (MI_Instance*)&self->__instance);
}

MI_INLINE MI_Result MI_CALL CIM_ComRegProf_Clone(
    const CIM_ComRegProf* self,
    CIM_ComRegProf** newInstance)
{
    return MI_Instance_Clone(
        &self->__instance, (MI_Instance**)newInstance);
}

MI_INLINE MI_Boolean MI_CALL CIM_ComRegProf_IsA(
    const MI_Instance* self)
{
    MI_Boolean res = MI_FALSE;
    return MI_Instance_IsA(self, &CIM_ComRegProf_rtti, &res) == MI_RESULT_OK && res;
}

MI_INLINE MI_Result MI_CALL CIM_ComRegProf_Destruct(CIM_ComRegProf* self)
{
    return MI_Instance_Destruct(&self->__instance);
}

MI_INLINE MI_Result MI_CALL CIM_ComRegProf_Delete(CIM_ComRegProf* self)
{
    return MI_Instance_Delete(&self->__instance);
}

MI_INLINE MI_Result MI_CALL CIM_ComRegProf_Post(
    const CIM_ComRegProf* self,
    MI_Context* context)
{
    return MI_PostInstance(context, &self->__instance);
}

MI_INLINE MI_Result MI_CALL CIM_ComRegProf_Set_Left(
    CIM_ComRegProf* self,
    const CIM_RegisteredProfile* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        0,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_ComRegProf_SetPtr_Left(
    CIM_ComRegProf* self,
    const CIM_RegisteredProfile* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        0,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_ComRegProf_Clear_Left(
    CIM_ComRegProf* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_ComRegProf_Set_Right(
    CIM_ComRegProf* self,
    const CIM_ComputerSystem* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_REFERENCE,
        0);
}

MI_INLINE MI_Result MI_CALL CIM_ComRegProf_SetPtr_Right(
    CIM_ComRegProf* self,
    const CIM_ComputerSystem* x)
{
    return self->__instance.ft->SetElementAt(
        (MI_Instance*)&self->__instance,
        1,
        (MI_Value*)&x,
        MI_REFERENCE,
        MI_FLAG_BORROW);
}

MI_INLINE MI_Result MI_CALL CIM_ComRegProf_Clear_Right(
    CIM_ComRegProf* self)
{
    return self->__instance.ft->ClearElementAt(
        (MI_Instance*)&self->__instance,
        1);
}

/*
**==============================================================================
**
** CIM_ComRegProf provider function prototypes
**
**==============================================================================
*/

/* The developer may optionally define this structure */
typedef struct _CIM_ComRegProf_Self CIM_ComRegProf_Self;

MI_EXTERN_C void MI_CALL CIM_ComRegProf_Load(
    CIM_ComRegProf_Self** self,
    MI_Module_Self* selfModule,
    MI_Context* context);

MI_EXTERN_C void MI_CALL CIM_ComRegProf_Unload(
    CIM_ComRegProf_Self* self,
    MI_Context* context);

MI_EXTERN_C void MI_CALL CIM_ComRegProf_EnumerateInstances(
    CIM_ComRegProf_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter);

MI_EXTERN_C void MI_CALL CIM_ComRegProf_GetInstance(
    CIM_ComRegProf_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_ComRegProf* instanceName,
    const MI_PropertySet* propertySet);

MI_EXTERN_C void MI_CALL CIM_ComRegProf_CreateInstance(
    CIM_ComRegProf_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_ComRegProf* newInstance);

MI_EXTERN_C void MI_CALL CIM_ComRegProf_ModifyInstance(
    CIM_ComRegProf_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_ComRegProf* modifiedInstance,
    const MI_PropertySet* propertySet);

MI_EXTERN_C void MI_CALL CIM_ComRegProf_DeleteInstance(
    CIM_ComRegProf_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_ComRegProf* instanceName);

MI_EXTERN_C void MI_CALL CIM_ComRegProf_AssociatorInstancesLeft(
    CIM_ComRegProf_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_RegisteredProfile* instanceName,
    const MI_Char* resultClass,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter);

MI_EXTERN_C void MI_CALL CIM_ComRegProf_AssociatorInstancesRight(
    CIM_ComRegProf_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_ComputerSystem* instanceName,
    const MI_Char* resultClass,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter);

MI_EXTERN_C void MI_CALL CIM_ComRegProf_ReferenceInstancesLeft(
    CIM_ComRegProf_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_RegisteredProfile* instanceName,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter);

MI_EXTERN_C void MI_CALL CIM_ComRegProf_ReferenceInstancesRight(
    CIM_ComRegProf_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const CIM_ComputerSystem* instanceName,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter);


#endif /* _CIM_ComRegProf_h */
