/* @migen@ */
/*
**==============================================================================
**
** WARNING: THIS FILE WAS AUTOMATICALLY GENERATED. PLEASE DO NOT EDIT.
**
**==============================================================================
*/
#include <ctype.h>
#include <MI.h>
#include "VLAN.h"

/*
**==============================================================================
**
** Schema Declaration
**
**==============================================================================
*/

extern MI_SchemaDecl schemaDecl;

/*
**==============================================================================
**
** Qualifier declarations
**
**==============================================================================
*/

/*
**==============================================================================
**
** CIM_ManagedElement
**
**==============================================================================
*/

/* property CIM_ManagedElement.InstanceID */
static MI_CONST MI_PropertyDecl CIM_ManagedElement_InstanceID_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0069640A, /* code */
    MI_T("InstanceID"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_ManagedElement, InstanceID), /* offset */
    MI_T("CIM_ManagedElement"), /* origin */
    MI_T("CIM_ManagedElement"), /* propagator */
    NULL,
};

static MI_CONST MI_Uint32 CIM_ManagedElement_Caption_MaxLen_qual_value = 64U;

static MI_CONST MI_Qualifier CIM_ManagedElement_Caption_MaxLen_qual =
{
    MI_T("MaxLen"),
    MI_UINT32,
    0,
    &CIM_ManagedElement_Caption_MaxLen_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_ManagedElement_Caption_quals[] =
{
    &CIM_ManagedElement_Caption_MaxLen_qual,
};

/* property CIM_ManagedElement.Caption */
static MI_CONST MI_PropertyDecl CIM_ManagedElement_Caption_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00636E07, /* code */
    MI_T("Caption"), /* name */
    CIM_ManagedElement_Caption_quals, /* qualifiers */
    MI_COUNT(CIM_ManagedElement_Caption_quals), /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_ManagedElement, Caption), /* offset */
    MI_T("CIM_ManagedElement"), /* origin */
    MI_T("CIM_ManagedElement"), /* propagator */
    NULL,
};

/* property CIM_ManagedElement.Description */
static MI_CONST MI_PropertyDecl CIM_ManagedElement_Description_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00646E0B, /* code */
    MI_T("Description"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_ManagedElement, Description), /* offset */
    MI_T("CIM_ManagedElement"), /* origin */
    MI_T("CIM_ManagedElement"), /* propagator */
    NULL,
};

/* property CIM_ManagedElement.ElementName */
static MI_CONST MI_PropertyDecl CIM_ManagedElement_ElementName_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0065650B, /* code */
    MI_T("ElementName"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_ManagedElement, ElementName), /* offset */
    MI_T("CIM_ManagedElement"), /* origin */
    MI_T("CIM_ManagedElement"), /* propagator */
    NULL,
};

static MI_PropertyDecl MI_CONST* MI_CONST CIM_ManagedElement_props[] =
{
    &CIM_ManagedElement_InstanceID_prop,
    &CIM_ManagedElement_Caption_prop,
    &CIM_ManagedElement_Description_prop,
    &CIM_ManagedElement_ElementName_prop,
};

static MI_CONST MI_Char* CIM_ManagedElement_Version_qual_value = MI_T("2.19.0");

static MI_CONST MI_Qualifier CIM_ManagedElement_Version_qual =
{
    MI_T("Version"),
    MI_STRING,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_TRANSLATABLE|MI_FLAG_RESTRICTED,
    &CIM_ManagedElement_Version_qual_value
};

static MI_CONST MI_Char* CIM_ManagedElement_UMLPackagePath_qual_value = MI_T("CIM::Core::CoreElements");

static MI_CONST MI_Qualifier CIM_ManagedElement_UMLPackagePath_qual =
{
    MI_T("UMLPackagePath"),
    MI_STRING,
    0,
    &CIM_ManagedElement_UMLPackagePath_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_ManagedElement_quals[] =
{
    &CIM_ManagedElement_Version_qual,
    &CIM_ManagedElement_UMLPackagePath_qual,
};

/* class CIM_ManagedElement */
MI_CONST MI_ClassDecl CIM_ManagedElement_rtti =
{
    MI_FLAG_CLASS|MI_FLAG_ABSTRACT, /* flags */
    0x00637412, /* code */
    MI_T("CIM_ManagedElement"), /* name */
    CIM_ManagedElement_quals, /* qualifiers */
    MI_COUNT(CIM_ManagedElement_quals), /* numQualifiers */
    CIM_ManagedElement_props, /* properties */
    MI_COUNT(CIM_ManagedElement_props), /* numProperties */
    sizeof(CIM_ManagedElement), /* size */
    NULL, /* superClass */
    NULL, /* superClassDecl */
    NULL, /* methods */
    0, /* numMethods */
    &schemaDecl, /* schema */
    NULL, /* functions */
    NULL, /* owningClass */
};

/*
**==============================================================================
**
** CIM_Collection
**
**==============================================================================
*/

static MI_PropertyDecl MI_CONST* MI_CONST CIM_Collection_props[] =
{
    &CIM_ManagedElement_InstanceID_prop,
    &CIM_ManagedElement_Caption_prop,
    &CIM_ManagedElement_Description_prop,
    &CIM_ManagedElement_ElementName_prop,
};

static MI_CONST MI_Char* CIM_Collection_UMLPackagePath_qual_value = MI_T("CIM::Core::Collection");

static MI_CONST MI_Qualifier CIM_Collection_UMLPackagePath_qual =
{
    MI_T("UMLPackagePath"),
    MI_STRING,
    0,
    &CIM_Collection_UMLPackagePath_qual_value
};

static MI_CONST MI_Char* CIM_Collection_Version_qual_value = MI_T("2.6.0");

static MI_CONST MI_Qualifier CIM_Collection_Version_qual =
{
    MI_T("Version"),
    MI_STRING,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_TRANSLATABLE|MI_FLAG_RESTRICTED,
    &CIM_Collection_Version_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_Collection_quals[] =
{
    &CIM_Collection_UMLPackagePath_qual,
    &CIM_Collection_Version_qual,
};

/* class CIM_Collection */
MI_CONST MI_ClassDecl CIM_Collection_rtti =
{
    MI_FLAG_CLASS|MI_FLAG_ABSTRACT, /* flags */
    0x00636E0E, /* code */
    MI_T("CIM_Collection"), /* name */
    CIM_Collection_quals, /* qualifiers */
    MI_COUNT(CIM_Collection_quals), /* numQualifiers */
    CIM_Collection_props, /* properties */
    MI_COUNT(CIM_Collection_props), /* numProperties */
    sizeof(CIM_Collection), /* size */
    MI_T("CIM_ManagedElement"), /* superClass */
    &CIM_ManagedElement_rtti, /* superClassDecl */
    NULL, /* methods */
    0, /* numMethods */
    &schemaDecl, /* schema */
    NULL, /* functions */
    NULL, /* owningClass */
};

/*
**==============================================================================
**
** CIM_SystemSpecificCollection
**
**==============================================================================
*/

static MI_CONST MI_Char* CIM_SystemSpecificCollection_InstanceID_Override_qual_value = MI_T("InstanceID");

static MI_CONST MI_Qualifier CIM_SystemSpecificCollection_InstanceID_Override_qual =
{
    MI_T("Override"),
    MI_STRING,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_RESTRICTED,
    &CIM_SystemSpecificCollection_InstanceID_Override_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_SystemSpecificCollection_InstanceID_quals[] =
{
    &CIM_SystemSpecificCollection_InstanceID_Override_qual,
};

/* property CIM_SystemSpecificCollection.InstanceID */
static MI_CONST MI_PropertyDecl CIM_SystemSpecificCollection_InstanceID_prop =
{
    MI_FLAG_PROPERTY|MI_FLAG_KEY, /* flags */
    0x0069640A, /* code */
    MI_T("InstanceID"), /* name */
    CIM_SystemSpecificCollection_InstanceID_quals, /* qualifiers */
    MI_COUNT(CIM_SystemSpecificCollection_InstanceID_quals), /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_SystemSpecificCollection, InstanceID), /* offset */
    MI_T("CIM_ManagedElement"), /* origin */
    MI_T("CIM_SystemSpecificCollection"), /* propagator */
    NULL,
};

static MI_PropertyDecl MI_CONST* MI_CONST CIM_SystemSpecificCollection_props[] =
{
    &CIM_SystemSpecificCollection_InstanceID_prop,
    &CIM_ManagedElement_Caption_prop,
    &CIM_ManagedElement_Description_prop,
    &CIM_ManagedElement_ElementName_prop,
};

static MI_CONST MI_Char* CIM_SystemSpecificCollection_UMLPackagePath_qual_value = MI_T("CIM::Core::Collection");

static MI_CONST MI_Qualifier CIM_SystemSpecificCollection_UMLPackagePath_qual =
{
    MI_T("UMLPackagePath"),
    MI_STRING,
    0,
    &CIM_SystemSpecificCollection_UMLPackagePath_qual_value
};

static MI_CONST MI_Char* CIM_SystemSpecificCollection_Version_qual_value = MI_T("2.19.0");

static MI_CONST MI_Qualifier CIM_SystemSpecificCollection_Version_qual =
{
    MI_T("Version"),
    MI_STRING,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_TRANSLATABLE|MI_FLAG_RESTRICTED,
    &CIM_SystemSpecificCollection_Version_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_SystemSpecificCollection_quals[] =
{
    &CIM_SystemSpecificCollection_UMLPackagePath_qual,
    &CIM_SystemSpecificCollection_Version_qual,
};

/* class CIM_SystemSpecificCollection */
MI_CONST MI_ClassDecl CIM_SystemSpecificCollection_rtti =
{
    MI_FLAG_CLASS, /* flags */
    0x00636E1C, /* code */
    MI_T("CIM_SystemSpecificCollection"), /* name */
    CIM_SystemSpecificCollection_quals, /* qualifiers */
    MI_COUNT(CIM_SystemSpecificCollection_quals), /* numQualifiers */
    CIM_SystemSpecificCollection_props, /* properties */
    MI_COUNT(CIM_SystemSpecificCollection_props), /* numProperties */
    sizeof(CIM_SystemSpecificCollection), /* size */
    MI_T("CIM_Collection"), /* superClass */
    &CIM_Collection_rtti, /* superClassDecl */
    NULL, /* methods */
    0, /* numMethods */
    &schemaDecl, /* schema */
    NULL, /* functions */
    NULL, /* owningClass */
};

/*
**==============================================================================
**
** CIM_ConnectivityCollection
**
**==============================================================================
*/

/* property CIM_ConnectivityCollection.ConnectivityStatus */
static MI_CONST MI_PropertyDecl CIM_ConnectivityCollection_ConnectivityStatus_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00637312, /* code */
    MI_T("ConnectivityStatus"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_ConnectivityCollection, ConnectivityStatus), /* offset */
    MI_T("CIM_ConnectivityCollection"), /* origin */
    MI_T("CIM_ConnectivityCollection"), /* propagator */
    NULL,
};

static MI_PropertyDecl MI_CONST* MI_CONST CIM_ConnectivityCollection_props[] =
{
    &CIM_SystemSpecificCollection_InstanceID_prop,
    &CIM_ManagedElement_Caption_prop,
    &CIM_ManagedElement_Description_prop,
    &CIM_ManagedElement_ElementName_prop,
    &CIM_ConnectivityCollection_ConnectivityStatus_prop,
};

static MI_CONST MI_Char* CIM_ConnectivityCollection_UMLPackagePath_qual_value = MI_T("CIM::Network::Collections");

static MI_CONST MI_Qualifier CIM_ConnectivityCollection_UMLPackagePath_qual =
{
    MI_T("UMLPackagePath"),
    MI_STRING,
    0,
    &CIM_ConnectivityCollection_UMLPackagePath_qual_value
};

static MI_CONST MI_Char* CIM_ConnectivityCollection_Version_qual_value = MI_T("2.7.0");

static MI_CONST MI_Qualifier CIM_ConnectivityCollection_Version_qual =
{
    MI_T("Version"),
    MI_STRING,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_TRANSLATABLE|MI_FLAG_RESTRICTED,
    &CIM_ConnectivityCollection_Version_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_ConnectivityCollection_quals[] =
{
    &CIM_ConnectivityCollection_UMLPackagePath_qual,
    &CIM_ConnectivityCollection_Version_qual,
};

/* class CIM_ConnectivityCollection */
MI_CONST MI_ClassDecl CIM_ConnectivityCollection_rtti =
{
    MI_FLAG_CLASS, /* flags */
    0x00636E1A, /* code */
    MI_T("CIM_ConnectivityCollection"), /* name */
    CIM_ConnectivityCollection_quals, /* qualifiers */
    MI_COUNT(CIM_ConnectivityCollection_quals), /* numQualifiers */
    CIM_ConnectivityCollection_props, /* properties */
    MI_COUNT(CIM_ConnectivityCollection_props), /* numProperties */
    sizeof(CIM_ConnectivityCollection), /* size */
    MI_T("CIM_SystemSpecificCollection"), /* superClass */
    &CIM_SystemSpecificCollection_rtti, /* superClassDecl */
    NULL, /* methods */
    0, /* numMethods */
    &schemaDecl, /* schema */
    NULL, /* functions */
    NULL, /* owningClass */
};

/*
**==============================================================================
**
** CIM_NetworkVLAN
**
**==============================================================================
*/

static MI_CONST MI_Sint64 CIM_NetworkVLAN_VLANId_MinValue_qual_value = MI_LL(1);

static MI_CONST MI_Qualifier CIM_NetworkVLAN_VLANId_MinValue_qual =
{
    MI_T("MinValue"),
    MI_SINT64,
    0,
    &CIM_NetworkVLAN_VLANId_MinValue_qual_value
};

static MI_CONST MI_Sint64 CIM_NetworkVLAN_VLANId_MaxValue_qual_value = MI_LL(4094);

static MI_CONST MI_Qualifier CIM_NetworkVLAN_VLANId_MaxValue_qual =
{
    MI_T("MaxValue"),
    MI_SINT64,
    0,
    &CIM_NetworkVLAN_VLANId_MaxValue_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_NetworkVLAN_VLANId_quals[] =
{
    &CIM_NetworkVLAN_VLANId_MinValue_qual,
    &CIM_NetworkVLAN_VLANId_MaxValue_qual,
};

/* property CIM_NetworkVLAN.VLANId */
static MI_CONST MI_PropertyDecl CIM_NetworkVLAN_VLANId_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00766406, /* code */
    MI_T("VLANId"), /* name */
    CIM_NetworkVLAN_VLANId_quals, /* qualifiers */
    MI_COUNT(CIM_NetworkVLAN_VLANId_quals), /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_NetworkVLAN, VLANId), /* offset */
    MI_T("CIM_NetworkVLAN"), /* origin */
    MI_T("CIM_NetworkVLAN"), /* propagator */
    NULL,
};

/* property CIM_NetworkVLAN.SAIdentifier */
static MI_CONST MI_PropertyDecl CIM_NetworkVLAN_SAIdentifier_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0073720C, /* code */
    MI_T("SAIdentifier"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_NetworkVLAN, SAIdentifier), /* offset */
    MI_T("CIM_NetworkVLAN"), /* origin */
    MI_T("CIM_NetworkVLAN"), /* propagator */
    NULL,
};

/* property CIM_NetworkVLAN.TransmissionSize */
static MI_CONST MI_PropertyDecl CIM_NetworkVLAN_TransmissionSize_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00746510, /* code */
    MI_T("TransmissionSize"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_SINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_NetworkVLAN, TransmissionSize), /* offset */
    MI_T("CIM_NetworkVLAN"), /* origin */
    MI_T("CIM_NetworkVLAN"), /* propagator */
    NULL,
};

/* property CIM_NetworkVLAN.TypeOfMedia */
static MI_CONST MI_PropertyDecl CIM_NetworkVLAN_TypeOfMedia_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0074610B, /* code */
    MI_T("TypeOfMedia"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_NetworkVLAN, TypeOfMedia), /* offset */
    MI_T("CIM_NetworkVLAN"), /* origin */
    MI_T("CIM_NetworkVLAN"), /* propagator */
    NULL,
};

/* property CIM_NetworkVLAN.OtherTypeDescription */
static MI_CONST MI_PropertyDecl CIM_NetworkVLAN_OtherTypeDescription_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006F6E14, /* code */
    MI_T("OtherTypeDescription"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_NetworkVLAN, OtherTypeDescription), /* offset */
    MI_T("CIM_NetworkVLAN"), /* origin */
    MI_T("CIM_NetworkVLAN"), /* propagator */
    NULL,
};

static MI_PropertyDecl MI_CONST* MI_CONST CIM_NetworkVLAN_props[] =
{
    &CIM_SystemSpecificCollection_InstanceID_prop,
    &CIM_ManagedElement_Caption_prop,
    &CIM_ManagedElement_Description_prop,
    &CIM_ManagedElement_ElementName_prop,
    &CIM_ConnectivityCollection_ConnectivityStatus_prop,
    &CIM_NetworkVLAN_VLANId_prop,
    &CIM_NetworkVLAN_SAIdentifier_prop,
    &CIM_NetworkVLAN_TransmissionSize_prop,
    &CIM_NetworkVLAN_TypeOfMedia_prop,
    &CIM_NetworkVLAN_OtherTypeDescription_prop,
};

static MI_CONST MI_Char* CIM_NetworkVLAN_UMLPackagePath_qual_value = MI_T("CIM::Network::VLAN");

static MI_CONST MI_Qualifier CIM_NetworkVLAN_UMLPackagePath_qual =
{
    MI_T("UMLPackagePath"),
    MI_STRING,
    0,
    &CIM_NetworkVLAN_UMLPackagePath_qual_value
};

static MI_CONST MI_Char* CIM_NetworkVLAN_Version_qual_value = MI_T("2.26.0");

static MI_CONST MI_Qualifier CIM_NetworkVLAN_Version_qual =
{
    MI_T("Version"),
    MI_STRING,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_TRANSLATABLE|MI_FLAG_RESTRICTED,
    &CIM_NetworkVLAN_Version_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_NetworkVLAN_quals[] =
{
    &CIM_NetworkVLAN_UMLPackagePath_qual,
    &CIM_NetworkVLAN_Version_qual,
};

/* class CIM_NetworkVLAN */
MI_CONST MI_ClassDecl CIM_NetworkVLAN_rtti =
{
    MI_FLAG_CLASS, /* flags */
    0x00636E0F, /* code */
    MI_T("CIM_NetworkVLAN"), /* name */
    CIM_NetworkVLAN_quals, /* qualifiers */
    MI_COUNT(CIM_NetworkVLAN_quals), /* numQualifiers */
    CIM_NetworkVLAN_props, /* properties */
    MI_COUNT(CIM_NetworkVLAN_props), /* numProperties */
    sizeof(CIM_NetworkVLAN), /* size */
    MI_T("CIM_ConnectivityCollection"), /* superClass */
    &CIM_ConnectivityCollection_rtti, /* superClassDecl */
    NULL, /* methods */
    0, /* numMethods */
    &schemaDecl, /* schema */
    NULL, /* functions */
    NULL, /* owningClass */
};

/*
**==============================================================================
**
** VLAN
**
**==============================================================================
*/

static MI_PropertyDecl MI_CONST* MI_CONST VLAN_props[] =
{
    &CIM_SystemSpecificCollection_InstanceID_prop,
    &CIM_ManagedElement_Caption_prop,
    &CIM_ManagedElement_Description_prop,
    &CIM_ManagedElement_ElementName_prop,
    &CIM_ConnectivityCollection_ConnectivityStatus_prop,
    &CIM_NetworkVLAN_VLANId_prop,
    &CIM_NetworkVLAN_SAIdentifier_prop,
    &CIM_NetworkVLAN_TransmissionSize_prop,
    &CIM_NetworkVLAN_TypeOfMedia_prop,
    &CIM_NetworkVLAN_OtherTypeDescription_prop,
};

static MI_CONST MI_ProviderFT VLAN_funcs =
{
  (MI_ProviderFT_Load)VLAN_Load,
  (MI_ProviderFT_Unload)VLAN_Unload,
  (MI_ProviderFT_GetInstance)VLAN_GetInstance,
  (MI_ProviderFT_EnumerateInstances)VLAN_EnumerateInstances,
  (MI_ProviderFT_CreateInstance)VLAN_CreateInstance,
  (MI_ProviderFT_ModifyInstance)VLAN_ModifyInstance,
  (MI_ProviderFT_DeleteInstance)VLAN_DeleteInstance,
  (MI_ProviderFT_AssociatorInstances)NULL,
  (MI_ProviderFT_ReferenceInstances)NULL,
  (MI_ProviderFT_EnableIndications)NULL,
  (MI_ProviderFT_DisableIndications)NULL,
  (MI_ProviderFT_Subscribe)NULL,
  (MI_ProviderFT_Unsubscribe)NULL,
  (MI_ProviderFT_Invoke)NULL,
};

static MI_CONST MI_Char* VLAN_UMLPackagePath_qual_value = MI_T("CIM::Network::VLAN");

static MI_CONST MI_Qualifier VLAN_UMLPackagePath_qual =
{
    MI_T("UMLPackagePath"),
    MI_STRING,
    0,
    &VLAN_UMLPackagePath_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST VLAN_quals[] =
{
    &VLAN_UMLPackagePath_qual,
};

/* class VLAN */
MI_CONST MI_ClassDecl VLAN_rtti =
{
    MI_FLAG_CLASS, /* flags */
    0x006F6E0F, /* code */
    MI_T("OMI_NetworkVLAN"), /* name */
    VLAN_quals, /* qualifiers */
    MI_COUNT(VLAN_quals), /* numQualifiers */
    VLAN_props, /* properties */
    MI_COUNT(VLAN_props), /* numProperties */
    sizeof(VLAN), /* size */
    MI_T("CIM_NetworkVLAN"), /* superClass */
    &CIM_NetworkVLAN_rtti, /* superClassDecl */
    NULL, /* methods */
    0, /* numMethods */
    &schemaDecl, /* schema */
    &VLAN_funcs, /* functions */
    NULL, /* owningClass */
};

/*
**==============================================================================
**
** __mi_server
**
**==============================================================================
*/

MI_Server* __mi_server;
/*
**==============================================================================
**
** Schema
**
**==============================================================================
*/

static MI_ClassDecl MI_CONST* MI_CONST classes[] =
{
    &CIM_Collection_rtti,
    &CIM_ConnectivityCollection_rtti,
    &CIM_ManagedElement_rtti,
    &CIM_NetworkVLAN_rtti,
    &CIM_SystemSpecificCollection_rtti,
    &VLAN_rtti,
};

MI_SchemaDecl schemaDecl =
{
    NULL, /* qualifierDecls */
    0, /* numQualifierDecls */
    classes, /* classDecls */
    MI_COUNT(classes), /* classDecls */
};

/*
**==============================================================================
**
** MI_Server Methods
**
**==============================================================================
*/

MI_Result MI_CALL MI_Server_GetVersion(
    MI_Uint32* version){
    return __mi_server->serverFT->GetVersion(version);
}

MI_Result MI_CALL MI_Server_GetSystemName(
    const MI_Char** systemName)
{
    return __mi_server->serverFT->GetSystemName(systemName);
}

