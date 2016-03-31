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
#include "MSFT_Feature.h"
#include "CIM_ComputerSystem.h"
#include "CIM_RegisteredProfile.h"
#include "CIM_ComRegProf.h"
#include "MSFT_EthernetPort.h"
#include "CIM_EthPortAssocationData.h"
#include "CIM_LANEndpoint.h"
#include "CIM_EthPortAssociationLANEnd.h"
#include "CIM_VLANEndpoint.h"
#include "CIM_LANEndAssociationVlanEnd.h"
#include "CIM_VLANEndpointSettingData.h"
#include "CIM_VlanEndAssociationData.h"
#include "MSFT_SwitchService.h"
#include "MSFT_NetworkVLAN.h"
#include "MSFT_MACTableEntry.h"
#include "CIM_EthernetPortAllocationSettingData.h"
#include "CIM_VlanAssociationVlanEnd.h"
#include "CIM_RegisterProfileAssociationPhyComputerSys.h"
#include "MSFT_GlobalEthernetSwitchSettingData.h"
#include "CIM_CSAssociationGlobalSetting.h"
#include "MSFT_MACTable.h"
#include "CIM_MACTableAssociationEntry.h"

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
** _Match()
**
**==============================================================================
*/

static int _Match(const MI_Char* p, const MI_Char* q)
{
    if (!p || !q || !p[0] || !q[0])
        return 1;

    while (*p && *q)
        if (toupper((MI_Uint16)*p++) - toupper((MI_Uint16)*q++))
            return 0;

    return *p == '\0' && *q == '\0';
}

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
** CIM_ManagedSystemElement
**
**==============================================================================
*/

/* property CIM_ManagedSystemElement.InstallDate */
static MI_CONST MI_PropertyDecl CIM_ManagedSystemElement_InstallDate_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0069650B, /* code */
    MI_T("InstallDate"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_DATETIME, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_ManagedSystemElement, InstallDate), /* offset */
    MI_T("CIM_ManagedSystemElement"), /* origin */
    MI_T("CIM_ManagedSystemElement"), /* propagator */
    NULL,
};

static MI_CONST MI_Uint32 CIM_ManagedSystemElement_Name_MaxLen_qual_value = 1024U;

static MI_CONST MI_Qualifier CIM_ManagedSystemElement_Name_MaxLen_qual =
{
    MI_T("MaxLen"),
    MI_UINT32,
    0,
    &CIM_ManagedSystemElement_Name_MaxLen_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_ManagedSystemElement_Name_quals[] =
{
    &CIM_ManagedSystemElement_Name_MaxLen_qual,
};

/* property CIM_ManagedSystemElement.Name */
static MI_CONST MI_PropertyDecl CIM_ManagedSystemElement_Name_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006E6504, /* code */
    MI_T("Name"), /* name */
    CIM_ManagedSystemElement_Name_quals, /* qualifiers */
    MI_COUNT(CIM_ManagedSystemElement_Name_quals), /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_ManagedSystemElement, Name), /* offset */
    MI_T("CIM_ManagedSystemElement"), /* origin */
    MI_T("CIM_ManagedSystemElement"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* CIM_ManagedSystemElement_OperationalStatus_ArrayType_qual_value = MI_T("Indexed");

static MI_CONST MI_Qualifier CIM_ManagedSystemElement_OperationalStatus_ArrayType_qual =
{
    MI_T("ArrayType"),
    MI_STRING,
    MI_FLAG_DISABLEOVERRIDE|MI_FLAG_TOSUBCLASS,
    &CIM_ManagedSystemElement_OperationalStatus_ArrayType_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_ManagedSystemElement_OperationalStatus_quals[] =
{
    &CIM_ManagedSystemElement_OperationalStatus_ArrayType_qual,
};

/* property CIM_ManagedSystemElement.OperationalStatus */
static MI_CONST MI_PropertyDecl CIM_ManagedSystemElement_OperationalStatus_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006F7311, /* code */
    MI_T("OperationalStatus"), /* name */
    CIM_ManagedSystemElement_OperationalStatus_quals, /* qualifiers */
    MI_COUNT(CIM_ManagedSystemElement_OperationalStatus_quals), /* numQualifiers */
    MI_UINT16A, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_ManagedSystemElement, OperationalStatus), /* offset */
    MI_T("CIM_ManagedSystemElement"), /* origin */
    MI_T("CIM_ManagedSystemElement"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* CIM_ManagedSystemElement_StatusDescriptions_ArrayType_qual_value = MI_T("Indexed");

static MI_CONST MI_Qualifier CIM_ManagedSystemElement_StatusDescriptions_ArrayType_qual =
{
    MI_T("ArrayType"),
    MI_STRING,
    MI_FLAG_DISABLEOVERRIDE|MI_FLAG_TOSUBCLASS,
    &CIM_ManagedSystemElement_StatusDescriptions_ArrayType_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_ManagedSystemElement_StatusDescriptions_quals[] =
{
    &CIM_ManagedSystemElement_StatusDescriptions_ArrayType_qual,
};

/* property CIM_ManagedSystemElement.StatusDescriptions */
static MI_CONST MI_PropertyDecl CIM_ManagedSystemElement_StatusDescriptions_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00737312, /* code */
    MI_T("StatusDescriptions"), /* name */
    CIM_ManagedSystemElement_StatusDescriptions_quals, /* qualifiers */
    MI_COUNT(CIM_ManagedSystemElement_StatusDescriptions_quals), /* numQualifiers */
    MI_STRINGA, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_ManagedSystemElement, StatusDescriptions), /* offset */
    MI_T("CIM_ManagedSystemElement"), /* origin */
    MI_T("CIM_ManagedSystemElement"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* CIM_ManagedSystemElement_Status_Deprecated_qual_data_value[] =
{
    MI_T("CIM_ManagedSystemElement.OperationalStatus"),
};

static MI_CONST MI_ConstStringA CIM_ManagedSystemElement_Status_Deprecated_qual_value =
{
    CIM_ManagedSystemElement_Status_Deprecated_qual_data_value,
    MI_COUNT(CIM_ManagedSystemElement_Status_Deprecated_qual_data_value),
};

static MI_CONST MI_Qualifier CIM_ManagedSystemElement_Status_Deprecated_qual =
{
    MI_T("Deprecated"),
    MI_STRINGA,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_RESTRICTED,
    &CIM_ManagedSystemElement_Status_Deprecated_qual_value
};

static MI_CONST MI_Uint32 CIM_ManagedSystemElement_Status_MaxLen_qual_value = 10U;

static MI_CONST MI_Qualifier CIM_ManagedSystemElement_Status_MaxLen_qual =
{
    MI_T("MaxLen"),
    MI_UINT32,
    0,
    &CIM_ManagedSystemElement_Status_MaxLen_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_ManagedSystemElement_Status_quals[] =
{
    &CIM_ManagedSystemElement_Status_Deprecated_qual,
    &CIM_ManagedSystemElement_Status_MaxLen_qual,
};

/* property CIM_ManagedSystemElement.Status */
static MI_CONST MI_PropertyDecl CIM_ManagedSystemElement_Status_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00737306, /* code */
    MI_T("Status"), /* name */
    CIM_ManagedSystemElement_Status_quals, /* qualifiers */
    MI_COUNT(CIM_ManagedSystemElement_Status_quals), /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_ManagedSystemElement, Status), /* offset */
    MI_T("CIM_ManagedSystemElement"), /* origin */
    MI_T("CIM_ManagedSystemElement"), /* propagator */
    NULL,
};

/* property CIM_ManagedSystemElement.HealthState */
static MI_CONST MI_PropertyDecl CIM_ManagedSystemElement_HealthState_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0068650B, /* code */
    MI_T("HealthState"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_ManagedSystemElement, HealthState), /* offset */
    MI_T("CIM_ManagedSystemElement"), /* origin */
    MI_T("CIM_ManagedSystemElement"), /* propagator */
    NULL,
};

/* property CIM_ManagedSystemElement.CommunicationStatus */
static MI_CONST MI_PropertyDecl CIM_ManagedSystemElement_CommunicationStatus_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00637313, /* code */
    MI_T("CommunicationStatus"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_ManagedSystemElement, CommunicationStatus), /* offset */
    MI_T("CIM_ManagedSystemElement"), /* origin */
    MI_T("CIM_ManagedSystemElement"), /* propagator */
    NULL,
};

/* property CIM_ManagedSystemElement.DetailedStatus */
static MI_CONST MI_PropertyDecl CIM_ManagedSystemElement_DetailedStatus_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0064730E, /* code */
    MI_T("DetailedStatus"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_ManagedSystemElement, DetailedStatus), /* offset */
    MI_T("CIM_ManagedSystemElement"), /* origin */
    MI_T("CIM_ManagedSystemElement"), /* propagator */
    NULL,
};

/* property CIM_ManagedSystemElement.OperatingStatus */
static MI_CONST MI_PropertyDecl CIM_ManagedSystemElement_OperatingStatus_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006F730F, /* code */
    MI_T("OperatingStatus"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_ManagedSystemElement, OperatingStatus), /* offset */
    MI_T("CIM_ManagedSystemElement"), /* origin */
    MI_T("CIM_ManagedSystemElement"), /* propagator */
    NULL,
};

/* property CIM_ManagedSystemElement.PrimaryStatus */
static MI_CONST MI_PropertyDecl CIM_ManagedSystemElement_PrimaryStatus_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0070730D, /* code */
    MI_T("PrimaryStatus"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_ManagedSystemElement, PrimaryStatus), /* offset */
    MI_T("CIM_ManagedSystemElement"), /* origin */
    MI_T("CIM_ManagedSystemElement"), /* propagator */
    NULL,
};

static MI_PropertyDecl MI_CONST* MI_CONST CIM_ManagedSystemElement_props[] =
{
    &CIM_ManagedElement_InstanceID_prop,
    &CIM_ManagedElement_Caption_prop,
    &CIM_ManagedElement_Description_prop,
    &CIM_ManagedElement_ElementName_prop,
    &CIM_ManagedSystemElement_InstallDate_prop,
    &CIM_ManagedSystemElement_Name_prop,
    &CIM_ManagedSystemElement_OperationalStatus_prop,
    &CIM_ManagedSystemElement_StatusDescriptions_prop,
    &CIM_ManagedSystemElement_Status_prop,
    &CIM_ManagedSystemElement_HealthState_prop,
    &CIM_ManagedSystemElement_CommunicationStatus_prop,
    &CIM_ManagedSystemElement_DetailedStatus_prop,
    &CIM_ManagedSystemElement_OperatingStatus_prop,
    &CIM_ManagedSystemElement_PrimaryStatus_prop,
};

static MI_CONST MI_Char* CIM_ManagedSystemElement_UMLPackagePath_qual_value = MI_T("CIM::Core::CoreElements");

static MI_CONST MI_Qualifier CIM_ManagedSystemElement_UMLPackagePath_qual =
{
    MI_T("UMLPackagePath"),
    MI_STRING,
    0,
    &CIM_ManagedSystemElement_UMLPackagePath_qual_value
};

static MI_CONST MI_Char* CIM_ManagedSystemElement_Version_qual_value = MI_T("2.28.0");

static MI_CONST MI_Qualifier CIM_ManagedSystemElement_Version_qual =
{
    MI_T("Version"),
    MI_STRING,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_TRANSLATABLE|MI_FLAG_RESTRICTED,
    &CIM_ManagedSystemElement_Version_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_ManagedSystemElement_quals[] =
{
    &CIM_ManagedSystemElement_UMLPackagePath_qual,
    &CIM_ManagedSystemElement_Version_qual,
};

/* class CIM_ManagedSystemElement */
MI_CONST MI_ClassDecl CIM_ManagedSystemElement_rtti =
{
    MI_FLAG_CLASS|MI_FLAG_ABSTRACT, /* flags */
    0x00637418, /* code */
    MI_T("CIM_ManagedSystemElement"), /* name */
    CIM_ManagedSystemElement_quals, /* qualifiers */
    MI_COUNT(CIM_ManagedSystemElement_quals), /* numQualifiers */
    CIM_ManagedSystemElement_props, /* properties */
    MI_COUNT(CIM_ManagedSystemElement_props), /* numProperties */
    sizeof(CIM_ManagedSystemElement), /* size */
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
** CIM_LogicalElement
**
**==============================================================================
*/

static MI_PropertyDecl MI_CONST* MI_CONST CIM_LogicalElement_props[] =
{
    &CIM_ManagedElement_InstanceID_prop,
    &CIM_ManagedElement_Caption_prop,
    &CIM_ManagedElement_Description_prop,
    &CIM_ManagedElement_ElementName_prop,
    &CIM_ManagedSystemElement_InstallDate_prop,
    &CIM_ManagedSystemElement_Name_prop,
    &CIM_ManagedSystemElement_OperationalStatus_prop,
    &CIM_ManagedSystemElement_StatusDescriptions_prop,
    &CIM_ManagedSystemElement_Status_prop,
    &CIM_ManagedSystemElement_HealthState_prop,
    &CIM_ManagedSystemElement_CommunicationStatus_prop,
    &CIM_ManagedSystemElement_DetailedStatus_prop,
    &CIM_ManagedSystemElement_OperatingStatus_prop,
    &CIM_ManagedSystemElement_PrimaryStatus_prop,
};

static MI_CONST MI_Char* CIM_LogicalElement_UMLPackagePath_qual_value = MI_T("CIM::Core::CoreElements");

static MI_CONST MI_Qualifier CIM_LogicalElement_UMLPackagePath_qual =
{
    MI_T("UMLPackagePath"),
    MI_STRING,
    0,
    &CIM_LogicalElement_UMLPackagePath_qual_value
};

static MI_CONST MI_Char* CIM_LogicalElement_Version_qual_value = MI_T("2.6.0");

static MI_CONST MI_Qualifier CIM_LogicalElement_Version_qual =
{
    MI_T("Version"),
    MI_STRING,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_TRANSLATABLE|MI_FLAG_RESTRICTED,
    &CIM_LogicalElement_Version_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_LogicalElement_quals[] =
{
    &CIM_LogicalElement_UMLPackagePath_qual,
    &CIM_LogicalElement_Version_qual,
};

/* class CIM_LogicalElement */
MI_CONST MI_ClassDecl CIM_LogicalElement_rtti =
{
    MI_FLAG_CLASS|MI_FLAG_ABSTRACT, /* flags */
    0x00637412, /* code */
    MI_T("CIM_LogicalElement"), /* name */
    CIM_LogicalElement_quals, /* qualifiers */
    MI_COUNT(CIM_LogicalElement_quals), /* numQualifiers */
    CIM_LogicalElement_props, /* properties */
    MI_COUNT(CIM_LogicalElement_props), /* numProperties */
    sizeof(CIM_LogicalElement), /* size */
    MI_T("CIM_ManagedSystemElement"), /* superClass */
    &CIM_ManagedSystemElement_rtti, /* superClassDecl */
    NULL, /* methods */
    0, /* numMethods */
    &schemaDecl, /* schema */
    NULL, /* functions */
    NULL, /* owningClass */
};

/*
**==============================================================================
**
** MSFT_Feature
**
**==============================================================================
*/

static MI_CONST MI_Char* MSFT_Feature_InstanceID_Override_qual_value = MI_T("InstanceID");

static MI_CONST MI_Qualifier MSFT_Feature_InstanceID_Override_qual =
{
    MI_T("Override"),
    MI_STRING,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_RESTRICTED,
    &MSFT_Feature_InstanceID_Override_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST MSFT_Feature_InstanceID_quals[] =
{
    &MSFT_Feature_InstanceID_Override_qual,
};

/* property MSFT_Feature.InstanceID */
static MI_CONST MI_PropertyDecl MSFT_Feature_InstanceID_prop =
{
    MI_FLAG_PROPERTY|MI_FLAG_KEY, /* flags */
    0x0069640A, /* code */
    MI_T("InstanceID"), /* name */
    MSFT_Feature_InstanceID_quals, /* qualifiers */
    MI_COUNT(MSFT_Feature_InstanceID_quals), /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_Feature, InstanceID), /* offset */
    MI_T("CIM_ManagedElement"), /* origin */
    MI_T("MSFT_Feature"), /* propagator */
    NULL,
};

/* property MSFT_Feature.FeatureName */
static MI_CONST MI_PropertyDecl MSFT_Feature_FeatureName_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0066650B, /* code */
    MI_T("FeatureName"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_Feature, FeatureName), /* offset */
    MI_T("MSFT_Feature"), /* origin */
    MI_T("MSFT_Feature"), /* propagator */
    NULL,
};

/* property MSFT_Feature.OtherFeatureName */
static MI_CONST MI_PropertyDecl MSFT_Feature_OtherFeatureName_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006F6510, /* code */
    MI_T("OtherFeatureName"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_Feature, OtherFeatureName), /* offset */
    MI_T("MSFT_Feature"), /* origin */
    MI_T("MSFT_Feature"), /* propagator */
    NULL,
};

static MI_CONST MI_Boolean MSFT_Feature_IsEnabled_value = 0;

/* property MSFT_Feature.IsEnabled */
static MI_CONST MI_PropertyDecl MSFT_Feature_IsEnabled_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00696409, /* code */
    MI_T("IsEnabled"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_BOOLEAN, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_Feature, IsEnabled), /* offset */
    MI_T("MSFT_Feature"), /* origin */
    MI_T("MSFT_Feature"), /* propagator */
    &MSFT_Feature_IsEnabled_value,
};

/* property MSFT_Feature.Count */
static MI_CONST MI_PropertyDecl MSFT_Feature_Count_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00637405, /* code */
    MI_T("Count"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_Feature, Count), /* offset */
    MI_T("MSFT_Feature"), /* origin */
    MI_T("MSFT_Feature"), /* propagator */
    NULL,
};

static MI_PropertyDecl MI_CONST* MI_CONST MSFT_Feature_props[] =
{
    &MSFT_Feature_InstanceID_prop,
    &CIM_ManagedElement_Caption_prop,
    &CIM_ManagedElement_Description_prop,
    &CIM_ManagedElement_ElementName_prop,
    &CIM_ManagedSystemElement_InstallDate_prop,
    &CIM_ManagedSystemElement_Name_prop,
    &CIM_ManagedSystemElement_OperationalStatus_prop,
    &CIM_ManagedSystemElement_StatusDescriptions_prop,
    &CIM_ManagedSystemElement_Status_prop,
    &CIM_ManagedSystemElement_HealthState_prop,
    &CIM_ManagedSystemElement_CommunicationStatus_prop,
    &CIM_ManagedSystemElement_DetailedStatus_prop,
    &CIM_ManagedSystemElement_OperatingStatus_prop,
    &CIM_ManagedSystemElement_PrimaryStatus_prop,
    &MSFT_Feature_FeatureName_prop,
    &MSFT_Feature_OtherFeatureName_prop,
    &MSFT_Feature_IsEnabled_prop,
    &MSFT_Feature_Count_prop,
};

static MI_CONST MI_ProviderFT MSFT_Feature_funcs =
{
  (MI_ProviderFT_Load)MSFT_Feature_Load,
  (MI_ProviderFT_Unload)MSFT_Feature_Unload,
  (MI_ProviderFT_GetInstance)MSFT_Feature_GetInstance,
  (MI_ProviderFT_EnumerateInstances)MSFT_Feature_EnumerateInstances,
  (MI_ProviderFT_CreateInstance)MSFT_Feature_CreateInstance,
  (MI_ProviderFT_ModifyInstance)MSFT_Feature_ModifyInstance,
  (MI_ProviderFT_DeleteInstance)MSFT_Feature_DeleteInstance,
  (MI_ProviderFT_AssociatorInstances)NULL,
  (MI_ProviderFT_ReferenceInstances)NULL,
  (MI_ProviderFT_EnableIndications)NULL,
  (MI_ProviderFT_DisableIndications)NULL,
  (MI_ProviderFT_Subscribe)NULL,
  (MI_ProviderFT_Unsubscribe)NULL,
  (MI_ProviderFT_Invoke)NULL,
};

static MI_CONST MI_Char* MSFT_Feature_UMLPackagePath_qual_value = MI_T("CIM::Core::CoreElements");

static MI_CONST MI_Qualifier MSFT_Feature_UMLPackagePath_qual =
{
    MI_T("UMLPackagePath"),
    MI_STRING,
    0,
    &MSFT_Feature_UMLPackagePath_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST MSFT_Feature_quals[] =
{
    &MSFT_Feature_UMLPackagePath_qual,
};

/* class MSFT_Feature */
MI_CONST MI_ClassDecl MSFT_Feature_rtti =
{
    MI_FLAG_CLASS, /* flags */
    0x006D650C, /* code */
    MI_T("MSFT_Feature"), /* name */
    MSFT_Feature_quals, /* qualifiers */
    MI_COUNT(MSFT_Feature_quals), /* numQualifiers */
    MSFT_Feature_props, /* properties */
    MI_COUNT(MSFT_Feature_props), /* numProperties */
    sizeof(MSFT_Feature), /* size */
    MI_T("CIM_LogicalElement"), /* superClass */
    &CIM_LogicalElement_rtti, /* superClassDecl */
    NULL, /* methods */
    0, /* numMethods */
    &schemaDecl, /* schema */
    &MSFT_Feature_funcs, /* functions */
    NULL, /* owningClass */
};

/*
**==============================================================================
**
** CIM_Job
**
**==============================================================================
*/

/* property CIM_Job.JobStatus */
static MI_CONST MI_PropertyDecl CIM_Job_JobStatus_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006A7309, /* code */
    MI_T("JobStatus"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_Job, JobStatus), /* offset */
    MI_T("CIM_Job"), /* origin */
    MI_T("CIM_Job"), /* propagator */
    NULL,
};

/* property CIM_Job.TimeSubmitted */
static MI_CONST MI_PropertyDecl CIM_Job_TimeSubmitted_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0074640D, /* code */
    MI_T("TimeSubmitted"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_DATETIME, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_Job, TimeSubmitted), /* offset */
    MI_T("CIM_Job"), /* origin */
    MI_T("CIM_Job"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* CIM_Job_ScheduledStartTime_Deprecated_qual_data_value[] =
{
    MI_T("CIM_Job.RunMonth"),
    MI_T("CIM_Job.RunDay"),
    MI_T("CIM_Job.RunDayOfWeek"),
    MI_T("CIM_Job.RunStartInterval"),
};

static MI_CONST MI_ConstStringA CIM_Job_ScheduledStartTime_Deprecated_qual_value =
{
    CIM_Job_ScheduledStartTime_Deprecated_qual_data_value,
    MI_COUNT(CIM_Job_ScheduledStartTime_Deprecated_qual_data_value),
};

static MI_CONST MI_Qualifier CIM_Job_ScheduledStartTime_Deprecated_qual =
{
    MI_T("Deprecated"),
    MI_STRINGA,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_RESTRICTED,
    &CIM_Job_ScheduledStartTime_Deprecated_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_Job_ScheduledStartTime_quals[] =
{
    &CIM_Job_ScheduledStartTime_Deprecated_qual,
};

/* property CIM_Job.ScheduledStartTime */
static MI_CONST MI_PropertyDecl CIM_Job_ScheduledStartTime_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00736512, /* code */
    MI_T("ScheduledStartTime"), /* name */
    CIM_Job_ScheduledStartTime_quals, /* qualifiers */
    MI_COUNT(CIM_Job_ScheduledStartTime_quals), /* numQualifiers */
    MI_DATETIME, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_Job, ScheduledStartTime), /* offset */
    MI_T("CIM_Job"), /* origin */
    MI_T("CIM_Job"), /* propagator */
    NULL,
};

/* property CIM_Job.StartTime */
static MI_CONST MI_PropertyDecl CIM_Job_StartTime_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00736509, /* code */
    MI_T("StartTime"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_DATETIME, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_Job, StartTime), /* offset */
    MI_T("CIM_Job"), /* origin */
    MI_T("CIM_Job"), /* propagator */
    NULL,
};

/* property CIM_Job.ElapsedTime */
static MI_CONST MI_PropertyDecl CIM_Job_ElapsedTime_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0065650B, /* code */
    MI_T("ElapsedTime"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_DATETIME, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_Job, ElapsedTime), /* offset */
    MI_T("CIM_Job"), /* origin */
    MI_T("CIM_Job"), /* propagator */
    NULL,
};

static MI_CONST MI_Uint32 CIM_Job_JobRunTimes_value = 1U;

/* property CIM_Job.JobRunTimes */
static MI_CONST MI_PropertyDecl CIM_Job_JobRunTimes_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006A730B, /* code */
    MI_T("JobRunTimes"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_Job, JobRunTimes), /* offset */
    MI_T("CIM_Job"), /* origin */
    MI_T("CIM_Job"), /* propagator */
    &CIM_Job_JobRunTimes_value,
};

/* property CIM_Job.RunMonth */
static MI_CONST MI_PropertyDecl CIM_Job_RunMonth_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00726808, /* code */
    MI_T("RunMonth"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT8, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_Job, RunMonth), /* offset */
    MI_T("CIM_Job"), /* origin */
    MI_T("CIM_Job"), /* propagator */
    NULL,
};

static MI_CONST MI_Sint64 CIM_Job_RunDay_MinValue_qual_value = -MI_LL(31);

static MI_CONST MI_Qualifier CIM_Job_RunDay_MinValue_qual =
{
    MI_T("MinValue"),
    MI_SINT64,
    0,
    &CIM_Job_RunDay_MinValue_qual_value
};

static MI_CONST MI_Sint64 CIM_Job_RunDay_MaxValue_qual_value = MI_LL(31);

static MI_CONST MI_Qualifier CIM_Job_RunDay_MaxValue_qual =
{
    MI_T("MaxValue"),
    MI_SINT64,
    0,
    &CIM_Job_RunDay_MaxValue_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_Job_RunDay_quals[] =
{
    &CIM_Job_RunDay_MinValue_qual,
    &CIM_Job_RunDay_MaxValue_qual,
};

/* property CIM_Job.RunDay */
static MI_CONST MI_PropertyDecl CIM_Job_RunDay_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00727906, /* code */
    MI_T("RunDay"), /* name */
    CIM_Job_RunDay_quals, /* qualifiers */
    MI_COUNT(CIM_Job_RunDay_quals), /* numQualifiers */
    MI_SINT8, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_Job, RunDay), /* offset */
    MI_T("CIM_Job"), /* origin */
    MI_T("CIM_Job"), /* propagator */
    NULL,
};

/* property CIM_Job.RunDayOfWeek */
static MI_CONST MI_PropertyDecl CIM_Job_RunDayOfWeek_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00726B0C, /* code */
    MI_T("RunDayOfWeek"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_SINT8, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_Job, RunDayOfWeek), /* offset */
    MI_T("CIM_Job"), /* origin */
    MI_T("CIM_Job"), /* propagator */
    NULL,
};

/* property CIM_Job.RunStartInterval */
static MI_CONST MI_PropertyDecl CIM_Job_RunStartInterval_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00726C10, /* code */
    MI_T("RunStartInterval"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_DATETIME, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_Job, RunStartInterval), /* offset */
    MI_T("CIM_Job"), /* origin */
    MI_T("CIM_Job"), /* propagator */
    NULL,
};

/* property CIM_Job.LocalOrUtcTime */
static MI_CONST MI_PropertyDecl CIM_Job_LocalOrUtcTime_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006C650E, /* code */
    MI_T("LocalOrUtcTime"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_Job, LocalOrUtcTime), /* offset */
    MI_T("CIM_Job"), /* origin */
    MI_T("CIM_Job"), /* propagator */
    NULL,
};

/* property CIM_Job.UntilTime */
static MI_CONST MI_PropertyDecl CIM_Job_UntilTime_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00756509, /* code */
    MI_T("UntilTime"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_DATETIME, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_Job, UntilTime), /* offset */
    MI_T("CIM_Job"), /* origin */
    MI_T("CIM_Job"), /* propagator */
    NULL,
};

/* property CIM_Job.Notify */
static MI_CONST MI_PropertyDecl CIM_Job_Notify_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006E7906, /* code */
    MI_T("Notify"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_Job, Notify), /* offset */
    MI_T("CIM_Job"), /* origin */
    MI_T("CIM_Job"), /* propagator */
    NULL,
};

/* property CIM_Job.Owner */
static MI_CONST MI_PropertyDecl CIM_Job_Owner_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006F7205, /* code */
    MI_T("Owner"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_Job, Owner), /* offset */
    MI_T("CIM_Job"), /* origin */
    MI_T("CIM_Job"), /* propagator */
    NULL,
};

/* property CIM_Job.Priority */
static MI_CONST MI_PropertyDecl CIM_Job_Priority_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00707908, /* code */
    MI_T("Priority"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_Job, Priority), /* offset */
    MI_T("CIM_Job"), /* origin */
    MI_T("CIM_Job"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* CIM_Job_PercentComplete_Units_qual_value = MI_T("Percent");

static MI_CONST MI_Qualifier CIM_Job_PercentComplete_Units_qual =
{
    MI_T("Units"),
    MI_STRING,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_TOSUBCLASS|MI_FLAG_TRANSLATABLE,
    &CIM_Job_PercentComplete_Units_qual_value
};

static MI_CONST MI_Sint64 CIM_Job_PercentComplete_MinValue_qual_value = MI_LL(0);

static MI_CONST MI_Qualifier CIM_Job_PercentComplete_MinValue_qual =
{
    MI_T("MinValue"),
    MI_SINT64,
    0,
    &CIM_Job_PercentComplete_MinValue_qual_value
};

static MI_CONST MI_Sint64 CIM_Job_PercentComplete_MaxValue_qual_value = MI_LL(101);

static MI_CONST MI_Qualifier CIM_Job_PercentComplete_MaxValue_qual =
{
    MI_T("MaxValue"),
    MI_SINT64,
    0,
    &CIM_Job_PercentComplete_MaxValue_qual_value
};

static MI_CONST MI_Char* CIM_Job_PercentComplete_PUnit_qual_value = MI_T("percent");

static MI_CONST MI_Qualifier CIM_Job_PercentComplete_PUnit_qual =
{
    MI_T("PUnit"),
    MI_STRING,
    0,
    &CIM_Job_PercentComplete_PUnit_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_Job_PercentComplete_quals[] =
{
    &CIM_Job_PercentComplete_Units_qual,
    &CIM_Job_PercentComplete_MinValue_qual,
    &CIM_Job_PercentComplete_MaxValue_qual,
    &CIM_Job_PercentComplete_PUnit_qual,
};

/* property CIM_Job.PercentComplete */
static MI_CONST MI_PropertyDecl CIM_Job_PercentComplete_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0070650F, /* code */
    MI_T("PercentComplete"), /* name */
    CIM_Job_PercentComplete_quals, /* qualifiers */
    MI_COUNT(CIM_Job_PercentComplete_quals), /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_Job, PercentComplete), /* offset */
    MI_T("CIM_Job"), /* origin */
    MI_T("CIM_Job"), /* propagator */
    NULL,
};

/* property CIM_Job.DeleteOnCompletion */
static MI_CONST MI_PropertyDecl CIM_Job_DeleteOnCompletion_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00646E12, /* code */
    MI_T("DeleteOnCompletion"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_BOOLEAN, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_Job, DeleteOnCompletion), /* offset */
    MI_T("CIM_Job"), /* origin */
    MI_T("CIM_Job"), /* propagator */
    NULL,
};

/* property CIM_Job.ErrorCode */
static MI_CONST MI_PropertyDecl CIM_Job_ErrorCode_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00656509, /* code */
    MI_T("ErrorCode"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_Job, ErrorCode), /* offset */
    MI_T("CIM_Job"), /* origin */
    MI_T("CIM_Job"), /* propagator */
    NULL,
};

/* property CIM_Job.ErrorDescription */
static MI_CONST MI_PropertyDecl CIM_Job_ErrorDescription_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00656E10, /* code */
    MI_T("ErrorDescription"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_Job, ErrorDescription), /* offset */
    MI_T("CIM_Job"), /* origin */
    MI_T("CIM_Job"), /* propagator */
    NULL,
};

/* property CIM_Job.RecoveryAction */
static MI_CONST MI_PropertyDecl CIM_Job_RecoveryAction_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00726E0E, /* code */
    MI_T("RecoveryAction"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_Job, RecoveryAction), /* offset */
    MI_T("CIM_Job"), /* origin */
    MI_T("CIM_Job"), /* propagator */
    NULL,
};

/* property CIM_Job.OtherRecoveryAction */
static MI_CONST MI_PropertyDecl CIM_Job_OtherRecoveryAction_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006F6E13, /* code */
    MI_T("OtherRecoveryAction"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_Job, OtherRecoveryAction), /* offset */
    MI_T("CIM_Job"), /* origin */
    MI_T("CIM_Job"), /* propagator */
    NULL,
};

static MI_PropertyDecl MI_CONST* MI_CONST CIM_Job_props[] =
{
    &CIM_ManagedElement_InstanceID_prop,
    &CIM_ManagedElement_Caption_prop,
    &CIM_ManagedElement_Description_prop,
    &CIM_ManagedElement_ElementName_prop,
    &CIM_ManagedSystemElement_InstallDate_prop,
    &CIM_ManagedSystemElement_Name_prop,
    &CIM_ManagedSystemElement_OperationalStatus_prop,
    &CIM_ManagedSystemElement_StatusDescriptions_prop,
    &CIM_ManagedSystemElement_Status_prop,
    &CIM_ManagedSystemElement_HealthState_prop,
    &CIM_ManagedSystemElement_CommunicationStatus_prop,
    &CIM_ManagedSystemElement_DetailedStatus_prop,
    &CIM_ManagedSystemElement_OperatingStatus_prop,
    &CIM_ManagedSystemElement_PrimaryStatus_prop,
    &CIM_Job_JobStatus_prop,
    &CIM_Job_TimeSubmitted_prop,
    &CIM_Job_ScheduledStartTime_prop,
    &CIM_Job_StartTime_prop,
    &CIM_Job_ElapsedTime_prop,
    &CIM_Job_JobRunTimes_prop,
    &CIM_Job_RunMonth_prop,
    &CIM_Job_RunDay_prop,
    &CIM_Job_RunDayOfWeek_prop,
    &CIM_Job_RunStartInterval_prop,
    &CIM_Job_LocalOrUtcTime_prop,
    &CIM_Job_UntilTime_prop,
    &CIM_Job_Notify_prop,
    &CIM_Job_Owner_prop,
    &CIM_Job_Priority_prop,
    &CIM_Job_PercentComplete_prop,
    &CIM_Job_DeleteOnCompletion_prop,
    &CIM_Job_ErrorCode_prop,
    &CIM_Job_ErrorDescription_prop,
    &CIM_Job_RecoveryAction_prop,
    &CIM_Job_OtherRecoveryAction_prop,
};

static MI_CONST MI_Char* CIM_Job_KillJob_Deprecated_qual_data_value[] =
{
    MI_T("CIM_ConcreteJob.RequestStateChange()"),
};

static MI_CONST MI_ConstStringA CIM_Job_KillJob_Deprecated_qual_value =
{
    CIM_Job_KillJob_Deprecated_qual_data_value,
    MI_COUNT(CIM_Job_KillJob_Deprecated_qual_data_value),
};

static MI_CONST MI_Qualifier CIM_Job_KillJob_Deprecated_qual =
{
    MI_T("Deprecated"),
    MI_STRINGA,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_RESTRICTED,
    &CIM_Job_KillJob_Deprecated_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_Job_KillJob_quals[] =
{
    &CIM_Job_KillJob_Deprecated_qual,
};

/* parameter CIM_Job.KillJob(): DeleteOnKill */
static MI_CONST MI_ParameterDecl CIM_Job_KillJob_DeleteOnKill_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_IN, /* flags */
    0x00646C0C, /* code */
    MI_T("DeleteOnKill"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_BOOLEAN, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_Job_KillJob, DeleteOnKill), /* offset */
};

static MI_CONST MI_Char* CIM_Job_KillJob_MIReturn_Deprecated_qual_data_value[] =
{
    MI_T("CIM_ConcreteJob.RequestStateChange()"),
};

static MI_CONST MI_ConstStringA CIM_Job_KillJob_MIReturn_Deprecated_qual_value =
{
    CIM_Job_KillJob_MIReturn_Deprecated_qual_data_value,
    MI_COUNT(CIM_Job_KillJob_MIReturn_Deprecated_qual_data_value),
};

static MI_CONST MI_Qualifier CIM_Job_KillJob_MIReturn_Deprecated_qual =
{
    MI_T("Deprecated"),
    MI_STRINGA,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_RESTRICTED,
    &CIM_Job_KillJob_MIReturn_Deprecated_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_Job_KillJob_MIReturn_quals[] =
{
    &CIM_Job_KillJob_MIReturn_Deprecated_qual,
};

/* parameter CIM_Job.KillJob(): MIReturn */
static MI_CONST MI_ParameterDecl CIM_Job_KillJob_MIReturn_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006D6E08, /* code */
    MI_T("MIReturn"), /* name */
    CIM_Job_KillJob_MIReturn_quals, /* qualifiers */
    MI_COUNT(CIM_Job_KillJob_MIReturn_quals), /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_Job_KillJob, MIReturn), /* offset */
};

static MI_ParameterDecl MI_CONST* MI_CONST CIM_Job_KillJob_params[] =
{
    &CIM_Job_KillJob_MIReturn_param,
    &CIM_Job_KillJob_DeleteOnKill_param,
};

/* method CIM_Job.KillJob() */
MI_CONST MI_MethodDecl CIM_Job_KillJob_rtti =
{
    MI_FLAG_METHOD, /* flags */
    0x006B6207, /* code */
    MI_T("KillJob"), /* name */
    CIM_Job_KillJob_quals, /* qualifiers */
    MI_COUNT(CIM_Job_KillJob_quals), /* numQualifiers */
    CIM_Job_KillJob_params, /* parameters */
    MI_COUNT(CIM_Job_KillJob_params), /* numParameters */
    sizeof(CIM_Job_KillJob), /* size */
    MI_UINT32, /* returnType */
    MI_T("CIM_Job"), /* origin */
    MI_T("CIM_Job"), /* propagator */
    &schemaDecl, /* schema */
    NULL, /* method */
};

static MI_MethodDecl MI_CONST* MI_CONST CIM_Job_meths[] =
{
    &CIM_Job_KillJob_rtti,
};

static MI_CONST MI_Char* CIM_Job_UMLPackagePath_qual_value = MI_T("CIM::Core::CoreElements");

static MI_CONST MI_Qualifier CIM_Job_UMLPackagePath_qual =
{
    MI_T("UMLPackagePath"),
    MI_STRING,
    0,
    &CIM_Job_UMLPackagePath_qual_value
};

static MI_CONST MI_Char* CIM_Job_Version_qual_value = MI_T("2.10.0");

static MI_CONST MI_Qualifier CIM_Job_Version_qual =
{
    MI_T("Version"),
    MI_STRING,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_TRANSLATABLE|MI_FLAG_RESTRICTED,
    &CIM_Job_Version_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_Job_quals[] =
{
    &CIM_Job_UMLPackagePath_qual,
    &CIM_Job_Version_qual,
};

/* class CIM_Job */
MI_CONST MI_ClassDecl CIM_Job_rtti =
{
    MI_FLAG_CLASS|MI_FLAG_ABSTRACT, /* flags */
    0x00636207, /* code */
    MI_T("CIM_Job"), /* name */
    CIM_Job_quals, /* qualifiers */
    MI_COUNT(CIM_Job_quals), /* numQualifiers */
    CIM_Job_props, /* properties */
    MI_COUNT(CIM_Job_props), /* numProperties */
    sizeof(CIM_Job), /* size */
    MI_T("CIM_LogicalElement"), /* superClass */
    &CIM_LogicalElement_rtti, /* superClassDecl */
    CIM_Job_meths, /* methods */
    MI_COUNT(CIM_Job_meths), /* numMethods */
    &schemaDecl, /* schema */
    NULL, /* functions */
    NULL, /* owningClass */
};

/*
**==============================================================================
**
** CIM_Error
**
**==============================================================================
*/

/* property CIM_Error.ErrorType */
static MI_CONST MI_PropertyDecl CIM_Error_ErrorType_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00656509, /* code */
    MI_T("ErrorType"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_Error, ErrorType), /* offset */
    MI_T("CIM_Error"), /* origin */
    MI_T("CIM_Error"), /* propagator */
    NULL,
};

/* property CIM_Error.OtherErrorType */
static MI_CONST MI_PropertyDecl CIM_Error_OtherErrorType_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006F650E, /* code */
    MI_T("OtherErrorType"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_Error, OtherErrorType), /* offset */
    MI_T("CIM_Error"), /* origin */
    MI_T("CIM_Error"), /* propagator */
    NULL,
};

/* property CIM_Error.OwningEntity */
static MI_CONST MI_PropertyDecl CIM_Error_OwningEntity_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006F790C, /* code */
    MI_T("OwningEntity"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_Error, OwningEntity), /* offset */
    MI_T("CIM_Error"), /* origin */
    MI_T("CIM_Error"), /* propagator */
    NULL,
};

/* property CIM_Error.MessageID */
static MI_CONST MI_PropertyDecl CIM_Error_MessageID_prop =
{
    MI_FLAG_PROPERTY|MI_FLAG_REQUIRED, /* flags */
    0x006D6409, /* code */
    MI_T("MessageID"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_Error, MessageID), /* offset */
    MI_T("CIM_Error"), /* origin */
    MI_T("CIM_Error"), /* propagator */
    NULL,
};

/* property CIM_Error.Message */
static MI_CONST MI_PropertyDecl CIM_Error_Message_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006D6507, /* code */
    MI_T("Message"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_Error, Message), /* offset */
    MI_T("CIM_Error"), /* origin */
    MI_T("CIM_Error"), /* propagator */
    NULL,
};

/* property CIM_Error.MessageArguments */
static MI_CONST MI_PropertyDecl CIM_Error_MessageArguments_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006D7310, /* code */
    MI_T("MessageArguments"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRINGA, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_Error, MessageArguments), /* offset */
    MI_T("CIM_Error"), /* origin */
    MI_T("CIM_Error"), /* propagator */
    NULL,
};

/* property CIM_Error.PerceivedSeverity */
static MI_CONST MI_PropertyDecl CIM_Error_PerceivedSeverity_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00707911, /* code */
    MI_T("PerceivedSeverity"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_Error, PerceivedSeverity), /* offset */
    MI_T("CIM_Error"), /* origin */
    MI_T("CIM_Error"), /* propagator */
    NULL,
};

/* property CIM_Error.ProbableCause */
static MI_CONST MI_PropertyDecl CIM_Error_ProbableCause_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0070650D, /* code */
    MI_T("ProbableCause"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_Error, ProbableCause), /* offset */
    MI_T("CIM_Error"), /* origin */
    MI_T("CIM_Error"), /* propagator */
    NULL,
};

/* property CIM_Error.ProbableCauseDescription */
static MI_CONST MI_PropertyDecl CIM_Error_ProbableCauseDescription_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00706E18, /* code */
    MI_T("ProbableCauseDescription"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_Error, ProbableCauseDescription), /* offset */
    MI_T("CIM_Error"), /* origin */
    MI_T("CIM_Error"), /* propagator */
    NULL,
};

/* property CIM_Error.RecommendedActions */
static MI_CONST MI_PropertyDecl CIM_Error_RecommendedActions_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00727312, /* code */
    MI_T("RecommendedActions"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRINGA, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_Error, RecommendedActions), /* offset */
    MI_T("CIM_Error"), /* origin */
    MI_T("CIM_Error"), /* propagator */
    NULL,
};

/* property CIM_Error.ErrorSource */
static MI_CONST MI_PropertyDecl CIM_Error_ErrorSource_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0065650B, /* code */
    MI_T("ErrorSource"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_Error, ErrorSource), /* offset */
    MI_T("CIM_Error"), /* origin */
    MI_T("CIM_Error"), /* propagator */
    NULL,
};

static MI_CONST MI_Uint16 CIM_Error_ErrorSourceFormat_value = 0;

/* property CIM_Error.ErrorSourceFormat */
static MI_CONST MI_PropertyDecl CIM_Error_ErrorSourceFormat_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00657411, /* code */
    MI_T("ErrorSourceFormat"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_Error, ErrorSourceFormat), /* offset */
    MI_T("CIM_Error"), /* origin */
    MI_T("CIM_Error"), /* propagator */
    &CIM_Error_ErrorSourceFormat_value,
};

/* property CIM_Error.OtherErrorSourceFormat */
static MI_CONST MI_PropertyDecl CIM_Error_OtherErrorSourceFormat_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006F7416, /* code */
    MI_T("OtherErrorSourceFormat"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_Error, OtherErrorSourceFormat), /* offset */
    MI_T("CIM_Error"), /* origin */
    MI_T("CIM_Error"), /* propagator */
    NULL,
};

/* property CIM_Error.CIMStatusCode */
static MI_CONST MI_PropertyDecl CIM_Error_CIMStatusCode_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0063650D, /* code */
    MI_T("CIMStatusCode"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_Error, CIMStatusCode), /* offset */
    MI_T("CIM_Error"), /* origin */
    MI_T("CIM_Error"), /* propagator */
    NULL,
};

/* property CIM_Error.CIMStatusCodeDescription */
static MI_CONST MI_PropertyDecl CIM_Error_CIMStatusCodeDescription_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00636E18, /* code */
    MI_T("CIMStatusCodeDescription"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_Error, CIMStatusCodeDescription), /* offset */
    MI_T("CIM_Error"), /* origin */
    MI_T("CIM_Error"), /* propagator */
    NULL,
};

static MI_PropertyDecl MI_CONST* MI_CONST CIM_Error_props[] =
{
    &CIM_Error_ErrorType_prop,
    &CIM_Error_OtherErrorType_prop,
    &CIM_Error_OwningEntity_prop,
    &CIM_Error_MessageID_prop,
    &CIM_Error_Message_prop,
    &CIM_Error_MessageArguments_prop,
    &CIM_Error_PerceivedSeverity_prop,
    &CIM_Error_ProbableCause_prop,
    &CIM_Error_ProbableCauseDescription_prop,
    &CIM_Error_RecommendedActions_prop,
    &CIM_Error_ErrorSource_prop,
    &CIM_Error_ErrorSourceFormat_prop,
    &CIM_Error_OtherErrorSourceFormat_prop,
    &CIM_Error_CIMStatusCode_prop,
    &CIM_Error_CIMStatusCodeDescription_prop,
};

static MI_CONST MI_Char* CIM_Error_Version_qual_value = MI_T("2.22.1");

static MI_CONST MI_Qualifier CIM_Error_Version_qual =
{
    MI_T("Version"),
    MI_STRING,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_TRANSLATABLE|MI_FLAG_RESTRICTED,
    &CIM_Error_Version_qual_value
};

static MI_CONST MI_Char* CIM_Error_UMLPackagePath_qual_value = MI_T("CIM::Interop");

static MI_CONST MI_Qualifier CIM_Error_UMLPackagePath_qual =
{
    MI_T("UMLPackagePath"),
    MI_STRING,
    0,
    &CIM_Error_UMLPackagePath_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_Error_quals[] =
{
    &CIM_Error_Version_qual,
    &CIM_Error_UMLPackagePath_qual,
};

/* class CIM_Error */
MI_CONST MI_ClassDecl CIM_Error_rtti =
{
    MI_FLAG_CLASS|MI_FLAG_INDICATION, /* flags */
    0x00637209, /* code */
    MI_T("CIM_Error"), /* name */
    CIM_Error_quals, /* qualifiers */
    MI_COUNT(CIM_Error_quals), /* numQualifiers */
    CIM_Error_props, /* properties */
    MI_COUNT(CIM_Error_props), /* numProperties */
    sizeof(CIM_Error), /* size */
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
** CIM_ConcreteJob
**
**==============================================================================
*/

static MI_CONST MI_Char* CIM_ConcreteJob_InstanceID_Override_qual_value = MI_T("InstanceID");

static MI_CONST MI_Qualifier CIM_ConcreteJob_InstanceID_Override_qual =
{
    MI_T("Override"),
    MI_STRING,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_RESTRICTED,
    &CIM_ConcreteJob_InstanceID_Override_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_ConcreteJob_InstanceID_quals[] =
{
    &CIM_ConcreteJob_InstanceID_Override_qual,
};

/* property CIM_ConcreteJob.InstanceID */
static MI_CONST MI_PropertyDecl CIM_ConcreteJob_InstanceID_prop =
{
    MI_FLAG_PROPERTY|MI_FLAG_KEY, /* flags */
    0x0069640A, /* code */
    MI_T("InstanceID"), /* name */
    CIM_ConcreteJob_InstanceID_quals, /* qualifiers */
    MI_COUNT(CIM_ConcreteJob_InstanceID_quals), /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_ConcreteJob, InstanceID), /* offset */
    MI_T("CIM_ManagedElement"), /* origin */
    MI_T("CIM_ConcreteJob"), /* propagator */
    NULL,
};

static MI_CONST MI_Uint32 CIM_ConcreteJob_Name_MaxLen_qual_value = 1024U;

static MI_CONST MI_Qualifier CIM_ConcreteJob_Name_MaxLen_qual =
{
    MI_T("MaxLen"),
    MI_UINT32,
    0,
    &CIM_ConcreteJob_Name_MaxLen_qual_value
};

static MI_CONST MI_Char* CIM_ConcreteJob_Name_Override_qual_value = MI_T("Name");

static MI_CONST MI_Qualifier CIM_ConcreteJob_Name_Override_qual =
{
    MI_T("Override"),
    MI_STRING,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_RESTRICTED,
    &CIM_ConcreteJob_Name_Override_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_ConcreteJob_Name_quals[] =
{
    &CIM_ConcreteJob_Name_MaxLen_qual,
    &CIM_ConcreteJob_Name_Override_qual,
};

/* property CIM_ConcreteJob.Name */
static MI_CONST MI_PropertyDecl CIM_ConcreteJob_Name_prop =
{
    MI_FLAG_PROPERTY|MI_FLAG_REQUIRED, /* flags */
    0x006E6504, /* code */
    MI_T("Name"), /* name */
    CIM_ConcreteJob_Name_quals, /* qualifiers */
    MI_COUNT(CIM_ConcreteJob_Name_quals), /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_ConcreteJob, Name), /* offset */
    MI_T("CIM_ManagedSystemElement"), /* origin */
    MI_T("CIM_ConcreteJob"), /* propagator */
    NULL,
};

/* property CIM_ConcreteJob.JobState */
static MI_CONST MI_PropertyDecl CIM_ConcreteJob_JobState_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006A6508, /* code */
    MI_T("JobState"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_ConcreteJob, JobState), /* offset */
    MI_T("CIM_ConcreteJob"), /* origin */
    MI_T("CIM_ConcreteJob"), /* propagator */
    NULL,
};

/* property CIM_ConcreteJob.TimeOfLastStateChange */
static MI_CONST MI_PropertyDecl CIM_ConcreteJob_TimeOfLastStateChange_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00746515, /* code */
    MI_T("TimeOfLastStateChange"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_DATETIME, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_ConcreteJob, TimeOfLastStateChange), /* offset */
    MI_T("CIM_ConcreteJob"), /* origin */
    MI_T("CIM_ConcreteJob"), /* propagator */
    NULL,
};

static MI_CONST MI_Datetime CIM_ConcreteJob_TimeBeforeRemoval_value = {0,{{0,0,5,0,0}}};

/* property CIM_ConcreteJob.TimeBeforeRemoval */
static MI_CONST MI_PropertyDecl CIM_ConcreteJob_TimeBeforeRemoval_prop =
{
    MI_FLAG_PROPERTY|MI_FLAG_REQUIRED, /* flags */
    0x00746C11, /* code */
    MI_T("TimeBeforeRemoval"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_DATETIME, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_ConcreteJob, TimeBeforeRemoval), /* offset */
    MI_T("CIM_ConcreteJob"), /* origin */
    MI_T("CIM_ConcreteJob"), /* propagator */
    &CIM_ConcreteJob_TimeBeforeRemoval_value,
};

static MI_PropertyDecl MI_CONST* MI_CONST CIM_ConcreteJob_props[] =
{
    &CIM_ConcreteJob_InstanceID_prop,
    &CIM_ManagedElement_Caption_prop,
    &CIM_ManagedElement_Description_prop,
    &CIM_ManagedElement_ElementName_prop,
    &CIM_ManagedSystemElement_InstallDate_prop,
    &CIM_ConcreteJob_Name_prop,
    &CIM_ManagedSystemElement_OperationalStatus_prop,
    &CIM_ManagedSystemElement_StatusDescriptions_prop,
    &CIM_ManagedSystemElement_Status_prop,
    &CIM_ManagedSystemElement_HealthState_prop,
    &CIM_ManagedSystemElement_CommunicationStatus_prop,
    &CIM_ManagedSystemElement_DetailedStatus_prop,
    &CIM_ManagedSystemElement_OperatingStatus_prop,
    &CIM_ManagedSystemElement_PrimaryStatus_prop,
    &CIM_Job_JobStatus_prop,
    &CIM_Job_TimeSubmitted_prop,
    &CIM_Job_ScheduledStartTime_prop,
    &CIM_Job_StartTime_prop,
    &CIM_Job_ElapsedTime_prop,
    &CIM_Job_JobRunTimes_prop,
    &CIM_Job_RunMonth_prop,
    &CIM_Job_RunDay_prop,
    &CIM_Job_RunDayOfWeek_prop,
    &CIM_Job_RunStartInterval_prop,
    &CIM_Job_LocalOrUtcTime_prop,
    &CIM_Job_UntilTime_prop,
    &CIM_Job_Notify_prop,
    &CIM_Job_Owner_prop,
    &CIM_Job_Priority_prop,
    &CIM_Job_PercentComplete_prop,
    &CIM_Job_DeleteOnCompletion_prop,
    &CIM_Job_ErrorCode_prop,
    &CIM_Job_ErrorDescription_prop,
    &CIM_Job_RecoveryAction_prop,
    &CIM_Job_OtherRecoveryAction_prop,
    &CIM_ConcreteJob_JobState_prop,
    &CIM_ConcreteJob_TimeOfLastStateChange_prop,
    &CIM_ConcreteJob_TimeBeforeRemoval_prop,
};

/* parameter CIM_ConcreteJob.RequestStateChange(): RequestedState */
static MI_CONST MI_ParameterDecl CIM_ConcreteJob_RequestStateChange_RequestedState_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_IN, /* flags */
    0x0072650E, /* code */
    MI_T("RequestedState"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_ConcreteJob_RequestStateChange, RequestedState), /* offset */
};

/* parameter CIM_ConcreteJob.RequestStateChange(): TimeoutPeriod */
static MI_CONST MI_ParameterDecl CIM_ConcreteJob_RequestStateChange_TimeoutPeriod_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_IN, /* flags */
    0x0074640D, /* code */
    MI_T("TimeoutPeriod"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_DATETIME, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_ConcreteJob_RequestStateChange, TimeoutPeriod), /* offset */
};

/* parameter CIM_ConcreteJob.RequestStateChange(): MIReturn */
static MI_CONST MI_ParameterDecl CIM_ConcreteJob_RequestStateChange_MIReturn_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006D6E08, /* code */
    MI_T("MIReturn"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_ConcreteJob_RequestStateChange, MIReturn), /* offset */
};

static MI_ParameterDecl MI_CONST* MI_CONST CIM_ConcreteJob_RequestStateChange_params[] =
{
    &CIM_ConcreteJob_RequestStateChange_MIReturn_param,
    &CIM_ConcreteJob_RequestStateChange_RequestedState_param,
    &CIM_ConcreteJob_RequestStateChange_TimeoutPeriod_param,
};

/* method CIM_ConcreteJob.RequestStateChange() */
MI_CONST MI_MethodDecl CIM_ConcreteJob_RequestStateChange_rtti =
{
    MI_FLAG_METHOD, /* flags */
    0x00726512, /* code */
    MI_T("RequestStateChange"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    CIM_ConcreteJob_RequestStateChange_params, /* parameters */
    MI_COUNT(CIM_ConcreteJob_RequestStateChange_params), /* numParameters */
    sizeof(CIM_ConcreteJob_RequestStateChange), /* size */
    MI_UINT32, /* returnType */
    MI_T("CIM_ConcreteJob"), /* origin */
    MI_T("CIM_ConcreteJob"), /* propagator */
    &schemaDecl, /* schema */
    NULL, /* method */
};

static MI_CONST MI_Char* CIM_ConcreteJob_GetError_Deprecated_qual_data_value[] =
{
    MI_T("CIM_ConcreteJob.GetErrors"),
};

static MI_CONST MI_ConstStringA CIM_ConcreteJob_GetError_Deprecated_qual_value =
{
    CIM_ConcreteJob_GetError_Deprecated_qual_data_value,
    MI_COUNT(CIM_ConcreteJob_GetError_Deprecated_qual_data_value),
};

static MI_CONST MI_Qualifier CIM_ConcreteJob_GetError_Deprecated_qual =
{
    MI_T("Deprecated"),
    MI_STRINGA,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_RESTRICTED,
    &CIM_ConcreteJob_GetError_Deprecated_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_ConcreteJob_GetError_quals[] =
{
    &CIM_ConcreteJob_GetError_Deprecated_qual,
};

static MI_CONST MI_Char* CIM_ConcreteJob_GetError_Error_EmbeddedInstance_qual_value = MI_T("CIM_Error");

static MI_CONST MI_Qualifier CIM_ConcreteJob_GetError_Error_EmbeddedInstance_qual =
{
    MI_T("EmbeddedInstance"),
    MI_STRING,
    0,
    &CIM_ConcreteJob_GetError_Error_EmbeddedInstance_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_ConcreteJob_GetError_Error_quals[] =
{
    &CIM_ConcreteJob_GetError_Error_EmbeddedInstance_qual,
};

/* parameter CIM_ConcreteJob.GetError(): Error */
static MI_CONST MI_ParameterDecl CIM_ConcreteJob_GetError_Error_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x00657205, /* code */
    MI_T("Error"), /* name */
    CIM_ConcreteJob_GetError_Error_quals, /* qualifiers */
    MI_COUNT(CIM_ConcreteJob_GetError_Error_quals), /* numQualifiers */
    MI_INSTANCE, /* type */
    MI_T("CIM_Error"), /* className */
    0, /* subscript */
    offsetof(CIM_ConcreteJob_GetError, Error), /* offset */
};

static MI_CONST MI_Char* CIM_ConcreteJob_GetError_MIReturn_Deprecated_qual_data_value[] =
{
    MI_T("CIM_ConcreteJob.GetErrors"),
};

static MI_CONST MI_ConstStringA CIM_ConcreteJob_GetError_MIReturn_Deprecated_qual_value =
{
    CIM_ConcreteJob_GetError_MIReturn_Deprecated_qual_data_value,
    MI_COUNT(CIM_ConcreteJob_GetError_MIReturn_Deprecated_qual_data_value),
};

static MI_CONST MI_Qualifier CIM_ConcreteJob_GetError_MIReturn_Deprecated_qual =
{
    MI_T("Deprecated"),
    MI_STRINGA,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_RESTRICTED,
    &CIM_ConcreteJob_GetError_MIReturn_Deprecated_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_ConcreteJob_GetError_MIReturn_quals[] =
{
    &CIM_ConcreteJob_GetError_MIReturn_Deprecated_qual,
};

/* parameter CIM_ConcreteJob.GetError(): MIReturn */
static MI_CONST MI_ParameterDecl CIM_ConcreteJob_GetError_MIReturn_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006D6E08, /* code */
    MI_T("MIReturn"), /* name */
    CIM_ConcreteJob_GetError_MIReturn_quals, /* qualifiers */
    MI_COUNT(CIM_ConcreteJob_GetError_MIReturn_quals), /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_ConcreteJob_GetError, MIReturn), /* offset */
};

static MI_ParameterDecl MI_CONST* MI_CONST CIM_ConcreteJob_GetError_params[] =
{
    &CIM_ConcreteJob_GetError_MIReturn_param,
    &CIM_ConcreteJob_GetError_Error_param,
};

/* method CIM_ConcreteJob.GetError() */
MI_CONST MI_MethodDecl CIM_ConcreteJob_GetError_rtti =
{
    MI_FLAG_METHOD, /* flags */
    0x00677208, /* code */
    MI_T("GetError"), /* name */
    CIM_ConcreteJob_GetError_quals, /* qualifiers */
    MI_COUNT(CIM_ConcreteJob_GetError_quals), /* numQualifiers */
    CIM_ConcreteJob_GetError_params, /* parameters */
    MI_COUNT(CIM_ConcreteJob_GetError_params), /* numParameters */
    sizeof(CIM_ConcreteJob_GetError), /* size */
    MI_UINT32, /* returnType */
    MI_T("CIM_ConcreteJob"), /* origin */
    MI_T("CIM_ConcreteJob"), /* propagator */
    &schemaDecl, /* schema */
    NULL, /* method */
};

static MI_CONST MI_Char* CIM_ConcreteJob_GetErrors_Errors_EmbeddedInstance_qual_value = MI_T("CIM_Error");

static MI_CONST MI_Qualifier CIM_ConcreteJob_GetErrors_Errors_EmbeddedInstance_qual =
{
    MI_T("EmbeddedInstance"),
    MI_STRING,
    0,
    &CIM_ConcreteJob_GetErrors_Errors_EmbeddedInstance_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_ConcreteJob_GetErrors_Errors_quals[] =
{
    &CIM_ConcreteJob_GetErrors_Errors_EmbeddedInstance_qual,
};

/* parameter CIM_ConcreteJob.GetErrors(): Errors */
static MI_CONST MI_ParameterDecl CIM_ConcreteJob_GetErrors_Errors_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x00657306, /* code */
    MI_T("Errors"), /* name */
    CIM_ConcreteJob_GetErrors_Errors_quals, /* qualifiers */
    MI_COUNT(CIM_ConcreteJob_GetErrors_Errors_quals), /* numQualifiers */
    MI_INSTANCEA, /* type */
    MI_T("CIM_Error"), /* className */
    0, /* subscript */
    offsetof(CIM_ConcreteJob_GetErrors, Errors), /* offset */
};

/* parameter CIM_ConcreteJob.GetErrors(): MIReturn */
static MI_CONST MI_ParameterDecl CIM_ConcreteJob_GetErrors_MIReturn_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006D6E08, /* code */
    MI_T("MIReturn"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_ConcreteJob_GetErrors, MIReturn), /* offset */
};

static MI_ParameterDecl MI_CONST* MI_CONST CIM_ConcreteJob_GetErrors_params[] =
{
    &CIM_ConcreteJob_GetErrors_MIReturn_param,
    &CIM_ConcreteJob_GetErrors_Errors_param,
};

/* method CIM_ConcreteJob.GetErrors() */
MI_CONST MI_MethodDecl CIM_ConcreteJob_GetErrors_rtti =
{
    MI_FLAG_METHOD, /* flags */
    0x00677309, /* code */
    MI_T("GetErrors"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    CIM_ConcreteJob_GetErrors_params, /* parameters */
    MI_COUNT(CIM_ConcreteJob_GetErrors_params), /* numParameters */
    sizeof(CIM_ConcreteJob_GetErrors), /* size */
    MI_UINT32, /* returnType */
    MI_T("CIM_ConcreteJob"), /* origin */
    MI_T("CIM_ConcreteJob"), /* propagator */
    &schemaDecl, /* schema */
    NULL, /* method */
};

static MI_MethodDecl MI_CONST* MI_CONST CIM_ConcreteJob_meths[] =
{
    &CIM_Job_KillJob_rtti,
    &CIM_ConcreteJob_RequestStateChange_rtti,
    &CIM_ConcreteJob_GetError_rtti,
    &CIM_ConcreteJob_GetErrors_rtti,
};

static MI_CONST MI_Char* CIM_ConcreteJob_UMLPackagePath_qual_value = MI_T("CIM::Core::CoreElements");

static MI_CONST MI_Qualifier CIM_ConcreteJob_UMLPackagePath_qual =
{
    MI_T("UMLPackagePath"),
    MI_STRING,
    0,
    &CIM_ConcreteJob_UMLPackagePath_qual_value
};

static MI_CONST MI_Char* CIM_ConcreteJob_Deprecated_qual_data_value[] =
{
    MI_T("CIM_ConcreteJob.GetErrors"),
};

static MI_CONST MI_ConstStringA CIM_ConcreteJob_Deprecated_qual_value =
{
    CIM_ConcreteJob_Deprecated_qual_data_value,
    MI_COUNT(CIM_ConcreteJob_Deprecated_qual_data_value),
};

static MI_CONST MI_Qualifier CIM_ConcreteJob_Deprecated_qual =
{
    MI_T("Deprecated"),
    MI_STRINGA,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_RESTRICTED,
    &CIM_ConcreteJob_Deprecated_qual_value
};

static MI_CONST MI_Char* CIM_ConcreteJob_Version_qual_value = MI_T("2.31.1");

static MI_CONST MI_Qualifier CIM_ConcreteJob_Version_qual =
{
    MI_T("Version"),
    MI_STRING,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_TRANSLATABLE|MI_FLAG_RESTRICTED,
    &CIM_ConcreteJob_Version_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_ConcreteJob_quals[] =
{
    &CIM_ConcreteJob_UMLPackagePath_qual,
    &CIM_ConcreteJob_Deprecated_qual,
    &CIM_ConcreteJob_Version_qual,
};

/* class CIM_ConcreteJob */
MI_CONST MI_ClassDecl CIM_ConcreteJob_rtti =
{
    MI_FLAG_CLASS, /* flags */
    0x0063620F, /* code */
    MI_T("CIM_ConcreteJob"), /* name */
    CIM_ConcreteJob_quals, /* qualifiers */
    MI_COUNT(CIM_ConcreteJob_quals), /* numQualifiers */
    CIM_ConcreteJob_props, /* properties */
    MI_COUNT(CIM_ConcreteJob_props), /* numProperties */
    sizeof(CIM_ConcreteJob), /* size */
    MI_T("CIM_Job"), /* superClass */
    &CIM_Job_rtti, /* superClassDecl */
    CIM_ConcreteJob_meths, /* methods */
    MI_COUNT(CIM_ConcreteJob_meths), /* numMethods */
    &schemaDecl, /* schema */
    NULL, /* functions */
    NULL, /* owningClass */
};

/*
**==============================================================================
**
** CIM_EnabledLogicalElement
**
**==============================================================================
*/

static MI_CONST MI_Uint16 CIM_EnabledLogicalElement_EnabledState_value = 5;

/* property CIM_EnabledLogicalElement.EnabledState */
static MI_CONST MI_PropertyDecl CIM_EnabledLogicalElement_EnabledState_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0065650C, /* code */
    MI_T("EnabledState"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_EnabledLogicalElement, EnabledState), /* offset */
    MI_T("CIM_EnabledLogicalElement"), /* origin */
    MI_T("CIM_EnabledLogicalElement"), /* propagator */
    &CIM_EnabledLogicalElement_EnabledState_value,
};

/* property CIM_EnabledLogicalElement.OtherEnabledState */
static MI_CONST MI_PropertyDecl CIM_EnabledLogicalElement_OtherEnabledState_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006F6511, /* code */
    MI_T("OtherEnabledState"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_EnabledLogicalElement, OtherEnabledState), /* offset */
    MI_T("CIM_EnabledLogicalElement"), /* origin */
    MI_T("CIM_EnabledLogicalElement"), /* propagator */
    NULL,
};

static MI_CONST MI_Uint16 CIM_EnabledLogicalElement_RequestedState_value = 12;

/* property CIM_EnabledLogicalElement.RequestedState */
static MI_CONST MI_PropertyDecl CIM_EnabledLogicalElement_RequestedState_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0072650E, /* code */
    MI_T("RequestedState"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_EnabledLogicalElement, RequestedState), /* offset */
    MI_T("CIM_EnabledLogicalElement"), /* origin */
    MI_T("CIM_EnabledLogicalElement"), /* propagator */
    &CIM_EnabledLogicalElement_RequestedState_value,
};

static MI_CONST MI_Uint16 CIM_EnabledLogicalElement_EnabledDefault_value = 2;

/* property CIM_EnabledLogicalElement.EnabledDefault */
static MI_CONST MI_PropertyDecl CIM_EnabledLogicalElement_EnabledDefault_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0065740E, /* code */
    MI_T("EnabledDefault"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_EnabledLogicalElement, EnabledDefault), /* offset */
    MI_T("CIM_EnabledLogicalElement"), /* origin */
    MI_T("CIM_EnabledLogicalElement"), /* propagator */
    &CIM_EnabledLogicalElement_EnabledDefault_value,
};

/* property CIM_EnabledLogicalElement.TimeOfLastStateChange */
static MI_CONST MI_PropertyDecl CIM_EnabledLogicalElement_TimeOfLastStateChange_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00746515, /* code */
    MI_T("TimeOfLastStateChange"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_DATETIME, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_EnabledLogicalElement, TimeOfLastStateChange), /* offset */
    MI_T("CIM_EnabledLogicalElement"), /* origin */
    MI_T("CIM_EnabledLogicalElement"), /* propagator */
    NULL,
};

/* property CIM_EnabledLogicalElement.AvailableRequestedStates */
static MI_CONST MI_PropertyDecl CIM_EnabledLogicalElement_AvailableRequestedStates_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00617318, /* code */
    MI_T("AvailableRequestedStates"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16A, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_EnabledLogicalElement, AvailableRequestedStates), /* offset */
    MI_T("CIM_EnabledLogicalElement"), /* origin */
    MI_T("CIM_EnabledLogicalElement"), /* propagator */
    NULL,
};

static MI_CONST MI_Uint16 CIM_EnabledLogicalElement_TransitioningToState_value = 12;

/* property CIM_EnabledLogicalElement.TransitioningToState */
static MI_CONST MI_PropertyDecl CIM_EnabledLogicalElement_TransitioningToState_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00746514, /* code */
    MI_T("TransitioningToState"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_EnabledLogicalElement, TransitioningToState), /* offset */
    MI_T("CIM_EnabledLogicalElement"), /* origin */
    MI_T("CIM_EnabledLogicalElement"), /* propagator */
    &CIM_EnabledLogicalElement_TransitioningToState_value,
};

static MI_PropertyDecl MI_CONST* MI_CONST CIM_EnabledLogicalElement_props[] =
{
    &CIM_ManagedElement_InstanceID_prop,
    &CIM_ManagedElement_Caption_prop,
    &CIM_ManagedElement_Description_prop,
    &CIM_ManagedElement_ElementName_prop,
    &CIM_ManagedSystemElement_InstallDate_prop,
    &CIM_ManagedSystemElement_Name_prop,
    &CIM_ManagedSystemElement_OperationalStatus_prop,
    &CIM_ManagedSystemElement_StatusDescriptions_prop,
    &CIM_ManagedSystemElement_Status_prop,
    &CIM_ManagedSystemElement_HealthState_prop,
    &CIM_ManagedSystemElement_CommunicationStatus_prop,
    &CIM_ManagedSystemElement_DetailedStatus_prop,
    &CIM_ManagedSystemElement_OperatingStatus_prop,
    &CIM_ManagedSystemElement_PrimaryStatus_prop,
    &CIM_EnabledLogicalElement_EnabledState_prop,
    &CIM_EnabledLogicalElement_OtherEnabledState_prop,
    &CIM_EnabledLogicalElement_RequestedState_prop,
    &CIM_EnabledLogicalElement_EnabledDefault_prop,
    &CIM_EnabledLogicalElement_TimeOfLastStateChange_prop,
    &CIM_EnabledLogicalElement_AvailableRequestedStates_prop,
    &CIM_EnabledLogicalElement_TransitioningToState_prop,
};

/* parameter CIM_EnabledLogicalElement.RequestStateChange(): RequestedState */
static MI_CONST MI_ParameterDecl CIM_EnabledLogicalElement_RequestStateChange_RequestedState_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_IN, /* flags */
    0x0072650E, /* code */
    MI_T("RequestedState"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_EnabledLogicalElement_RequestStateChange, RequestedState), /* offset */
};

/* parameter CIM_EnabledLogicalElement.RequestStateChange(): Job */
static MI_CONST MI_ParameterDecl CIM_EnabledLogicalElement_RequestStateChange_Job_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006A6203, /* code */
    MI_T("Job"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("CIM_ConcreteJob"), /* className */
    0, /* subscript */
    offsetof(CIM_EnabledLogicalElement_RequestStateChange, Job), /* offset */
};

/* parameter CIM_EnabledLogicalElement.RequestStateChange(): TimeoutPeriod */
static MI_CONST MI_ParameterDecl CIM_EnabledLogicalElement_RequestStateChange_TimeoutPeriod_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_IN, /* flags */
    0x0074640D, /* code */
    MI_T("TimeoutPeriod"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_DATETIME, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_EnabledLogicalElement_RequestStateChange, TimeoutPeriod), /* offset */
};

/* parameter CIM_EnabledLogicalElement.RequestStateChange(): MIReturn */
static MI_CONST MI_ParameterDecl CIM_EnabledLogicalElement_RequestStateChange_MIReturn_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006D6E08, /* code */
    MI_T("MIReturn"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_EnabledLogicalElement_RequestStateChange, MIReturn), /* offset */
};

static MI_ParameterDecl MI_CONST* MI_CONST CIM_EnabledLogicalElement_RequestStateChange_params[] =
{
    &CIM_EnabledLogicalElement_RequestStateChange_MIReturn_param,
    &CIM_EnabledLogicalElement_RequestStateChange_RequestedState_param,
    &CIM_EnabledLogicalElement_RequestStateChange_Job_param,
    &CIM_EnabledLogicalElement_RequestStateChange_TimeoutPeriod_param,
};

/* method CIM_EnabledLogicalElement.RequestStateChange() */
MI_CONST MI_MethodDecl CIM_EnabledLogicalElement_RequestStateChange_rtti =
{
    MI_FLAG_METHOD, /* flags */
    0x00726512, /* code */
    MI_T("RequestStateChange"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    CIM_EnabledLogicalElement_RequestStateChange_params, /* parameters */
    MI_COUNT(CIM_EnabledLogicalElement_RequestStateChange_params), /* numParameters */
    sizeof(CIM_EnabledLogicalElement_RequestStateChange), /* size */
    MI_UINT32, /* returnType */
    MI_T("CIM_EnabledLogicalElement"), /* origin */
    MI_T("CIM_EnabledLogicalElement"), /* propagator */
    &schemaDecl, /* schema */
    NULL, /* method */
};

static MI_MethodDecl MI_CONST* MI_CONST CIM_EnabledLogicalElement_meths[] =
{
    &CIM_EnabledLogicalElement_RequestStateChange_rtti,
};

static MI_CONST MI_Char* CIM_EnabledLogicalElement_UMLPackagePath_qual_value = MI_T("CIM::Core::CoreElements");

static MI_CONST MI_Qualifier CIM_EnabledLogicalElement_UMLPackagePath_qual =
{
    MI_T("UMLPackagePath"),
    MI_STRING,
    0,
    &CIM_EnabledLogicalElement_UMLPackagePath_qual_value
};

static MI_CONST MI_Char* CIM_EnabledLogicalElement_Version_qual_value = MI_T("2.22.0");

static MI_CONST MI_Qualifier CIM_EnabledLogicalElement_Version_qual =
{
    MI_T("Version"),
    MI_STRING,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_TRANSLATABLE|MI_FLAG_RESTRICTED,
    &CIM_EnabledLogicalElement_Version_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_EnabledLogicalElement_quals[] =
{
    &CIM_EnabledLogicalElement_UMLPackagePath_qual,
    &CIM_EnabledLogicalElement_Version_qual,
};

/* class CIM_EnabledLogicalElement */
MI_CONST MI_ClassDecl CIM_EnabledLogicalElement_rtti =
{
    MI_FLAG_CLASS|MI_FLAG_ABSTRACT, /* flags */
    0x00637419, /* code */
    MI_T("CIM_EnabledLogicalElement"), /* name */
    CIM_EnabledLogicalElement_quals, /* qualifiers */
    MI_COUNT(CIM_EnabledLogicalElement_quals), /* numQualifiers */
    CIM_EnabledLogicalElement_props, /* properties */
    MI_COUNT(CIM_EnabledLogicalElement_props), /* numProperties */
    sizeof(CIM_EnabledLogicalElement), /* size */
    MI_T("CIM_LogicalElement"), /* superClass */
    &CIM_LogicalElement_rtti, /* superClassDecl */
    CIM_EnabledLogicalElement_meths, /* methods */
    MI_COUNT(CIM_EnabledLogicalElement_meths), /* numMethods */
    &schemaDecl, /* schema */
    NULL, /* functions */
    NULL, /* owningClass */
};

/*
**==============================================================================
**
** CIM_System
**
**==============================================================================
*/

static MI_CONST MI_Uint32 CIM_System_Name_MaxLen_qual_value = 256U;

static MI_CONST MI_Qualifier CIM_System_Name_MaxLen_qual =
{
    MI_T("MaxLen"),
    MI_UINT32,
    0,
    &CIM_System_Name_MaxLen_qual_value
};

static MI_CONST MI_Char* CIM_System_Name_Override_qual_value = MI_T("Name");

static MI_CONST MI_Qualifier CIM_System_Name_Override_qual =
{
    MI_T("Override"),
    MI_STRING,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_RESTRICTED,
    &CIM_System_Name_Override_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_System_Name_quals[] =
{
    &CIM_System_Name_MaxLen_qual,
    &CIM_System_Name_Override_qual,
};

/* property CIM_System.Name */
static MI_CONST MI_PropertyDecl CIM_System_Name_prop =
{
    MI_FLAG_PROPERTY|MI_FLAG_KEY, /* flags */
    0x006E6504, /* code */
    MI_T("Name"), /* name */
    CIM_System_Name_quals, /* qualifiers */
    MI_COUNT(CIM_System_Name_quals), /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_System, Name), /* offset */
    MI_T("CIM_ManagedSystemElement"), /* origin */
    MI_T("CIM_System"), /* propagator */
    NULL,
};

static MI_CONST MI_Uint32 CIM_System_CreationClassName_MaxLen_qual_value = 256U;

static MI_CONST MI_Qualifier CIM_System_CreationClassName_MaxLen_qual =
{
    MI_T("MaxLen"),
    MI_UINT32,
    0,
    &CIM_System_CreationClassName_MaxLen_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_System_CreationClassName_quals[] =
{
    &CIM_System_CreationClassName_MaxLen_qual,
};

/* property CIM_System.CreationClassName */
static MI_CONST MI_PropertyDecl CIM_System_CreationClassName_prop =
{
    MI_FLAG_PROPERTY|MI_FLAG_KEY, /* flags */
    0x00636511, /* code */
    MI_T("CreationClassName"), /* name */
    CIM_System_CreationClassName_quals, /* qualifiers */
    MI_COUNT(CIM_System_CreationClassName_quals), /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_System, CreationClassName), /* offset */
    MI_T("CIM_System"), /* origin */
    MI_T("CIM_System"), /* propagator */
    NULL,
};

static MI_CONST MI_Uint32 CIM_System_NameFormat_MaxLen_qual_value = 64U;

static MI_CONST MI_Qualifier CIM_System_NameFormat_MaxLen_qual =
{
    MI_T("MaxLen"),
    MI_UINT32,
    0,
    &CIM_System_NameFormat_MaxLen_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_System_NameFormat_quals[] =
{
    &CIM_System_NameFormat_MaxLen_qual,
};

/* property CIM_System.NameFormat */
static MI_CONST MI_PropertyDecl CIM_System_NameFormat_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006E740A, /* code */
    MI_T("NameFormat"), /* name */
    CIM_System_NameFormat_quals, /* qualifiers */
    MI_COUNT(CIM_System_NameFormat_quals), /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_System, NameFormat), /* offset */
    MI_T("CIM_System"), /* origin */
    MI_T("CIM_System"), /* propagator */
    NULL,
};

static MI_CONST MI_Uint32 CIM_System_PrimaryOwnerName_MaxLen_qual_value = 64U;

static MI_CONST MI_Qualifier CIM_System_PrimaryOwnerName_MaxLen_qual =
{
    MI_T("MaxLen"),
    MI_UINT32,
    0,
    &CIM_System_PrimaryOwnerName_MaxLen_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_System_PrimaryOwnerName_quals[] =
{
    &CIM_System_PrimaryOwnerName_MaxLen_qual,
};

/* property CIM_System.PrimaryOwnerName */
static MI_CONST MI_PropertyDecl CIM_System_PrimaryOwnerName_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00706510, /* code */
    MI_T("PrimaryOwnerName"), /* name */
    CIM_System_PrimaryOwnerName_quals, /* qualifiers */
    MI_COUNT(CIM_System_PrimaryOwnerName_quals), /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_System, PrimaryOwnerName), /* offset */
    MI_T("CIM_System"), /* origin */
    MI_T("CIM_System"), /* propagator */
    NULL,
};

static MI_CONST MI_Uint32 CIM_System_PrimaryOwnerContact_MaxLen_qual_value = 256U;

static MI_CONST MI_Qualifier CIM_System_PrimaryOwnerContact_MaxLen_qual =
{
    MI_T("MaxLen"),
    MI_UINT32,
    0,
    &CIM_System_PrimaryOwnerContact_MaxLen_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_System_PrimaryOwnerContact_quals[] =
{
    &CIM_System_PrimaryOwnerContact_MaxLen_qual,
};

/* property CIM_System.PrimaryOwnerContact */
static MI_CONST MI_PropertyDecl CIM_System_PrimaryOwnerContact_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00707413, /* code */
    MI_T("PrimaryOwnerContact"), /* name */
    CIM_System_PrimaryOwnerContact_quals, /* qualifiers */
    MI_COUNT(CIM_System_PrimaryOwnerContact_quals), /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_System, PrimaryOwnerContact), /* offset */
    MI_T("CIM_System"), /* origin */
    MI_T("CIM_System"), /* propagator */
    NULL,
};

/* property CIM_System.Roles */
static MI_CONST MI_PropertyDecl CIM_System_Roles_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00727305, /* code */
    MI_T("Roles"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRINGA, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_System, Roles), /* offset */
    MI_T("CIM_System"), /* origin */
    MI_T("CIM_System"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* CIM_System_OtherIdentifyingInfo_ArrayType_qual_value = MI_T("Indexed");

static MI_CONST MI_Qualifier CIM_System_OtherIdentifyingInfo_ArrayType_qual =
{
    MI_T("ArrayType"),
    MI_STRING,
    MI_FLAG_DISABLEOVERRIDE|MI_FLAG_TOSUBCLASS,
    &CIM_System_OtherIdentifyingInfo_ArrayType_qual_value
};

static MI_CONST MI_Uint32 CIM_System_OtherIdentifyingInfo_MaxLen_qual_value = 256U;

static MI_CONST MI_Qualifier CIM_System_OtherIdentifyingInfo_MaxLen_qual =
{
    MI_T("MaxLen"),
    MI_UINT32,
    0,
    &CIM_System_OtherIdentifyingInfo_MaxLen_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_System_OtherIdentifyingInfo_quals[] =
{
    &CIM_System_OtherIdentifyingInfo_ArrayType_qual,
    &CIM_System_OtherIdentifyingInfo_MaxLen_qual,
};

/* property CIM_System.OtherIdentifyingInfo */
static MI_CONST MI_PropertyDecl CIM_System_OtherIdentifyingInfo_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006F6F14, /* code */
    MI_T("OtherIdentifyingInfo"), /* name */
    CIM_System_OtherIdentifyingInfo_quals, /* qualifiers */
    MI_COUNT(CIM_System_OtherIdentifyingInfo_quals), /* numQualifiers */
    MI_STRINGA, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_System, OtherIdentifyingInfo), /* offset */
    MI_T("CIM_System"), /* origin */
    MI_T("CIM_System"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* CIM_System_IdentifyingDescriptions_ArrayType_qual_value = MI_T("Indexed");

static MI_CONST MI_Qualifier CIM_System_IdentifyingDescriptions_ArrayType_qual =
{
    MI_T("ArrayType"),
    MI_STRING,
    MI_FLAG_DISABLEOVERRIDE|MI_FLAG_TOSUBCLASS,
    &CIM_System_IdentifyingDescriptions_ArrayType_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_System_IdentifyingDescriptions_quals[] =
{
    &CIM_System_IdentifyingDescriptions_ArrayType_qual,
};

/* property CIM_System.IdentifyingDescriptions */
static MI_CONST MI_PropertyDecl CIM_System_IdentifyingDescriptions_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00697317, /* code */
    MI_T("IdentifyingDescriptions"), /* name */
    CIM_System_IdentifyingDescriptions_quals, /* qualifiers */
    MI_COUNT(CIM_System_IdentifyingDescriptions_quals), /* numQualifiers */
    MI_STRINGA, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_System, IdentifyingDescriptions), /* offset */
    MI_T("CIM_System"), /* origin */
    MI_T("CIM_System"), /* propagator */
    NULL,
};

static MI_PropertyDecl MI_CONST* MI_CONST CIM_System_props[] =
{
    &CIM_ManagedElement_InstanceID_prop,
    &CIM_ManagedElement_Caption_prop,
    &CIM_ManagedElement_Description_prop,
    &CIM_ManagedElement_ElementName_prop,
    &CIM_ManagedSystemElement_InstallDate_prop,
    &CIM_System_Name_prop,
    &CIM_ManagedSystemElement_OperationalStatus_prop,
    &CIM_ManagedSystemElement_StatusDescriptions_prop,
    &CIM_ManagedSystemElement_Status_prop,
    &CIM_ManagedSystemElement_HealthState_prop,
    &CIM_ManagedSystemElement_CommunicationStatus_prop,
    &CIM_ManagedSystemElement_DetailedStatus_prop,
    &CIM_ManagedSystemElement_OperatingStatus_prop,
    &CIM_ManagedSystemElement_PrimaryStatus_prop,
    &CIM_EnabledLogicalElement_EnabledState_prop,
    &CIM_EnabledLogicalElement_OtherEnabledState_prop,
    &CIM_EnabledLogicalElement_RequestedState_prop,
    &CIM_EnabledLogicalElement_EnabledDefault_prop,
    &CIM_EnabledLogicalElement_TimeOfLastStateChange_prop,
    &CIM_EnabledLogicalElement_AvailableRequestedStates_prop,
    &CIM_EnabledLogicalElement_TransitioningToState_prop,
    &CIM_System_CreationClassName_prop,
    &CIM_System_NameFormat_prop,
    &CIM_System_PrimaryOwnerName_prop,
    &CIM_System_PrimaryOwnerContact_prop,
    &CIM_System_Roles_prop,
    &CIM_System_OtherIdentifyingInfo_prop,
    &CIM_System_IdentifyingDescriptions_prop,
};

static MI_MethodDecl MI_CONST* MI_CONST CIM_System_meths[] =
{
    &CIM_EnabledLogicalElement_RequestStateChange_rtti,
};

static MI_CONST MI_Char* CIM_System_UMLPackagePath_qual_value = MI_T("CIM::Core::CoreElements");

static MI_CONST MI_Qualifier CIM_System_UMLPackagePath_qual =
{
    MI_T("UMLPackagePath"),
    MI_STRING,
    0,
    &CIM_System_UMLPackagePath_qual_value
};

static MI_CONST MI_Char* CIM_System_Version_qual_value = MI_T("2.15.0");

static MI_CONST MI_Qualifier CIM_System_Version_qual =
{
    MI_T("Version"),
    MI_STRING,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_TRANSLATABLE|MI_FLAG_RESTRICTED,
    &CIM_System_Version_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_System_quals[] =
{
    &CIM_System_UMLPackagePath_qual,
    &CIM_System_Version_qual,
};

/* class CIM_System */
MI_CONST MI_ClassDecl CIM_System_rtti =
{
    MI_FLAG_CLASS|MI_FLAG_ABSTRACT, /* flags */
    0x00636D0A, /* code */
    MI_T("CIM_System"), /* name */
    CIM_System_quals, /* qualifiers */
    MI_COUNT(CIM_System_quals), /* numQualifiers */
    CIM_System_props, /* properties */
    MI_COUNT(CIM_System_props), /* numProperties */
    sizeof(CIM_System), /* size */
    MI_T("CIM_EnabledLogicalElement"), /* superClass */
    &CIM_EnabledLogicalElement_rtti, /* superClassDecl */
    CIM_System_meths, /* methods */
    MI_COUNT(CIM_System_meths), /* numMethods */
    &schemaDecl, /* schema */
    NULL, /* functions */
    NULL, /* owningClass */
};

/*
**==============================================================================
**
** CIM_ComputerSystem
**
**==============================================================================
*/

static MI_CONST MI_Uint32 CIM_ComputerSystem_NameFormat_MaxLen_qual_value = 64U;

static MI_CONST MI_Qualifier CIM_ComputerSystem_NameFormat_MaxLen_qual =
{
    MI_T("MaxLen"),
    MI_UINT32,
    0,
    &CIM_ComputerSystem_NameFormat_MaxLen_qual_value
};

static MI_CONST MI_Char* CIM_ComputerSystem_NameFormat_Override_qual_value = MI_T("NameFormat");

static MI_CONST MI_Qualifier CIM_ComputerSystem_NameFormat_Override_qual =
{
    MI_T("Override"),
    MI_STRING,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_RESTRICTED,
    &CIM_ComputerSystem_NameFormat_Override_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_ComputerSystem_NameFormat_quals[] =
{
    &CIM_ComputerSystem_NameFormat_MaxLen_qual,
    &CIM_ComputerSystem_NameFormat_Override_qual,
};

/* property CIM_ComputerSystem.NameFormat */
static MI_CONST MI_PropertyDecl CIM_ComputerSystem_NameFormat_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006E740A, /* code */
    MI_T("NameFormat"), /* name */
    CIM_ComputerSystem_NameFormat_quals, /* qualifiers */
    MI_COUNT(CIM_ComputerSystem_NameFormat_quals), /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_ComputerSystem, NameFormat), /* offset */
    MI_T("CIM_System"), /* origin */
    MI_T("CIM_ComputerSystem"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* CIM_ComputerSystem_Dedicated_ArrayType_qual_value = MI_T("Indexed");

static MI_CONST MI_Qualifier CIM_ComputerSystem_Dedicated_ArrayType_qual =
{
    MI_T("ArrayType"),
    MI_STRING,
    MI_FLAG_DISABLEOVERRIDE|MI_FLAG_TOSUBCLASS,
    &CIM_ComputerSystem_Dedicated_ArrayType_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_ComputerSystem_Dedicated_quals[] =
{
    &CIM_ComputerSystem_Dedicated_ArrayType_qual,
};

/* property CIM_ComputerSystem.Dedicated */
static MI_CONST MI_PropertyDecl CIM_ComputerSystem_Dedicated_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00646409, /* code */
    MI_T("Dedicated"), /* name */
    CIM_ComputerSystem_Dedicated_quals, /* qualifiers */
    MI_COUNT(CIM_ComputerSystem_Dedicated_quals), /* numQualifiers */
    MI_UINT16A, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_ComputerSystem, Dedicated), /* offset */
    MI_T("CIM_ComputerSystem"), /* origin */
    MI_T("CIM_ComputerSystem"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* CIM_ComputerSystem_OtherDedicatedDescriptions_ArrayType_qual_value = MI_T("Indexed");

static MI_CONST MI_Qualifier CIM_ComputerSystem_OtherDedicatedDescriptions_ArrayType_qual =
{
    MI_T("ArrayType"),
    MI_STRING,
    MI_FLAG_DISABLEOVERRIDE|MI_FLAG_TOSUBCLASS,
    &CIM_ComputerSystem_OtherDedicatedDescriptions_ArrayType_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_ComputerSystem_OtherDedicatedDescriptions_quals[] =
{
    &CIM_ComputerSystem_OtherDedicatedDescriptions_ArrayType_qual,
};

/* property CIM_ComputerSystem.OtherDedicatedDescriptions */
static MI_CONST MI_PropertyDecl CIM_ComputerSystem_OtherDedicatedDescriptions_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006F731A, /* code */
    MI_T("OtherDedicatedDescriptions"), /* name */
    CIM_ComputerSystem_OtherDedicatedDescriptions_quals, /* qualifiers */
    MI_COUNT(CIM_ComputerSystem_OtherDedicatedDescriptions_quals), /* numQualifiers */
    MI_STRINGA, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_ComputerSystem, OtherDedicatedDescriptions), /* offset */
    MI_T("CIM_ComputerSystem"), /* origin */
    MI_T("CIM_ComputerSystem"), /* propagator */
    NULL,
};

/* property CIM_ComputerSystem.ResetCapability */
static MI_CONST MI_PropertyDecl CIM_ComputerSystem_ResetCapability_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0072790F, /* code */
    MI_T("ResetCapability"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_ComputerSystem, ResetCapability), /* offset */
    MI_T("CIM_ComputerSystem"), /* origin */
    MI_T("CIM_ComputerSystem"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* CIM_ComputerSystem_PowerManagementCapabilities_Deprecated_qual_data_value[] =
{
    MI_T("CIM_PowerManagementCapabilities.PowerCapabilities"),
};

static MI_CONST MI_ConstStringA CIM_ComputerSystem_PowerManagementCapabilities_Deprecated_qual_value =
{
    CIM_ComputerSystem_PowerManagementCapabilities_Deprecated_qual_data_value,
    MI_COUNT(CIM_ComputerSystem_PowerManagementCapabilities_Deprecated_qual_data_value),
};

static MI_CONST MI_Qualifier CIM_ComputerSystem_PowerManagementCapabilities_Deprecated_qual =
{
    MI_T("Deprecated"),
    MI_STRINGA,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_RESTRICTED,
    &CIM_ComputerSystem_PowerManagementCapabilities_Deprecated_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_ComputerSystem_PowerManagementCapabilities_quals[] =
{
    &CIM_ComputerSystem_PowerManagementCapabilities_Deprecated_qual,
};

/* property CIM_ComputerSystem.PowerManagementCapabilities */
static MI_CONST MI_PropertyDecl CIM_ComputerSystem_PowerManagementCapabilities_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0070731B, /* code */
    MI_T("PowerManagementCapabilities"), /* name */
    CIM_ComputerSystem_PowerManagementCapabilities_quals, /* qualifiers */
    MI_COUNT(CIM_ComputerSystem_PowerManagementCapabilities_quals), /* numQualifiers */
    MI_UINT16A, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_ComputerSystem, PowerManagementCapabilities), /* offset */
    MI_T("CIM_ComputerSystem"), /* origin */
    MI_T("CIM_ComputerSystem"), /* propagator */
    NULL,
};

static MI_PropertyDecl MI_CONST* MI_CONST CIM_ComputerSystem_props[] =
{
    &CIM_ManagedElement_InstanceID_prop,
    &CIM_ManagedElement_Caption_prop,
    &CIM_ManagedElement_Description_prop,
    &CIM_ManagedElement_ElementName_prop,
    &CIM_ManagedSystemElement_InstallDate_prop,
    &CIM_System_Name_prop,
    &CIM_ManagedSystemElement_OperationalStatus_prop,
    &CIM_ManagedSystemElement_StatusDescriptions_prop,
    &CIM_ManagedSystemElement_Status_prop,
    &CIM_ManagedSystemElement_HealthState_prop,
    &CIM_ManagedSystemElement_CommunicationStatus_prop,
    &CIM_ManagedSystemElement_DetailedStatus_prop,
    &CIM_ManagedSystemElement_OperatingStatus_prop,
    &CIM_ManagedSystemElement_PrimaryStatus_prop,
    &CIM_EnabledLogicalElement_EnabledState_prop,
    &CIM_EnabledLogicalElement_OtherEnabledState_prop,
    &CIM_EnabledLogicalElement_RequestedState_prop,
    &CIM_EnabledLogicalElement_EnabledDefault_prop,
    &CIM_EnabledLogicalElement_TimeOfLastStateChange_prop,
    &CIM_EnabledLogicalElement_AvailableRequestedStates_prop,
    &CIM_EnabledLogicalElement_TransitioningToState_prop,
    &CIM_System_CreationClassName_prop,
    &CIM_ComputerSystem_NameFormat_prop,
    &CIM_System_PrimaryOwnerName_prop,
    &CIM_System_PrimaryOwnerContact_prop,
    &CIM_System_Roles_prop,
    &CIM_System_OtherIdentifyingInfo_prop,
    &CIM_System_IdentifyingDescriptions_prop,
    &CIM_ComputerSystem_Dedicated_prop,
    &CIM_ComputerSystem_OtherDedicatedDescriptions_prop,
    &CIM_ComputerSystem_ResetCapability_prop,
    &CIM_ComputerSystem_PowerManagementCapabilities_prop,
};

/* parameter CIM_ComputerSystem.RequestStateChange(): RequestedState */
static MI_CONST MI_ParameterDecl CIM_ComputerSystem_RequestStateChange_RequestedState_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_IN, /* flags */
    0x0072650E, /* code */
    MI_T("RequestedState"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_ComputerSystem_RequestStateChange, RequestedState), /* offset */
};

/* parameter CIM_ComputerSystem.RequestStateChange(): Job */
static MI_CONST MI_ParameterDecl CIM_ComputerSystem_RequestStateChange_Job_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006A6203, /* code */
    MI_T("Job"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("CIM_ConcreteJob"), /* className */
    0, /* subscript */
    offsetof(CIM_ComputerSystem_RequestStateChange, Job), /* offset */
};

/* parameter CIM_ComputerSystem.RequestStateChange(): TimeoutPeriod */
static MI_CONST MI_ParameterDecl CIM_ComputerSystem_RequestStateChange_TimeoutPeriod_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_IN, /* flags */
    0x0074640D, /* code */
    MI_T("TimeoutPeriod"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_DATETIME, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_ComputerSystem_RequestStateChange, TimeoutPeriod), /* offset */
};

/* parameter CIM_ComputerSystem.RequestStateChange(): MIReturn */
static MI_CONST MI_ParameterDecl CIM_ComputerSystem_RequestStateChange_MIReturn_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006D6E08, /* code */
    MI_T("MIReturn"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_ComputerSystem_RequestStateChange, MIReturn), /* offset */
};

static MI_ParameterDecl MI_CONST* MI_CONST CIM_ComputerSystem_RequestStateChange_params[] =
{
    &CIM_ComputerSystem_RequestStateChange_MIReturn_param,
    &CIM_ComputerSystem_RequestStateChange_RequestedState_param,
    &CIM_ComputerSystem_RequestStateChange_Job_param,
    &CIM_ComputerSystem_RequestStateChange_TimeoutPeriod_param,
};

/* method CIM_ComputerSystem.RequestStateChange() */
MI_CONST MI_MethodDecl CIM_ComputerSystem_RequestStateChange_rtti =
{
    MI_FLAG_METHOD, /* flags */
    0x00726512, /* code */
    MI_T("RequestStateChange"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    CIM_ComputerSystem_RequestStateChange_params, /* parameters */
    MI_COUNT(CIM_ComputerSystem_RequestStateChange_params), /* numParameters */
    sizeof(CIM_ComputerSystem_RequestStateChange), /* size */
    MI_UINT32, /* returnType */
    MI_T("CIM_EnabledLogicalElement"), /* origin */
    MI_T("CIM_EnabledLogicalElement"), /* propagator */
    &schemaDecl, /* schema */
    (MI_ProviderFT_Invoke)CIM_ComputerSystem_Invoke_RequestStateChange, /* method */
};

static MI_CONST MI_Char* CIM_ComputerSystem_SetPowerState_Deprecated_qual_data_value[] =
{
    MI_T("CIM_PowerManagementService.SetPowerState"),
};

static MI_CONST MI_ConstStringA CIM_ComputerSystem_SetPowerState_Deprecated_qual_value =
{
    CIM_ComputerSystem_SetPowerState_Deprecated_qual_data_value,
    MI_COUNT(CIM_ComputerSystem_SetPowerState_Deprecated_qual_data_value),
};

static MI_CONST MI_Qualifier CIM_ComputerSystem_SetPowerState_Deprecated_qual =
{
    MI_T("Deprecated"),
    MI_STRINGA,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_RESTRICTED,
    &CIM_ComputerSystem_SetPowerState_Deprecated_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_ComputerSystem_SetPowerState_quals[] =
{
    &CIM_ComputerSystem_SetPowerState_Deprecated_qual,
};

/* parameter CIM_ComputerSystem.SetPowerState(): PowerState */
static MI_CONST MI_ParameterDecl CIM_ComputerSystem_SetPowerState_PowerState_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_IN, /* flags */
    0x0070650A, /* code */
    MI_T("PowerState"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_ComputerSystem_SetPowerState, PowerState), /* offset */
};

/* parameter CIM_ComputerSystem.SetPowerState(): Time */
static MI_CONST MI_ParameterDecl CIM_ComputerSystem_SetPowerState_Time_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_IN, /* flags */
    0x00746504, /* code */
    MI_T("Time"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_DATETIME, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_ComputerSystem_SetPowerState, Time), /* offset */
};

static MI_CONST MI_Char* CIM_ComputerSystem_SetPowerState_MIReturn_Deprecated_qual_data_value[] =
{
    MI_T("CIM_PowerManagementService.SetPowerState"),
};

static MI_CONST MI_ConstStringA CIM_ComputerSystem_SetPowerState_MIReturn_Deprecated_qual_value =
{
    CIM_ComputerSystem_SetPowerState_MIReturn_Deprecated_qual_data_value,
    MI_COUNT(CIM_ComputerSystem_SetPowerState_MIReturn_Deprecated_qual_data_value),
};

static MI_CONST MI_Qualifier CIM_ComputerSystem_SetPowerState_MIReturn_Deprecated_qual =
{
    MI_T("Deprecated"),
    MI_STRINGA,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_RESTRICTED,
    &CIM_ComputerSystem_SetPowerState_MIReturn_Deprecated_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_ComputerSystem_SetPowerState_MIReturn_quals[] =
{
    &CIM_ComputerSystem_SetPowerState_MIReturn_Deprecated_qual,
};

/* parameter CIM_ComputerSystem.SetPowerState(): MIReturn */
static MI_CONST MI_ParameterDecl CIM_ComputerSystem_SetPowerState_MIReturn_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006D6E08, /* code */
    MI_T("MIReturn"), /* name */
    CIM_ComputerSystem_SetPowerState_MIReturn_quals, /* qualifiers */
    MI_COUNT(CIM_ComputerSystem_SetPowerState_MIReturn_quals), /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_ComputerSystem_SetPowerState, MIReturn), /* offset */
};

static MI_ParameterDecl MI_CONST* MI_CONST CIM_ComputerSystem_SetPowerState_params[] =
{
    &CIM_ComputerSystem_SetPowerState_MIReturn_param,
    &CIM_ComputerSystem_SetPowerState_PowerState_param,
    &CIM_ComputerSystem_SetPowerState_Time_param,
};

/* method CIM_ComputerSystem.SetPowerState() */
MI_CONST MI_MethodDecl CIM_ComputerSystem_SetPowerState_rtti =
{
    MI_FLAG_METHOD, /* flags */
    0x0073650D, /* code */
    MI_T("SetPowerState"), /* name */
    CIM_ComputerSystem_SetPowerState_quals, /* qualifiers */
    MI_COUNT(CIM_ComputerSystem_SetPowerState_quals), /* numQualifiers */
    CIM_ComputerSystem_SetPowerState_params, /* parameters */
    MI_COUNT(CIM_ComputerSystem_SetPowerState_params), /* numParameters */
    sizeof(CIM_ComputerSystem_SetPowerState), /* size */
    MI_UINT32, /* returnType */
    MI_T("CIM_ComputerSystem"), /* origin */
    MI_T("CIM_ComputerSystem"), /* propagator */
    &schemaDecl, /* schema */
    (MI_ProviderFT_Invoke)CIM_ComputerSystem_Invoke_SetPowerState, /* method */
};

static MI_MethodDecl MI_CONST* MI_CONST CIM_ComputerSystem_meths[] =
{
    &CIM_ComputerSystem_RequestStateChange_rtti,
    &CIM_ComputerSystem_SetPowerState_rtti,
};

static MI_CONST MI_ProviderFT CIM_ComputerSystem_funcs =
{
  (MI_ProviderFT_Load)CIM_ComputerSystem_Load,
  (MI_ProviderFT_Unload)CIM_ComputerSystem_Unload,
  (MI_ProviderFT_GetInstance)CIM_ComputerSystem_GetInstance,
  (MI_ProviderFT_EnumerateInstances)CIM_ComputerSystem_EnumerateInstances,
  (MI_ProviderFT_CreateInstance)CIM_ComputerSystem_CreateInstance,
  (MI_ProviderFT_ModifyInstance)CIM_ComputerSystem_ModifyInstance,
  (MI_ProviderFT_DeleteInstance)CIM_ComputerSystem_DeleteInstance,
  (MI_ProviderFT_AssociatorInstances)NULL,
  (MI_ProviderFT_ReferenceInstances)NULL,
  (MI_ProviderFT_EnableIndications)NULL,
  (MI_ProviderFT_DisableIndications)NULL,
  (MI_ProviderFT_Subscribe)NULL,
  (MI_ProviderFT_Unsubscribe)NULL,
  (MI_ProviderFT_Invoke)NULL,
};

static MI_CONST MI_Char* CIM_ComputerSystem_UMLPackagePath_qual_value = MI_T("CIM::System::SystemElements");

static MI_CONST MI_Qualifier CIM_ComputerSystem_UMLPackagePath_qual =
{
    MI_T("UMLPackagePath"),
    MI_STRING,
    0,
    &CIM_ComputerSystem_UMLPackagePath_qual_value
};

static MI_CONST MI_Char* CIM_ComputerSystem_Version_qual_value = MI_T("2.28.0");

static MI_CONST MI_Qualifier CIM_ComputerSystem_Version_qual =
{
    MI_T("Version"),
    MI_STRING,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_TRANSLATABLE|MI_FLAG_RESTRICTED,
    &CIM_ComputerSystem_Version_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_ComputerSystem_quals[] =
{
    &CIM_ComputerSystem_UMLPackagePath_qual,
    &CIM_ComputerSystem_Version_qual,
};

/* class CIM_ComputerSystem */
MI_CONST MI_ClassDecl CIM_ComputerSystem_rtti =
{
    MI_FLAG_CLASS, /* flags */
    0x00636D12, /* code */
    MI_T("CIM_ComputerSystem"), /* name */
    CIM_ComputerSystem_quals, /* qualifiers */
    MI_COUNT(CIM_ComputerSystem_quals), /* numQualifiers */
    CIM_ComputerSystem_props, /* properties */
    MI_COUNT(CIM_ComputerSystem_props), /* numProperties */
    sizeof(CIM_ComputerSystem), /* size */
    MI_T("CIM_System"), /* superClass */
    &CIM_System_rtti, /* superClassDecl */
    CIM_ComputerSystem_meths, /* methods */
    MI_COUNT(CIM_ComputerSystem_meths), /* numMethods */
    &schemaDecl, /* schema */
    &CIM_ComputerSystem_funcs, /* functions */
    NULL, /* owningClass */
};

/*
**==============================================================================
**
** CIM_RegisteredProfile
**
**==============================================================================
*/

static MI_CONST MI_Char* CIM_RegisteredProfile_InstanceID_Override_qual_value = MI_T("InstanceID");

static MI_CONST MI_Qualifier CIM_RegisteredProfile_InstanceID_Override_qual =
{
    MI_T("Override"),
    MI_STRING,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_RESTRICTED,
    &CIM_RegisteredProfile_InstanceID_Override_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_RegisteredProfile_InstanceID_quals[] =
{
    &CIM_RegisteredProfile_InstanceID_Override_qual,
};

/* property CIM_RegisteredProfile.InstanceID */
static MI_CONST MI_PropertyDecl CIM_RegisteredProfile_InstanceID_prop =
{
    MI_FLAG_PROPERTY|MI_FLAG_KEY, /* flags */
    0x0069640A, /* code */
    MI_T("InstanceID"), /* name */
    CIM_RegisteredProfile_InstanceID_quals, /* qualifiers */
    MI_COUNT(CIM_RegisteredProfile_InstanceID_quals), /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_RegisteredProfile, InstanceID), /* offset */
    MI_T("CIM_ManagedElement"), /* origin */
    MI_T("CIM_RegisteredProfile"), /* propagator */
    NULL,
};

/* property CIM_RegisteredProfile.RegisteredOrganization */
static MI_CONST MI_PropertyDecl CIM_RegisteredProfile_RegisteredOrganization_prop =
{
    MI_FLAG_PROPERTY|MI_FLAG_REQUIRED, /* flags */
    0x00726E16, /* code */
    MI_T("RegisteredOrganization"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_RegisteredProfile, RegisteredOrganization), /* offset */
    MI_T("CIM_RegisteredProfile"), /* origin */
    MI_T("CIM_RegisteredProfile"), /* propagator */
    NULL,
};

static MI_CONST MI_Uint32 CIM_RegisteredProfile_OtherRegisteredOrganization_MaxLen_qual_value = 256U;

static MI_CONST MI_Qualifier CIM_RegisteredProfile_OtherRegisteredOrganization_MaxLen_qual =
{
    MI_T("MaxLen"),
    MI_UINT32,
    0,
    &CIM_RegisteredProfile_OtherRegisteredOrganization_MaxLen_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_RegisteredProfile_OtherRegisteredOrganization_quals[] =
{
    &CIM_RegisteredProfile_OtherRegisteredOrganization_MaxLen_qual,
};

/* property CIM_RegisteredProfile.OtherRegisteredOrganization */
static MI_CONST MI_PropertyDecl CIM_RegisteredProfile_OtherRegisteredOrganization_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006F6E1B, /* code */
    MI_T("OtherRegisteredOrganization"), /* name */
    CIM_RegisteredProfile_OtherRegisteredOrganization_quals, /* qualifiers */
    MI_COUNT(CIM_RegisteredProfile_OtherRegisteredOrganization_quals), /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_RegisteredProfile, OtherRegisteredOrganization), /* offset */
    MI_T("CIM_RegisteredProfile"), /* origin */
    MI_T("CIM_RegisteredProfile"), /* propagator */
    NULL,
};

static MI_CONST MI_Uint32 CIM_RegisteredProfile_RegisteredName_MaxLen_qual_value = 256U;

static MI_CONST MI_Qualifier CIM_RegisteredProfile_RegisteredName_MaxLen_qual =
{
    MI_T("MaxLen"),
    MI_UINT32,
    0,
    &CIM_RegisteredProfile_RegisteredName_MaxLen_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_RegisteredProfile_RegisteredName_quals[] =
{
    &CIM_RegisteredProfile_RegisteredName_MaxLen_qual,
};

/* property CIM_RegisteredProfile.RegisteredName */
static MI_CONST MI_PropertyDecl CIM_RegisteredProfile_RegisteredName_prop =
{
    MI_FLAG_PROPERTY|MI_FLAG_REQUIRED, /* flags */
    0x0072650E, /* code */
    MI_T("RegisteredName"), /* name */
    CIM_RegisteredProfile_RegisteredName_quals, /* qualifiers */
    MI_COUNT(CIM_RegisteredProfile_RegisteredName_quals), /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_RegisteredProfile, RegisteredName), /* offset */
    MI_T("CIM_RegisteredProfile"), /* origin */
    MI_T("CIM_RegisteredProfile"), /* propagator */
    NULL,
};

/* property CIM_RegisteredProfile.RegisteredVersion */
static MI_CONST MI_PropertyDecl CIM_RegisteredProfile_RegisteredVersion_prop =
{
    MI_FLAG_PROPERTY|MI_FLAG_REQUIRED, /* flags */
    0x00726E11, /* code */
    MI_T("RegisteredVersion"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_RegisteredProfile, RegisteredVersion), /* offset */
    MI_T("CIM_RegisteredProfile"), /* origin */
    MI_T("CIM_RegisteredProfile"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* CIM_RegisteredProfile_AdvertiseTypes_ArrayType_qual_value = MI_T("Indexed");

static MI_CONST MI_Qualifier CIM_RegisteredProfile_AdvertiseTypes_ArrayType_qual =
{
    MI_T("ArrayType"),
    MI_STRING,
    MI_FLAG_DISABLEOVERRIDE|MI_FLAG_TOSUBCLASS,
    &CIM_RegisteredProfile_AdvertiseTypes_ArrayType_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_RegisteredProfile_AdvertiseTypes_quals[] =
{
    &CIM_RegisteredProfile_AdvertiseTypes_ArrayType_qual,
};

/* property CIM_RegisteredProfile.AdvertiseTypes */
static MI_CONST MI_PropertyDecl CIM_RegisteredProfile_AdvertiseTypes_prop =
{
    MI_FLAG_PROPERTY|MI_FLAG_REQUIRED, /* flags */
    0x0061730E, /* code */
    MI_T("AdvertiseTypes"), /* name */
    CIM_RegisteredProfile_AdvertiseTypes_quals, /* qualifiers */
    MI_COUNT(CIM_RegisteredProfile_AdvertiseTypes_quals), /* numQualifiers */
    MI_UINT16A, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_RegisteredProfile, AdvertiseTypes), /* offset */
    MI_T("CIM_RegisteredProfile"), /* origin */
    MI_T("CIM_RegisteredProfile"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* CIM_RegisteredProfile_AdvertiseTypeDescriptions_ArrayType_qual_value = MI_T("Indexed");

static MI_CONST MI_Qualifier CIM_RegisteredProfile_AdvertiseTypeDescriptions_ArrayType_qual =
{
    MI_T("ArrayType"),
    MI_STRING,
    MI_FLAG_DISABLEOVERRIDE|MI_FLAG_TOSUBCLASS,
    &CIM_RegisteredProfile_AdvertiseTypeDescriptions_ArrayType_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_RegisteredProfile_AdvertiseTypeDescriptions_quals[] =
{
    &CIM_RegisteredProfile_AdvertiseTypeDescriptions_ArrayType_qual,
};

/* property CIM_RegisteredProfile.AdvertiseTypeDescriptions */
static MI_CONST MI_PropertyDecl CIM_RegisteredProfile_AdvertiseTypeDescriptions_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00617319, /* code */
    MI_T("AdvertiseTypeDescriptions"), /* name */
    CIM_RegisteredProfile_AdvertiseTypeDescriptions_quals, /* qualifiers */
    MI_COUNT(CIM_RegisteredProfile_AdvertiseTypeDescriptions_quals), /* numQualifiers */
    MI_STRINGA, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_RegisteredProfile, AdvertiseTypeDescriptions), /* offset */
    MI_T("CIM_RegisteredProfile"), /* origin */
    MI_T("CIM_RegisteredProfile"), /* propagator */
    NULL,
};

/* property CIM_RegisteredProfile.ImplementedFeatures */
static MI_CONST MI_PropertyDecl CIM_RegisteredProfile_ImplementedFeatures_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00697313, /* code */
    MI_T("ImplementedFeatures"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRINGA, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_RegisteredProfile, ImplementedFeatures), /* offset */
    MI_T("CIM_RegisteredProfile"), /* origin */
    MI_T("CIM_RegisteredProfile"), /* propagator */
    NULL,
};

static MI_PropertyDecl MI_CONST* MI_CONST CIM_RegisteredProfile_props[] =
{
    &CIM_RegisteredProfile_InstanceID_prop,
    &CIM_ManagedElement_Caption_prop,
    &CIM_ManagedElement_Description_prop,
    &CIM_ManagedElement_ElementName_prop,
    &CIM_RegisteredProfile_RegisteredOrganization_prop,
    &CIM_RegisteredProfile_OtherRegisteredOrganization_prop,
    &CIM_RegisteredProfile_RegisteredName_prop,
    &CIM_RegisteredProfile_RegisteredVersion_prop,
    &CIM_RegisteredProfile_AdvertiseTypes_prop,
    &CIM_RegisteredProfile_AdvertiseTypeDescriptions_prop,
    &CIM_RegisteredProfile_ImplementedFeatures_prop,
};

/* parameter CIM_RegisteredProfile.CloseConformantInstances(): EnumerationContext */
static MI_CONST MI_ParameterDecl CIM_RegisteredProfile_CloseConformantInstances_EnumerationContext_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_IN, /* flags */
    0x00657412, /* code */
    MI_T("EnumerationContext"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_RegisteredProfile_CloseConformantInstances, EnumerationContext), /* offset */
};

/* parameter CIM_RegisteredProfile.CloseConformantInstances(): MIReturn */
static MI_CONST MI_ParameterDecl CIM_RegisteredProfile_CloseConformantInstances_MIReturn_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006D6E08, /* code */
    MI_T("MIReturn"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_RegisteredProfile_CloseConformantInstances, MIReturn), /* offset */
};

static MI_ParameterDecl MI_CONST* MI_CONST CIM_RegisteredProfile_CloseConformantInstances_params[] =
{
    &CIM_RegisteredProfile_CloseConformantInstances_MIReturn_param,
    &CIM_RegisteredProfile_CloseConformantInstances_EnumerationContext_param,
};

/* method CIM_RegisteredProfile.CloseConformantInstances() */
MI_CONST MI_MethodDecl CIM_RegisteredProfile_CloseConformantInstances_rtti =
{
    MI_FLAG_METHOD, /* flags */
    0x00637318, /* code */
    MI_T("CloseConformantInstances"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    CIM_RegisteredProfile_CloseConformantInstances_params, /* parameters */
    MI_COUNT(CIM_RegisteredProfile_CloseConformantInstances_params), /* numParameters */
    sizeof(CIM_RegisteredProfile_CloseConformantInstances), /* size */
    MI_UINT32, /* returnType */
    MI_T("CIM_RegisteredProfile"), /* origin */
    MI_T("CIM_RegisteredProfile"), /* propagator */
    &schemaDecl, /* schema */
    (MI_ProviderFT_Invoke)CIM_RegisteredProfile_Invoke_CloseConformantInstances, /* method */
};

/* parameter CIM_RegisteredProfile.OpenConformantInstances(): ResultClass */
static MI_CONST MI_ParameterDecl CIM_RegisteredProfile_OpenConformantInstances_ResultClass_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_IN, /* flags */
    0x0072730B, /* code */
    MI_T("ResultClass"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_RegisteredProfile_OpenConformantInstances, ResultClass), /* offset */
};

/* parameter CIM_RegisteredProfile.OpenConformantInstances(): IncludedPropertyList */
static MI_CONST MI_ParameterDecl CIM_RegisteredProfile_OpenConformantInstances_IncludedPropertyList_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_IN, /* flags */
    0x00697414, /* code */
    MI_T("IncludedPropertyList"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRINGA, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_RegisteredProfile_OpenConformantInstances, IncludedPropertyList), /* offset */
};

/* parameter CIM_RegisteredProfile.OpenConformantInstances(): OperationTimeout */
static MI_CONST MI_ParameterDecl CIM_RegisteredProfile_OpenConformantInstances_OperationTimeout_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_IN, /* flags */
    0x006F7410, /* code */
    MI_T("OperationTimeout"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_RegisteredProfile_OpenConformantInstances, OperationTimeout), /* offset */
};

/* parameter CIM_RegisteredProfile.OpenConformantInstances(): ContinueOnError */
static MI_CONST MI_ParameterDecl CIM_RegisteredProfile_OpenConformantInstances_ContinueOnError_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_IN, /* flags */
    0x0063720F, /* code */
    MI_T("ContinueOnError"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_BOOLEAN, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_RegisteredProfile_OpenConformantInstances, ContinueOnError), /* offset */
};

/* parameter CIM_RegisteredProfile.OpenConformantInstances(): MaxObjectCount */
static MI_CONST MI_ParameterDecl CIM_RegisteredProfile_OpenConformantInstances_MaxObjectCount_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_IN, /* flags */
    0x006D740E, /* code */
    MI_T("MaxObjectCount"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_RegisteredProfile_OpenConformantInstances, MaxObjectCount), /* offset */
};

/* parameter CIM_RegisteredProfile.OpenConformantInstances(): EnumerationContext */
static MI_CONST MI_ParameterDecl CIM_RegisteredProfile_OpenConformantInstances_EnumerationContext_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x00657412, /* code */
    MI_T("EnumerationContext"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_RegisteredProfile_OpenConformantInstances, EnumerationContext), /* offset */
};

/* parameter CIM_RegisteredProfile.OpenConformantInstances(): EndOfSequence */
static MI_CONST MI_ParameterDecl CIM_RegisteredProfile_OpenConformantInstances_EndOfSequence_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x0065650D, /* code */
    MI_T("EndOfSequence"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_BOOLEAN, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_RegisteredProfile_OpenConformantInstances, EndOfSequence), /* offset */
};

static MI_CONST MI_Char* CIM_RegisteredProfile_OpenConformantInstances_InstanceType_ArrayType_qual_value = MI_T("Indexed");

static MI_CONST MI_Qualifier CIM_RegisteredProfile_OpenConformantInstances_InstanceType_ArrayType_qual =
{
    MI_T("ArrayType"),
    MI_STRING,
    MI_FLAG_DISABLEOVERRIDE|MI_FLAG_TOSUBCLASS,
    &CIM_RegisteredProfile_OpenConformantInstances_InstanceType_ArrayType_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_RegisteredProfile_OpenConformantInstances_InstanceType_quals[] =
{
    &CIM_RegisteredProfile_OpenConformantInstances_InstanceType_ArrayType_qual,
};

/* parameter CIM_RegisteredProfile.OpenConformantInstances(): InstanceType */
static MI_CONST MI_ParameterDecl CIM_RegisteredProfile_OpenConformantInstances_InstanceType_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x0069650C, /* code */
    MI_T("InstanceType"), /* name */
    CIM_RegisteredProfile_OpenConformantInstances_InstanceType_quals, /* qualifiers */
    MI_COUNT(CIM_RegisteredProfile_OpenConformantInstances_InstanceType_quals), /* numQualifiers */
    MI_UINT16A, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_RegisteredProfile_OpenConformantInstances, InstanceType), /* offset */
};

static MI_CONST MI_Char* CIM_RegisteredProfile_OpenConformantInstances_InstanceWithPathList_EmbeddedInstance_qual_value = MI_T("CIM_ManagedElement");

static MI_CONST MI_Qualifier CIM_RegisteredProfile_OpenConformantInstances_InstanceWithPathList_EmbeddedInstance_qual =
{
    MI_T("EmbeddedInstance"),
    MI_STRING,
    0,
    &CIM_RegisteredProfile_OpenConformantInstances_InstanceWithPathList_EmbeddedInstance_qual_value
};

static MI_CONST MI_Char* CIM_RegisteredProfile_OpenConformantInstances_InstanceWithPathList_ArrayType_qual_value = MI_T("Indexed");

static MI_CONST MI_Qualifier CIM_RegisteredProfile_OpenConformantInstances_InstanceWithPathList_ArrayType_qual =
{
    MI_T("ArrayType"),
    MI_STRING,
    MI_FLAG_DISABLEOVERRIDE|MI_FLAG_TOSUBCLASS,
    &CIM_RegisteredProfile_OpenConformantInstances_InstanceWithPathList_ArrayType_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_RegisteredProfile_OpenConformantInstances_InstanceWithPathList_quals[] =
{
    &CIM_RegisteredProfile_OpenConformantInstances_InstanceWithPathList_EmbeddedInstance_qual,
    &CIM_RegisteredProfile_OpenConformantInstances_InstanceWithPathList_ArrayType_qual,
};

/* parameter CIM_RegisteredProfile.OpenConformantInstances(): InstanceWithPathList */
static MI_CONST MI_ParameterDecl CIM_RegisteredProfile_OpenConformantInstances_InstanceWithPathList_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x00697414, /* code */
    MI_T("InstanceWithPathList"), /* name */
    CIM_RegisteredProfile_OpenConformantInstances_InstanceWithPathList_quals, /* qualifiers */
    MI_COUNT(CIM_RegisteredProfile_OpenConformantInstances_InstanceWithPathList_quals), /* numQualifiers */
    MI_INSTANCEA, /* type */
    MI_T("CIM_ManagedElement"), /* className */
    0, /* subscript */
    offsetof(CIM_RegisteredProfile_OpenConformantInstances, InstanceWithPathList), /* offset */
};

/* parameter CIM_RegisteredProfile.OpenConformantInstances(): MIReturn */
static MI_CONST MI_ParameterDecl CIM_RegisteredProfile_OpenConformantInstances_MIReturn_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006D6E08, /* code */
    MI_T("MIReturn"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_RegisteredProfile_OpenConformantInstances, MIReturn), /* offset */
};

static MI_ParameterDecl MI_CONST* MI_CONST CIM_RegisteredProfile_OpenConformantInstances_params[] =
{
    &CIM_RegisteredProfile_OpenConformantInstances_MIReturn_param,
    &CIM_RegisteredProfile_OpenConformantInstances_ResultClass_param,
    &CIM_RegisteredProfile_OpenConformantInstances_IncludedPropertyList_param,
    &CIM_RegisteredProfile_OpenConformantInstances_OperationTimeout_param,
    &CIM_RegisteredProfile_OpenConformantInstances_ContinueOnError_param,
    &CIM_RegisteredProfile_OpenConformantInstances_MaxObjectCount_param,
    &CIM_RegisteredProfile_OpenConformantInstances_EnumerationContext_param,
    &CIM_RegisteredProfile_OpenConformantInstances_EndOfSequence_param,
    &CIM_RegisteredProfile_OpenConformantInstances_InstanceType_param,
    &CIM_RegisteredProfile_OpenConformantInstances_InstanceWithPathList_param,
};

/* method CIM_RegisteredProfile.OpenConformantInstances() */
MI_CONST MI_MethodDecl CIM_RegisteredProfile_OpenConformantInstances_rtti =
{
    MI_FLAG_METHOD, /* flags */
    0x006F7317, /* code */
    MI_T("OpenConformantInstances"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    CIM_RegisteredProfile_OpenConformantInstances_params, /* parameters */
    MI_COUNT(CIM_RegisteredProfile_OpenConformantInstances_params), /* numParameters */
    sizeof(CIM_RegisteredProfile_OpenConformantInstances), /* size */
    MI_UINT32, /* returnType */
    MI_T("CIM_RegisteredProfile"), /* origin */
    MI_T("CIM_RegisteredProfile"), /* propagator */
    &schemaDecl, /* schema */
    (MI_ProviderFT_Invoke)CIM_RegisteredProfile_Invoke_OpenConformantInstances, /* method */
};

/* parameter CIM_RegisteredProfile.PullConformantInstances(): MaxObjectCount */
static MI_CONST MI_ParameterDecl CIM_RegisteredProfile_PullConformantInstances_MaxObjectCount_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_IN, /* flags */
    0x006D740E, /* code */
    MI_T("MaxObjectCount"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_RegisteredProfile_PullConformantInstances, MaxObjectCount), /* offset */
};

/* parameter CIM_RegisteredProfile.PullConformantInstances(): EnumerationContext */
static MI_CONST MI_ParameterDecl CIM_RegisteredProfile_PullConformantInstances_EnumerationContext_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_IN|MI_FLAG_OUT, /* flags */
    0x00657412, /* code */
    MI_T("EnumerationContext"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_RegisteredProfile_PullConformantInstances, EnumerationContext), /* offset */
};

/* parameter CIM_RegisteredProfile.PullConformantInstances(): EndOfSequence */
static MI_CONST MI_ParameterDecl CIM_RegisteredProfile_PullConformantInstances_EndOfSequence_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x0065650D, /* code */
    MI_T("EndOfSequence"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_BOOLEAN, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_RegisteredProfile_PullConformantInstances, EndOfSequence), /* offset */
};

static MI_CONST MI_Char* CIM_RegisteredProfile_PullConformantInstances_InstanceType_ArrayType_qual_value = MI_T("Indexed");

static MI_CONST MI_Qualifier CIM_RegisteredProfile_PullConformantInstances_InstanceType_ArrayType_qual =
{
    MI_T("ArrayType"),
    MI_STRING,
    MI_FLAG_DISABLEOVERRIDE|MI_FLAG_TOSUBCLASS,
    &CIM_RegisteredProfile_PullConformantInstances_InstanceType_ArrayType_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_RegisteredProfile_PullConformantInstances_InstanceType_quals[] =
{
    &CIM_RegisteredProfile_PullConformantInstances_InstanceType_ArrayType_qual,
};

/* parameter CIM_RegisteredProfile.PullConformantInstances(): InstanceType */
static MI_CONST MI_ParameterDecl CIM_RegisteredProfile_PullConformantInstances_InstanceType_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x0069650C, /* code */
    MI_T("InstanceType"), /* name */
    CIM_RegisteredProfile_PullConformantInstances_InstanceType_quals, /* qualifiers */
    MI_COUNT(CIM_RegisteredProfile_PullConformantInstances_InstanceType_quals), /* numQualifiers */
    MI_UINT16A, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_RegisteredProfile_PullConformantInstances, InstanceType), /* offset */
};

static MI_CONST MI_Char* CIM_RegisteredProfile_PullConformantInstances_InstanceWithPathList_EmbeddedInstance_qual_value = MI_T("CIM_ManagedElement");

static MI_CONST MI_Qualifier CIM_RegisteredProfile_PullConformantInstances_InstanceWithPathList_EmbeddedInstance_qual =
{
    MI_T("EmbeddedInstance"),
    MI_STRING,
    0,
    &CIM_RegisteredProfile_PullConformantInstances_InstanceWithPathList_EmbeddedInstance_qual_value
};

static MI_CONST MI_Char* CIM_RegisteredProfile_PullConformantInstances_InstanceWithPathList_ArrayType_qual_value = MI_T("Indexed");

static MI_CONST MI_Qualifier CIM_RegisteredProfile_PullConformantInstances_InstanceWithPathList_ArrayType_qual =
{
    MI_T("ArrayType"),
    MI_STRING,
    MI_FLAG_DISABLEOVERRIDE|MI_FLAG_TOSUBCLASS,
    &CIM_RegisteredProfile_PullConformantInstances_InstanceWithPathList_ArrayType_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_RegisteredProfile_PullConformantInstances_InstanceWithPathList_quals[] =
{
    &CIM_RegisteredProfile_PullConformantInstances_InstanceWithPathList_EmbeddedInstance_qual,
    &CIM_RegisteredProfile_PullConformantInstances_InstanceWithPathList_ArrayType_qual,
};

/* parameter CIM_RegisteredProfile.PullConformantInstances(): InstanceWithPathList */
static MI_CONST MI_ParameterDecl CIM_RegisteredProfile_PullConformantInstances_InstanceWithPathList_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x00697414, /* code */
    MI_T("InstanceWithPathList"), /* name */
    CIM_RegisteredProfile_PullConformantInstances_InstanceWithPathList_quals, /* qualifiers */
    MI_COUNT(CIM_RegisteredProfile_PullConformantInstances_InstanceWithPathList_quals), /* numQualifiers */
    MI_INSTANCEA, /* type */
    MI_T("CIM_ManagedElement"), /* className */
    0, /* subscript */
    offsetof(CIM_RegisteredProfile_PullConformantInstances, InstanceWithPathList), /* offset */
};

/* parameter CIM_RegisteredProfile.PullConformantInstances(): MIReturn */
static MI_CONST MI_ParameterDecl CIM_RegisteredProfile_PullConformantInstances_MIReturn_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006D6E08, /* code */
    MI_T("MIReturn"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_RegisteredProfile_PullConformantInstances, MIReturn), /* offset */
};

static MI_ParameterDecl MI_CONST* MI_CONST CIM_RegisteredProfile_PullConformantInstances_params[] =
{
    &CIM_RegisteredProfile_PullConformantInstances_MIReturn_param,
    &CIM_RegisteredProfile_PullConformantInstances_MaxObjectCount_param,
    &CIM_RegisteredProfile_PullConformantInstances_EnumerationContext_param,
    &CIM_RegisteredProfile_PullConformantInstances_EndOfSequence_param,
    &CIM_RegisteredProfile_PullConformantInstances_InstanceType_param,
    &CIM_RegisteredProfile_PullConformantInstances_InstanceWithPathList_param,
};

/* method CIM_RegisteredProfile.PullConformantInstances() */
MI_CONST MI_MethodDecl CIM_RegisteredProfile_PullConformantInstances_rtti =
{
    MI_FLAG_METHOD, /* flags */
    0x00707317, /* code */
    MI_T("PullConformantInstances"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    CIM_RegisteredProfile_PullConformantInstances_params, /* parameters */
    MI_COUNT(CIM_RegisteredProfile_PullConformantInstances_params), /* numParameters */
    sizeof(CIM_RegisteredProfile_PullConformantInstances), /* size */
    MI_UINT32, /* returnType */
    MI_T("CIM_RegisteredProfile"), /* origin */
    MI_T("CIM_RegisteredProfile"), /* propagator */
    &schemaDecl, /* schema */
    (MI_ProviderFT_Invoke)CIM_RegisteredProfile_Invoke_PullConformantInstances, /* method */
};

static MI_MethodDecl MI_CONST* MI_CONST CIM_RegisteredProfile_meths[] =
{
    &CIM_RegisteredProfile_CloseConformantInstances_rtti,
    &CIM_RegisteredProfile_OpenConformantInstances_rtti,
    &CIM_RegisteredProfile_PullConformantInstances_rtti,
};

static MI_CONST MI_ProviderFT CIM_RegisteredProfile_funcs =
{
  (MI_ProviderFT_Load)CIM_RegisteredProfile_Load,
  (MI_ProviderFT_Unload)CIM_RegisteredProfile_Unload,
  (MI_ProviderFT_GetInstance)CIM_RegisteredProfile_GetInstance,
  (MI_ProviderFT_EnumerateInstances)CIM_RegisteredProfile_EnumerateInstances,
  (MI_ProviderFT_CreateInstance)CIM_RegisteredProfile_CreateInstance,
  (MI_ProviderFT_ModifyInstance)CIM_RegisteredProfile_ModifyInstance,
  (MI_ProviderFT_DeleteInstance)CIM_RegisteredProfile_DeleteInstance,
  (MI_ProviderFT_AssociatorInstances)NULL,
  (MI_ProviderFT_ReferenceInstances)NULL,
  (MI_ProviderFT_EnableIndications)NULL,
  (MI_ProviderFT_DisableIndications)NULL,
  (MI_ProviderFT_Subscribe)NULL,
  (MI_ProviderFT_Unsubscribe)NULL,
  (MI_ProviderFT_Invoke)NULL,
};

static MI_CONST MI_Char* CIM_RegisteredProfile_UMLPackagePath_qual_value = MI_T("CIM::Interop");

static MI_CONST MI_Qualifier CIM_RegisteredProfile_UMLPackagePath_qual =
{
    MI_T("UMLPackagePath"),
    MI_STRING,
    0,
    &CIM_RegisteredProfile_UMLPackagePath_qual_value
};

static MI_CONST MI_Char* CIM_RegisteredProfile_Version_qual_value = MI_T("2.27.0");

static MI_CONST MI_Qualifier CIM_RegisteredProfile_Version_qual =
{
    MI_T("Version"),
    MI_STRING,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_TRANSLATABLE|MI_FLAG_RESTRICTED,
    &CIM_RegisteredProfile_Version_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_RegisteredProfile_quals[] =
{
    &CIM_RegisteredProfile_UMLPackagePath_qual,
    &CIM_RegisteredProfile_Version_qual,
};

/* class CIM_RegisteredProfile */
MI_CONST MI_ClassDecl CIM_RegisteredProfile_rtti =
{
    MI_FLAG_CLASS, /* flags */
    0x00636515, /* code */
    MI_T("CIM_RegisteredProfile"), /* name */
    CIM_RegisteredProfile_quals, /* qualifiers */
    MI_COUNT(CIM_RegisteredProfile_quals), /* numQualifiers */
    CIM_RegisteredProfile_props, /* properties */
    MI_COUNT(CIM_RegisteredProfile_props), /* numProperties */
    sizeof(CIM_RegisteredProfile), /* size */
    MI_T("CIM_ManagedElement"), /* superClass */
    &CIM_ManagedElement_rtti, /* superClassDecl */
    CIM_RegisteredProfile_meths, /* methods */
    MI_COUNT(CIM_RegisteredProfile_meths), /* numMethods */
    &schemaDecl, /* schema */
    &CIM_RegisteredProfile_funcs, /* functions */
    NULL, /* owningClass */
};

/*
**==============================================================================
**
** CIM_ComRegProf
**
**==============================================================================
*/

/* property CIM_ComRegProf.Left */
static MI_CONST MI_PropertyDecl CIM_ComRegProf_Left_prop =
{
    MI_FLAG_PROPERTY|MI_FLAG_KEY, /* flags */
    0x006C7404, /* code */
    MI_T("Left"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("CIM_RegisteredProfile"), /* className */
    0, /* subscript */
    offsetof(CIM_ComRegProf, Left), /* offset */
    MI_T("CIM_ComRegProf"), /* origin */
    MI_T("CIM_ComRegProf"), /* propagator */
    NULL,
};

/* property CIM_ComRegProf.Right */
static MI_CONST MI_PropertyDecl CIM_ComRegProf_Right_prop =
{
    MI_FLAG_PROPERTY|MI_FLAG_KEY, /* flags */
    0x00727405, /* code */
    MI_T("Right"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("CIM_ComputerSystem"), /* className */
    0, /* subscript */
    offsetof(CIM_ComRegProf, Right), /* offset */
    MI_T("CIM_ComRegProf"), /* origin */
    MI_T("CIM_ComRegProf"), /* propagator */
    NULL,
};

static MI_PropertyDecl MI_CONST* MI_CONST CIM_ComRegProf_props[] =
{
    &CIM_ComRegProf_Left_prop,
    &CIM_ComRegProf_Right_prop,
};

static void MI_CALL CIM_ComRegProf_AssociatorInstances(
    CIM_ComRegProf_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Instance* instanceName,
    const MI_Char* resultClass,
    const MI_Char* role,
    const MI_Char* resultRole,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    if (CIM_RegisteredProfile_IsA(instanceName))
    {
        if (_Match(role, MI_T("Left")) && 
            _Match(resultRole, MI_T("Right")))
        {
            CIM_ComRegProf_AssociatorInstancesLeft(
                self, 
                context, 
                nameSpace, 
                className, 
                (CIM_RegisteredProfile*)instanceName, 
                resultClass, 
                propertySet, 
                keysOnly, 
                filter);
            return;
        }
    }

    if (CIM_ComputerSystem_IsA(instanceName))
    {
        if (_Match(role, MI_T("Right")) && 
            _Match(resultRole, MI_T("Left")))
        {
            CIM_ComRegProf_AssociatorInstancesRight(
                self, 
                context, 
                nameSpace, 
                className, 
                (CIM_ComputerSystem*)instanceName, 
                resultClass, 
                propertySet, 
                keysOnly, 
                filter);
            return;
        }
    }

    MI_Context_PostResult(context, MI_RESULT_OK);
}

static void MI_CALL CIM_ComRegProf_ReferenceInstances(
    CIM_ComRegProf_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Instance* instanceName,
    const MI_Char* role,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    if (CIM_RegisteredProfile_IsA(instanceName))
    {
        if (_Match(role, MI_T("Left")))
        {
            CIM_ComRegProf_ReferenceInstancesLeft(
                self, 
                context, 
                nameSpace, 
                className, 
                (CIM_RegisteredProfile*)instanceName, 
                propertySet, 
                keysOnly, 
                filter);
            return;
        }
    }

    if (CIM_ComputerSystem_IsA(instanceName))
    {
        if (_Match(role, MI_T("Right")))
        {
            CIM_ComRegProf_ReferenceInstancesRight(
                self, 
                context, 
                nameSpace, 
                className, 
                (CIM_ComputerSystem*)instanceName, 
                propertySet, 
                keysOnly, 
                filter);
            return;
        }
    }

    MI_Context_PostResult(context, MI_RESULT_OK);
}

static MI_CONST MI_ProviderFT CIM_ComRegProf_funcs =
{
  (MI_ProviderFT_Load)CIM_ComRegProf_Load,
  (MI_ProviderFT_Unload)CIM_ComRegProf_Unload,
  (MI_ProviderFT_GetInstance)CIM_ComRegProf_GetInstance,
  (MI_ProviderFT_EnumerateInstances)CIM_ComRegProf_EnumerateInstances,
  (MI_ProviderFT_CreateInstance)CIM_ComRegProf_CreateInstance,
  (MI_ProviderFT_ModifyInstance)CIM_ComRegProf_ModifyInstance,
  (MI_ProviderFT_DeleteInstance)CIM_ComRegProf_DeleteInstance,
  (MI_ProviderFT_AssociatorInstances)CIM_ComRegProf_AssociatorInstances,
  (MI_ProviderFT_ReferenceInstances)CIM_ComRegProf_ReferenceInstances,
  (MI_ProviderFT_EnableIndications)NULL,
  (MI_ProviderFT_DisableIndications)NULL,
  (MI_ProviderFT_Subscribe)NULL,
  (MI_ProviderFT_Unsubscribe)NULL,
  (MI_ProviderFT_Invoke)NULL,
};

/* class CIM_ComRegProf */
MI_CONST MI_ClassDecl CIM_ComRegProf_rtti =
{
    MI_FLAG_CLASS|MI_FLAG_ASSOCIATION, /* flags */
    0x0063660E, /* code */
    MI_T("CIM_ComRegProf"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    CIM_ComRegProf_props, /* properties */
    MI_COUNT(CIM_ComRegProf_props), /* numProperties */
    sizeof(CIM_ComRegProf), /* size */
    NULL, /* superClass */
    NULL, /* superClassDecl */
    NULL, /* methods */
    0, /* numMethods */
    &schemaDecl, /* schema */
    &CIM_ComRegProf_funcs, /* functions */
    NULL, /* owningClass */
};

/*
**==============================================================================
**
** CIM_LogicalDevice
**
**==============================================================================
*/

static MI_CONST MI_Uint32 CIM_LogicalDevice_SystemCreationClassName_MaxLen_qual_value = 256U;

static MI_CONST MI_Qualifier CIM_LogicalDevice_SystemCreationClassName_MaxLen_qual =
{
    MI_T("MaxLen"),
    MI_UINT32,
    0,
    &CIM_LogicalDevice_SystemCreationClassName_MaxLen_qual_value
};

static MI_CONST MI_Char* CIM_LogicalDevice_SystemCreationClassName_Propagated_qual_value = MI_T("CIM_System.CreationClassName");

static MI_CONST MI_Qualifier CIM_LogicalDevice_SystemCreationClassName_Propagated_qual =
{
    MI_T("Propagated"),
    MI_STRING,
    MI_FLAG_DISABLEOVERRIDE|MI_FLAG_TOSUBCLASS,
    &CIM_LogicalDevice_SystemCreationClassName_Propagated_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_LogicalDevice_SystemCreationClassName_quals[] =
{
    &CIM_LogicalDevice_SystemCreationClassName_MaxLen_qual,
    &CIM_LogicalDevice_SystemCreationClassName_Propagated_qual,
};

/* property CIM_LogicalDevice.SystemCreationClassName */
static MI_CONST MI_PropertyDecl CIM_LogicalDevice_SystemCreationClassName_prop =
{
    MI_FLAG_PROPERTY|MI_FLAG_KEY, /* flags */
    0x00736517, /* code */
    MI_T("SystemCreationClassName"), /* name */
    CIM_LogicalDevice_SystemCreationClassName_quals, /* qualifiers */
    MI_COUNT(CIM_LogicalDevice_SystemCreationClassName_quals), /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_LogicalDevice, SystemCreationClassName), /* offset */
    MI_T("CIM_LogicalDevice"), /* origin */
    MI_T("CIM_LogicalDevice"), /* propagator */
    NULL,
};

static MI_CONST MI_Uint32 CIM_LogicalDevice_SystemName_MaxLen_qual_value = 256U;

static MI_CONST MI_Qualifier CIM_LogicalDevice_SystemName_MaxLen_qual =
{
    MI_T("MaxLen"),
    MI_UINT32,
    0,
    &CIM_LogicalDevice_SystemName_MaxLen_qual_value
};

static MI_CONST MI_Char* CIM_LogicalDevice_SystemName_Propagated_qual_value = MI_T("CIM_System.Name");

static MI_CONST MI_Qualifier CIM_LogicalDevice_SystemName_Propagated_qual =
{
    MI_T("Propagated"),
    MI_STRING,
    MI_FLAG_DISABLEOVERRIDE|MI_FLAG_TOSUBCLASS,
    &CIM_LogicalDevice_SystemName_Propagated_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_LogicalDevice_SystemName_quals[] =
{
    &CIM_LogicalDevice_SystemName_MaxLen_qual,
    &CIM_LogicalDevice_SystemName_Propagated_qual,
};

/* property CIM_LogicalDevice.SystemName */
static MI_CONST MI_PropertyDecl CIM_LogicalDevice_SystemName_prop =
{
    MI_FLAG_PROPERTY|MI_FLAG_KEY, /* flags */
    0x0073650A, /* code */
    MI_T("SystemName"), /* name */
    CIM_LogicalDevice_SystemName_quals, /* qualifiers */
    MI_COUNT(CIM_LogicalDevice_SystemName_quals), /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_LogicalDevice, SystemName), /* offset */
    MI_T("CIM_LogicalDevice"), /* origin */
    MI_T("CIM_LogicalDevice"), /* propagator */
    NULL,
};

static MI_CONST MI_Uint32 CIM_LogicalDevice_CreationClassName_MaxLen_qual_value = 256U;

static MI_CONST MI_Qualifier CIM_LogicalDevice_CreationClassName_MaxLen_qual =
{
    MI_T("MaxLen"),
    MI_UINT32,
    0,
    &CIM_LogicalDevice_CreationClassName_MaxLen_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_LogicalDevice_CreationClassName_quals[] =
{
    &CIM_LogicalDevice_CreationClassName_MaxLen_qual,
};

/* property CIM_LogicalDevice.CreationClassName */
static MI_CONST MI_PropertyDecl CIM_LogicalDevice_CreationClassName_prop =
{
    MI_FLAG_PROPERTY|MI_FLAG_KEY, /* flags */
    0x00636511, /* code */
    MI_T("CreationClassName"), /* name */
    CIM_LogicalDevice_CreationClassName_quals, /* qualifiers */
    MI_COUNT(CIM_LogicalDevice_CreationClassName_quals), /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_LogicalDevice, CreationClassName), /* offset */
    MI_T("CIM_LogicalDevice"), /* origin */
    MI_T("CIM_LogicalDevice"), /* propagator */
    NULL,
};

static MI_CONST MI_Uint32 CIM_LogicalDevice_DeviceID_MaxLen_qual_value = 64U;

static MI_CONST MI_Qualifier CIM_LogicalDevice_DeviceID_MaxLen_qual =
{
    MI_T("MaxLen"),
    MI_UINT32,
    0,
    &CIM_LogicalDevice_DeviceID_MaxLen_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_LogicalDevice_DeviceID_quals[] =
{
    &CIM_LogicalDevice_DeviceID_MaxLen_qual,
};

/* property CIM_LogicalDevice.DeviceID */
static MI_CONST MI_PropertyDecl CIM_LogicalDevice_DeviceID_prop =
{
    MI_FLAG_PROPERTY|MI_FLAG_KEY, /* flags */
    0x00646408, /* code */
    MI_T("DeviceID"), /* name */
    CIM_LogicalDevice_DeviceID_quals, /* qualifiers */
    MI_COUNT(CIM_LogicalDevice_DeviceID_quals), /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_LogicalDevice, DeviceID), /* offset */
    MI_T("CIM_LogicalDevice"), /* origin */
    MI_T("CIM_LogicalDevice"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* CIM_LogicalDevice_PowerManagementSupported_Deprecated_qual_data_value[] =
{
    MI_T("CIM_PowerManagementCapabilities"),
};

static MI_CONST MI_ConstStringA CIM_LogicalDevice_PowerManagementSupported_Deprecated_qual_value =
{
    CIM_LogicalDevice_PowerManagementSupported_Deprecated_qual_data_value,
    MI_COUNT(CIM_LogicalDevice_PowerManagementSupported_Deprecated_qual_data_value),
};

static MI_CONST MI_Qualifier CIM_LogicalDevice_PowerManagementSupported_Deprecated_qual =
{
    MI_T("Deprecated"),
    MI_STRINGA,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_RESTRICTED,
    &CIM_LogicalDevice_PowerManagementSupported_Deprecated_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_LogicalDevice_PowerManagementSupported_quals[] =
{
    &CIM_LogicalDevice_PowerManagementSupported_Deprecated_qual,
};

/* property CIM_LogicalDevice.PowerManagementSupported */
static MI_CONST MI_PropertyDecl CIM_LogicalDevice_PowerManagementSupported_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00706418, /* code */
    MI_T("PowerManagementSupported"), /* name */
    CIM_LogicalDevice_PowerManagementSupported_quals, /* qualifiers */
    MI_COUNT(CIM_LogicalDevice_PowerManagementSupported_quals), /* numQualifiers */
    MI_BOOLEAN, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_LogicalDevice, PowerManagementSupported), /* offset */
    MI_T("CIM_LogicalDevice"), /* origin */
    MI_T("CIM_LogicalDevice"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* CIM_LogicalDevice_PowerManagementCapabilities_Deprecated_qual_data_value[] =
{
    MI_T("CIM_PowerManagementCapabilities.PowerCapabilities"),
};

static MI_CONST MI_ConstStringA CIM_LogicalDevice_PowerManagementCapabilities_Deprecated_qual_value =
{
    CIM_LogicalDevice_PowerManagementCapabilities_Deprecated_qual_data_value,
    MI_COUNT(CIM_LogicalDevice_PowerManagementCapabilities_Deprecated_qual_data_value),
};

static MI_CONST MI_Qualifier CIM_LogicalDevice_PowerManagementCapabilities_Deprecated_qual =
{
    MI_T("Deprecated"),
    MI_STRINGA,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_RESTRICTED,
    &CIM_LogicalDevice_PowerManagementCapabilities_Deprecated_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_LogicalDevice_PowerManagementCapabilities_quals[] =
{
    &CIM_LogicalDevice_PowerManagementCapabilities_Deprecated_qual,
};

/* property CIM_LogicalDevice.PowerManagementCapabilities */
static MI_CONST MI_PropertyDecl CIM_LogicalDevice_PowerManagementCapabilities_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0070731B, /* code */
    MI_T("PowerManagementCapabilities"), /* name */
    CIM_LogicalDevice_PowerManagementCapabilities_quals, /* qualifiers */
    MI_COUNT(CIM_LogicalDevice_PowerManagementCapabilities_quals), /* numQualifiers */
    MI_UINT16A, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_LogicalDevice, PowerManagementCapabilities), /* offset */
    MI_T("CIM_LogicalDevice"), /* origin */
    MI_T("CIM_LogicalDevice"), /* propagator */
    NULL,
};

/* property CIM_LogicalDevice.Availability */
static MI_CONST MI_PropertyDecl CIM_LogicalDevice_Availability_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0061790C, /* code */
    MI_T("Availability"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_LogicalDevice, Availability), /* offset */
    MI_T("CIM_LogicalDevice"), /* origin */
    MI_T("CIM_LogicalDevice"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* CIM_LogicalDevice_StatusInfo_Deprecated_qual_data_value[] =
{
    MI_T("CIM_EnabledLogicalElement.EnabledState"),
};

static MI_CONST MI_ConstStringA CIM_LogicalDevice_StatusInfo_Deprecated_qual_value =
{
    CIM_LogicalDevice_StatusInfo_Deprecated_qual_data_value,
    MI_COUNT(CIM_LogicalDevice_StatusInfo_Deprecated_qual_data_value),
};

static MI_CONST MI_Qualifier CIM_LogicalDevice_StatusInfo_Deprecated_qual =
{
    MI_T("Deprecated"),
    MI_STRINGA,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_RESTRICTED,
    &CIM_LogicalDevice_StatusInfo_Deprecated_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_LogicalDevice_StatusInfo_quals[] =
{
    &CIM_LogicalDevice_StatusInfo_Deprecated_qual,
};

/* property CIM_LogicalDevice.StatusInfo */
static MI_CONST MI_PropertyDecl CIM_LogicalDevice_StatusInfo_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00736F0A, /* code */
    MI_T("StatusInfo"), /* name */
    CIM_LogicalDevice_StatusInfo_quals, /* qualifiers */
    MI_COUNT(CIM_LogicalDevice_StatusInfo_quals), /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_LogicalDevice, StatusInfo), /* offset */
    MI_T("CIM_LogicalDevice"), /* origin */
    MI_T("CIM_LogicalDevice"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* CIM_LogicalDevice_LastErrorCode_Deprecated_qual_data_value[] =
{
    MI_T("CIM_DeviceErrorData.LastErrorCode"),
};

static MI_CONST MI_ConstStringA CIM_LogicalDevice_LastErrorCode_Deprecated_qual_value =
{
    CIM_LogicalDevice_LastErrorCode_Deprecated_qual_data_value,
    MI_COUNT(CIM_LogicalDevice_LastErrorCode_Deprecated_qual_data_value),
};

static MI_CONST MI_Qualifier CIM_LogicalDevice_LastErrorCode_Deprecated_qual =
{
    MI_T("Deprecated"),
    MI_STRINGA,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_RESTRICTED,
    &CIM_LogicalDevice_LastErrorCode_Deprecated_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_LogicalDevice_LastErrorCode_quals[] =
{
    &CIM_LogicalDevice_LastErrorCode_Deprecated_qual,
};

/* property CIM_LogicalDevice.LastErrorCode */
static MI_CONST MI_PropertyDecl CIM_LogicalDevice_LastErrorCode_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006C650D, /* code */
    MI_T("LastErrorCode"), /* name */
    CIM_LogicalDevice_LastErrorCode_quals, /* qualifiers */
    MI_COUNT(CIM_LogicalDevice_LastErrorCode_quals), /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_LogicalDevice, LastErrorCode), /* offset */
    MI_T("CIM_LogicalDevice"), /* origin */
    MI_T("CIM_LogicalDevice"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* CIM_LogicalDevice_ErrorDescription_Deprecated_qual_data_value[] =
{
    MI_T("CIM_DeviceErrorData.ErrorDescription"),
};

static MI_CONST MI_ConstStringA CIM_LogicalDevice_ErrorDescription_Deprecated_qual_value =
{
    CIM_LogicalDevice_ErrorDescription_Deprecated_qual_data_value,
    MI_COUNT(CIM_LogicalDevice_ErrorDescription_Deprecated_qual_data_value),
};

static MI_CONST MI_Qualifier CIM_LogicalDevice_ErrorDescription_Deprecated_qual =
{
    MI_T("Deprecated"),
    MI_STRINGA,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_RESTRICTED,
    &CIM_LogicalDevice_ErrorDescription_Deprecated_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_LogicalDevice_ErrorDescription_quals[] =
{
    &CIM_LogicalDevice_ErrorDescription_Deprecated_qual,
};

/* property CIM_LogicalDevice.ErrorDescription */
static MI_CONST MI_PropertyDecl CIM_LogicalDevice_ErrorDescription_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00656E10, /* code */
    MI_T("ErrorDescription"), /* name */
    CIM_LogicalDevice_ErrorDescription_quals, /* qualifiers */
    MI_COUNT(CIM_LogicalDevice_ErrorDescription_quals), /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_LogicalDevice, ErrorDescription), /* offset */
    MI_T("CIM_LogicalDevice"), /* origin */
    MI_T("CIM_LogicalDevice"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* CIM_LogicalDevice_ErrorCleared_Deprecated_qual_data_value[] =
{
    MI_T("CIM_ManagedSystemElement.OperationalStatus"),
};

static MI_CONST MI_ConstStringA CIM_LogicalDevice_ErrorCleared_Deprecated_qual_value =
{
    CIM_LogicalDevice_ErrorCleared_Deprecated_qual_data_value,
    MI_COUNT(CIM_LogicalDevice_ErrorCleared_Deprecated_qual_data_value),
};

static MI_CONST MI_Qualifier CIM_LogicalDevice_ErrorCleared_Deprecated_qual =
{
    MI_T("Deprecated"),
    MI_STRINGA,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_RESTRICTED,
    &CIM_LogicalDevice_ErrorCleared_Deprecated_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_LogicalDevice_ErrorCleared_quals[] =
{
    &CIM_LogicalDevice_ErrorCleared_Deprecated_qual,
};

/* property CIM_LogicalDevice.ErrorCleared */
static MI_CONST MI_PropertyDecl CIM_LogicalDevice_ErrorCleared_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0065640C, /* code */
    MI_T("ErrorCleared"), /* name */
    CIM_LogicalDevice_ErrorCleared_quals, /* qualifiers */
    MI_COUNT(CIM_LogicalDevice_ErrorCleared_quals), /* numQualifiers */
    MI_BOOLEAN, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_LogicalDevice, ErrorCleared), /* offset */
    MI_T("CIM_LogicalDevice"), /* origin */
    MI_T("CIM_LogicalDevice"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* CIM_LogicalDevice_OtherIdentifyingInfo_ArrayType_qual_value = MI_T("Indexed");

static MI_CONST MI_Qualifier CIM_LogicalDevice_OtherIdentifyingInfo_ArrayType_qual =
{
    MI_T("ArrayType"),
    MI_STRING,
    MI_FLAG_DISABLEOVERRIDE|MI_FLAG_TOSUBCLASS,
    &CIM_LogicalDevice_OtherIdentifyingInfo_ArrayType_qual_value
};

static MI_CONST MI_Uint32 CIM_LogicalDevice_OtherIdentifyingInfo_MaxLen_qual_value = 256U;

static MI_CONST MI_Qualifier CIM_LogicalDevice_OtherIdentifyingInfo_MaxLen_qual =
{
    MI_T("MaxLen"),
    MI_UINT32,
    0,
    &CIM_LogicalDevice_OtherIdentifyingInfo_MaxLen_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_LogicalDevice_OtherIdentifyingInfo_quals[] =
{
    &CIM_LogicalDevice_OtherIdentifyingInfo_ArrayType_qual,
    &CIM_LogicalDevice_OtherIdentifyingInfo_MaxLen_qual,
};

/* property CIM_LogicalDevice.OtherIdentifyingInfo */
static MI_CONST MI_PropertyDecl CIM_LogicalDevice_OtherIdentifyingInfo_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006F6F14, /* code */
    MI_T("OtherIdentifyingInfo"), /* name */
    CIM_LogicalDevice_OtherIdentifyingInfo_quals, /* qualifiers */
    MI_COUNT(CIM_LogicalDevice_OtherIdentifyingInfo_quals), /* numQualifiers */
    MI_STRINGA, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_LogicalDevice, OtherIdentifyingInfo), /* offset */
    MI_T("CIM_LogicalDevice"), /* origin */
    MI_T("CIM_LogicalDevice"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* CIM_LogicalDevice_PowerOnHours_Units_qual_value = MI_T("Hours");

static MI_CONST MI_Qualifier CIM_LogicalDevice_PowerOnHours_Units_qual =
{
    MI_T("Units"),
    MI_STRING,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_TOSUBCLASS|MI_FLAG_TRANSLATABLE,
    &CIM_LogicalDevice_PowerOnHours_Units_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_LogicalDevice_PowerOnHours_quals[] =
{
    &CIM_LogicalDevice_PowerOnHours_Units_qual,
};

/* property CIM_LogicalDevice.PowerOnHours */
static MI_CONST MI_PropertyDecl CIM_LogicalDevice_PowerOnHours_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0070730C, /* code */
    MI_T("PowerOnHours"), /* name */
    CIM_LogicalDevice_PowerOnHours_quals, /* qualifiers */
    MI_COUNT(CIM_LogicalDevice_PowerOnHours_quals), /* numQualifiers */
    MI_UINT64, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_LogicalDevice, PowerOnHours), /* offset */
    MI_T("CIM_LogicalDevice"), /* origin */
    MI_T("CIM_LogicalDevice"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* CIM_LogicalDevice_TotalPowerOnHours_Units_qual_value = MI_T("Hours");

static MI_CONST MI_Qualifier CIM_LogicalDevice_TotalPowerOnHours_Units_qual =
{
    MI_T("Units"),
    MI_STRING,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_TOSUBCLASS|MI_FLAG_TRANSLATABLE,
    &CIM_LogicalDevice_TotalPowerOnHours_Units_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_LogicalDevice_TotalPowerOnHours_quals[] =
{
    &CIM_LogicalDevice_TotalPowerOnHours_Units_qual,
};

/* property CIM_LogicalDevice.TotalPowerOnHours */
static MI_CONST MI_PropertyDecl CIM_LogicalDevice_TotalPowerOnHours_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00747311, /* code */
    MI_T("TotalPowerOnHours"), /* name */
    CIM_LogicalDevice_TotalPowerOnHours_quals, /* qualifiers */
    MI_COUNT(CIM_LogicalDevice_TotalPowerOnHours_quals), /* numQualifiers */
    MI_UINT64, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_LogicalDevice, TotalPowerOnHours), /* offset */
    MI_T("CIM_LogicalDevice"), /* origin */
    MI_T("CIM_LogicalDevice"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* CIM_LogicalDevice_IdentifyingDescriptions_ArrayType_qual_value = MI_T("Indexed");

static MI_CONST MI_Qualifier CIM_LogicalDevice_IdentifyingDescriptions_ArrayType_qual =
{
    MI_T("ArrayType"),
    MI_STRING,
    MI_FLAG_DISABLEOVERRIDE|MI_FLAG_TOSUBCLASS,
    &CIM_LogicalDevice_IdentifyingDescriptions_ArrayType_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_LogicalDevice_IdentifyingDescriptions_quals[] =
{
    &CIM_LogicalDevice_IdentifyingDescriptions_ArrayType_qual,
};

/* property CIM_LogicalDevice.IdentifyingDescriptions */
static MI_CONST MI_PropertyDecl CIM_LogicalDevice_IdentifyingDescriptions_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00697317, /* code */
    MI_T("IdentifyingDescriptions"), /* name */
    CIM_LogicalDevice_IdentifyingDescriptions_quals, /* qualifiers */
    MI_COUNT(CIM_LogicalDevice_IdentifyingDescriptions_quals), /* numQualifiers */
    MI_STRINGA, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_LogicalDevice, IdentifyingDescriptions), /* offset */
    MI_T("CIM_LogicalDevice"), /* origin */
    MI_T("CIM_LogicalDevice"), /* propagator */
    NULL,
};

/* property CIM_LogicalDevice.AdditionalAvailability */
static MI_CONST MI_PropertyDecl CIM_LogicalDevice_AdditionalAvailability_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00617916, /* code */
    MI_T("AdditionalAvailability"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16A, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_LogicalDevice, AdditionalAvailability), /* offset */
    MI_T("CIM_LogicalDevice"), /* origin */
    MI_T("CIM_LogicalDevice"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* CIM_LogicalDevice_MaxQuiesceTime_Deprecated_qual_data_value[] =
{
    MI_T("No value"),
};

static MI_CONST MI_ConstStringA CIM_LogicalDevice_MaxQuiesceTime_Deprecated_qual_value =
{
    CIM_LogicalDevice_MaxQuiesceTime_Deprecated_qual_data_value,
    MI_COUNT(CIM_LogicalDevice_MaxQuiesceTime_Deprecated_qual_data_value),
};

static MI_CONST MI_Qualifier CIM_LogicalDevice_MaxQuiesceTime_Deprecated_qual =
{
    MI_T("Deprecated"),
    MI_STRINGA,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_RESTRICTED,
    &CIM_LogicalDevice_MaxQuiesceTime_Deprecated_qual_value
};

static MI_CONST MI_Char* CIM_LogicalDevice_MaxQuiesceTime_Units_qual_value = MI_T("MilliSeconds");

static MI_CONST MI_Qualifier CIM_LogicalDevice_MaxQuiesceTime_Units_qual =
{
    MI_T("Units"),
    MI_STRING,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_TOSUBCLASS|MI_FLAG_TRANSLATABLE,
    &CIM_LogicalDevice_MaxQuiesceTime_Units_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_LogicalDevice_MaxQuiesceTime_quals[] =
{
    &CIM_LogicalDevice_MaxQuiesceTime_Deprecated_qual,
    &CIM_LogicalDevice_MaxQuiesceTime_Units_qual,
};

/* property CIM_LogicalDevice.MaxQuiesceTime */
static MI_CONST MI_PropertyDecl CIM_LogicalDevice_MaxQuiesceTime_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006D650E, /* code */
    MI_T("MaxQuiesceTime"), /* name */
    CIM_LogicalDevice_MaxQuiesceTime_quals, /* qualifiers */
    MI_COUNT(CIM_LogicalDevice_MaxQuiesceTime_quals), /* numQualifiers */
    MI_UINT64, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_LogicalDevice, MaxQuiesceTime), /* offset */
    MI_T("CIM_LogicalDevice"), /* origin */
    MI_T("CIM_LogicalDevice"), /* propagator */
    NULL,
};

static MI_PropertyDecl MI_CONST* MI_CONST CIM_LogicalDevice_props[] =
{
    &CIM_ManagedElement_InstanceID_prop,
    &CIM_ManagedElement_Caption_prop,
    &CIM_ManagedElement_Description_prop,
    &CIM_ManagedElement_ElementName_prop,
    &CIM_ManagedSystemElement_InstallDate_prop,
    &CIM_ManagedSystemElement_Name_prop,
    &CIM_ManagedSystemElement_OperationalStatus_prop,
    &CIM_ManagedSystemElement_StatusDescriptions_prop,
    &CIM_ManagedSystemElement_Status_prop,
    &CIM_ManagedSystemElement_HealthState_prop,
    &CIM_ManagedSystemElement_CommunicationStatus_prop,
    &CIM_ManagedSystemElement_DetailedStatus_prop,
    &CIM_ManagedSystemElement_OperatingStatus_prop,
    &CIM_ManagedSystemElement_PrimaryStatus_prop,
    &CIM_EnabledLogicalElement_EnabledState_prop,
    &CIM_EnabledLogicalElement_OtherEnabledState_prop,
    &CIM_EnabledLogicalElement_RequestedState_prop,
    &CIM_EnabledLogicalElement_EnabledDefault_prop,
    &CIM_EnabledLogicalElement_TimeOfLastStateChange_prop,
    &CIM_EnabledLogicalElement_AvailableRequestedStates_prop,
    &CIM_EnabledLogicalElement_TransitioningToState_prop,
    &CIM_LogicalDevice_SystemCreationClassName_prop,
    &CIM_LogicalDevice_SystemName_prop,
    &CIM_LogicalDevice_CreationClassName_prop,
    &CIM_LogicalDevice_DeviceID_prop,
    &CIM_LogicalDevice_PowerManagementSupported_prop,
    &CIM_LogicalDevice_PowerManagementCapabilities_prop,
    &CIM_LogicalDevice_Availability_prop,
    &CIM_LogicalDevice_StatusInfo_prop,
    &CIM_LogicalDevice_LastErrorCode_prop,
    &CIM_LogicalDevice_ErrorDescription_prop,
    &CIM_LogicalDevice_ErrorCleared_prop,
    &CIM_LogicalDevice_OtherIdentifyingInfo_prop,
    &CIM_LogicalDevice_PowerOnHours_prop,
    &CIM_LogicalDevice_TotalPowerOnHours_prop,
    &CIM_LogicalDevice_IdentifyingDescriptions_prop,
    &CIM_LogicalDevice_AdditionalAvailability_prop,
    &CIM_LogicalDevice_MaxQuiesceTime_prop,
};

static MI_CONST MI_Char* CIM_LogicalDevice_SetPowerState_Deprecated_qual_data_value[] =
{
    MI_T("CIM_PowerManagementService.SetPowerState"),
};

static MI_CONST MI_ConstStringA CIM_LogicalDevice_SetPowerState_Deprecated_qual_value =
{
    CIM_LogicalDevice_SetPowerState_Deprecated_qual_data_value,
    MI_COUNT(CIM_LogicalDevice_SetPowerState_Deprecated_qual_data_value),
};

static MI_CONST MI_Qualifier CIM_LogicalDevice_SetPowerState_Deprecated_qual =
{
    MI_T("Deprecated"),
    MI_STRINGA,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_RESTRICTED,
    &CIM_LogicalDevice_SetPowerState_Deprecated_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_LogicalDevice_SetPowerState_quals[] =
{
    &CIM_LogicalDevice_SetPowerState_Deprecated_qual,
};

/* parameter CIM_LogicalDevice.SetPowerState(): PowerState */
static MI_CONST MI_ParameterDecl CIM_LogicalDevice_SetPowerState_PowerState_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_IN, /* flags */
    0x0070650A, /* code */
    MI_T("PowerState"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_LogicalDevice_SetPowerState, PowerState), /* offset */
};

/* parameter CIM_LogicalDevice.SetPowerState(): Time */
static MI_CONST MI_ParameterDecl CIM_LogicalDevice_SetPowerState_Time_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_IN, /* flags */
    0x00746504, /* code */
    MI_T("Time"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_DATETIME, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_LogicalDevice_SetPowerState, Time), /* offset */
};

static MI_CONST MI_Char* CIM_LogicalDevice_SetPowerState_MIReturn_Deprecated_qual_data_value[] =
{
    MI_T("CIM_PowerManagementService.SetPowerState"),
};

static MI_CONST MI_ConstStringA CIM_LogicalDevice_SetPowerState_MIReturn_Deprecated_qual_value =
{
    CIM_LogicalDevice_SetPowerState_MIReturn_Deprecated_qual_data_value,
    MI_COUNT(CIM_LogicalDevice_SetPowerState_MIReturn_Deprecated_qual_data_value),
};

static MI_CONST MI_Qualifier CIM_LogicalDevice_SetPowerState_MIReturn_Deprecated_qual =
{
    MI_T("Deprecated"),
    MI_STRINGA,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_RESTRICTED,
    &CIM_LogicalDevice_SetPowerState_MIReturn_Deprecated_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_LogicalDevice_SetPowerState_MIReturn_quals[] =
{
    &CIM_LogicalDevice_SetPowerState_MIReturn_Deprecated_qual,
};

/* parameter CIM_LogicalDevice.SetPowerState(): MIReturn */
static MI_CONST MI_ParameterDecl CIM_LogicalDevice_SetPowerState_MIReturn_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006D6E08, /* code */
    MI_T("MIReturn"), /* name */
    CIM_LogicalDevice_SetPowerState_MIReturn_quals, /* qualifiers */
    MI_COUNT(CIM_LogicalDevice_SetPowerState_MIReturn_quals), /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_LogicalDevice_SetPowerState, MIReturn), /* offset */
};

static MI_ParameterDecl MI_CONST* MI_CONST CIM_LogicalDevice_SetPowerState_params[] =
{
    &CIM_LogicalDevice_SetPowerState_MIReturn_param,
    &CIM_LogicalDevice_SetPowerState_PowerState_param,
    &CIM_LogicalDevice_SetPowerState_Time_param,
};

/* method CIM_LogicalDevice.SetPowerState() */
MI_CONST MI_MethodDecl CIM_LogicalDevice_SetPowerState_rtti =
{
    MI_FLAG_METHOD, /* flags */
    0x0073650D, /* code */
    MI_T("SetPowerState"), /* name */
    CIM_LogicalDevice_SetPowerState_quals, /* qualifiers */
    MI_COUNT(CIM_LogicalDevice_SetPowerState_quals), /* numQualifiers */
    CIM_LogicalDevice_SetPowerState_params, /* parameters */
    MI_COUNT(CIM_LogicalDevice_SetPowerState_params), /* numParameters */
    sizeof(CIM_LogicalDevice_SetPowerState), /* size */
    MI_UINT32, /* returnType */
    MI_T("CIM_LogicalDevice"), /* origin */
    MI_T("CIM_LogicalDevice"), /* propagator */
    &schemaDecl, /* schema */
    NULL, /* method */
};

/* parameter CIM_LogicalDevice.Reset(): MIReturn */
static MI_CONST MI_ParameterDecl CIM_LogicalDevice_Reset_MIReturn_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006D6E08, /* code */
    MI_T("MIReturn"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_LogicalDevice_Reset, MIReturn), /* offset */
};

static MI_ParameterDecl MI_CONST* MI_CONST CIM_LogicalDevice_Reset_params[] =
{
    &CIM_LogicalDevice_Reset_MIReturn_param,
};

/* method CIM_LogicalDevice.Reset() */
MI_CONST MI_MethodDecl CIM_LogicalDevice_Reset_rtti =
{
    MI_FLAG_METHOD, /* flags */
    0x00727405, /* code */
    MI_T("Reset"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    CIM_LogicalDevice_Reset_params, /* parameters */
    MI_COUNT(CIM_LogicalDevice_Reset_params), /* numParameters */
    sizeof(CIM_LogicalDevice_Reset), /* size */
    MI_UINT32, /* returnType */
    MI_T("CIM_LogicalDevice"), /* origin */
    MI_T("CIM_LogicalDevice"), /* propagator */
    &schemaDecl, /* schema */
    NULL, /* method */
};

static MI_CONST MI_Char* CIM_LogicalDevice_EnableDevice_Deprecated_qual_data_value[] =
{
    MI_T("CIM_EnabledLogicalElement.RequestStateChange"),
};

static MI_CONST MI_ConstStringA CIM_LogicalDevice_EnableDevice_Deprecated_qual_value =
{
    CIM_LogicalDevice_EnableDevice_Deprecated_qual_data_value,
    MI_COUNT(CIM_LogicalDevice_EnableDevice_Deprecated_qual_data_value),
};

static MI_CONST MI_Qualifier CIM_LogicalDevice_EnableDevice_Deprecated_qual =
{
    MI_T("Deprecated"),
    MI_STRINGA,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_RESTRICTED,
    &CIM_LogicalDevice_EnableDevice_Deprecated_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_LogicalDevice_EnableDevice_quals[] =
{
    &CIM_LogicalDevice_EnableDevice_Deprecated_qual,
};

/* parameter CIM_LogicalDevice.EnableDevice(): Enabled */
static MI_CONST MI_ParameterDecl CIM_LogicalDevice_EnableDevice_Enabled_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_IN, /* flags */
    0x00656407, /* code */
    MI_T("Enabled"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_BOOLEAN, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_LogicalDevice_EnableDevice, Enabled), /* offset */
};

static MI_CONST MI_Char* CIM_LogicalDevice_EnableDevice_MIReturn_Deprecated_qual_data_value[] =
{
    MI_T("CIM_EnabledLogicalElement.RequestStateChange"),
};

static MI_CONST MI_ConstStringA CIM_LogicalDevice_EnableDevice_MIReturn_Deprecated_qual_value =
{
    CIM_LogicalDevice_EnableDevice_MIReturn_Deprecated_qual_data_value,
    MI_COUNT(CIM_LogicalDevice_EnableDevice_MIReturn_Deprecated_qual_data_value),
};

static MI_CONST MI_Qualifier CIM_LogicalDevice_EnableDevice_MIReturn_Deprecated_qual =
{
    MI_T("Deprecated"),
    MI_STRINGA,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_RESTRICTED,
    &CIM_LogicalDevice_EnableDevice_MIReturn_Deprecated_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_LogicalDevice_EnableDevice_MIReturn_quals[] =
{
    &CIM_LogicalDevice_EnableDevice_MIReturn_Deprecated_qual,
};

/* parameter CIM_LogicalDevice.EnableDevice(): MIReturn */
static MI_CONST MI_ParameterDecl CIM_LogicalDevice_EnableDevice_MIReturn_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006D6E08, /* code */
    MI_T("MIReturn"), /* name */
    CIM_LogicalDevice_EnableDevice_MIReturn_quals, /* qualifiers */
    MI_COUNT(CIM_LogicalDevice_EnableDevice_MIReturn_quals), /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_LogicalDevice_EnableDevice, MIReturn), /* offset */
};

static MI_ParameterDecl MI_CONST* MI_CONST CIM_LogicalDevice_EnableDevice_params[] =
{
    &CIM_LogicalDevice_EnableDevice_MIReturn_param,
    &CIM_LogicalDevice_EnableDevice_Enabled_param,
};

/* method CIM_LogicalDevice.EnableDevice() */
MI_CONST MI_MethodDecl CIM_LogicalDevice_EnableDevice_rtti =
{
    MI_FLAG_METHOD, /* flags */
    0x0065650C, /* code */
    MI_T("EnableDevice"), /* name */
    CIM_LogicalDevice_EnableDevice_quals, /* qualifiers */
    MI_COUNT(CIM_LogicalDevice_EnableDevice_quals), /* numQualifiers */
    CIM_LogicalDevice_EnableDevice_params, /* parameters */
    MI_COUNT(CIM_LogicalDevice_EnableDevice_params), /* numParameters */
    sizeof(CIM_LogicalDevice_EnableDevice), /* size */
    MI_UINT32, /* returnType */
    MI_T("CIM_LogicalDevice"), /* origin */
    MI_T("CIM_LogicalDevice"), /* propagator */
    &schemaDecl, /* schema */
    NULL, /* method */
};

static MI_CONST MI_Char* CIM_LogicalDevice_OnlineDevice_Deprecated_qual_data_value[] =
{
    MI_T("CIM_EnabledLogicalElement.RequestStateChange"),
};

static MI_CONST MI_ConstStringA CIM_LogicalDevice_OnlineDevice_Deprecated_qual_value =
{
    CIM_LogicalDevice_OnlineDevice_Deprecated_qual_data_value,
    MI_COUNT(CIM_LogicalDevice_OnlineDevice_Deprecated_qual_data_value),
};

static MI_CONST MI_Qualifier CIM_LogicalDevice_OnlineDevice_Deprecated_qual =
{
    MI_T("Deprecated"),
    MI_STRINGA,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_RESTRICTED,
    &CIM_LogicalDevice_OnlineDevice_Deprecated_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_LogicalDevice_OnlineDevice_quals[] =
{
    &CIM_LogicalDevice_OnlineDevice_Deprecated_qual,
};

/* parameter CIM_LogicalDevice.OnlineDevice(): Online */
static MI_CONST MI_ParameterDecl CIM_LogicalDevice_OnlineDevice_Online_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_IN, /* flags */
    0x006F6506, /* code */
    MI_T("Online"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_BOOLEAN, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_LogicalDevice_OnlineDevice, Online), /* offset */
};

static MI_CONST MI_Char* CIM_LogicalDevice_OnlineDevice_MIReturn_Deprecated_qual_data_value[] =
{
    MI_T("CIM_EnabledLogicalElement.RequestStateChange"),
};

static MI_CONST MI_ConstStringA CIM_LogicalDevice_OnlineDevice_MIReturn_Deprecated_qual_value =
{
    CIM_LogicalDevice_OnlineDevice_MIReturn_Deprecated_qual_data_value,
    MI_COUNT(CIM_LogicalDevice_OnlineDevice_MIReturn_Deprecated_qual_data_value),
};

static MI_CONST MI_Qualifier CIM_LogicalDevice_OnlineDevice_MIReturn_Deprecated_qual =
{
    MI_T("Deprecated"),
    MI_STRINGA,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_RESTRICTED,
    &CIM_LogicalDevice_OnlineDevice_MIReturn_Deprecated_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_LogicalDevice_OnlineDevice_MIReturn_quals[] =
{
    &CIM_LogicalDevice_OnlineDevice_MIReturn_Deprecated_qual,
};

/* parameter CIM_LogicalDevice.OnlineDevice(): MIReturn */
static MI_CONST MI_ParameterDecl CIM_LogicalDevice_OnlineDevice_MIReturn_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006D6E08, /* code */
    MI_T("MIReturn"), /* name */
    CIM_LogicalDevice_OnlineDevice_MIReturn_quals, /* qualifiers */
    MI_COUNT(CIM_LogicalDevice_OnlineDevice_MIReturn_quals), /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_LogicalDevice_OnlineDevice, MIReturn), /* offset */
};

static MI_ParameterDecl MI_CONST* MI_CONST CIM_LogicalDevice_OnlineDevice_params[] =
{
    &CIM_LogicalDevice_OnlineDevice_MIReturn_param,
    &CIM_LogicalDevice_OnlineDevice_Online_param,
};

/* method CIM_LogicalDevice.OnlineDevice() */
MI_CONST MI_MethodDecl CIM_LogicalDevice_OnlineDevice_rtti =
{
    MI_FLAG_METHOD, /* flags */
    0x006F650C, /* code */
    MI_T("OnlineDevice"), /* name */
    CIM_LogicalDevice_OnlineDevice_quals, /* qualifiers */
    MI_COUNT(CIM_LogicalDevice_OnlineDevice_quals), /* numQualifiers */
    CIM_LogicalDevice_OnlineDevice_params, /* parameters */
    MI_COUNT(CIM_LogicalDevice_OnlineDevice_params), /* numParameters */
    sizeof(CIM_LogicalDevice_OnlineDevice), /* size */
    MI_UINT32, /* returnType */
    MI_T("CIM_LogicalDevice"), /* origin */
    MI_T("CIM_LogicalDevice"), /* propagator */
    &schemaDecl, /* schema */
    NULL, /* method */
};

static MI_CONST MI_Char* CIM_LogicalDevice_QuiesceDevice_Deprecated_qual_data_value[] =
{
    MI_T("CIM_EnabledLogicalElement.RequestStateChange"),
};

static MI_CONST MI_ConstStringA CIM_LogicalDevice_QuiesceDevice_Deprecated_qual_value =
{
    CIM_LogicalDevice_QuiesceDevice_Deprecated_qual_data_value,
    MI_COUNT(CIM_LogicalDevice_QuiesceDevice_Deprecated_qual_data_value),
};

static MI_CONST MI_Qualifier CIM_LogicalDevice_QuiesceDevice_Deprecated_qual =
{
    MI_T("Deprecated"),
    MI_STRINGA,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_RESTRICTED,
    &CIM_LogicalDevice_QuiesceDevice_Deprecated_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_LogicalDevice_QuiesceDevice_quals[] =
{
    &CIM_LogicalDevice_QuiesceDevice_Deprecated_qual,
};

/* parameter CIM_LogicalDevice.QuiesceDevice(): Quiesce */
static MI_CONST MI_ParameterDecl CIM_LogicalDevice_QuiesceDevice_Quiesce_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_IN, /* flags */
    0x00716507, /* code */
    MI_T("Quiesce"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_BOOLEAN, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_LogicalDevice_QuiesceDevice, Quiesce), /* offset */
};

static MI_CONST MI_Char* CIM_LogicalDevice_QuiesceDevice_MIReturn_Deprecated_qual_data_value[] =
{
    MI_T("CIM_EnabledLogicalElement.RequestStateChange"),
};

static MI_CONST MI_ConstStringA CIM_LogicalDevice_QuiesceDevice_MIReturn_Deprecated_qual_value =
{
    CIM_LogicalDevice_QuiesceDevice_MIReturn_Deprecated_qual_data_value,
    MI_COUNT(CIM_LogicalDevice_QuiesceDevice_MIReturn_Deprecated_qual_data_value),
};

static MI_CONST MI_Qualifier CIM_LogicalDevice_QuiesceDevice_MIReturn_Deprecated_qual =
{
    MI_T("Deprecated"),
    MI_STRINGA,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_RESTRICTED,
    &CIM_LogicalDevice_QuiesceDevice_MIReturn_Deprecated_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_LogicalDevice_QuiesceDevice_MIReturn_quals[] =
{
    &CIM_LogicalDevice_QuiesceDevice_MIReturn_Deprecated_qual,
};

/* parameter CIM_LogicalDevice.QuiesceDevice(): MIReturn */
static MI_CONST MI_ParameterDecl CIM_LogicalDevice_QuiesceDevice_MIReturn_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006D6E08, /* code */
    MI_T("MIReturn"), /* name */
    CIM_LogicalDevice_QuiesceDevice_MIReturn_quals, /* qualifiers */
    MI_COUNT(CIM_LogicalDevice_QuiesceDevice_MIReturn_quals), /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_LogicalDevice_QuiesceDevice, MIReturn), /* offset */
};

static MI_ParameterDecl MI_CONST* MI_CONST CIM_LogicalDevice_QuiesceDevice_params[] =
{
    &CIM_LogicalDevice_QuiesceDevice_MIReturn_param,
    &CIM_LogicalDevice_QuiesceDevice_Quiesce_param,
};

/* method CIM_LogicalDevice.QuiesceDevice() */
MI_CONST MI_MethodDecl CIM_LogicalDevice_QuiesceDevice_rtti =
{
    MI_FLAG_METHOD, /* flags */
    0x0071650D, /* code */
    MI_T("QuiesceDevice"), /* name */
    CIM_LogicalDevice_QuiesceDevice_quals, /* qualifiers */
    MI_COUNT(CIM_LogicalDevice_QuiesceDevice_quals), /* numQualifiers */
    CIM_LogicalDevice_QuiesceDevice_params, /* parameters */
    MI_COUNT(CIM_LogicalDevice_QuiesceDevice_params), /* numParameters */
    sizeof(CIM_LogicalDevice_QuiesceDevice), /* size */
    MI_UINT32, /* returnType */
    MI_T("CIM_LogicalDevice"), /* origin */
    MI_T("CIM_LogicalDevice"), /* propagator */
    &schemaDecl, /* schema */
    NULL, /* method */
};

/* parameter CIM_LogicalDevice.SaveProperties(): MIReturn */
static MI_CONST MI_ParameterDecl CIM_LogicalDevice_SaveProperties_MIReturn_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006D6E08, /* code */
    MI_T("MIReturn"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_LogicalDevice_SaveProperties, MIReturn), /* offset */
};

static MI_ParameterDecl MI_CONST* MI_CONST CIM_LogicalDevice_SaveProperties_params[] =
{
    &CIM_LogicalDevice_SaveProperties_MIReturn_param,
};

/* method CIM_LogicalDevice.SaveProperties() */
MI_CONST MI_MethodDecl CIM_LogicalDevice_SaveProperties_rtti =
{
    MI_FLAG_METHOD, /* flags */
    0x0073730E, /* code */
    MI_T("SaveProperties"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    CIM_LogicalDevice_SaveProperties_params, /* parameters */
    MI_COUNT(CIM_LogicalDevice_SaveProperties_params), /* numParameters */
    sizeof(CIM_LogicalDevice_SaveProperties), /* size */
    MI_UINT32, /* returnType */
    MI_T("CIM_LogicalDevice"), /* origin */
    MI_T("CIM_LogicalDevice"), /* propagator */
    &schemaDecl, /* schema */
    NULL, /* method */
};

/* parameter CIM_LogicalDevice.RestoreProperties(): MIReturn */
static MI_CONST MI_ParameterDecl CIM_LogicalDevice_RestoreProperties_MIReturn_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006D6E08, /* code */
    MI_T("MIReturn"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_LogicalDevice_RestoreProperties, MIReturn), /* offset */
};

static MI_ParameterDecl MI_CONST* MI_CONST CIM_LogicalDevice_RestoreProperties_params[] =
{
    &CIM_LogicalDevice_RestoreProperties_MIReturn_param,
};

/* method CIM_LogicalDevice.RestoreProperties() */
MI_CONST MI_MethodDecl CIM_LogicalDevice_RestoreProperties_rtti =
{
    MI_FLAG_METHOD, /* flags */
    0x00727311, /* code */
    MI_T("RestoreProperties"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    CIM_LogicalDevice_RestoreProperties_params, /* parameters */
    MI_COUNT(CIM_LogicalDevice_RestoreProperties_params), /* numParameters */
    sizeof(CIM_LogicalDevice_RestoreProperties), /* size */
    MI_UINT32, /* returnType */
    MI_T("CIM_LogicalDevice"), /* origin */
    MI_T("CIM_LogicalDevice"), /* propagator */
    &schemaDecl, /* schema */
    NULL, /* method */
};

static MI_MethodDecl MI_CONST* MI_CONST CIM_LogicalDevice_meths[] =
{
    &CIM_EnabledLogicalElement_RequestStateChange_rtti,
    &CIM_LogicalDevice_SetPowerState_rtti,
    &CIM_LogicalDevice_Reset_rtti,
    &CIM_LogicalDevice_EnableDevice_rtti,
    &CIM_LogicalDevice_OnlineDevice_rtti,
    &CIM_LogicalDevice_QuiesceDevice_rtti,
    &CIM_LogicalDevice_SaveProperties_rtti,
    &CIM_LogicalDevice_RestoreProperties_rtti,
};

static MI_CONST MI_Char* CIM_LogicalDevice_UMLPackagePath_qual_value = MI_T("CIM::Core::Device");

static MI_CONST MI_Qualifier CIM_LogicalDevice_UMLPackagePath_qual =
{
    MI_T("UMLPackagePath"),
    MI_STRING,
    0,
    &CIM_LogicalDevice_UMLPackagePath_qual_value
};

static MI_CONST MI_Char* CIM_LogicalDevice_Version_qual_value = MI_T("2.8.0");

static MI_CONST MI_Qualifier CIM_LogicalDevice_Version_qual =
{
    MI_T("Version"),
    MI_STRING,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_TRANSLATABLE|MI_FLAG_RESTRICTED,
    &CIM_LogicalDevice_Version_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_LogicalDevice_quals[] =
{
    &CIM_LogicalDevice_UMLPackagePath_qual,
    &CIM_LogicalDevice_Version_qual,
};

/* class CIM_LogicalDevice */
MI_CONST MI_ClassDecl CIM_LogicalDevice_rtti =
{
    MI_FLAG_CLASS|MI_FLAG_ABSTRACT, /* flags */
    0x00636511, /* code */
    MI_T("CIM_LogicalDevice"), /* name */
    CIM_LogicalDevice_quals, /* qualifiers */
    MI_COUNT(CIM_LogicalDevice_quals), /* numQualifiers */
    CIM_LogicalDevice_props, /* properties */
    MI_COUNT(CIM_LogicalDevice_props), /* numProperties */
    sizeof(CIM_LogicalDevice), /* size */
    MI_T("CIM_EnabledLogicalElement"), /* superClass */
    &CIM_EnabledLogicalElement_rtti, /* superClassDecl */
    CIM_LogicalDevice_meths, /* methods */
    MI_COUNT(CIM_LogicalDevice_meths), /* numMethods */
    &schemaDecl, /* schema */
    NULL, /* functions */
    NULL, /* owningClass */
};

/*
**==============================================================================
**
** CIM_LogicalPort
**
**==============================================================================
*/

static MI_CONST MI_Char* CIM_LogicalPort_Speed_Units_qual_value = MI_T("Bits per Second");

static MI_CONST MI_Qualifier CIM_LogicalPort_Speed_Units_qual =
{
    MI_T("Units"),
    MI_STRING,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_TOSUBCLASS|MI_FLAG_TRANSLATABLE,
    &CIM_LogicalPort_Speed_Units_qual_value
};

static MI_CONST MI_Char* CIM_LogicalPort_Speed_PUnit_qual_value = MI_T("bit / second");

static MI_CONST MI_Qualifier CIM_LogicalPort_Speed_PUnit_qual =
{
    MI_T("PUnit"),
    MI_STRING,
    0,
    &CIM_LogicalPort_Speed_PUnit_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_LogicalPort_Speed_quals[] =
{
    &CIM_LogicalPort_Speed_Units_qual,
    &CIM_LogicalPort_Speed_PUnit_qual,
};

/* property CIM_LogicalPort.Speed */
static MI_CONST MI_PropertyDecl CIM_LogicalPort_Speed_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00736405, /* code */
    MI_T("Speed"), /* name */
    CIM_LogicalPort_Speed_quals, /* qualifiers */
    MI_COUNT(CIM_LogicalPort_Speed_quals), /* numQualifiers */
    MI_UINT64, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_LogicalPort, Speed), /* offset */
    MI_T("CIM_LogicalPort"), /* origin */
    MI_T("CIM_LogicalPort"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* CIM_LogicalPort_MaxSpeed_Units_qual_value = MI_T("Bits per Second");

static MI_CONST MI_Qualifier CIM_LogicalPort_MaxSpeed_Units_qual =
{
    MI_T("Units"),
    MI_STRING,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_TOSUBCLASS|MI_FLAG_TRANSLATABLE,
    &CIM_LogicalPort_MaxSpeed_Units_qual_value
};

static MI_CONST MI_Char* CIM_LogicalPort_MaxSpeed_PUnit_qual_value = MI_T("bit / second");

static MI_CONST MI_Qualifier CIM_LogicalPort_MaxSpeed_PUnit_qual =
{
    MI_T("PUnit"),
    MI_STRING,
    0,
    &CIM_LogicalPort_MaxSpeed_PUnit_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_LogicalPort_MaxSpeed_quals[] =
{
    &CIM_LogicalPort_MaxSpeed_Units_qual,
    &CIM_LogicalPort_MaxSpeed_PUnit_qual,
};

/* property CIM_LogicalPort.MaxSpeed */
static MI_CONST MI_PropertyDecl CIM_LogicalPort_MaxSpeed_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006D6408, /* code */
    MI_T("MaxSpeed"), /* name */
    CIM_LogicalPort_MaxSpeed_quals, /* qualifiers */
    MI_COUNT(CIM_LogicalPort_MaxSpeed_quals), /* numQualifiers */
    MI_UINT64, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_LogicalPort, MaxSpeed), /* offset */
    MI_T("CIM_LogicalPort"), /* origin */
    MI_T("CIM_LogicalPort"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* CIM_LogicalPort_RequestedSpeed_Units_qual_value = MI_T("Bits per Second");

static MI_CONST MI_Qualifier CIM_LogicalPort_RequestedSpeed_Units_qual =
{
    MI_T("Units"),
    MI_STRING,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_TOSUBCLASS|MI_FLAG_TRANSLATABLE,
    &CIM_LogicalPort_RequestedSpeed_Units_qual_value
};

static MI_CONST MI_Char* CIM_LogicalPort_RequestedSpeed_PUnit_qual_value = MI_T("bit / second");

static MI_CONST MI_Qualifier CIM_LogicalPort_RequestedSpeed_PUnit_qual =
{
    MI_T("PUnit"),
    MI_STRING,
    0,
    &CIM_LogicalPort_RequestedSpeed_PUnit_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_LogicalPort_RequestedSpeed_quals[] =
{
    &CIM_LogicalPort_RequestedSpeed_Units_qual,
    &CIM_LogicalPort_RequestedSpeed_PUnit_qual,
};

/* property CIM_LogicalPort.RequestedSpeed */
static MI_CONST MI_PropertyDecl CIM_LogicalPort_RequestedSpeed_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0072640E, /* code */
    MI_T("RequestedSpeed"), /* name */
    CIM_LogicalPort_RequestedSpeed_quals, /* qualifiers */
    MI_COUNT(CIM_LogicalPort_RequestedSpeed_quals), /* numQualifiers */
    MI_UINT64, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_LogicalPort, RequestedSpeed), /* offset */
    MI_T("CIM_LogicalPort"), /* origin */
    MI_T("CIM_LogicalPort"), /* propagator */
    NULL,
};

/* property CIM_LogicalPort.UsageRestriction */
static MI_CONST MI_PropertyDecl CIM_LogicalPort_UsageRestriction_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00756E10, /* code */
    MI_T("UsageRestriction"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_LogicalPort, UsageRestriction), /* offset */
    MI_T("CIM_LogicalPort"), /* origin */
    MI_T("CIM_LogicalPort"), /* propagator */
    NULL,
};

/* property CIM_LogicalPort.PortType */
static MI_CONST MI_PropertyDecl CIM_LogicalPort_PortType_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00706508, /* code */
    MI_T("PortType"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_LogicalPort, PortType), /* offset */
    MI_T("CIM_LogicalPort"), /* origin */
    MI_T("CIM_LogicalPort"), /* propagator */
    NULL,
};

/* property CIM_LogicalPort.OtherPortType */
static MI_CONST MI_PropertyDecl CIM_LogicalPort_OtherPortType_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006F650D, /* code */
    MI_T("OtherPortType"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_LogicalPort, OtherPortType), /* offset */
    MI_T("CIM_LogicalPort"), /* origin */
    MI_T("CIM_LogicalPort"), /* propagator */
    NULL,
};

static MI_PropertyDecl MI_CONST* MI_CONST CIM_LogicalPort_props[] =
{
    &CIM_ManagedElement_InstanceID_prop,
    &CIM_ManagedElement_Caption_prop,
    &CIM_ManagedElement_Description_prop,
    &CIM_ManagedElement_ElementName_prop,
    &CIM_ManagedSystemElement_InstallDate_prop,
    &CIM_ManagedSystemElement_Name_prop,
    &CIM_ManagedSystemElement_OperationalStatus_prop,
    &CIM_ManagedSystemElement_StatusDescriptions_prop,
    &CIM_ManagedSystemElement_Status_prop,
    &CIM_ManagedSystemElement_HealthState_prop,
    &CIM_ManagedSystemElement_CommunicationStatus_prop,
    &CIM_ManagedSystemElement_DetailedStatus_prop,
    &CIM_ManagedSystemElement_OperatingStatus_prop,
    &CIM_ManagedSystemElement_PrimaryStatus_prop,
    &CIM_EnabledLogicalElement_EnabledState_prop,
    &CIM_EnabledLogicalElement_OtherEnabledState_prop,
    &CIM_EnabledLogicalElement_RequestedState_prop,
    &CIM_EnabledLogicalElement_EnabledDefault_prop,
    &CIM_EnabledLogicalElement_TimeOfLastStateChange_prop,
    &CIM_EnabledLogicalElement_AvailableRequestedStates_prop,
    &CIM_EnabledLogicalElement_TransitioningToState_prop,
    &CIM_LogicalDevice_SystemCreationClassName_prop,
    &CIM_LogicalDevice_SystemName_prop,
    &CIM_LogicalDevice_CreationClassName_prop,
    &CIM_LogicalDevice_DeviceID_prop,
    &CIM_LogicalDevice_PowerManagementSupported_prop,
    &CIM_LogicalDevice_PowerManagementCapabilities_prop,
    &CIM_LogicalDevice_Availability_prop,
    &CIM_LogicalDevice_StatusInfo_prop,
    &CIM_LogicalDevice_LastErrorCode_prop,
    &CIM_LogicalDevice_ErrorDescription_prop,
    &CIM_LogicalDevice_ErrorCleared_prop,
    &CIM_LogicalDevice_OtherIdentifyingInfo_prop,
    &CIM_LogicalDevice_PowerOnHours_prop,
    &CIM_LogicalDevice_TotalPowerOnHours_prop,
    &CIM_LogicalDevice_IdentifyingDescriptions_prop,
    &CIM_LogicalDevice_AdditionalAvailability_prop,
    &CIM_LogicalDevice_MaxQuiesceTime_prop,
    &CIM_LogicalPort_Speed_prop,
    &CIM_LogicalPort_MaxSpeed_prop,
    &CIM_LogicalPort_RequestedSpeed_prop,
    &CIM_LogicalPort_UsageRestriction_prop,
    &CIM_LogicalPort_PortType_prop,
    &CIM_LogicalPort_OtherPortType_prop,
};

static MI_MethodDecl MI_CONST* MI_CONST CIM_LogicalPort_meths[] =
{
    &CIM_EnabledLogicalElement_RequestStateChange_rtti,
    &CIM_LogicalDevice_SetPowerState_rtti,
    &CIM_LogicalDevice_Reset_rtti,
    &CIM_LogicalDevice_EnableDevice_rtti,
    &CIM_LogicalDevice_OnlineDevice_rtti,
    &CIM_LogicalDevice_QuiesceDevice_rtti,
    &CIM_LogicalDevice_SaveProperties_rtti,
    &CIM_LogicalDevice_RestoreProperties_rtti,
};

static MI_CONST MI_Char* CIM_LogicalPort_UMLPackagePath_qual_value = MI_T("CIM::Device::Ports");

static MI_CONST MI_Qualifier CIM_LogicalPort_UMLPackagePath_qual =
{
    MI_T("UMLPackagePath"),
    MI_STRING,
    0,
    &CIM_LogicalPort_UMLPackagePath_qual_value
};

static MI_CONST MI_Char* CIM_LogicalPort_Version_qual_value = MI_T("2.10.0");

static MI_CONST MI_Qualifier CIM_LogicalPort_Version_qual =
{
    MI_T("Version"),
    MI_STRING,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_TRANSLATABLE|MI_FLAG_RESTRICTED,
    &CIM_LogicalPort_Version_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_LogicalPort_quals[] =
{
    &CIM_LogicalPort_UMLPackagePath_qual,
    &CIM_LogicalPort_Version_qual,
};

/* class CIM_LogicalPort */
MI_CONST MI_ClassDecl CIM_LogicalPort_rtti =
{
    MI_FLAG_CLASS, /* flags */
    0x0063740F, /* code */
    MI_T("CIM_LogicalPort"), /* name */
    CIM_LogicalPort_quals, /* qualifiers */
    MI_COUNT(CIM_LogicalPort_quals), /* numQualifiers */
    CIM_LogicalPort_props, /* properties */
    MI_COUNT(CIM_LogicalPort_props), /* numProperties */
    sizeof(CIM_LogicalPort), /* size */
    MI_T("CIM_LogicalDevice"), /* superClass */
    &CIM_LogicalDevice_rtti, /* superClassDecl */
    CIM_LogicalPort_meths, /* methods */
    MI_COUNT(CIM_LogicalPort_meths), /* numMethods */
    &schemaDecl, /* schema */
    NULL, /* functions */
    NULL, /* owningClass */
};

/*
**==============================================================================
**
** CIM_NetworkPort
**
**==============================================================================
*/

static MI_CONST MI_Char* CIM_NetworkPort_Speed_Units_qual_value = MI_T("Bits per Second");

static MI_CONST MI_Qualifier CIM_NetworkPort_Speed_Units_qual =
{
    MI_T("Units"),
    MI_STRING,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_TOSUBCLASS|MI_FLAG_TRANSLATABLE,
    &CIM_NetworkPort_Speed_Units_qual_value
};

static MI_CONST MI_Char* CIM_NetworkPort_Speed_PUnit_qual_value = MI_T("bit / second");

static MI_CONST MI_Qualifier CIM_NetworkPort_Speed_PUnit_qual =
{
    MI_T("PUnit"),
    MI_STRING,
    0,
    &CIM_NetworkPort_Speed_PUnit_qual_value
};

static MI_CONST MI_Char* CIM_NetworkPort_Speed_Override_qual_value = MI_T("Speed");

static MI_CONST MI_Qualifier CIM_NetworkPort_Speed_Override_qual =
{
    MI_T("Override"),
    MI_STRING,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_RESTRICTED,
    &CIM_NetworkPort_Speed_Override_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_NetworkPort_Speed_quals[] =
{
    &CIM_NetworkPort_Speed_Units_qual,
    &CIM_NetworkPort_Speed_PUnit_qual,
    &CIM_NetworkPort_Speed_Override_qual,
};

/* property CIM_NetworkPort.Speed */
static MI_CONST MI_PropertyDecl CIM_NetworkPort_Speed_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00736405, /* code */
    MI_T("Speed"), /* name */
    CIM_NetworkPort_Speed_quals, /* qualifiers */
    MI_COUNT(CIM_NetworkPort_Speed_quals), /* numQualifiers */
    MI_UINT64, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_NetworkPort, Speed), /* offset */
    MI_T("CIM_LogicalPort"), /* origin */
    MI_T("CIM_NetworkPort"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* CIM_NetworkPort_OtherNetworkPortType_Deprecated_qual_data_value[] =
{
    MI_T("CIM_NetworkPort.OtherPortType"),
};

static MI_CONST MI_ConstStringA CIM_NetworkPort_OtherNetworkPortType_Deprecated_qual_value =
{
    CIM_NetworkPort_OtherNetworkPortType_Deprecated_qual_data_value,
    MI_COUNT(CIM_NetworkPort_OtherNetworkPortType_Deprecated_qual_data_value),
};

static MI_CONST MI_Qualifier CIM_NetworkPort_OtherNetworkPortType_Deprecated_qual =
{
    MI_T("Deprecated"),
    MI_STRINGA,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_RESTRICTED,
    &CIM_NetworkPort_OtherNetworkPortType_Deprecated_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_NetworkPort_OtherNetworkPortType_quals[] =
{
    &CIM_NetworkPort_OtherNetworkPortType_Deprecated_qual,
};

/* property CIM_NetworkPort.OtherNetworkPortType */
static MI_CONST MI_PropertyDecl CIM_NetworkPort_OtherNetworkPortType_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006F6514, /* code */
    MI_T("OtherNetworkPortType"), /* name */
    CIM_NetworkPort_OtherNetworkPortType_quals, /* qualifiers */
    MI_COUNT(CIM_NetworkPort_OtherNetworkPortType_quals), /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_NetworkPort, OtherNetworkPortType), /* offset */
    MI_T("CIM_NetworkPort"), /* origin */
    MI_T("CIM_NetworkPort"), /* propagator */
    NULL,
};

/* property CIM_NetworkPort.PortNumber */
static MI_CONST MI_PropertyDecl CIM_NetworkPort_PortNumber_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0070720A, /* code */
    MI_T("PortNumber"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_NetworkPort, PortNumber), /* offset */
    MI_T("CIM_NetworkPort"), /* origin */
    MI_T("CIM_NetworkPort"), /* propagator */
    NULL,
};

/* property CIM_NetworkPort.LinkTechnology */
static MI_CONST MI_PropertyDecl CIM_NetworkPort_LinkTechnology_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006C790E, /* code */
    MI_T("LinkTechnology"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_NetworkPort, LinkTechnology), /* offset */
    MI_T("CIM_NetworkPort"), /* origin */
    MI_T("CIM_NetworkPort"), /* propagator */
    NULL,
};

/* property CIM_NetworkPort.OtherLinkTechnology */
static MI_CONST MI_PropertyDecl CIM_NetworkPort_OtherLinkTechnology_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006F7913, /* code */
    MI_T("OtherLinkTechnology"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_NetworkPort, OtherLinkTechnology), /* offset */
    MI_T("CIM_NetworkPort"), /* origin */
    MI_T("CIM_NetworkPort"), /* propagator */
    NULL,
};

static MI_CONST MI_Uint32 CIM_NetworkPort_PermanentAddress_MaxLen_qual_value = 64U;

static MI_CONST MI_Qualifier CIM_NetworkPort_PermanentAddress_MaxLen_qual =
{
    MI_T("MaxLen"),
    MI_UINT32,
    0,
    &CIM_NetworkPort_PermanentAddress_MaxLen_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_NetworkPort_PermanentAddress_quals[] =
{
    &CIM_NetworkPort_PermanentAddress_MaxLen_qual,
};

/* property CIM_NetworkPort.PermanentAddress */
static MI_CONST MI_PropertyDecl CIM_NetworkPort_PermanentAddress_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00707310, /* code */
    MI_T("PermanentAddress"), /* name */
    CIM_NetworkPort_PermanentAddress_quals, /* qualifiers */
    MI_COUNT(CIM_NetworkPort_PermanentAddress_quals), /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_NetworkPort, PermanentAddress), /* offset */
    MI_T("CIM_NetworkPort"), /* origin */
    MI_T("CIM_NetworkPort"), /* propagator */
    NULL,
};

static MI_CONST MI_Uint32 CIM_NetworkPort_NetworkAddresses_MaxLen_qual_value = 64U;

static MI_CONST MI_Qualifier CIM_NetworkPort_NetworkAddresses_MaxLen_qual =
{
    MI_T("MaxLen"),
    MI_UINT32,
    0,
    &CIM_NetworkPort_NetworkAddresses_MaxLen_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_NetworkPort_NetworkAddresses_quals[] =
{
    &CIM_NetworkPort_NetworkAddresses_MaxLen_qual,
};

/* property CIM_NetworkPort.NetworkAddresses */
static MI_CONST MI_PropertyDecl CIM_NetworkPort_NetworkAddresses_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006E7310, /* code */
    MI_T("NetworkAddresses"), /* name */
    CIM_NetworkPort_NetworkAddresses_quals, /* qualifiers */
    MI_COUNT(CIM_NetworkPort_NetworkAddresses_quals), /* numQualifiers */
    MI_STRINGA, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_NetworkPort, NetworkAddresses), /* offset */
    MI_T("CIM_NetworkPort"), /* origin */
    MI_T("CIM_NetworkPort"), /* propagator */
    NULL,
};

/* property CIM_NetworkPort.FullDuplex */
static MI_CONST MI_PropertyDecl CIM_NetworkPort_FullDuplex_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0066780A, /* code */
    MI_T("FullDuplex"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_BOOLEAN, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_NetworkPort, FullDuplex), /* offset */
    MI_T("CIM_NetworkPort"), /* origin */
    MI_T("CIM_NetworkPort"), /* propagator */
    NULL,
};

/* property CIM_NetworkPort.AutoSense */
static MI_CONST MI_PropertyDecl CIM_NetworkPort_AutoSense_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00616509, /* code */
    MI_T("AutoSense"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_BOOLEAN, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_NetworkPort, AutoSense), /* offset */
    MI_T("CIM_NetworkPort"), /* origin */
    MI_T("CIM_NetworkPort"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* CIM_NetworkPort_SupportedMaximumTransmissionUnit_Units_qual_value = MI_T("Bytes");

static MI_CONST MI_Qualifier CIM_NetworkPort_SupportedMaximumTransmissionUnit_Units_qual =
{
    MI_T("Units"),
    MI_STRING,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_TOSUBCLASS|MI_FLAG_TRANSLATABLE,
    &CIM_NetworkPort_SupportedMaximumTransmissionUnit_Units_qual_value
};

static MI_CONST MI_Char* CIM_NetworkPort_SupportedMaximumTransmissionUnit_PUnit_qual_value = MI_T("byte");

static MI_CONST MI_Qualifier CIM_NetworkPort_SupportedMaximumTransmissionUnit_PUnit_qual =
{
    MI_T("PUnit"),
    MI_STRING,
    0,
    &CIM_NetworkPort_SupportedMaximumTransmissionUnit_PUnit_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_NetworkPort_SupportedMaximumTransmissionUnit_quals[] =
{
    &CIM_NetworkPort_SupportedMaximumTransmissionUnit_Units_qual,
    &CIM_NetworkPort_SupportedMaximumTransmissionUnit_PUnit_qual,
};

/* property CIM_NetworkPort.SupportedMaximumTransmissionUnit */
static MI_CONST MI_PropertyDecl CIM_NetworkPort_SupportedMaximumTransmissionUnit_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00737420, /* code */
    MI_T("SupportedMaximumTransmissionUnit"), /* name */
    CIM_NetworkPort_SupportedMaximumTransmissionUnit_quals, /* qualifiers */
    MI_COUNT(CIM_NetworkPort_SupportedMaximumTransmissionUnit_quals), /* numQualifiers */
    MI_UINT64, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_NetworkPort, SupportedMaximumTransmissionUnit), /* offset */
    MI_T("CIM_NetworkPort"), /* origin */
    MI_T("CIM_NetworkPort"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* CIM_NetworkPort_ActiveMaximumTransmissionUnit_Units_qual_value = MI_T("Bytes");

static MI_CONST MI_Qualifier CIM_NetworkPort_ActiveMaximumTransmissionUnit_Units_qual =
{
    MI_T("Units"),
    MI_STRING,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_TOSUBCLASS|MI_FLAG_TRANSLATABLE,
    &CIM_NetworkPort_ActiveMaximumTransmissionUnit_Units_qual_value
};

static MI_CONST MI_Char* CIM_NetworkPort_ActiveMaximumTransmissionUnit_PUnit_qual_value = MI_T("byte");

static MI_CONST MI_Qualifier CIM_NetworkPort_ActiveMaximumTransmissionUnit_PUnit_qual =
{
    MI_T("PUnit"),
    MI_STRING,
    0,
    &CIM_NetworkPort_ActiveMaximumTransmissionUnit_PUnit_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_NetworkPort_ActiveMaximumTransmissionUnit_quals[] =
{
    &CIM_NetworkPort_ActiveMaximumTransmissionUnit_Units_qual,
    &CIM_NetworkPort_ActiveMaximumTransmissionUnit_PUnit_qual,
};

/* property CIM_NetworkPort.ActiveMaximumTransmissionUnit */
static MI_CONST MI_PropertyDecl CIM_NetworkPort_ActiveMaximumTransmissionUnit_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0061741D, /* code */
    MI_T("ActiveMaximumTransmissionUnit"), /* name */
    CIM_NetworkPort_ActiveMaximumTransmissionUnit_quals, /* qualifiers */
    MI_COUNT(CIM_NetworkPort_ActiveMaximumTransmissionUnit_quals), /* numQualifiers */
    MI_UINT64, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_NetworkPort, ActiveMaximumTransmissionUnit), /* offset */
    MI_T("CIM_NetworkPort"), /* origin */
    MI_T("CIM_NetworkPort"), /* propagator */
    NULL,
};

static MI_PropertyDecl MI_CONST* MI_CONST CIM_NetworkPort_props[] =
{
    &CIM_ManagedElement_InstanceID_prop,
    &CIM_ManagedElement_Caption_prop,
    &CIM_ManagedElement_Description_prop,
    &CIM_ManagedElement_ElementName_prop,
    &CIM_ManagedSystemElement_InstallDate_prop,
    &CIM_ManagedSystemElement_Name_prop,
    &CIM_ManagedSystemElement_OperationalStatus_prop,
    &CIM_ManagedSystemElement_StatusDescriptions_prop,
    &CIM_ManagedSystemElement_Status_prop,
    &CIM_ManagedSystemElement_HealthState_prop,
    &CIM_ManagedSystemElement_CommunicationStatus_prop,
    &CIM_ManagedSystemElement_DetailedStatus_prop,
    &CIM_ManagedSystemElement_OperatingStatus_prop,
    &CIM_ManagedSystemElement_PrimaryStatus_prop,
    &CIM_EnabledLogicalElement_EnabledState_prop,
    &CIM_EnabledLogicalElement_OtherEnabledState_prop,
    &CIM_EnabledLogicalElement_RequestedState_prop,
    &CIM_EnabledLogicalElement_EnabledDefault_prop,
    &CIM_EnabledLogicalElement_TimeOfLastStateChange_prop,
    &CIM_EnabledLogicalElement_AvailableRequestedStates_prop,
    &CIM_EnabledLogicalElement_TransitioningToState_prop,
    &CIM_LogicalDevice_SystemCreationClassName_prop,
    &CIM_LogicalDevice_SystemName_prop,
    &CIM_LogicalDevice_CreationClassName_prop,
    &CIM_LogicalDevice_DeviceID_prop,
    &CIM_LogicalDevice_PowerManagementSupported_prop,
    &CIM_LogicalDevice_PowerManagementCapabilities_prop,
    &CIM_LogicalDevice_Availability_prop,
    &CIM_LogicalDevice_StatusInfo_prop,
    &CIM_LogicalDevice_LastErrorCode_prop,
    &CIM_LogicalDevice_ErrorDescription_prop,
    &CIM_LogicalDevice_ErrorCleared_prop,
    &CIM_LogicalDevice_OtherIdentifyingInfo_prop,
    &CIM_LogicalDevice_PowerOnHours_prop,
    &CIM_LogicalDevice_TotalPowerOnHours_prop,
    &CIM_LogicalDevice_IdentifyingDescriptions_prop,
    &CIM_LogicalDevice_AdditionalAvailability_prop,
    &CIM_LogicalDevice_MaxQuiesceTime_prop,
    &CIM_NetworkPort_Speed_prop,
    &CIM_LogicalPort_MaxSpeed_prop,
    &CIM_LogicalPort_RequestedSpeed_prop,
    &CIM_LogicalPort_UsageRestriction_prop,
    &CIM_LogicalPort_PortType_prop,
    &CIM_LogicalPort_OtherPortType_prop,
    &CIM_NetworkPort_OtherNetworkPortType_prop,
    &CIM_NetworkPort_PortNumber_prop,
    &CIM_NetworkPort_LinkTechnology_prop,
    &CIM_NetworkPort_OtherLinkTechnology_prop,
    &CIM_NetworkPort_PermanentAddress_prop,
    &CIM_NetworkPort_NetworkAddresses_prop,
    &CIM_NetworkPort_FullDuplex_prop,
    &CIM_NetworkPort_AutoSense_prop,
    &CIM_NetworkPort_SupportedMaximumTransmissionUnit_prop,
    &CIM_NetworkPort_ActiveMaximumTransmissionUnit_prop,
};

static MI_MethodDecl MI_CONST* MI_CONST CIM_NetworkPort_meths[] =
{
    &CIM_EnabledLogicalElement_RequestStateChange_rtti,
    &CIM_LogicalDevice_SetPowerState_rtti,
    &CIM_LogicalDevice_Reset_rtti,
    &CIM_LogicalDevice_EnableDevice_rtti,
    &CIM_LogicalDevice_OnlineDevice_rtti,
    &CIM_LogicalDevice_QuiesceDevice_rtti,
    &CIM_LogicalDevice_SaveProperties_rtti,
    &CIM_LogicalDevice_RestoreProperties_rtti,
};

static MI_CONST MI_Char* CIM_NetworkPort_UMLPackagePath_qual_value = MI_T("CIM::Device::Ports");

static MI_CONST MI_Qualifier CIM_NetworkPort_UMLPackagePath_qual =
{
    MI_T("UMLPackagePath"),
    MI_STRING,
    0,
    &CIM_NetworkPort_UMLPackagePath_qual_value
};

static MI_CONST MI_Char* CIM_NetworkPort_Version_qual_value = MI_T("2.10.0");

static MI_CONST MI_Qualifier CIM_NetworkPort_Version_qual =
{
    MI_T("Version"),
    MI_STRING,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_TRANSLATABLE|MI_FLAG_RESTRICTED,
    &CIM_NetworkPort_Version_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_NetworkPort_quals[] =
{
    &CIM_NetworkPort_UMLPackagePath_qual,
    &CIM_NetworkPort_Version_qual,
};

/* class CIM_NetworkPort */
MI_CONST MI_ClassDecl CIM_NetworkPort_rtti =
{
    MI_FLAG_CLASS, /* flags */
    0x0063740F, /* code */
    MI_T("CIM_NetworkPort"), /* name */
    CIM_NetworkPort_quals, /* qualifiers */
    MI_COUNT(CIM_NetworkPort_quals), /* numQualifiers */
    CIM_NetworkPort_props, /* properties */
    MI_COUNT(CIM_NetworkPort_props), /* numProperties */
    sizeof(CIM_NetworkPort), /* size */
    MI_T("CIM_LogicalPort"), /* superClass */
    &CIM_LogicalPort_rtti, /* superClassDecl */
    CIM_NetworkPort_meths, /* methods */
    MI_COUNT(CIM_NetworkPort_meths), /* numMethods */
    &schemaDecl, /* schema */
    NULL, /* functions */
    NULL, /* owningClass */
};

/*
**==============================================================================
**
** CIM_EthernetPort
**
**==============================================================================
*/

static MI_CONST MI_Char* CIM_EthernetPort_PortType_Override_qual_value = MI_T("PortType");

static MI_CONST MI_Qualifier CIM_EthernetPort_PortType_Override_qual =
{
    MI_T("Override"),
    MI_STRING,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_RESTRICTED,
    &CIM_EthernetPort_PortType_Override_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_EthernetPort_PortType_quals[] =
{
    &CIM_EthernetPort_PortType_Override_qual,
};

/* property CIM_EthernetPort.PortType */
static MI_CONST MI_PropertyDecl CIM_EthernetPort_PortType_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00706508, /* code */
    MI_T("PortType"), /* name */
    CIM_EthernetPort_PortType_quals, /* qualifiers */
    MI_COUNT(CIM_EthernetPort_PortType_quals), /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_EthernetPort, PortType), /* offset */
    MI_T("CIM_LogicalPort"), /* origin */
    MI_T("CIM_EthernetPort"), /* propagator */
    NULL,
};

static MI_CONST MI_Uint32 CIM_EthernetPort_NetworkAddresses_MaxLen_qual_value = 64U;

static MI_CONST MI_Qualifier CIM_EthernetPort_NetworkAddresses_MaxLen_qual =
{
    MI_T("MaxLen"),
    MI_UINT32,
    0,
    &CIM_EthernetPort_NetworkAddresses_MaxLen_qual_value
};

static MI_CONST MI_Char* CIM_EthernetPort_NetworkAddresses_Override_qual_value = MI_T("NetworkAddresses");

static MI_CONST MI_Qualifier CIM_EthernetPort_NetworkAddresses_Override_qual =
{
    MI_T("Override"),
    MI_STRING,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_RESTRICTED,
    &CIM_EthernetPort_NetworkAddresses_Override_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_EthernetPort_NetworkAddresses_quals[] =
{
    &CIM_EthernetPort_NetworkAddresses_MaxLen_qual,
    &CIM_EthernetPort_NetworkAddresses_Override_qual,
};

/* property CIM_EthernetPort.NetworkAddresses */
static MI_CONST MI_PropertyDecl CIM_EthernetPort_NetworkAddresses_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006E7310, /* code */
    MI_T("NetworkAddresses"), /* name */
    CIM_EthernetPort_NetworkAddresses_quals, /* qualifiers */
    MI_COUNT(CIM_EthernetPort_NetworkAddresses_quals), /* numQualifiers */
    MI_STRINGA, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_EthernetPort, NetworkAddresses), /* offset */
    MI_T("CIM_NetworkPort"), /* origin */
    MI_T("CIM_EthernetPort"), /* propagator */
    NULL,
};

/* property CIM_EthernetPort.MaxDataSize */
static MI_CONST MI_PropertyDecl CIM_EthernetPort_MaxDataSize_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006D650B, /* code */
    MI_T("MaxDataSize"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_EthernetPort, MaxDataSize), /* offset */
    MI_T("CIM_EthernetPort"), /* origin */
    MI_T("CIM_EthernetPort"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* CIM_EthernetPort_Capabilities_ArrayType_qual_value = MI_T("Indexed");

static MI_CONST MI_Qualifier CIM_EthernetPort_Capabilities_ArrayType_qual =
{
    MI_T("ArrayType"),
    MI_STRING,
    MI_FLAG_DISABLEOVERRIDE|MI_FLAG_TOSUBCLASS,
    &CIM_EthernetPort_Capabilities_ArrayType_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_EthernetPort_Capabilities_quals[] =
{
    &CIM_EthernetPort_Capabilities_ArrayType_qual,
};

/* property CIM_EthernetPort.Capabilities */
static MI_CONST MI_PropertyDecl CIM_EthernetPort_Capabilities_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0063730C, /* code */
    MI_T("Capabilities"), /* name */
    CIM_EthernetPort_Capabilities_quals, /* qualifiers */
    MI_COUNT(CIM_EthernetPort_Capabilities_quals), /* numQualifiers */
    MI_UINT16A, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_EthernetPort, Capabilities), /* offset */
    MI_T("CIM_EthernetPort"), /* origin */
    MI_T("CIM_EthernetPort"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* CIM_EthernetPort_CapabilityDescriptions_ArrayType_qual_value = MI_T("Indexed");

static MI_CONST MI_Qualifier CIM_EthernetPort_CapabilityDescriptions_ArrayType_qual =
{
    MI_T("ArrayType"),
    MI_STRING,
    MI_FLAG_DISABLEOVERRIDE|MI_FLAG_TOSUBCLASS,
    &CIM_EthernetPort_CapabilityDescriptions_ArrayType_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_EthernetPort_CapabilityDescriptions_quals[] =
{
    &CIM_EthernetPort_CapabilityDescriptions_ArrayType_qual,
};

/* property CIM_EthernetPort.CapabilityDescriptions */
static MI_CONST MI_PropertyDecl CIM_EthernetPort_CapabilityDescriptions_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00637316, /* code */
    MI_T("CapabilityDescriptions"), /* name */
    CIM_EthernetPort_CapabilityDescriptions_quals, /* qualifiers */
    MI_COUNT(CIM_EthernetPort_CapabilityDescriptions_quals), /* numQualifiers */
    MI_STRINGA, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_EthernetPort, CapabilityDescriptions), /* offset */
    MI_T("CIM_EthernetPort"), /* origin */
    MI_T("CIM_EthernetPort"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* CIM_EthernetPort_EnabledCapabilities_ArrayType_qual_value = MI_T("Indexed");

static MI_CONST MI_Qualifier CIM_EthernetPort_EnabledCapabilities_ArrayType_qual =
{
    MI_T("ArrayType"),
    MI_STRING,
    MI_FLAG_DISABLEOVERRIDE|MI_FLAG_TOSUBCLASS,
    &CIM_EthernetPort_EnabledCapabilities_ArrayType_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_EthernetPort_EnabledCapabilities_quals[] =
{
    &CIM_EthernetPort_EnabledCapabilities_ArrayType_qual,
};

/* property CIM_EthernetPort.EnabledCapabilities */
static MI_CONST MI_PropertyDecl CIM_EthernetPort_EnabledCapabilities_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00657313, /* code */
    MI_T("EnabledCapabilities"), /* name */
    CIM_EthernetPort_EnabledCapabilities_quals, /* qualifiers */
    MI_COUNT(CIM_EthernetPort_EnabledCapabilities_quals), /* numQualifiers */
    MI_UINT16A, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_EthernetPort, EnabledCapabilities), /* offset */
    MI_T("CIM_EthernetPort"), /* origin */
    MI_T("CIM_EthernetPort"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* CIM_EthernetPort_OtherEnabledCapabilities_ArrayType_qual_value = MI_T("Indexed");

static MI_CONST MI_Qualifier CIM_EthernetPort_OtherEnabledCapabilities_ArrayType_qual =
{
    MI_T("ArrayType"),
    MI_STRING,
    MI_FLAG_DISABLEOVERRIDE|MI_FLAG_TOSUBCLASS,
    &CIM_EthernetPort_OtherEnabledCapabilities_ArrayType_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_EthernetPort_OtherEnabledCapabilities_quals[] =
{
    &CIM_EthernetPort_OtherEnabledCapabilities_ArrayType_qual,
};

/* property CIM_EthernetPort.OtherEnabledCapabilities */
static MI_CONST MI_PropertyDecl CIM_EthernetPort_OtherEnabledCapabilities_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006F7318, /* code */
    MI_T("OtherEnabledCapabilities"), /* name */
    CIM_EthernetPort_OtherEnabledCapabilities_quals, /* qualifiers */
    MI_COUNT(CIM_EthernetPort_OtherEnabledCapabilities_quals), /* numQualifiers */
    MI_STRINGA, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_EthernetPort, OtherEnabledCapabilities), /* offset */
    MI_T("CIM_EthernetPort"), /* origin */
    MI_T("CIM_EthernetPort"), /* propagator */
    NULL,
};

static MI_PropertyDecl MI_CONST* MI_CONST CIM_EthernetPort_props[] =
{
    &CIM_ManagedElement_InstanceID_prop,
    &CIM_ManagedElement_Caption_prop,
    &CIM_ManagedElement_Description_prop,
    &CIM_ManagedElement_ElementName_prop,
    &CIM_ManagedSystemElement_InstallDate_prop,
    &CIM_ManagedSystemElement_Name_prop,
    &CIM_ManagedSystemElement_OperationalStatus_prop,
    &CIM_ManagedSystemElement_StatusDescriptions_prop,
    &CIM_ManagedSystemElement_Status_prop,
    &CIM_ManagedSystemElement_HealthState_prop,
    &CIM_ManagedSystemElement_CommunicationStatus_prop,
    &CIM_ManagedSystemElement_DetailedStatus_prop,
    &CIM_ManagedSystemElement_OperatingStatus_prop,
    &CIM_ManagedSystemElement_PrimaryStatus_prop,
    &CIM_EnabledLogicalElement_EnabledState_prop,
    &CIM_EnabledLogicalElement_OtherEnabledState_prop,
    &CIM_EnabledLogicalElement_RequestedState_prop,
    &CIM_EnabledLogicalElement_EnabledDefault_prop,
    &CIM_EnabledLogicalElement_TimeOfLastStateChange_prop,
    &CIM_EnabledLogicalElement_AvailableRequestedStates_prop,
    &CIM_EnabledLogicalElement_TransitioningToState_prop,
    &CIM_LogicalDevice_SystemCreationClassName_prop,
    &CIM_LogicalDevice_SystemName_prop,
    &CIM_LogicalDevice_CreationClassName_prop,
    &CIM_LogicalDevice_DeviceID_prop,
    &CIM_LogicalDevice_PowerManagementSupported_prop,
    &CIM_LogicalDevice_PowerManagementCapabilities_prop,
    &CIM_LogicalDevice_Availability_prop,
    &CIM_LogicalDevice_StatusInfo_prop,
    &CIM_LogicalDevice_LastErrorCode_prop,
    &CIM_LogicalDevice_ErrorDescription_prop,
    &CIM_LogicalDevice_ErrorCleared_prop,
    &CIM_LogicalDevice_OtherIdentifyingInfo_prop,
    &CIM_LogicalDevice_PowerOnHours_prop,
    &CIM_LogicalDevice_TotalPowerOnHours_prop,
    &CIM_LogicalDevice_IdentifyingDescriptions_prop,
    &CIM_LogicalDevice_AdditionalAvailability_prop,
    &CIM_LogicalDevice_MaxQuiesceTime_prop,
    &CIM_NetworkPort_Speed_prop,
    &CIM_LogicalPort_MaxSpeed_prop,
    &CIM_LogicalPort_RequestedSpeed_prop,
    &CIM_LogicalPort_UsageRestriction_prop,
    &CIM_EthernetPort_PortType_prop,
    &CIM_LogicalPort_OtherPortType_prop,
    &CIM_NetworkPort_OtherNetworkPortType_prop,
    &CIM_NetworkPort_PortNumber_prop,
    &CIM_NetworkPort_LinkTechnology_prop,
    &CIM_NetworkPort_OtherLinkTechnology_prop,
    &CIM_NetworkPort_PermanentAddress_prop,
    &CIM_EthernetPort_NetworkAddresses_prop,
    &CIM_NetworkPort_FullDuplex_prop,
    &CIM_NetworkPort_AutoSense_prop,
    &CIM_NetworkPort_SupportedMaximumTransmissionUnit_prop,
    &CIM_NetworkPort_ActiveMaximumTransmissionUnit_prop,
    &CIM_EthernetPort_MaxDataSize_prop,
    &CIM_EthernetPort_Capabilities_prop,
    &CIM_EthernetPort_CapabilityDescriptions_prop,
    &CIM_EthernetPort_EnabledCapabilities_prop,
    &CIM_EthernetPort_OtherEnabledCapabilities_prop,
};

static MI_MethodDecl MI_CONST* MI_CONST CIM_EthernetPort_meths[] =
{
    &CIM_EnabledLogicalElement_RequestStateChange_rtti,
    &CIM_LogicalDevice_SetPowerState_rtti,
    &CIM_LogicalDevice_Reset_rtti,
    &CIM_LogicalDevice_EnableDevice_rtti,
    &CIM_LogicalDevice_OnlineDevice_rtti,
    &CIM_LogicalDevice_QuiesceDevice_rtti,
    &CIM_LogicalDevice_SaveProperties_rtti,
    &CIM_LogicalDevice_RestoreProperties_rtti,
};

static MI_CONST MI_Char* CIM_EthernetPort_UMLPackagePath_qual_value = MI_T("CIM::Device::Ports");

static MI_CONST MI_Qualifier CIM_EthernetPort_UMLPackagePath_qual =
{
    MI_T("UMLPackagePath"),
    MI_STRING,
    0,
    &CIM_EthernetPort_UMLPackagePath_qual_value
};

static MI_CONST MI_Char* CIM_EthernetPort_Version_qual_value = MI_T("2.10.0");

static MI_CONST MI_Qualifier CIM_EthernetPort_Version_qual =
{
    MI_T("Version"),
    MI_STRING,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_TRANSLATABLE|MI_FLAG_RESTRICTED,
    &CIM_EthernetPort_Version_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_EthernetPort_quals[] =
{
    &CIM_EthernetPort_UMLPackagePath_qual,
    &CIM_EthernetPort_Version_qual,
};

/* class CIM_EthernetPort */
MI_CONST MI_ClassDecl CIM_EthernetPort_rtti =
{
    MI_FLAG_CLASS, /* flags */
    0x00637410, /* code */
    MI_T("CIM_EthernetPort"), /* name */
    CIM_EthernetPort_quals, /* qualifiers */
    MI_COUNT(CIM_EthernetPort_quals), /* numQualifiers */
    CIM_EthernetPort_props, /* properties */
    MI_COUNT(CIM_EthernetPort_props), /* numProperties */
    sizeof(CIM_EthernetPort), /* size */
    MI_T("CIM_NetworkPort"), /* superClass */
    &CIM_NetworkPort_rtti, /* superClassDecl */
    CIM_EthernetPort_meths, /* methods */
    MI_COUNT(CIM_EthernetPort_meths), /* numMethods */
    &schemaDecl, /* schema */
    NULL, /* functions */
    NULL, /* owningClass */
};

/*
**==============================================================================
**
** MSFT_EthernetPort
**
**==============================================================================
*/

/* property MSFT_EthernetPort.LACPPortPriority */
static MI_CONST MI_PropertyDecl MSFT_EthernetPort_LACPPortPriority_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006C7910, /* code */
    MI_T("LACPPortPriority"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_EthernetPort, LACPPortPriority), /* offset */
    MI_T("MSFT_EthernetPort"), /* origin */
    MI_T("MSFT_EthernetPort"), /* propagator */
    NULL,
};

static MI_CONST MI_Uint16 MSFT_EthernetPort_LACPMode_value = 3;

/* property MSFT_EthernetPort.LACPMode */
static MI_CONST MI_PropertyDecl MSFT_EthernetPort_LACPMode_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006C6508, /* code */
    MI_T("LACPMode"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_EthernetPort, LACPMode), /* offset */
    MI_T("MSFT_EthernetPort"), /* origin */
    MI_T("MSFT_EthernetPort"), /* propagator */
    &MSFT_EthernetPort_LACPMode_value,
};

/* property MSFT_EthernetPort.LACPGroupNumber */
static MI_CONST MI_PropertyDecl MSFT_EthernetPort_LACPGroupNumber_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006C720F, /* code */
    MI_T("LACPGroupNumber"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_EthernetPort, LACPGroupNumber), /* offset */
    MI_T("MSFT_EthernetPort"), /* origin */
    MI_T("MSFT_EthernetPort"), /* propagator */
    NULL,
};

static MI_CONST MI_Uint16 MSFT_EthernetPort_SpanningTreePortType_value = 1;

/* property MSFT_EthernetPort.SpanningTreePortType */
static MI_CONST MI_PropertyDecl MSFT_EthernetPort_SpanningTreePortType_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00736514, /* code */
    MI_T("SpanningTreePortType"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_EthernetPort, SpanningTreePortType), /* offset */
    MI_T("MSFT_EthernetPort"), /* origin */
    MI_T("MSFT_EthernetPort"), /* propagator */
    &MSFT_EthernetPort_SpanningTreePortType_value,
};

/* property MSFT_EthernetPort.LLDPTransmitEnabled */
static MI_CONST MI_PropertyDecl MSFT_EthernetPort_LLDPTransmitEnabled_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006C6413, /* code */
    MI_T("LLDPTransmitEnabled"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_BOOLEAN, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_EthernetPort, LLDPTransmitEnabled), /* offset */
    MI_T("MSFT_EthernetPort"), /* origin */
    MI_T("MSFT_EthernetPort"), /* propagator */
    NULL,
};

/* property MSFT_EthernetPort.LLDPReceiveEnabled */
static MI_CONST MI_PropertyDecl MSFT_EthernetPort_LLDPReceiveEnabled_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006C6412, /* code */
    MI_T("LLDPReceiveEnabled"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_BOOLEAN, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_EthernetPort, LLDPReceiveEnabled), /* offset */
    MI_T("MSFT_EthernetPort"), /* origin */
    MI_T("MSFT_EthernetPort"), /* propagator */
    NULL,
};

/* property MSFT_EthernetPort.cdpEnabled */
static MI_CONST MI_PropertyDecl MSFT_EthernetPort_cdpEnabled_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0063640A, /* code */
    MI_T("cdpEnabled"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_BOOLEAN, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_EthernetPort, cdpEnabled), /* offset */
    MI_T("MSFT_EthernetPort"), /* origin */
    MI_T("MSFT_EthernetPort"), /* propagator */
    NULL,
};

/* property MSFT_EthernetPort.SNMPLinkStatusTrapEnabled */
static MI_CONST MI_PropertyDecl MSFT_EthernetPort_SNMPLinkStatusTrapEnabled_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00736419, /* code */
    MI_T("SNMPLinkStatusTrapEnabled"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_BOOLEAN, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_EthernetPort, SNMPLinkStatusTrapEnabled), /* offset */
    MI_T("MSFT_EthernetPort"), /* origin */
    MI_T("MSFT_EthernetPort"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* MSFT_EthernetPort_LLDPRemotePortID_ArrayType_qual_value = MI_T("Indexed");

static MI_CONST MI_Qualifier MSFT_EthernetPort_LLDPRemotePortID_ArrayType_qual =
{
    MI_T("ArrayType"),
    MI_STRING,
    MI_FLAG_DISABLEOVERRIDE|MI_FLAG_TOSUBCLASS,
    &MSFT_EthernetPort_LLDPRemotePortID_ArrayType_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST MSFT_EthernetPort_LLDPRemotePortID_quals[] =
{
    &MSFT_EthernetPort_LLDPRemotePortID_ArrayType_qual,
};

/* property MSFT_EthernetPort.LLDPRemotePortID */
static MI_CONST MI_PropertyDecl MSFT_EthernetPort_LLDPRemotePortID_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006C6410, /* code */
    MI_T("LLDPRemotePortID"), /* name */
    MSFT_EthernetPort_LLDPRemotePortID_quals, /* qualifiers */
    MI_COUNT(MSFT_EthernetPort_LLDPRemotePortID_quals), /* numQualifiers */
    MI_STRINGA, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_EthernetPort, LLDPRemotePortID), /* offset */
    MI_T("MSFT_EthernetPort"), /* origin */
    MI_T("MSFT_EthernetPort"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* MSFT_EthernetPort_LLDPRemotePortIDType_ArrayType_qual_value = MI_T("Indexed");

static MI_CONST MI_Qualifier MSFT_EthernetPort_LLDPRemotePortIDType_ArrayType_qual =
{
    MI_T("ArrayType"),
    MI_STRING,
    MI_FLAG_DISABLEOVERRIDE|MI_FLAG_TOSUBCLASS,
    &MSFT_EthernetPort_LLDPRemotePortIDType_ArrayType_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST MSFT_EthernetPort_LLDPRemotePortIDType_quals[] =
{
    &MSFT_EthernetPort_LLDPRemotePortIDType_ArrayType_qual,
};

/* property MSFT_EthernetPort.LLDPRemotePortIDType */
static MI_CONST MI_PropertyDecl MSFT_EthernetPort_LLDPRemotePortIDType_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006C6514, /* code */
    MI_T("LLDPRemotePortIDType"), /* name */
    MSFT_EthernetPort_LLDPRemotePortIDType_quals, /* qualifiers */
    MI_COUNT(MSFT_EthernetPort_LLDPRemotePortIDType_quals), /* numQualifiers */
    MI_UINT16A, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_EthernetPort, LLDPRemotePortIDType), /* offset */
    MI_T("MSFT_EthernetPort"), /* origin */
    MI_T("MSFT_EthernetPort"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* MSFT_EthernetPort_LLDPRemoteDeviceID_ArrayType_qual_value = MI_T("Indexed");

static MI_CONST MI_Qualifier MSFT_EthernetPort_LLDPRemoteDeviceID_ArrayType_qual =
{
    MI_T("ArrayType"),
    MI_STRING,
    MI_FLAG_DISABLEOVERRIDE|MI_FLAG_TOSUBCLASS,
    &MSFT_EthernetPort_LLDPRemoteDeviceID_ArrayType_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST MSFT_EthernetPort_LLDPRemoteDeviceID_quals[] =
{
    &MSFT_EthernetPort_LLDPRemoteDeviceID_ArrayType_qual,
};

/* property MSFT_EthernetPort.LLDPRemoteDeviceID */
static MI_CONST MI_PropertyDecl MSFT_EthernetPort_LLDPRemoteDeviceID_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006C6412, /* code */
    MI_T("LLDPRemoteDeviceID"), /* name */
    MSFT_EthernetPort_LLDPRemoteDeviceID_quals, /* qualifiers */
    MI_COUNT(MSFT_EthernetPort_LLDPRemoteDeviceID_quals), /* numQualifiers */
    MI_STRINGA, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_EthernetPort, LLDPRemoteDeviceID), /* offset */
    MI_T("MSFT_EthernetPort"), /* origin */
    MI_T("MSFT_EthernetPort"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* MSFT_EthernetPort_LLDPRemoteDeviceIDType_ArrayType_qual_value = MI_T("Indexed");

static MI_CONST MI_Qualifier MSFT_EthernetPort_LLDPRemoteDeviceIDType_ArrayType_qual =
{
    MI_T("ArrayType"),
    MI_STRING,
    MI_FLAG_DISABLEOVERRIDE|MI_FLAG_TOSUBCLASS,
    &MSFT_EthernetPort_LLDPRemoteDeviceIDType_ArrayType_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST MSFT_EthernetPort_LLDPRemoteDeviceIDType_quals[] =
{
    &MSFT_EthernetPort_LLDPRemoteDeviceIDType_ArrayType_qual,
};

/* property MSFT_EthernetPort.LLDPRemoteDeviceIDType */
static MI_CONST MI_PropertyDecl MSFT_EthernetPort_LLDPRemoteDeviceIDType_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006C6516, /* code */
    MI_T("LLDPRemoteDeviceIDType"), /* name */
    MSFT_EthernetPort_LLDPRemoteDeviceIDType_quals, /* qualifiers */
    MI_COUNT(MSFT_EthernetPort_LLDPRemoteDeviceIDType_quals), /* numQualifiers */
    MI_UINT16A, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_EthernetPort, LLDPRemoteDeviceIDType), /* offset */
    MI_T("MSFT_EthernetPort"), /* origin */
    MI_T("MSFT_EthernetPort"), /* propagator */
    NULL,
};

static MI_PropertyDecl MI_CONST* MI_CONST MSFT_EthernetPort_props[] =
{
    &CIM_ManagedElement_InstanceID_prop,
    &CIM_ManagedElement_Caption_prop,
    &CIM_ManagedElement_Description_prop,
    &CIM_ManagedElement_ElementName_prop,
    &CIM_ManagedSystemElement_InstallDate_prop,
    &CIM_ManagedSystemElement_Name_prop,
    &CIM_ManagedSystemElement_OperationalStatus_prop,
    &CIM_ManagedSystemElement_StatusDescriptions_prop,
    &CIM_ManagedSystemElement_Status_prop,
    &CIM_ManagedSystemElement_HealthState_prop,
    &CIM_ManagedSystemElement_CommunicationStatus_prop,
    &CIM_ManagedSystemElement_DetailedStatus_prop,
    &CIM_ManagedSystemElement_OperatingStatus_prop,
    &CIM_ManagedSystemElement_PrimaryStatus_prop,
    &CIM_EnabledLogicalElement_EnabledState_prop,
    &CIM_EnabledLogicalElement_OtherEnabledState_prop,
    &CIM_EnabledLogicalElement_RequestedState_prop,
    &CIM_EnabledLogicalElement_EnabledDefault_prop,
    &CIM_EnabledLogicalElement_TimeOfLastStateChange_prop,
    &CIM_EnabledLogicalElement_AvailableRequestedStates_prop,
    &CIM_EnabledLogicalElement_TransitioningToState_prop,
    &CIM_LogicalDevice_SystemCreationClassName_prop,
    &CIM_LogicalDevice_SystemName_prop,
    &CIM_LogicalDevice_CreationClassName_prop,
    &CIM_LogicalDevice_DeviceID_prop,
    &CIM_LogicalDevice_PowerManagementSupported_prop,
    &CIM_LogicalDevice_PowerManagementCapabilities_prop,
    &CIM_LogicalDevice_Availability_prop,
    &CIM_LogicalDevice_StatusInfo_prop,
    &CIM_LogicalDevice_LastErrorCode_prop,
    &CIM_LogicalDevice_ErrorDescription_prop,
    &CIM_LogicalDevice_ErrorCleared_prop,
    &CIM_LogicalDevice_OtherIdentifyingInfo_prop,
    &CIM_LogicalDevice_PowerOnHours_prop,
    &CIM_LogicalDevice_TotalPowerOnHours_prop,
    &CIM_LogicalDevice_IdentifyingDescriptions_prop,
    &CIM_LogicalDevice_AdditionalAvailability_prop,
    &CIM_LogicalDevice_MaxQuiesceTime_prop,
    &CIM_NetworkPort_Speed_prop,
    &CIM_LogicalPort_MaxSpeed_prop,
    &CIM_LogicalPort_RequestedSpeed_prop,
    &CIM_LogicalPort_UsageRestriction_prop,
    &CIM_EthernetPort_PortType_prop,
    &CIM_LogicalPort_OtherPortType_prop,
    &CIM_NetworkPort_OtherNetworkPortType_prop,
    &CIM_NetworkPort_PortNumber_prop,
    &CIM_NetworkPort_LinkTechnology_prop,
    &CIM_NetworkPort_OtherLinkTechnology_prop,
    &CIM_NetworkPort_PermanentAddress_prop,
    &CIM_EthernetPort_NetworkAddresses_prop,
    &CIM_NetworkPort_FullDuplex_prop,
    &CIM_NetworkPort_AutoSense_prop,
    &CIM_NetworkPort_SupportedMaximumTransmissionUnit_prop,
    &CIM_NetworkPort_ActiveMaximumTransmissionUnit_prop,
    &CIM_EthernetPort_MaxDataSize_prop,
    &CIM_EthernetPort_Capabilities_prop,
    &CIM_EthernetPort_CapabilityDescriptions_prop,
    &CIM_EthernetPort_EnabledCapabilities_prop,
    &CIM_EthernetPort_OtherEnabledCapabilities_prop,
    &MSFT_EthernetPort_LACPPortPriority_prop,
    &MSFT_EthernetPort_LACPMode_prop,
    &MSFT_EthernetPort_LACPGroupNumber_prop,
    &MSFT_EthernetPort_SpanningTreePortType_prop,
    &MSFT_EthernetPort_LLDPTransmitEnabled_prop,
    &MSFT_EthernetPort_LLDPReceiveEnabled_prop,
    &MSFT_EthernetPort_cdpEnabled_prop,
    &MSFT_EthernetPort_SNMPLinkStatusTrapEnabled_prop,
    &MSFT_EthernetPort_LLDPRemotePortID_prop,
    &MSFT_EthernetPort_LLDPRemotePortIDType_prop,
    &MSFT_EthernetPort_LLDPRemoteDeviceID_prop,
    &MSFT_EthernetPort_LLDPRemoteDeviceIDType_prop,
};

/* parameter MSFT_EthernetPort.RequestStateChange(): RequestedState */
static MI_CONST MI_ParameterDecl MSFT_EthernetPort_RequestStateChange_RequestedState_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_IN, /* flags */
    0x0072650E, /* code */
    MI_T("RequestedState"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_EthernetPort_RequestStateChange, RequestedState), /* offset */
};

/* parameter MSFT_EthernetPort.RequestStateChange(): Job */
static MI_CONST MI_ParameterDecl MSFT_EthernetPort_RequestStateChange_Job_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006A6203, /* code */
    MI_T("Job"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("CIM_ConcreteJob"), /* className */
    0, /* subscript */
    offsetof(MSFT_EthernetPort_RequestStateChange, Job), /* offset */
};

/* parameter MSFT_EthernetPort.RequestStateChange(): TimeoutPeriod */
static MI_CONST MI_ParameterDecl MSFT_EthernetPort_RequestStateChange_TimeoutPeriod_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_IN, /* flags */
    0x0074640D, /* code */
    MI_T("TimeoutPeriod"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_DATETIME, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_EthernetPort_RequestStateChange, TimeoutPeriod), /* offset */
};

/* parameter MSFT_EthernetPort.RequestStateChange(): MIReturn */
static MI_CONST MI_ParameterDecl MSFT_EthernetPort_RequestStateChange_MIReturn_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006D6E08, /* code */
    MI_T("MIReturn"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_EthernetPort_RequestStateChange, MIReturn), /* offset */
};

static MI_ParameterDecl MI_CONST* MI_CONST MSFT_EthernetPort_RequestStateChange_params[] =
{
    &MSFT_EthernetPort_RequestStateChange_MIReturn_param,
    &MSFT_EthernetPort_RequestStateChange_RequestedState_param,
    &MSFT_EthernetPort_RequestStateChange_Job_param,
    &MSFT_EthernetPort_RequestStateChange_TimeoutPeriod_param,
};

/* method MSFT_EthernetPort.RequestStateChange() */
MI_CONST MI_MethodDecl MSFT_EthernetPort_RequestStateChange_rtti =
{
    MI_FLAG_METHOD, /* flags */
    0x00726512, /* code */
    MI_T("RequestStateChange"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MSFT_EthernetPort_RequestStateChange_params, /* parameters */
    MI_COUNT(MSFT_EthernetPort_RequestStateChange_params), /* numParameters */
    sizeof(MSFT_EthernetPort_RequestStateChange), /* size */
    MI_UINT32, /* returnType */
    MI_T("CIM_EnabledLogicalElement"), /* origin */
    MI_T("CIM_EnabledLogicalElement"), /* propagator */
    &schemaDecl, /* schema */
    (MI_ProviderFT_Invoke)MSFT_EthernetPort_Invoke_RequestStateChange, /* method */
};

static MI_CONST MI_Char* MSFT_EthernetPort_SetPowerState_Deprecated_qual_data_value[] =
{
    MI_T("CIM_PowerManagementService.SetPowerState"),
};

static MI_CONST MI_ConstStringA MSFT_EthernetPort_SetPowerState_Deprecated_qual_value =
{
    MSFT_EthernetPort_SetPowerState_Deprecated_qual_data_value,
    MI_COUNT(MSFT_EthernetPort_SetPowerState_Deprecated_qual_data_value),
};

static MI_CONST MI_Qualifier MSFT_EthernetPort_SetPowerState_Deprecated_qual =
{
    MI_T("Deprecated"),
    MI_STRINGA,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_RESTRICTED,
    &MSFT_EthernetPort_SetPowerState_Deprecated_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST MSFT_EthernetPort_SetPowerState_quals[] =
{
    &MSFT_EthernetPort_SetPowerState_Deprecated_qual,
};

/* parameter MSFT_EthernetPort.SetPowerState(): PowerState */
static MI_CONST MI_ParameterDecl MSFT_EthernetPort_SetPowerState_PowerState_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_IN, /* flags */
    0x0070650A, /* code */
    MI_T("PowerState"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_EthernetPort_SetPowerState, PowerState), /* offset */
};

/* parameter MSFT_EthernetPort.SetPowerState(): Time */
static MI_CONST MI_ParameterDecl MSFT_EthernetPort_SetPowerState_Time_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_IN, /* flags */
    0x00746504, /* code */
    MI_T("Time"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_DATETIME, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_EthernetPort_SetPowerState, Time), /* offset */
};

static MI_CONST MI_Char* MSFT_EthernetPort_SetPowerState_MIReturn_Deprecated_qual_data_value[] =
{
    MI_T("CIM_PowerManagementService.SetPowerState"),
};

static MI_CONST MI_ConstStringA MSFT_EthernetPort_SetPowerState_MIReturn_Deprecated_qual_value =
{
    MSFT_EthernetPort_SetPowerState_MIReturn_Deprecated_qual_data_value,
    MI_COUNT(MSFT_EthernetPort_SetPowerState_MIReturn_Deprecated_qual_data_value),
};

static MI_CONST MI_Qualifier MSFT_EthernetPort_SetPowerState_MIReturn_Deprecated_qual =
{
    MI_T("Deprecated"),
    MI_STRINGA,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_RESTRICTED,
    &MSFT_EthernetPort_SetPowerState_MIReturn_Deprecated_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST MSFT_EthernetPort_SetPowerState_MIReturn_quals[] =
{
    &MSFT_EthernetPort_SetPowerState_MIReturn_Deprecated_qual,
};

/* parameter MSFT_EthernetPort.SetPowerState(): MIReturn */
static MI_CONST MI_ParameterDecl MSFT_EthernetPort_SetPowerState_MIReturn_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006D6E08, /* code */
    MI_T("MIReturn"), /* name */
    MSFT_EthernetPort_SetPowerState_MIReturn_quals, /* qualifiers */
    MI_COUNT(MSFT_EthernetPort_SetPowerState_MIReturn_quals), /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_EthernetPort_SetPowerState, MIReturn), /* offset */
};

static MI_ParameterDecl MI_CONST* MI_CONST MSFT_EthernetPort_SetPowerState_params[] =
{
    &MSFT_EthernetPort_SetPowerState_MIReturn_param,
    &MSFT_EthernetPort_SetPowerState_PowerState_param,
    &MSFT_EthernetPort_SetPowerState_Time_param,
};

/* method MSFT_EthernetPort.SetPowerState() */
MI_CONST MI_MethodDecl MSFT_EthernetPort_SetPowerState_rtti =
{
    MI_FLAG_METHOD, /* flags */
    0x0073650D, /* code */
    MI_T("SetPowerState"), /* name */
    MSFT_EthernetPort_SetPowerState_quals, /* qualifiers */
    MI_COUNT(MSFT_EthernetPort_SetPowerState_quals), /* numQualifiers */
    MSFT_EthernetPort_SetPowerState_params, /* parameters */
    MI_COUNT(MSFT_EthernetPort_SetPowerState_params), /* numParameters */
    sizeof(MSFT_EthernetPort_SetPowerState), /* size */
    MI_UINT32, /* returnType */
    MI_T("CIM_LogicalDevice"), /* origin */
    MI_T("CIM_LogicalDevice"), /* propagator */
    &schemaDecl, /* schema */
    (MI_ProviderFT_Invoke)MSFT_EthernetPort_Invoke_SetPowerState, /* method */
};

/* parameter MSFT_EthernetPort.Reset(): MIReturn */
static MI_CONST MI_ParameterDecl MSFT_EthernetPort_Reset_MIReturn_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006D6E08, /* code */
    MI_T("MIReturn"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_EthernetPort_Reset, MIReturn), /* offset */
};

static MI_ParameterDecl MI_CONST* MI_CONST MSFT_EthernetPort_Reset_params[] =
{
    &MSFT_EthernetPort_Reset_MIReturn_param,
};

/* method MSFT_EthernetPort.Reset() */
MI_CONST MI_MethodDecl MSFT_EthernetPort_Reset_rtti =
{
    MI_FLAG_METHOD, /* flags */
    0x00727405, /* code */
    MI_T("Reset"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MSFT_EthernetPort_Reset_params, /* parameters */
    MI_COUNT(MSFT_EthernetPort_Reset_params), /* numParameters */
    sizeof(MSFT_EthernetPort_Reset), /* size */
    MI_UINT32, /* returnType */
    MI_T("CIM_LogicalDevice"), /* origin */
    MI_T("CIM_LogicalDevice"), /* propagator */
    &schemaDecl, /* schema */
    (MI_ProviderFT_Invoke)MSFT_EthernetPort_Invoke_Reset, /* method */
};

static MI_CONST MI_Char* MSFT_EthernetPort_EnableDevice_Deprecated_qual_data_value[] =
{
    MI_T("CIM_EnabledLogicalElement.RequestStateChange"),
};

static MI_CONST MI_ConstStringA MSFT_EthernetPort_EnableDevice_Deprecated_qual_value =
{
    MSFT_EthernetPort_EnableDevice_Deprecated_qual_data_value,
    MI_COUNT(MSFT_EthernetPort_EnableDevice_Deprecated_qual_data_value),
};

static MI_CONST MI_Qualifier MSFT_EthernetPort_EnableDevice_Deprecated_qual =
{
    MI_T("Deprecated"),
    MI_STRINGA,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_RESTRICTED,
    &MSFT_EthernetPort_EnableDevice_Deprecated_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST MSFT_EthernetPort_EnableDevice_quals[] =
{
    &MSFT_EthernetPort_EnableDevice_Deprecated_qual,
};

/* parameter MSFT_EthernetPort.EnableDevice(): Enabled */
static MI_CONST MI_ParameterDecl MSFT_EthernetPort_EnableDevice_Enabled_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_IN, /* flags */
    0x00656407, /* code */
    MI_T("Enabled"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_BOOLEAN, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_EthernetPort_EnableDevice, Enabled), /* offset */
};

static MI_CONST MI_Char* MSFT_EthernetPort_EnableDevice_MIReturn_Deprecated_qual_data_value[] =
{
    MI_T("CIM_EnabledLogicalElement.RequestStateChange"),
};

static MI_CONST MI_ConstStringA MSFT_EthernetPort_EnableDevice_MIReturn_Deprecated_qual_value =
{
    MSFT_EthernetPort_EnableDevice_MIReturn_Deprecated_qual_data_value,
    MI_COUNT(MSFT_EthernetPort_EnableDevice_MIReturn_Deprecated_qual_data_value),
};

static MI_CONST MI_Qualifier MSFT_EthernetPort_EnableDevice_MIReturn_Deprecated_qual =
{
    MI_T("Deprecated"),
    MI_STRINGA,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_RESTRICTED,
    &MSFT_EthernetPort_EnableDevice_MIReturn_Deprecated_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST MSFT_EthernetPort_EnableDevice_MIReturn_quals[] =
{
    &MSFT_EthernetPort_EnableDevice_MIReturn_Deprecated_qual,
};

/* parameter MSFT_EthernetPort.EnableDevice(): MIReturn */
static MI_CONST MI_ParameterDecl MSFT_EthernetPort_EnableDevice_MIReturn_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006D6E08, /* code */
    MI_T("MIReturn"), /* name */
    MSFT_EthernetPort_EnableDevice_MIReturn_quals, /* qualifiers */
    MI_COUNT(MSFT_EthernetPort_EnableDevice_MIReturn_quals), /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_EthernetPort_EnableDevice, MIReturn), /* offset */
};

static MI_ParameterDecl MI_CONST* MI_CONST MSFT_EthernetPort_EnableDevice_params[] =
{
    &MSFT_EthernetPort_EnableDevice_MIReturn_param,
    &MSFT_EthernetPort_EnableDevice_Enabled_param,
};

/* method MSFT_EthernetPort.EnableDevice() */
MI_CONST MI_MethodDecl MSFT_EthernetPort_EnableDevice_rtti =
{
    MI_FLAG_METHOD, /* flags */
    0x0065650C, /* code */
    MI_T("EnableDevice"), /* name */
    MSFT_EthernetPort_EnableDevice_quals, /* qualifiers */
    MI_COUNT(MSFT_EthernetPort_EnableDevice_quals), /* numQualifiers */
    MSFT_EthernetPort_EnableDevice_params, /* parameters */
    MI_COUNT(MSFT_EthernetPort_EnableDevice_params), /* numParameters */
    sizeof(MSFT_EthernetPort_EnableDevice), /* size */
    MI_UINT32, /* returnType */
    MI_T("CIM_LogicalDevice"), /* origin */
    MI_T("CIM_LogicalDevice"), /* propagator */
    &schemaDecl, /* schema */
    (MI_ProviderFT_Invoke)MSFT_EthernetPort_Invoke_EnableDevice, /* method */
};

static MI_CONST MI_Char* MSFT_EthernetPort_OnlineDevice_Deprecated_qual_data_value[] =
{
    MI_T("CIM_EnabledLogicalElement.RequestStateChange"),
};

static MI_CONST MI_ConstStringA MSFT_EthernetPort_OnlineDevice_Deprecated_qual_value =
{
    MSFT_EthernetPort_OnlineDevice_Deprecated_qual_data_value,
    MI_COUNT(MSFT_EthernetPort_OnlineDevice_Deprecated_qual_data_value),
};

static MI_CONST MI_Qualifier MSFT_EthernetPort_OnlineDevice_Deprecated_qual =
{
    MI_T("Deprecated"),
    MI_STRINGA,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_RESTRICTED,
    &MSFT_EthernetPort_OnlineDevice_Deprecated_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST MSFT_EthernetPort_OnlineDevice_quals[] =
{
    &MSFT_EthernetPort_OnlineDevice_Deprecated_qual,
};

/* parameter MSFT_EthernetPort.OnlineDevice(): Online */
static MI_CONST MI_ParameterDecl MSFT_EthernetPort_OnlineDevice_Online_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_IN, /* flags */
    0x006F6506, /* code */
    MI_T("Online"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_BOOLEAN, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_EthernetPort_OnlineDevice, Online), /* offset */
};

static MI_CONST MI_Char* MSFT_EthernetPort_OnlineDevice_MIReturn_Deprecated_qual_data_value[] =
{
    MI_T("CIM_EnabledLogicalElement.RequestStateChange"),
};

static MI_CONST MI_ConstStringA MSFT_EthernetPort_OnlineDevice_MIReturn_Deprecated_qual_value =
{
    MSFT_EthernetPort_OnlineDevice_MIReturn_Deprecated_qual_data_value,
    MI_COUNT(MSFT_EthernetPort_OnlineDevice_MIReturn_Deprecated_qual_data_value),
};

static MI_CONST MI_Qualifier MSFT_EthernetPort_OnlineDevice_MIReturn_Deprecated_qual =
{
    MI_T("Deprecated"),
    MI_STRINGA,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_RESTRICTED,
    &MSFT_EthernetPort_OnlineDevice_MIReturn_Deprecated_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST MSFT_EthernetPort_OnlineDevice_MIReturn_quals[] =
{
    &MSFT_EthernetPort_OnlineDevice_MIReturn_Deprecated_qual,
};

/* parameter MSFT_EthernetPort.OnlineDevice(): MIReturn */
static MI_CONST MI_ParameterDecl MSFT_EthernetPort_OnlineDevice_MIReturn_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006D6E08, /* code */
    MI_T("MIReturn"), /* name */
    MSFT_EthernetPort_OnlineDevice_MIReturn_quals, /* qualifiers */
    MI_COUNT(MSFT_EthernetPort_OnlineDevice_MIReturn_quals), /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_EthernetPort_OnlineDevice, MIReturn), /* offset */
};

static MI_ParameterDecl MI_CONST* MI_CONST MSFT_EthernetPort_OnlineDevice_params[] =
{
    &MSFT_EthernetPort_OnlineDevice_MIReturn_param,
    &MSFT_EthernetPort_OnlineDevice_Online_param,
};

/* method MSFT_EthernetPort.OnlineDevice() */
MI_CONST MI_MethodDecl MSFT_EthernetPort_OnlineDevice_rtti =
{
    MI_FLAG_METHOD, /* flags */
    0x006F650C, /* code */
    MI_T("OnlineDevice"), /* name */
    MSFT_EthernetPort_OnlineDevice_quals, /* qualifiers */
    MI_COUNT(MSFT_EthernetPort_OnlineDevice_quals), /* numQualifiers */
    MSFT_EthernetPort_OnlineDevice_params, /* parameters */
    MI_COUNT(MSFT_EthernetPort_OnlineDevice_params), /* numParameters */
    sizeof(MSFT_EthernetPort_OnlineDevice), /* size */
    MI_UINT32, /* returnType */
    MI_T("CIM_LogicalDevice"), /* origin */
    MI_T("CIM_LogicalDevice"), /* propagator */
    &schemaDecl, /* schema */
    (MI_ProviderFT_Invoke)MSFT_EthernetPort_Invoke_OnlineDevice, /* method */
};

static MI_CONST MI_Char* MSFT_EthernetPort_QuiesceDevice_Deprecated_qual_data_value[] =
{
    MI_T("CIM_EnabledLogicalElement.RequestStateChange"),
};

static MI_CONST MI_ConstStringA MSFT_EthernetPort_QuiesceDevice_Deprecated_qual_value =
{
    MSFT_EthernetPort_QuiesceDevice_Deprecated_qual_data_value,
    MI_COUNT(MSFT_EthernetPort_QuiesceDevice_Deprecated_qual_data_value),
};

static MI_CONST MI_Qualifier MSFT_EthernetPort_QuiesceDevice_Deprecated_qual =
{
    MI_T("Deprecated"),
    MI_STRINGA,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_RESTRICTED,
    &MSFT_EthernetPort_QuiesceDevice_Deprecated_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST MSFT_EthernetPort_QuiesceDevice_quals[] =
{
    &MSFT_EthernetPort_QuiesceDevice_Deprecated_qual,
};

/* parameter MSFT_EthernetPort.QuiesceDevice(): Quiesce */
static MI_CONST MI_ParameterDecl MSFT_EthernetPort_QuiesceDevice_Quiesce_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_IN, /* flags */
    0x00716507, /* code */
    MI_T("Quiesce"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_BOOLEAN, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_EthernetPort_QuiesceDevice, Quiesce), /* offset */
};

static MI_CONST MI_Char* MSFT_EthernetPort_QuiesceDevice_MIReturn_Deprecated_qual_data_value[] =
{
    MI_T("CIM_EnabledLogicalElement.RequestStateChange"),
};

static MI_CONST MI_ConstStringA MSFT_EthernetPort_QuiesceDevice_MIReturn_Deprecated_qual_value =
{
    MSFT_EthernetPort_QuiesceDevice_MIReturn_Deprecated_qual_data_value,
    MI_COUNT(MSFT_EthernetPort_QuiesceDevice_MIReturn_Deprecated_qual_data_value),
};

static MI_CONST MI_Qualifier MSFT_EthernetPort_QuiesceDevice_MIReturn_Deprecated_qual =
{
    MI_T("Deprecated"),
    MI_STRINGA,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_RESTRICTED,
    &MSFT_EthernetPort_QuiesceDevice_MIReturn_Deprecated_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST MSFT_EthernetPort_QuiesceDevice_MIReturn_quals[] =
{
    &MSFT_EthernetPort_QuiesceDevice_MIReturn_Deprecated_qual,
};

/* parameter MSFT_EthernetPort.QuiesceDevice(): MIReturn */
static MI_CONST MI_ParameterDecl MSFT_EthernetPort_QuiesceDevice_MIReturn_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006D6E08, /* code */
    MI_T("MIReturn"), /* name */
    MSFT_EthernetPort_QuiesceDevice_MIReturn_quals, /* qualifiers */
    MI_COUNT(MSFT_EthernetPort_QuiesceDevice_MIReturn_quals), /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_EthernetPort_QuiesceDevice, MIReturn), /* offset */
};

static MI_ParameterDecl MI_CONST* MI_CONST MSFT_EthernetPort_QuiesceDevice_params[] =
{
    &MSFT_EthernetPort_QuiesceDevice_MIReturn_param,
    &MSFT_EthernetPort_QuiesceDevice_Quiesce_param,
};

/* method MSFT_EthernetPort.QuiesceDevice() */
MI_CONST MI_MethodDecl MSFT_EthernetPort_QuiesceDevice_rtti =
{
    MI_FLAG_METHOD, /* flags */
    0x0071650D, /* code */
    MI_T("QuiesceDevice"), /* name */
    MSFT_EthernetPort_QuiesceDevice_quals, /* qualifiers */
    MI_COUNT(MSFT_EthernetPort_QuiesceDevice_quals), /* numQualifiers */
    MSFT_EthernetPort_QuiesceDevice_params, /* parameters */
    MI_COUNT(MSFT_EthernetPort_QuiesceDevice_params), /* numParameters */
    sizeof(MSFT_EthernetPort_QuiesceDevice), /* size */
    MI_UINT32, /* returnType */
    MI_T("CIM_LogicalDevice"), /* origin */
    MI_T("CIM_LogicalDevice"), /* propagator */
    &schemaDecl, /* schema */
    (MI_ProviderFT_Invoke)MSFT_EthernetPort_Invoke_QuiesceDevice, /* method */
};

/* parameter MSFT_EthernetPort.SaveProperties(): MIReturn */
static MI_CONST MI_ParameterDecl MSFT_EthernetPort_SaveProperties_MIReturn_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006D6E08, /* code */
    MI_T("MIReturn"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_EthernetPort_SaveProperties, MIReturn), /* offset */
};

static MI_ParameterDecl MI_CONST* MI_CONST MSFT_EthernetPort_SaveProperties_params[] =
{
    &MSFT_EthernetPort_SaveProperties_MIReturn_param,
};

/* method MSFT_EthernetPort.SaveProperties() */
MI_CONST MI_MethodDecl MSFT_EthernetPort_SaveProperties_rtti =
{
    MI_FLAG_METHOD, /* flags */
    0x0073730E, /* code */
    MI_T("SaveProperties"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MSFT_EthernetPort_SaveProperties_params, /* parameters */
    MI_COUNT(MSFT_EthernetPort_SaveProperties_params), /* numParameters */
    sizeof(MSFT_EthernetPort_SaveProperties), /* size */
    MI_UINT32, /* returnType */
    MI_T("CIM_LogicalDevice"), /* origin */
    MI_T("CIM_LogicalDevice"), /* propagator */
    &schemaDecl, /* schema */
    (MI_ProviderFT_Invoke)MSFT_EthernetPort_Invoke_SaveProperties, /* method */
};

/* parameter MSFT_EthernetPort.RestoreProperties(): MIReturn */
static MI_CONST MI_ParameterDecl MSFT_EthernetPort_RestoreProperties_MIReturn_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006D6E08, /* code */
    MI_T("MIReturn"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_EthernetPort_RestoreProperties, MIReturn), /* offset */
};

static MI_ParameterDecl MI_CONST* MI_CONST MSFT_EthernetPort_RestoreProperties_params[] =
{
    &MSFT_EthernetPort_RestoreProperties_MIReturn_param,
};

/* method MSFT_EthernetPort.RestoreProperties() */
MI_CONST MI_MethodDecl MSFT_EthernetPort_RestoreProperties_rtti =
{
    MI_FLAG_METHOD, /* flags */
    0x00727311, /* code */
    MI_T("RestoreProperties"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MSFT_EthernetPort_RestoreProperties_params, /* parameters */
    MI_COUNT(MSFT_EthernetPort_RestoreProperties_params), /* numParameters */
    sizeof(MSFT_EthernetPort_RestoreProperties), /* size */
    MI_UINT32, /* returnType */
    MI_T("CIM_LogicalDevice"), /* origin */
    MI_T("CIM_LogicalDevice"), /* propagator */
    &schemaDecl, /* schema */
    (MI_ProviderFT_Invoke)MSFT_EthernetPort_Invoke_RestoreProperties, /* method */
};

static MI_MethodDecl MI_CONST* MI_CONST MSFT_EthernetPort_meths[] =
{
    &MSFT_EthernetPort_RequestStateChange_rtti,
    &MSFT_EthernetPort_SetPowerState_rtti,
    &MSFT_EthernetPort_Reset_rtti,
    &MSFT_EthernetPort_EnableDevice_rtti,
    &MSFT_EthernetPort_OnlineDevice_rtti,
    &MSFT_EthernetPort_QuiesceDevice_rtti,
    &MSFT_EthernetPort_SaveProperties_rtti,
    &MSFT_EthernetPort_RestoreProperties_rtti,
};

static MI_CONST MI_ProviderFT MSFT_EthernetPort_funcs =
{
  (MI_ProviderFT_Load)MSFT_EthernetPort_Load,
  (MI_ProviderFT_Unload)MSFT_EthernetPort_Unload,
  (MI_ProviderFT_GetInstance)MSFT_EthernetPort_GetInstance,
  (MI_ProviderFT_EnumerateInstances)MSFT_EthernetPort_EnumerateInstances,
  (MI_ProviderFT_CreateInstance)MSFT_EthernetPort_CreateInstance,
  (MI_ProviderFT_ModifyInstance)MSFT_EthernetPort_ModifyInstance,
  (MI_ProviderFT_DeleteInstance)MSFT_EthernetPort_DeleteInstance,
  (MI_ProviderFT_AssociatorInstances)NULL,
  (MI_ProviderFT_ReferenceInstances)NULL,
  (MI_ProviderFT_EnableIndications)NULL,
  (MI_ProviderFT_DisableIndications)NULL,
  (MI_ProviderFT_Subscribe)NULL,
  (MI_ProviderFT_Unsubscribe)NULL,
  (MI_ProviderFT_Invoke)NULL,
};

static MI_CONST MI_Char* MSFT_EthernetPort_UMLPackagePath_qual_value = MI_T("CIM::Device::Ports");

static MI_CONST MI_Qualifier MSFT_EthernetPort_UMLPackagePath_qual =
{
    MI_T("UMLPackagePath"),
    MI_STRING,
    0,
    &MSFT_EthernetPort_UMLPackagePath_qual_value
};

static MI_CONST MI_Char* MSFT_EthernetPort_Version_qual_value = MI_T("0.7");

static MI_CONST MI_Qualifier MSFT_EthernetPort_Version_qual =
{
    MI_T("Version"),
    MI_STRING,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_TRANSLATABLE|MI_FLAG_RESTRICTED,
    &MSFT_EthernetPort_Version_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST MSFT_EthernetPort_quals[] =
{
    &MSFT_EthernetPort_UMLPackagePath_qual,
    &MSFT_EthernetPort_Version_qual,
};

/* class MSFT_EthernetPort */
MI_CONST MI_ClassDecl MSFT_EthernetPort_rtti =
{
    MI_FLAG_CLASS, /* flags */
    0x006D7411, /* code */
    MI_T("MSFT_EthernetPort"), /* name */
    MSFT_EthernetPort_quals, /* qualifiers */
    MI_COUNT(MSFT_EthernetPort_quals), /* numQualifiers */
    MSFT_EthernetPort_props, /* properties */
    MI_COUNT(MSFT_EthernetPort_props), /* numProperties */
    sizeof(MSFT_EthernetPort), /* size */
    MI_T("CIM_EthernetPort"), /* superClass */
    &CIM_EthernetPort_rtti, /* superClassDecl */
    MSFT_EthernetPort_meths, /* methods */
    MI_COUNT(MSFT_EthernetPort_meths), /* numMethods */
    &schemaDecl, /* schema */
    &MSFT_EthernetPort_funcs, /* functions */
    NULL, /* owningClass */
};

/*
**==============================================================================
**
** CIM_SettingData
**
**==============================================================================
*/

static MI_CONST MI_Char* CIM_SettingData_InstanceID_Override_qual_value = MI_T("InstanceID");

static MI_CONST MI_Qualifier CIM_SettingData_InstanceID_Override_qual =
{
    MI_T("Override"),
    MI_STRING,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_RESTRICTED,
    &CIM_SettingData_InstanceID_Override_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_SettingData_InstanceID_quals[] =
{
    &CIM_SettingData_InstanceID_Override_qual,
};

/* property CIM_SettingData.InstanceID */
static MI_CONST MI_PropertyDecl CIM_SettingData_InstanceID_prop =
{
    MI_FLAG_PROPERTY|MI_FLAG_KEY, /* flags */
    0x0069640A, /* code */
    MI_T("InstanceID"), /* name */
    CIM_SettingData_InstanceID_quals, /* qualifiers */
    MI_COUNT(CIM_SettingData_InstanceID_quals), /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_SettingData, InstanceID), /* offset */
    MI_T("CIM_ManagedElement"), /* origin */
    MI_T("CIM_SettingData"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* CIM_SettingData_ElementName_Override_qual_value = MI_T("ElementName");

static MI_CONST MI_Qualifier CIM_SettingData_ElementName_Override_qual =
{
    MI_T("Override"),
    MI_STRING,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_RESTRICTED,
    &CIM_SettingData_ElementName_Override_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_SettingData_ElementName_quals[] =
{
    &CIM_SettingData_ElementName_Override_qual,
};

/* property CIM_SettingData.ElementName */
static MI_CONST MI_PropertyDecl CIM_SettingData_ElementName_prop =
{
    MI_FLAG_PROPERTY|MI_FLAG_REQUIRED, /* flags */
    0x0065650B, /* code */
    MI_T("ElementName"), /* name */
    CIM_SettingData_ElementName_quals, /* qualifiers */
    MI_COUNT(CIM_SettingData_ElementName_quals), /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_SettingData, ElementName), /* offset */
    MI_T("CIM_ManagedElement"), /* origin */
    MI_T("CIM_SettingData"), /* propagator */
    NULL,
};

static MI_PropertyDecl MI_CONST* MI_CONST CIM_SettingData_props[] =
{
    &CIM_SettingData_InstanceID_prop,
    &CIM_ManagedElement_Caption_prop,
    &CIM_ManagedElement_Description_prop,
    &CIM_SettingData_ElementName_prop,
};

static MI_CONST MI_Char* CIM_SettingData_UMLPackagePath_qual_value = MI_T("CIM::Core::Settings");

static MI_CONST MI_Qualifier CIM_SettingData_UMLPackagePath_qual =
{
    MI_T("UMLPackagePath"),
    MI_STRING,
    0,
    &CIM_SettingData_UMLPackagePath_qual_value
};

static MI_CONST MI_Char* CIM_SettingData_Version_qual_value = MI_T("2.19.0");

static MI_CONST MI_Qualifier CIM_SettingData_Version_qual =
{
    MI_T("Version"),
    MI_STRING,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_TRANSLATABLE|MI_FLAG_RESTRICTED,
    &CIM_SettingData_Version_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_SettingData_quals[] =
{
    &CIM_SettingData_UMLPackagePath_qual,
    &CIM_SettingData_Version_qual,
};

/* class CIM_SettingData */
MI_CONST MI_ClassDecl CIM_SettingData_rtti =
{
    MI_FLAG_CLASS|MI_FLAG_ABSTRACT, /* flags */
    0x0063610F, /* code */
    MI_T("CIM_SettingData"), /* name */
    CIM_SettingData_quals, /* qualifiers */
    MI_COUNT(CIM_SettingData_quals), /* numQualifiers */
    CIM_SettingData_props, /* properties */
    MI_COUNT(CIM_SettingData_props), /* numProperties */
    sizeof(CIM_SettingData), /* size */
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
** CIM_ResourceAllocationSettingData
**
**==============================================================================
*/

/* property CIM_ResourceAllocationSettingData.ResourceType */
static MI_CONST MI_PropertyDecl CIM_ResourceAllocationSettingData_ResourceType_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0072650C, /* code */
    MI_T("ResourceType"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_ResourceAllocationSettingData, ResourceType), /* offset */
    MI_T("CIM_ResourceAllocationSettingData"), /* origin */
    MI_T("CIM_ResourceAllocationSettingData"), /* propagator */
    NULL,
};

/* property CIM_ResourceAllocationSettingData.OtherResourceType */
static MI_CONST MI_PropertyDecl CIM_ResourceAllocationSettingData_OtherResourceType_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006F6511, /* code */
    MI_T("OtherResourceType"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_ResourceAllocationSettingData, OtherResourceType), /* offset */
    MI_T("CIM_ResourceAllocationSettingData"), /* origin */
    MI_T("CIM_ResourceAllocationSettingData"), /* propagator */
    NULL,
};

/* property CIM_ResourceAllocationSettingData.ResourceSubType */
static MI_CONST MI_PropertyDecl CIM_ResourceAllocationSettingData_ResourceSubType_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0072650F, /* code */
    MI_T("ResourceSubType"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_ResourceAllocationSettingData, ResourceSubType), /* offset */
    MI_T("CIM_ResourceAllocationSettingData"), /* origin */
    MI_T("CIM_ResourceAllocationSettingData"), /* propagator */
    NULL,
};

/* property CIM_ResourceAllocationSettingData.PoolID */
static MI_CONST MI_PropertyDecl CIM_ResourceAllocationSettingData_PoolID_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00706406, /* code */
    MI_T("PoolID"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_ResourceAllocationSettingData, PoolID), /* offset */
    MI_T("CIM_ResourceAllocationSettingData"), /* origin */
    MI_T("CIM_ResourceAllocationSettingData"), /* propagator */
    NULL,
};

/* property CIM_ResourceAllocationSettingData.ConsumerVisibility */
static MI_CONST MI_PropertyDecl CIM_ResourceAllocationSettingData_ConsumerVisibility_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00637912, /* code */
    MI_T("ConsumerVisibility"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_ResourceAllocationSettingData, ConsumerVisibility), /* offset */
    MI_T("CIM_ResourceAllocationSettingData"), /* origin */
    MI_T("CIM_ResourceAllocationSettingData"), /* propagator */
    NULL,
};

/* property CIM_ResourceAllocationSettingData.HostResource */
static MI_CONST MI_PropertyDecl CIM_ResourceAllocationSettingData_HostResource_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0068650C, /* code */
    MI_T("HostResource"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRINGA, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_ResourceAllocationSettingData, HostResource), /* offset */
    MI_T("CIM_ResourceAllocationSettingData"), /* origin */
    MI_T("CIM_ResourceAllocationSettingData"), /* propagator */
    NULL,
};

/* property CIM_ResourceAllocationSettingData.AllocationUnits */
static MI_CONST MI_PropertyDecl CIM_ResourceAllocationSettingData_AllocationUnits_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0061730F, /* code */
    MI_T("AllocationUnits"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_ResourceAllocationSettingData, AllocationUnits), /* offset */
    MI_T("CIM_ResourceAllocationSettingData"), /* origin */
    MI_T("CIM_ResourceAllocationSettingData"), /* propagator */
    NULL,
};

/* property CIM_ResourceAllocationSettingData.VirtualQuantity */
static MI_CONST MI_PropertyDecl CIM_ResourceAllocationSettingData_VirtualQuantity_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0076790F, /* code */
    MI_T("VirtualQuantity"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT64, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_ResourceAllocationSettingData, VirtualQuantity), /* offset */
    MI_T("CIM_ResourceAllocationSettingData"), /* origin */
    MI_T("CIM_ResourceAllocationSettingData"), /* propagator */
    NULL,
};

/* property CIM_ResourceAllocationSettingData.Reservation */
static MI_CONST MI_PropertyDecl CIM_ResourceAllocationSettingData_Reservation_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00726E0B, /* code */
    MI_T("Reservation"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT64, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_ResourceAllocationSettingData, Reservation), /* offset */
    MI_T("CIM_ResourceAllocationSettingData"), /* origin */
    MI_T("CIM_ResourceAllocationSettingData"), /* propagator */
    NULL,
};

/* property CIM_ResourceAllocationSettingData.Limit */
static MI_CONST MI_PropertyDecl CIM_ResourceAllocationSettingData_Limit_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006C7405, /* code */
    MI_T("Limit"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT64, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_ResourceAllocationSettingData, Limit), /* offset */
    MI_T("CIM_ResourceAllocationSettingData"), /* origin */
    MI_T("CIM_ResourceAllocationSettingData"), /* propagator */
    NULL,
};

/* property CIM_ResourceAllocationSettingData.Weight */
static MI_CONST MI_PropertyDecl CIM_ResourceAllocationSettingData_Weight_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00777406, /* code */
    MI_T("Weight"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_ResourceAllocationSettingData, Weight), /* offset */
    MI_T("CIM_ResourceAllocationSettingData"), /* origin */
    MI_T("CIM_ResourceAllocationSettingData"), /* propagator */
    NULL,
};

/* property CIM_ResourceAllocationSettingData.AutomaticAllocation */
static MI_CONST MI_PropertyDecl CIM_ResourceAllocationSettingData_AutomaticAllocation_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00616E13, /* code */
    MI_T("AutomaticAllocation"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_BOOLEAN, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_ResourceAllocationSettingData, AutomaticAllocation), /* offset */
    MI_T("CIM_ResourceAllocationSettingData"), /* origin */
    MI_T("CIM_ResourceAllocationSettingData"), /* propagator */
    NULL,
};

/* property CIM_ResourceAllocationSettingData.AutomaticDeallocation */
static MI_CONST MI_PropertyDecl CIM_ResourceAllocationSettingData_AutomaticDeallocation_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00616E15, /* code */
    MI_T("AutomaticDeallocation"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_BOOLEAN, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_ResourceAllocationSettingData, AutomaticDeallocation), /* offset */
    MI_T("CIM_ResourceAllocationSettingData"), /* origin */
    MI_T("CIM_ResourceAllocationSettingData"), /* propagator */
    NULL,
};

/* property CIM_ResourceAllocationSettingData.Parent */
static MI_CONST MI_PropertyDecl CIM_ResourceAllocationSettingData_Parent_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00707406, /* code */
    MI_T("Parent"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_ResourceAllocationSettingData, Parent), /* offset */
    MI_T("CIM_ResourceAllocationSettingData"), /* origin */
    MI_T("CIM_ResourceAllocationSettingData"), /* propagator */
    NULL,
};

/* property CIM_ResourceAllocationSettingData.Connection */
static MI_CONST MI_PropertyDecl CIM_ResourceAllocationSettingData_Connection_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00636E0A, /* code */
    MI_T("Connection"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRINGA, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_ResourceAllocationSettingData, Connection), /* offset */
    MI_T("CIM_ResourceAllocationSettingData"), /* origin */
    MI_T("CIM_ResourceAllocationSettingData"), /* propagator */
    NULL,
};

/* property CIM_ResourceAllocationSettingData.Address */
static MI_CONST MI_PropertyDecl CIM_ResourceAllocationSettingData_Address_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00617307, /* code */
    MI_T("Address"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_ResourceAllocationSettingData, Address), /* offset */
    MI_T("CIM_ResourceAllocationSettingData"), /* origin */
    MI_T("CIM_ResourceAllocationSettingData"), /* propagator */
    NULL,
};

/* property CIM_ResourceAllocationSettingData.MappingBehavior */
static MI_CONST MI_PropertyDecl CIM_ResourceAllocationSettingData_MappingBehavior_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006D720F, /* code */
    MI_T("MappingBehavior"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_ResourceAllocationSettingData, MappingBehavior), /* offset */
    MI_T("CIM_ResourceAllocationSettingData"), /* origin */
    MI_T("CIM_ResourceAllocationSettingData"), /* propagator */
    NULL,
};

/* property CIM_ResourceAllocationSettingData.AddressOnParent */
static MI_CONST MI_PropertyDecl CIM_ResourceAllocationSettingData_AddressOnParent_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0061740F, /* code */
    MI_T("AddressOnParent"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_ResourceAllocationSettingData, AddressOnParent), /* offset */
    MI_T("CIM_ResourceAllocationSettingData"), /* origin */
    MI_T("CIM_ResourceAllocationSettingData"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* CIM_ResourceAllocationSettingData_VirtualQuantityUnits_value = MI_T("count");

/* property CIM_ResourceAllocationSettingData.VirtualQuantityUnits */
static MI_CONST MI_PropertyDecl CIM_ResourceAllocationSettingData_VirtualQuantityUnits_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00767314, /* code */
    MI_T("VirtualQuantityUnits"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_ResourceAllocationSettingData, VirtualQuantityUnits), /* offset */
    MI_T("CIM_ResourceAllocationSettingData"), /* origin */
    MI_T("CIM_ResourceAllocationSettingData"), /* propagator */
    &CIM_ResourceAllocationSettingData_VirtualQuantityUnits_value,
};

static MI_PropertyDecl MI_CONST* MI_CONST CIM_ResourceAllocationSettingData_props[] =
{
    &CIM_SettingData_InstanceID_prop,
    &CIM_ManagedElement_Caption_prop,
    &CIM_ManagedElement_Description_prop,
    &CIM_SettingData_ElementName_prop,
    &CIM_ResourceAllocationSettingData_ResourceType_prop,
    &CIM_ResourceAllocationSettingData_OtherResourceType_prop,
    &CIM_ResourceAllocationSettingData_ResourceSubType_prop,
    &CIM_ResourceAllocationSettingData_PoolID_prop,
    &CIM_ResourceAllocationSettingData_ConsumerVisibility_prop,
    &CIM_ResourceAllocationSettingData_HostResource_prop,
    &CIM_ResourceAllocationSettingData_AllocationUnits_prop,
    &CIM_ResourceAllocationSettingData_VirtualQuantity_prop,
    &CIM_ResourceAllocationSettingData_Reservation_prop,
    &CIM_ResourceAllocationSettingData_Limit_prop,
    &CIM_ResourceAllocationSettingData_Weight_prop,
    &CIM_ResourceAllocationSettingData_AutomaticAllocation_prop,
    &CIM_ResourceAllocationSettingData_AutomaticDeallocation_prop,
    &CIM_ResourceAllocationSettingData_Parent_prop,
    &CIM_ResourceAllocationSettingData_Connection_prop,
    &CIM_ResourceAllocationSettingData_Address_prop,
    &CIM_ResourceAllocationSettingData_MappingBehavior_prop,
    &CIM_ResourceAllocationSettingData_AddressOnParent_prop,
    &CIM_ResourceAllocationSettingData_VirtualQuantityUnits_prop,
};

static MI_CONST MI_Char* CIM_ResourceAllocationSettingData_UMLPackagePath_qual_value = MI_T("CIM::Core::Resource");

static MI_CONST MI_Qualifier CIM_ResourceAllocationSettingData_UMLPackagePath_qual =
{
    MI_T("UMLPackagePath"),
    MI_STRING,
    0,
    &CIM_ResourceAllocationSettingData_UMLPackagePath_qual_value
};

static MI_CONST MI_Char* CIM_ResourceAllocationSettingData_Version_qual_value = MI_T("2.24.0");

static MI_CONST MI_Qualifier CIM_ResourceAllocationSettingData_Version_qual =
{
    MI_T("Version"),
    MI_STRING,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_TRANSLATABLE|MI_FLAG_RESTRICTED,
    &CIM_ResourceAllocationSettingData_Version_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_ResourceAllocationSettingData_quals[] =
{
    &CIM_ResourceAllocationSettingData_UMLPackagePath_qual,
    &CIM_ResourceAllocationSettingData_Version_qual,
};

/* class CIM_ResourceAllocationSettingData */
MI_CONST MI_ClassDecl CIM_ResourceAllocationSettingData_rtti =
{
    MI_FLAG_CLASS, /* flags */
    0x00636121, /* code */
    MI_T("CIM_ResourceAllocationSettingData"), /* name */
    CIM_ResourceAllocationSettingData_quals, /* qualifiers */
    MI_COUNT(CIM_ResourceAllocationSettingData_quals), /* numQualifiers */
    CIM_ResourceAllocationSettingData_props, /* properties */
    MI_COUNT(CIM_ResourceAllocationSettingData_props), /* numProperties */
    sizeof(CIM_ResourceAllocationSettingData), /* size */
    MI_T("CIM_SettingData"), /* superClass */
    &CIM_SettingData_rtti, /* superClassDecl */
    NULL, /* methods */
    0, /* numMethods */
    &schemaDecl, /* schema */
    NULL, /* functions */
    NULL, /* owningClass */
};

/*
**==============================================================================
**
** CIM_EthernetPortAllocationSettingData
**
**==============================================================================
*/

/* property CIM_EthernetPortAllocationSettingData.DesiredVLANEndpointMode */
static MI_CONST MI_PropertyDecl CIM_EthernetPortAllocationSettingData_DesiredVLANEndpointMode_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00646517, /* code */
    MI_T("DesiredVLANEndpointMode"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_EthernetPortAllocationSettingData, DesiredVLANEndpointMode), /* offset */
    MI_T("CIM_EthernetPortAllocationSettingData"), /* origin */
    MI_T("CIM_EthernetPortAllocationSettingData"), /* propagator */
    NULL,
};

/* property CIM_EthernetPortAllocationSettingData.OtherEndpointMode */
static MI_CONST MI_PropertyDecl CIM_EthernetPortAllocationSettingData_OtherEndpointMode_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006F6511, /* code */
    MI_T("OtherEndpointMode"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_EthernetPortAllocationSettingData, OtherEndpointMode), /* offset */
    MI_T("CIM_EthernetPortAllocationSettingData"), /* origin */
    MI_T("CIM_EthernetPortAllocationSettingData"), /* propagator */
    NULL,
};

/* property CIM_EthernetPortAllocationSettingData.AllowedPriorities */
static MI_CONST MI_PropertyDecl CIM_EthernetPortAllocationSettingData_AllowedPriorities_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00617311, /* code */
    MI_T("AllowedPriorities"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16A, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_EthernetPortAllocationSettingData, AllowedPriorities), /* offset */
    MI_T("CIM_EthernetPortAllocationSettingData"), /* origin */
    MI_T("CIM_EthernetPortAllocationSettingData"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* CIM_EthernetPortAllocationSettingData_AllowedToReceiveMACAddresses_ArrayType_qual_value = MI_T("Indexed");

static MI_CONST MI_Qualifier CIM_EthernetPortAllocationSettingData_AllowedToReceiveMACAddresses_ArrayType_qual =
{
    MI_T("ArrayType"),
    MI_STRING,
    MI_FLAG_DISABLEOVERRIDE|MI_FLAG_TOSUBCLASS,
    &CIM_EthernetPortAllocationSettingData_AllowedToReceiveMACAddresses_ArrayType_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_EthernetPortAllocationSettingData_AllowedToReceiveMACAddresses_quals[] =
{
    &CIM_EthernetPortAllocationSettingData_AllowedToReceiveMACAddresses_ArrayType_qual,
};

/* property CIM_EthernetPortAllocationSettingData.AllowedToReceiveMACAddresses */
static MI_CONST MI_PropertyDecl CIM_EthernetPortAllocationSettingData_AllowedToReceiveMACAddresses_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0061731C, /* code */
    MI_T("AllowedToReceiveMACAddresses"), /* name */
    CIM_EthernetPortAllocationSettingData_AllowedToReceiveMACAddresses_quals, /* qualifiers */
    MI_COUNT(CIM_EthernetPortAllocationSettingData_AllowedToReceiveMACAddresses_quals), /* numQualifiers */
    MI_STRINGA, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_EthernetPortAllocationSettingData, AllowedToReceiveMACAddresses), /* offset */
    MI_T("CIM_EthernetPortAllocationSettingData"), /* origin */
    MI_T("CIM_EthernetPortAllocationSettingData"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* CIM_EthernetPortAllocationSettingData_AllowedToReceiveVLANs_ArrayType_qual_value = MI_T("Indexed");

static MI_CONST MI_Qualifier CIM_EthernetPortAllocationSettingData_AllowedToReceiveVLANs_ArrayType_qual =
{
    MI_T("ArrayType"),
    MI_STRING,
    MI_FLAG_DISABLEOVERRIDE|MI_FLAG_TOSUBCLASS,
    &CIM_EthernetPortAllocationSettingData_AllowedToReceiveVLANs_ArrayType_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_EthernetPortAllocationSettingData_AllowedToReceiveVLANs_quals[] =
{
    &CIM_EthernetPortAllocationSettingData_AllowedToReceiveVLANs_ArrayType_qual,
};

/* property CIM_EthernetPortAllocationSettingData.AllowedToReceiveVLANs */
static MI_CONST MI_PropertyDecl CIM_EthernetPortAllocationSettingData_AllowedToReceiveVLANs_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00617315, /* code */
    MI_T("AllowedToReceiveVLANs"), /* name */
    CIM_EthernetPortAllocationSettingData_AllowedToReceiveVLANs_quals, /* qualifiers */
    MI_COUNT(CIM_EthernetPortAllocationSettingData_AllowedToReceiveVLANs_quals), /* numQualifiers */
    MI_UINT16A, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_EthernetPortAllocationSettingData, AllowedToReceiveVLANs), /* offset */
    MI_T("CIM_EthernetPortAllocationSettingData"), /* origin */
    MI_T("CIM_EthernetPortAllocationSettingData"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* CIM_EthernetPortAllocationSettingData_AllowedToTransmitMACAddresses_ArrayType_qual_value = MI_T("Indexed");

static MI_CONST MI_Qualifier CIM_EthernetPortAllocationSettingData_AllowedToTransmitMACAddresses_ArrayType_qual =
{
    MI_T("ArrayType"),
    MI_STRING,
    MI_FLAG_DISABLEOVERRIDE|MI_FLAG_TOSUBCLASS,
    &CIM_EthernetPortAllocationSettingData_AllowedToTransmitMACAddresses_ArrayType_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_EthernetPortAllocationSettingData_AllowedToTransmitMACAddresses_quals[] =
{
    &CIM_EthernetPortAllocationSettingData_AllowedToTransmitMACAddresses_ArrayType_qual,
};

/* property CIM_EthernetPortAllocationSettingData.AllowedToTransmitMACAddresses */
static MI_CONST MI_PropertyDecl CIM_EthernetPortAllocationSettingData_AllowedToTransmitMACAddresses_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0061731D, /* code */
    MI_T("AllowedToTransmitMACAddresses"), /* name */
    CIM_EthernetPortAllocationSettingData_AllowedToTransmitMACAddresses_quals, /* qualifiers */
    MI_COUNT(CIM_EthernetPortAllocationSettingData_AllowedToTransmitMACAddresses_quals), /* numQualifiers */
    MI_STRINGA, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_EthernetPortAllocationSettingData, AllowedToTransmitMACAddresses), /* offset */
    MI_T("CIM_EthernetPortAllocationSettingData"), /* origin */
    MI_T("CIM_EthernetPortAllocationSettingData"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* CIM_EthernetPortAllocationSettingData_AllowedToTransmitVLANs_ArrayType_qual_value = MI_T("Indexed");

static MI_CONST MI_Qualifier CIM_EthernetPortAllocationSettingData_AllowedToTransmitVLANs_ArrayType_qual =
{
    MI_T("ArrayType"),
    MI_STRING,
    MI_FLAG_DISABLEOVERRIDE|MI_FLAG_TOSUBCLASS,
    &CIM_EthernetPortAllocationSettingData_AllowedToTransmitVLANs_ArrayType_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_EthernetPortAllocationSettingData_AllowedToTransmitVLANs_quals[] =
{
    &CIM_EthernetPortAllocationSettingData_AllowedToTransmitVLANs_ArrayType_qual,
};

/* property CIM_EthernetPortAllocationSettingData.AllowedToTransmitVLANs */
static MI_CONST MI_PropertyDecl CIM_EthernetPortAllocationSettingData_AllowedToTransmitVLANs_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00617316, /* code */
    MI_T("AllowedToTransmitVLANs"), /* name */
    CIM_EthernetPortAllocationSettingData_AllowedToTransmitVLANs_quals, /* qualifiers */
    MI_COUNT(CIM_EthernetPortAllocationSettingData_AllowedToTransmitVLANs_quals), /* numQualifiers */
    MI_UINT16A, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_EthernetPortAllocationSettingData, AllowedToTransmitVLANs), /* offset */
    MI_T("CIM_EthernetPortAllocationSettingData"), /* origin */
    MI_T("CIM_EthernetPortAllocationSettingData"), /* propagator */
    NULL,
};

/* property CIM_EthernetPortAllocationSettingData.DefaultPortVID */
static MI_CONST MI_PropertyDecl CIM_EthernetPortAllocationSettingData_DefaultPortVID_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0064640E, /* code */
    MI_T("DefaultPortVID"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_EthernetPortAllocationSettingData, DefaultPortVID), /* offset */
    MI_T("CIM_EthernetPortAllocationSettingData"), /* origin */
    MI_T("CIM_EthernetPortAllocationSettingData"), /* propagator */
    NULL,
};

/* property CIM_EthernetPortAllocationSettingData.DefaultPriority */
static MI_CONST MI_PropertyDecl CIM_EthernetPortAllocationSettingData_DefaultPriority_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0064790F, /* code */
    MI_T("DefaultPriority"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_EthernetPortAllocationSettingData, DefaultPriority), /* offset */
    MI_T("CIM_EthernetPortAllocationSettingData"), /* origin */
    MI_T("CIM_EthernetPortAllocationSettingData"), /* propagator */
    NULL,
};

/* property CIM_EthernetPortAllocationSettingData.GroupID */
static MI_CONST MI_PropertyDecl CIM_EthernetPortAllocationSettingData_GroupID_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00676407, /* code */
    MI_T("GroupID"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_EthernetPortAllocationSettingData, GroupID), /* offset */
    MI_T("CIM_EthernetPortAllocationSettingData"), /* origin */
    MI_T("CIM_EthernetPortAllocationSettingData"), /* propagator */
    NULL,
};

/* property CIM_EthernetPortAllocationSettingData.ManagerID */
static MI_CONST MI_PropertyDecl CIM_EthernetPortAllocationSettingData_ManagerID_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006D6409, /* code */
    MI_T("ManagerID"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_EthernetPortAllocationSettingData, ManagerID), /* offset */
    MI_T("CIM_EthernetPortAllocationSettingData"), /* origin */
    MI_T("CIM_EthernetPortAllocationSettingData"), /* propagator */
    NULL,
};

/* property CIM_EthernetPortAllocationSettingData.NetworkPortProfileID */
static MI_CONST MI_PropertyDecl CIM_EthernetPortAllocationSettingData_NetworkPortProfileID_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006E6414, /* code */
    MI_T("NetworkPortProfileID"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_EthernetPortAllocationSettingData, NetworkPortProfileID), /* offset */
    MI_T("CIM_EthernetPortAllocationSettingData"), /* origin */
    MI_T("CIM_EthernetPortAllocationSettingData"), /* propagator */
    NULL,
};

/* property CIM_EthernetPortAllocationSettingData.NetworkPortProfileIDType */
static MI_CONST MI_PropertyDecl CIM_EthernetPortAllocationSettingData_NetworkPortProfileIDType_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006E6518, /* code */
    MI_T("NetworkPortProfileIDType"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_EthernetPortAllocationSettingData, NetworkPortProfileIDType), /* offset */
    MI_T("CIM_EthernetPortAllocationSettingData"), /* origin */
    MI_T("CIM_EthernetPortAllocationSettingData"), /* propagator */
    NULL,
};

/* property CIM_EthernetPortAllocationSettingData.OtherNetworkPortProfileIDTypeInfo */
static MI_CONST MI_PropertyDecl CIM_EthernetPortAllocationSettingData_OtherNetworkPortProfileIDTypeInfo_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006F6F21, /* code */
    MI_T("OtherNetworkPortProfileIDTypeInfo"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_EthernetPortAllocationSettingData, OtherNetworkPortProfileIDTypeInfo), /* offset */
    MI_T("CIM_EthernetPortAllocationSettingData"), /* origin */
    MI_T("CIM_EthernetPortAllocationSettingData"), /* propagator */
    NULL,
};

/* property CIM_EthernetPortAllocationSettingData.PortCorrelationID */
static MI_CONST MI_PropertyDecl CIM_EthernetPortAllocationSettingData_PortCorrelationID_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00706411, /* code */
    MI_T("PortCorrelationID"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_EthernetPortAllocationSettingData, PortCorrelationID), /* offset */
    MI_T("CIM_EthernetPortAllocationSettingData"), /* origin */
    MI_T("CIM_EthernetPortAllocationSettingData"), /* propagator */
    NULL,
};

/* property CIM_EthernetPortAllocationSettingData.PortVID */
static MI_CONST MI_PropertyDecl CIM_EthernetPortAllocationSettingData_PortVID_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00706407, /* code */
    MI_T("PortVID"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_EthernetPortAllocationSettingData, PortVID), /* offset */
    MI_T("CIM_EthernetPortAllocationSettingData"), /* origin */
    MI_T("CIM_EthernetPortAllocationSettingData"), /* propagator */
    NULL,
};

/* property CIM_EthernetPortAllocationSettingData.Promiscuous */
static MI_CONST MI_PropertyDecl CIM_EthernetPortAllocationSettingData_Promiscuous_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0070730B, /* code */
    MI_T("Promiscuous"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_BOOLEAN, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_EthernetPortAllocationSettingData, Promiscuous), /* offset */
    MI_T("CIM_EthernetPortAllocationSettingData"), /* origin */
    MI_T("CIM_EthernetPortAllocationSettingData"), /* propagator */
    NULL,
};

/* property CIM_EthernetPortAllocationSettingData.ReceiveBandwidthLimit */
static MI_CONST MI_PropertyDecl CIM_EthernetPortAllocationSettingData_ReceiveBandwidthLimit_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00727415, /* code */
    MI_T("ReceiveBandwidthLimit"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT64, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_EthernetPortAllocationSettingData, ReceiveBandwidthLimit), /* offset */
    MI_T("CIM_EthernetPortAllocationSettingData"), /* origin */
    MI_T("CIM_EthernetPortAllocationSettingData"), /* propagator */
    NULL,
};

/* property CIM_EthernetPortAllocationSettingData.ReceiveBandwidthReservation */
static MI_CONST MI_PropertyDecl CIM_EthernetPortAllocationSettingData_ReceiveBandwidthReservation_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00726E1B, /* code */
    MI_T("ReceiveBandwidthReservation"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT64, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_EthernetPortAllocationSettingData, ReceiveBandwidthReservation), /* offset */
    MI_T("CIM_EthernetPortAllocationSettingData"), /* origin */
    MI_T("CIM_EthernetPortAllocationSettingData"), /* propagator */
    NULL,
};

/* property CIM_EthernetPortAllocationSettingData.SourceMACFilteringEnabled */
static MI_CONST MI_PropertyDecl CIM_EthernetPortAllocationSettingData_SourceMACFilteringEnabled_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00736419, /* code */
    MI_T("SourceMACFilteringEnabled"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_BOOLEAN, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_EthernetPortAllocationSettingData, SourceMACFilteringEnabled), /* offset */
    MI_T("CIM_EthernetPortAllocationSettingData"), /* origin */
    MI_T("CIM_EthernetPortAllocationSettingData"), /* propagator */
    NULL,
};

static MI_PropertyDecl MI_CONST* MI_CONST CIM_EthernetPortAllocationSettingData_props[] =
{
    &CIM_SettingData_InstanceID_prop,
    &CIM_ManagedElement_Caption_prop,
    &CIM_ManagedElement_Description_prop,
    &CIM_SettingData_ElementName_prop,
    &CIM_ResourceAllocationSettingData_ResourceType_prop,
    &CIM_ResourceAllocationSettingData_OtherResourceType_prop,
    &CIM_ResourceAllocationSettingData_ResourceSubType_prop,
    &CIM_ResourceAllocationSettingData_PoolID_prop,
    &CIM_ResourceAllocationSettingData_ConsumerVisibility_prop,
    &CIM_ResourceAllocationSettingData_HostResource_prop,
    &CIM_ResourceAllocationSettingData_AllocationUnits_prop,
    &CIM_ResourceAllocationSettingData_VirtualQuantity_prop,
    &CIM_ResourceAllocationSettingData_Reservation_prop,
    &CIM_ResourceAllocationSettingData_Limit_prop,
    &CIM_ResourceAllocationSettingData_Weight_prop,
    &CIM_ResourceAllocationSettingData_AutomaticAllocation_prop,
    &CIM_ResourceAllocationSettingData_AutomaticDeallocation_prop,
    &CIM_ResourceAllocationSettingData_Parent_prop,
    &CIM_ResourceAllocationSettingData_Connection_prop,
    &CIM_ResourceAllocationSettingData_Address_prop,
    &CIM_ResourceAllocationSettingData_MappingBehavior_prop,
    &CIM_ResourceAllocationSettingData_AddressOnParent_prop,
    &CIM_ResourceAllocationSettingData_VirtualQuantityUnits_prop,
    &CIM_EthernetPortAllocationSettingData_DesiredVLANEndpointMode_prop,
    &CIM_EthernetPortAllocationSettingData_OtherEndpointMode_prop,
    &CIM_EthernetPortAllocationSettingData_AllowedPriorities_prop,
    &CIM_EthernetPortAllocationSettingData_AllowedToReceiveMACAddresses_prop,
    &CIM_EthernetPortAllocationSettingData_AllowedToReceiveVLANs_prop,
    &CIM_EthernetPortAllocationSettingData_AllowedToTransmitMACAddresses_prop,
    &CIM_EthernetPortAllocationSettingData_AllowedToTransmitVLANs_prop,
    &CIM_EthernetPortAllocationSettingData_DefaultPortVID_prop,
    &CIM_EthernetPortAllocationSettingData_DefaultPriority_prop,
    &CIM_EthernetPortAllocationSettingData_GroupID_prop,
    &CIM_EthernetPortAllocationSettingData_ManagerID_prop,
    &CIM_EthernetPortAllocationSettingData_NetworkPortProfileID_prop,
    &CIM_EthernetPortAllocationSettingData_NetworkPortProfileIDType_prop,
    &CIM_EthernetPortAllocationSettingData_OtherNetworkPortProfileIDTypeInfo_prop,
    &CIM_EthernetPortAllocationSettingData_PortCorrelationID_prop,
    &CIM_EthernetPortAllocationSettingData_PortVID_prop,
    &CIM_EthernetPortAllocationSettingData_Promiscuous_prop,
    &CIM_EthernetPortAllocationSettingData_ReceiveBandwidthLimit_prop,
    &CIM_EthernetPortAllocationSettingData_ReceiveBandwidthReservation_prop,
    &CIM_EthernetPortAllocationSettingData_SourceMACFilteringEnabled_prop,
};

static MI_CONST MI_ProviderFT CIM_EthernetPortAllocationSettingData_funcs =
{
  (MI_ProviderFT_Load)CIM_EthernetPortAllocationSettingData_Load,
  (MI_ProviderFT_Unload)CIM_EthernetPortAllocationSettingData_Unload,
  (MI_ProviderFT_GetInstance)CIM_EthernetPortAllocationSettingData_GetInstance,
  (MI_ProviderFT_EnumerateInstances)CIM_EthernetPortAllocationSettingData_EnumerateInstances,
  (MI_ProviderFT_CreateInstance)CIM_EthernetPortAllocationSettingData_CreateInstance,
  (MI_ProviderFT_ModifyInstance)CIM_EthernetPortAllocationSettingData_ModifyInstance,
  (MI_ProviderFT_DeleteInstance)CIM_EthernetPortAllocationSettingData_DeleteInstance,
  (MI_ProviderFT_AssociatorInstances)NULL,
  (MI_ProviderFT_ReferenceInstances)NULL,
  (MI_ProviderFT_EnableIndications)NULL,
  (MI_ProviderFT_DisableIndications)NULL,
  (MI_ProviderFT_Subscribe)NULL,
  (MI_ProviderFT_Unsubscribe)NULL,
  (MI_ProviderFT_Invoke)NULL,
};

static MI_CONST MI_Char* CIM_EthernetPortAllocationSettingData_UMLPackagePath_qual_value = MI_T("CIM::Core::Resource");

static MI_CONST MI_Qualifier CIM_EthernetPortAllocationSettingData_UMLPackagePath_qual =
{
    MI_T("UMLPackagePath"),
    MI_STRING,
    0,
    &CIM_EthernetPortAllocationSettingData_UMLPackagePath_qual_value
};

static MI_CONST MI_Char* CIM_EthernetPortAllocationSettingData_Version_qual_value = MI_T("2.29.0");

static MI_CONST MI_Qualifier CIM_EthernetPortAllocationSettingData_Version_qual =
{
    MI_T("Version"),
    MI_STRING,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_TRANSLATABLE|MI_FLAG_RESTRICTED,
    &CIM_EthernetPortAllocationSettingData_Version_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_EthernetPortAllocationSettingData_quals[] =
{
    &CIM_EthernetPortAllocationSettingData_UMLPackagePath_qual,
    &CIM_EthernetPortAllocationSettingData_Version_qual,
};

/* class CIM_EthernetPortAllocationSettingData */
MI_CONST MI_ClassDecl CIM_EthernetPortAllocationSettingData_rtti =
{
    MI_FLAG_CLASS, /* flags */
    0x00636125, /* code */
    MI_T("CIM_EthernetPortAllocationSettingData"), /* name */
    CIM_EthernetPortAllocationSettingData_quals, /* qualifiers */
    MI_COUNT(CIM_EthernetPortAllocationSettingData_quals), /* numQualifiers */
    CIM_EthernetPortAllocationSettingData_props, /* properties */
    MI_COUNT(CIM_EthernetPortAllocationSettingData_props), /* numProperties */
    sizeof(CIM_EthernetPortAllocationSettingData), /* size */
    MI_T("CIM_ResourceAllocationSettingData"), /* superClass */
    &CIM_ResourceAllocationSettingData_rtti, /* superClassDecl */
    NULL, /* methods */
    0, /* numMethods */
    &schemaDecl, /* schema */
    &CIM_EthernetPortAllocationSettingData_funcs, /* functions */
    NULL, /* owningClass */
};

/*
**==============================================================================
**
** CIM_EthPortAssocationData
**
**==============================================================================
*/

/* property CIM_EthPortAssocationData.Left */
static MI_CONST MI_PropertyDecl CIM_EthPortAssocationData_Left_prop =
{
    MI_FLAG_PROPERTY|MI_FLAG_KEY, /* flags */
    0x006C7404, /* code */
    MI_T("Left"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("MSFT_EthernetPort"), /* className */
    0, /* subscript */
    offsetof(CIM_EthPortAssocationData, Left), /* offset */
    MI_T("CIM_EthPortAssocationData"), /* origin */
    MI_T("CIM_EthPortAssocationData"), /* propagator */
    NULL,
};

/* property CIM_EthPortAssocationData.Right */
static MI_CONST MI_PropertyDecl CIM_EthPortAssocationData_Right_prop =
{
    MI_FLAG_PROPERTY|MI_FLAG_KEY, /* flags */
    0x00727405, /* code */
    MI_T("Right"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("CIM_EthernetPortAllocationSettingData"), /* className */
    0, /* subscript */
    offsetof(CIM_EthPortAssocationData, Right), /* offset */
    MI_T("CIM_EthPortAssocationData"), /* origin */
    MI_T("CIM_EthPortAssocationData"), /* propagator */
    NULL,
};

static MI_PropertyDecl MI_CONST* MI_CONST CIM_EthPortAssocationData_props[] =
{
    &CIM_EthPortAssocationData_Left_prop,
    &CIM_EthPortAssocationData_Right_prop,
};

static void MI_CALL CIM_EthPortAssocationData_AssociatorInstances(
    CIM_EthPortAssocationData_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Instance* instanceName,
    const MI_Char* resultClass,
    const MI_Char* role,
    const MI_Char* resultRole,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    if (MSFT_EthernetPort_IsA(instanceName))
    {
        if (_Match(role, MI_T("Left")) && 
            _Match(resultRole, MI_T("Right")))
        {
            CIM_EthPortAssocationData_AssociatorInstancesLeft(
                self, 
                context, 
                nameSpace, 
                className, 
                (MSFT_EthernetPort*)instanceName, 
                resultClass, 
                propertySet, 
                keysOnly, 
                filter);
            return;
        }
    }

    if (CIM_EthernetPortAllocationSettingData_IsA(instanceName))
    {
        if (_Match(role, MI_T("Right")) && 
            _Match(resultRole, MI_T("Left")))
        {
            CIM_EthPortAssocationData_AssociatorInstancesRight(
                self, 
                context, 
                nameSpace, 
                className, 
                (CIM_EthernetPortAllocationSettingData*)instanceName, 
                resultClass, 
                propertySet, 
                keysOnly, 
                filter);
            return;
        }
    }

    MI_Context_PostResult(context, MI_RESULT_OK);
}

static void MI_CALL CIM_EthPortAssocationData_ReferenceInstances(
    CIM_EthPortAssocationData_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Instance* instanceName,
    const MI_Char* role,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    if (MSFT_EthernetPort_IsA(instanceName))
    {
        if (_Match(role, MI_T("Left")))
        {
            CIM_EthPortAssocationData_ReferenceInstancesLeft(
                self, 
                context, 
                nameSpace, 
                className, 
                (MSFT_EthernetPort*)instanceName, 
                propertySet, 
                keysOnly, 
                filter);
            return;
        }
    }

    if (CIM_EthernetPortAllocationSettingData_IsA(instanceName))
    {
        if (_Match(role, MI_T("Right")))
        {
            CIM_EthPortAssocationData_ReferenceInstancesRight(
                self, 
                context, 
                nameSpace, 
                className, 
                (CIM_EthernetPortAllocationSettingData*)instanceName, 
                propertySet, 
                keysOnly, 
                filter);
            return;
        }
    }

    MI_Context_PostResult(context, MI_RESULT_OK);
}

static MI_CONST MI_ProviderFT CIM_EthPortAssocationData_funcs =
{
  (MI_ProviderFT_Load)CIM_EthPortAssocationData_Load,
  (MI_ProviderFT_Unload)CIM_EthPortAssocationData_Unload,
  (MI_ProviderFT_GetInstance)CIM_EthPortAssocationData_GetInstance,
  (MI_ProviderFT_EnumerateInstances)CIM_EthPortAssocationData_EnumerateInstances,
  (MI_ProviderFT_CreateInstance)CIM_EthPortAssocationData_CreateInstance,
  (MI_ProviderFT_ModifyInstance)CIM_EthPortAssocationData_ModifyInstance,
  (MI_ProviderFT_DeleteInstance)CIM_EthPortAssocationData_DeleteInstance,
  (MI_ProviderFT_AssociatorInstances)CIM_EthPortAssocationData_AssociatorInstances,
  (MI_ProviderFT_ReferenceInstances)CIM_EthPortAssocationData_ReferenceInstances,
  (MI_ProviderFT_EnableIndications)NULL,
  (MI_ProviderFT_DisableIndications)NULL,
  (MI_ProviderFT_Subscribe)NULL,
  (MI_ProviderFT_Unsubscribe)NULL,
  (MI_ProviderFT_Invoke)NULL,
};

/* class CIM_EthPortAssocationData */
MI_CONST MI_ClassDecl CIM_EthPortAssocationData_rtti =
{
    MI_FLAG_CLASS|MI_FLAG_ASSOCIATION, /* flags */
    0x00636119, /* code */
    MI_T("CIM_EthPortAssocationData"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    CIM_EthPortAssocationData_props, /* properties */
    MI_COUNT(CIM_EthPortAssocationData_props), /* numProperties */
    sizeof(CIM_EthPortAssocationData), /* size */
    NULL, /* superClass */
    NULL, /* superClassDecl */
    NULL, /* methods */
    0, /* numMethods */
    &schemaDecl, /* schema */
    &CIM_EthPortAssocationData_funcs, /* functions */
    NULL, /* owningClass */
};

/*
**==============================================================================
**
** CIM_ServiceAccessPoint
**
**==============================================================================
*/

static MI_CONST MI_Uint32 CIM_ServiceAccessPoint_Name_MaxLen_qual_value = 256U;

static MI_CONST MI_Qualifier CIM_ServiceAccessPoint_Name_MaxLen_qual =
{
    MI_T("MaxLen"),
    MI_UINT32,
    0,
    &CIM_ServiceAccessPoint_Name_MaxLen_qual_value
};

static MI_CONST MI_Char* CIM_ServiceAccessPoint_Name_Override_qual_value = MI_T("Name");

static MI_CONST MI_Qualifier CIM_ServiceAccessPoint_Name_Override_qual =
{
    MI_T("Override"),
    MI_STRING,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_RESTRICTED,
    &CIM_ServiceAccessPoint_Name_Override_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_ServiceAccessPoint_Name_quals[] =
{
    &CIM_ServiceAccessPoint_Name_MaxLen_qual,
    &CIM_ServiceAccessPoint_Name_Override_qual,
};

/* property CIM_ServiceAccessPoint.Name */
static MI_CONST MI_PropertyDecl CIM_ServiceAccessPoint_Name_prop =
{
    MI_FLAG_PROPERTY|MI_FLAG_KEY, /* flags */
    0x006E6504, /* code */
    MI_T("Name"), /* name */
    CIM_ServiceAccessPoint_Name_quals, /* qualifiers */
    MI_COUNT(CIM_ServiceAccessPoint_Name_quals), /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_ServiceAccessPoint, Name), /* offset */
    MI_T("CIM_ManagedSystemElement"), /* origin */
    MI_T("CIM_ServiceAccessPoint"), /* propagator */
    NULL,
};

static MI_CONST MI_Uint32 CIM_ServiceAccessPoint_SystemCreationClassName_MaxLen_qual_value = 256U;

static MI_CONST MI_Qualifier CIM_ServiceAccessPoint_SystemCreationClassName_MaxLen_qual =
{
    MI_T("MaxLen"),
    MI_UINT32,
    0,
    &CIM_ServiceAccessPoint_SystemCreationClassName_MaxLen_qual_value
};

static MI_CONST MI_Char* CIM_ServiceAccessPoint_SystemCreationClassName_Propagated_qual_value = MI_T("CIM_System.CreationClassName");

static MI_CONST MI_Qualifier CIM_ServiceAccessPoint_SystemCreationClassName_Propagated_qual =
{
    MI_T("Propagated"),
    MI_STRING,
    MI_FLAG_DISABLEOVERRIDE|MI_FLAG_TOSUBCLASS,
    &CIM_ServiceAccessPoint_SystemCreationClassName_Propagated_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_ServiceAccessPoint_SystemCreationClassName_quals[] =
{
    &CIM_ServiceAccessPoint_SystemCreationClassName_MaxLen_qual,
    &CIM_ServiceAccessPoint_SystemCreationClassName_Propagated_qual,
};

/* property CIM_ServiceAccessPoint.SystemCreationClassName */
static MI_CONST MI_PropertyDecl CIM_ServiceAccessPoint_SystemCreationClassName_prop =
{
    MI_FLAG_PROPERTY|MI_FLAG_KEY, /* flags */
    0x00736517, /* code */
    MI_T("SystemCreationClassName"), /* name */
    CIM_ServiceAccessPoint_SystemCreationClassName_quals, /* qualifiers */
    MI_COUNT(CIM_ServiceAccessPoint_SystemCreationClassName_quals), /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_ServiceAccessPoint, SystemCreationClassName), /* offset */
    MI_T("CIM_ServiceAccessPoint"), /* origin */
    MI_T("CIM_ServiceAccessPoint"), /* propagator */
    NULL,
};

static MI_CONST MI_Uint32 CIM_ServiceAccessPoint_SystemName_MaxLen_qual_value = 256U;

static MI_CONST MI_Qualifier CIM_ServiceAccessPoint_SystemName_MaxLen_qual =
{
    MI_T("MaxLen"),
    MI_UINT32,
    0,
    &CIM_ServiceAccessPoint_SystemName_MaxLen_qual_value
};

static MI_CONST MI_Char* CIM_ServiceAccessPoint_SystemName_Propagated_qual_value = MI_T("CIM_System.Name");

static MI_CONST MI_Qualifier CIM_ServiceAccessPoint_SystemName_Propagated_qual =
{
    MI_T("Propagated"),
    MI_STRING,
    MI_FLAG_DISABLEOVERRIDE|MI_FLAG_TOSUBCLASS,
    &CIM_ServiceAccessPoint_SystemName_Propagated_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_ServiceAccessPoint_SystemName_quals[] =
{
    &CIM_ServiceAccessPoint_SystemName_MaxLen_qual,
    &CIM_ServiceAccessPoint_SystemName_Propagated_qual,
};

/* property CIM_ServiceAccessPoint.SystemName */
static MI_CONST MI_PropertyDecl CIM_ServiceAccessPoint_SystemName_prop =
{
    MI_FLAG_PROPERTY|MI_FLAG_KEY, /* flags */
    0x0073650A, /* code */
    MI_T("SystemName"), /* name */
    CIM_ServiceAccessPoint_SystemName_quals, /* qualifiers */
    MI_COUNT(CIM_ServiceAccessPoint_SystemName_quals), /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_ServiceAccessPoint, SystemName), /* offset */
    MI_T("CIM_ServiceAccessPoint"), /* origin */
    MI_T("CIM_ServiceAccessPoint"), /* propagator */
    NULL,
};

static MI_CONST MI_Uint32 CIM_ServiceAccessPoint_CreationClassName_MaxLen_qual_value = 256U;

static MI_CONST MI_Qualifier CIM_ServiceAccessPoint_CreationClassName_MaxLen_qual =
{
    MI_T("MaxLen"),
    MI_UINT32,
    0,
    &CIM_ServiceAccessPoint_CreationClassName_MaxLen_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_ServiceAccessPoint_CreationClassName_quals[] =
{
    &CIM_ServiceAccessPoint_CreationClassName_MaxLen_qual,
};

/* property CIM_ServiceAccessPoint.CreationClassName */
static MI_CONST MI_PropertyDecl CIM_ServiceAccessPoint_CreationClassName_prop =
{
    MI_FLAG_PROPERTY|MI_FLAG_KEY, /* flags */
    0x00636511, /* code */
    MI_T("CreationClassName"), /* name */
    CIM_ServiceAccessPoint_CreationClassName_quals, /* qualifiers */
    MI_COUNT(CIM_ServiceAccessPoint_CreationClassName_quals), /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_ServiceAccessPoint, CreationClassName), /* offset */
    MI_T("CIM_ServiceAccessPoint"), /* origin */
    MI_T("CIM_ServiceAccessPoint"), /* propagator */
    NULL,
};

static MI_PropertyDecl MI_CONST* MI_CONST CIM_ServiceAccessPoint_props[] =
{
    &CIM_ManagedElement_InstanceID_prop,
    &CIM_ManagedElement_Caption_prop,
    &CIM_ManagedElement_Description_prop,
    &CIM_ManagedElement_ElementName_prop,
    &CIM_ManagedSystemElement_InstallDate_prop,
    &CIM_ServiceAccessPoint_Name_prop,
    &CIM_ManagedSystemElement_OperationalStatus_prop,
    &CIM_ManagedSystemElement_StatusDescriptions_prop,
    &CIM_ManagedSystemElement_Status_prop,
    &CIM_ManagedSystemElement_HealthState_prop,
    &CIM_ManagedSystemElement_CommunicationStatus_prop,
    &CIM_ManagedSystemElement_DetailedStatus_prop,
    &CIM_ManagedSystemElement_OperatingStatus_prop,
    &CIM_ManagedSystemElement_PrimaryStatus_prop,
    &CIM_EnabledLogicalElement_EnabledState_prop,
    &CIM_EnabledLogicalElement_OtherEnabledState_prop,
    &CIM_EnabledLogicalElement_RequestedState_prop,
    &CIM_EnabledLogicalElement_EnabledDefault_prop,
    &CIM_EnabledLogicalElement_TimeOfLastStateChange_prop,
    &CIM_EnabledLogicalElement_AvailableRequestedStates_prop,
    &CIM_EnabledLogicalElement_TransitioningToState_prop,
    &CIM_ServiceAccessPoint_SystemCreationClassName_prop,
    &CIM_ServiceAccessPoint_SystemName_prop,
    &CIM_ServiceAccessPoint_CreationClassName_prop,
};

static MI_MethodDecl MI_CONST* MI_CONST CIM_ServiceAccessPoint_meths[] =
{
    &CIM_EnabledLogicalElement_RequestStateChange_rtti,
};

static MI_CONST MI_Char* CIM_ServiceAccessPoint_UMLPackagePath_qual_value = MI_T("CIM::Core::Service");

static MI_CONST MI_Qualifier CIM_ServiceAccessPoint_UMLPackagePath_qual =
{
    MI_T("UMLPackagePath"),
    MI_STRING,
    0,
    &CIM_ServiceAccessPoint_UMLPackagePath_qual_value
};

static MI_CONST MI_Char* CIM_ServiceAccessPoint_Version_qual_value = MI_T("2.10.0");

static MI_CONST MI_Qualifier CIM_ServiceAccessPoint_Version_qual =
{
    MI_T("Version"),
    MI_STRING,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_TRANSLATABLE|MI_FLAG_RESTRICTED,
    &CIM_ServiceAccessPoint_Version_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_ServiceAccessPoint_quals[] =
{
    &CIM_ServiceAccessPoint_UMLPackagePath_qual,
    &CIM_ServiceAccessPoint_Version_qual,
};

/* class CIM_ServiceAccessPoint */
MI_CONST MI_ClassDecl CIM_ServiceAccessPoint_rtti =
{
    MI_FLAG_CLASS|MI_FLAG_ABSTRACT, /* flags */
    0x00637416, /* code */
    MI_T("CIM_ServiceAccessPoint"), /* name */
    CIM_ServiceAccessPoint_quals, /* qualifiers */
    MI_COUNT(CIM_ServiceAccessPoint_quals), /* numQualifiers */
    CIM_ServiceAccessPoint_props, /* properties */
    MI_COUNT(CIM_ServiceAccessPoint_props), /* numProperties */
    sizeof(CIM_ServiceAccessPoint), /* size */
    MI_T("CIM_EnabledLogicalElement"), /* superClass */
    &CIM_EnabledLogicalElement_rtti, /* superClassDecl */
    CIM_ServiceAccessPoint_meths, /* methods */
    MI_COUNT(CIM_ServiceAccessPoint_meths), /* numMethods */
    &schemaDecl, /* schema */
    NULL, /* functions */
    NULL, /* owningClass */
};

/*
**==============================================================================
**
** CIM_ProtocolEndpoint
**
**==============================================================================
*/

static MI_CONST MI_Char* CIM_ProtocolEndpoint_Description_Override_qual_value = MI_T("Description");

static MI_CONST MI_Qualifier CIM_ProtocolEndpoint_Description_Override_qual =
{
    MI_T("Override"),
    MI_STRING,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_RESTRICTED,
    &CIM_ProtocolEndpoint_Description_Override_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_ProtocolEndpoint_Description_quals[] =
{
    &CIM_ProtocolEndpoint_Description_Override_qual,
};

/* property CIM_ProtocolEndpoint.Description */
static MI_CONST MI_PropertyDecl CIM_ProtocolEndpoint_Description_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00646E0B, /* code */
    MI_T("Description"), /* name */
    CIM_ProtocolEndpoint_Description_quals, /* qualifiers */
    MI_COUNT(CIM_ProtocolEndpoint_Description_quals), /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_ProtocolEndpoint, Description), /* offset */
    MI_T("CIM_ManagedElement"), /* origin */
    MI_T("CIM_ProtocolEndpoint"), /* propagator */
    NULL,
};

static MI_CONST MI_Uint32 CIM_ProtocolEndpoint_Name_MaxLen_qual_value = 256U;

static MI_CONST MI_Qualifier CIM_ProtocolEndpoint_Name_MaxLen_qual =
{
    MI_T("MaxLen"),
    MI_UINT32,
    0,
    &CIM_ProtocolEndpoint_Name_MaxLen_qual_value
};

static MI_CONST MI_Char* CIM_ProtocolEndpoint_Name_Override_qual_value = MI_T("Name");

static MI_CONST MI_Qualifier CIM_ProtocolEndpoint_Name_Override_qual =
{
    MI_T("Override"),
    MI_STRING,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_RESTRICTED,
    &CIM_ProtocolEndpoint_Name_Override_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_ProtocolEndpoint_Name_quals[] =
{
    &CIM_ProtocolEndpoint_Name_MaxLen_qual,
    &CIM_ProtocolEndpoint_Name_Override_qual,
};

/* property CIM_ProtocolEndpoint.Name */
static MI_CONST MI_PropertyDecl CIM_ProtocolEndpoint_Name_prop =
{
    MI_FLAG_PROPERTY|MI_FLAG_KEY, /* flags */
    0x006E6504, /* code */
    MI_T("Name"), /* name */
    CIM_ProtocolEndpoint_Name_quals, /* qualifiers */
    MI_COUNT(CIM_ProtocolEndpoint_Name_quals), /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_ProtocolEndpoint, Name), /* offset */
    MI_T("CIM_ManagedSystemElement"), /* origin */
    MI_T("CIM_ProtocolEndpoint"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* CIM_ProtocolEndpoint_OperationalStatus_ArrayType_qual_value = MI_T("Indexed");

static MI_CONST MI_Qualifier CIM_ProtocolEndpoint_OperationalStatus_ArrayType_qual =
{
    MI_T("ArrayType"),
    MI_STRING,
    MI_FLAG_DISABLEOVERRIDE|MI_FLAG_TOSUBCLASS,
    &CIM_ProtocolEndpoint_OperationalStatus_ArrayType_qual_value
};

static MI_CONST MI_Char* CIM_ProtocolEndpoint_OperationalStatus_Override_qual_value = MI_T("OperationalStatus");

static MI_CONST MI_Qualifier CIM_ProtocolEndpoint_OperationalStatus_Override_qual =
{
    MI_T("Override"),
    MI_STRING,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_RESTRICTED,
    &CIM_ProtocolEndpoint_OperationalStatus_Override_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_ProtocolEndpoint_OperationalStatus_quals[] =
{
    &CIM_ProtocolEndpoint_OperationalStatus_ArrayType_qual,
    &CIM_ProtocolEndpoint_OperationalStatus_Override_qual,
};

/* property CIM_ProtocolEndpoint.OperationalStatus */
static MI_CONST MI_PropertyDecl CIM_ProtocolEndpoint_OperationalStatus_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006F7311, /* code */
    MI_T("OperationalStatus"), /* name */
    CIM_ProtocolEndpoint_OperationalStatus_quals, /* qualifiers */
    MI_COUNT(CIM_ProtocolEndpoint_OperationalStatus_quals), /* numQualifiers */
    MI_UINT16A, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_ProtocolEndpoint, OperationalStatus), /* offset */
    MI_T("CIM_ManagedSystemElement"), /* origin */
    MI_T("CIM_ProtocolEndpoint"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* CIM_ProtocolEndpoint_EnabledState_Override_qual_value = MI_T("EnabledState");

static MI_CONST MI_Qualifier CIM_ProtocolEndpoint_EnabledState_Override_qual =
{
    MI_T("Override"),
    MI_STRING,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_RESTRICTED,
    &CIM_ProtocolEndpoint_EnabledState_Override_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_ProtocolEndpoint_EnabledState_quals[] =
{
    &CIM_ProtocolEndpoint_EnabledState_Override_qual,
};

/* property CIM_ProtocolEndpoint.EnabledState */
static MI_CONST MI_PropertyDecl CIM_ProtocolEndpoint_EnabledState_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0065650C, /* code */
    MI_T("EnabledState"), /* name */
    CIM_ProtocolEndpoint_EnabledState_quals, /* qualifiers */
    MI_COUNT(CIM_ProtocolEndpoint_EnabledState_quals), /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_ProtocolEndpoint, EnabledState), /* offset */
    MI_T("CIM_EnabledLogicalElement"), /* origin */
    MI_T("CIM_ProtocolEndpoint"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* CIM_ProtocolEndpoint_TimeOfLastStateChange_Override_qual_value = MI_T("TimeOfLastStateChange");

static MI_CONST MI_Qualifier CIM_ProtocolEndpoint_TimeOfLastStateChange_Override_qual =
{
    MI_T("Override"),
    MI_STRING,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_RESTRICTED,
    &CIM_ProtocolEndpoint_TimeOfLastStateChange_Override_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_ProtocolEndpoint_TimeOfLastStateChange_quals[] =
{
    &CIM_ProtocolEndpoint_TimeOfLastStateChange_Override_qual,
};

/* property CIM_ProtocolEndpoint.TimeOfLastStateChange */
static MI_CONST MI_PropertyDecl CIM_ProtocolEndpoint_TimeOfLastStateChange_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00746515, /* code */
    MI_T("TimeOfLastStateChange"), /* name */
    CIM_ProtocolEndpoint_TimeOfLastStateChange_quals, /* qualifiers */
    MI_COUNT(CIM_ProtocolEndpoint_TimeOfLastStateChange_quals), /* numQualifiers */
    MI_DATETIME, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_ProtocolEndpoint, TimeOfLastStateChange), /* offset */
    MI_T("CIM_EnabledLogicalElement"), /* origin */
    MI_T("CIM_ProtocolEndpoint"), /* propagator */
    NULL,
};

static MI_CONST MI_Uint32 CIM_ProtocolEndpoint_NameFormat_MaxLen_qual_value = 256U;

static MI_CONST MI_Qualifier CIM_ProtocolEndpoint_NameFormat_MaxLen_qual =
{
    MI_T("MaxLen"),
    MI_UINT32,
    0,
    &CIM_ProtocolEndpoint_NameFormat_MaxLen_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_ProtocolEndpoint_NameFormat_quals[] =
{
    &CIM_ProtocolEndpoint_NameFormat_MaxLen_qual,
};

/* property CIM_ProtocolEndpoint.NameFormat */
static MI_CONST MI_PropertyDecl CIM_ProtocolEndpoint_NameFormat_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006E740A, /* code */
    MI_T("NameFormat"), /* name */
    CIM_ProtocolEndpoint_NameFormat_quals, /* qualifiers */
    MI_COUNT(CIM_ProtocolEndpoint_NameFormat_quals), /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_ProtocolEndpoint, NameFormat), /* offset */
    MI_T("CIM_ProtocolEndpoint"), /* origin */
    MI_T("CIM_ProtocolEndpoint"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* CIM_ProtocolEndpoint_ProtocolType_Deprecated_qual_data_value[] =
{
    MI_T("CIM_ProtocolEndpoint.ProtocolIFType"),
};

static MI_CONST MI_ConstStringA CIM_ProtocolEndpoint_ProtocolType_Deprecated_qual_value =
{
    CIM_ProtocolEndpoint_ProtocolType_Deprecated_qual_data_value,
    MI_COUNT(CIM_ProtocolEndpoint_ProtocolType_Deprecated_qual_data_value),
};

static MI_CONST MI_Qualifier CIM_ProtocolEndpoint_ProtocolType_Deprecated_qual =
{
    MI_T("Deprecated"),
    MI_STRINGA,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_RESTRICTED,
    &CIM_ProtocolEndpoint_ProtocolType_Deprecated_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_ProtocolEndpoint_ProtocolType_quals[] =
{
    &CIM_ProtocolEndpoint_ProtocolType_Deprecated_qual,
};

/* property CIM_ProtocolEndpoint.ProtocolType */
static MI_CONST MI_PropertyDecl CIM_ProtocolEndpoint_ProtocolType_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0070650C, /* code */
    MI_T("ProtocolType"), /* name */
    CIM_ProtocolEndpoint_ProtocolType_quals, /* qualifiers */
    MI_COUNT(CIM_ProtocolEndpoint_ProtocolType_quals), /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_ProtocolEndpoint, ProtocolType), /* offset */
    MI_T("CIM_ProtocolEndpoint"), /* origin */
    MI_T("CIM_ProtocolEndpoint"), /* propagator */
    NULL,
};

/* property CIM_ProtocolEndpoint.ProtocolIFType */
static MI_CONST MI_PropertyDecl CIM_ProtocolEndpoint_ProtocolIFType_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0070650E, /* code */
    MI_T("ProtocolIFType"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_ProtocolEndpoint, ProtocolIFType), /* offset */
    MI_T("CIM_ProtocolEndpoint"), /* origin */
    MI_T("CIM_ProtocolEndpoint"), /* propagator */
    NULL,
};

static MI_CONST MI_Uint32 CIM_ProtocolEndpoint_OtherTypeDescription_MaxLen_qual_value = 64U;

static MI_CONST MI_Qualifier CIM_ProtocolEndpoint_OtherTypeDescription_MaxLen_qual =
{
    MI_T("MaxLen"),
    MI_UINT32,
    0,
    &CIM_ProtocolEndpoint_OtherTypeDescription_MaxLen_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_ProtocolEndpoint_OtherTypeDescription_quals[] =
{
    &CIM_ProtocolEndpoint_OtherTypeDescription_MaxLen_qual,
};

/* property CIM_ProtocolEndpoint.OtherTypeDescription */
static MI_CONST MI_PropertyDecl CIM_ProtocolEndpoint_OtherTypeDescription_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006F6E14, /* code */
    MI_T("OtherTypeDescription"), /* name */
    CIM_ProtocolEndpoint_OtherTypeDescription_quals, /* qualifiers */
    MI_COUNT(CIM_ProtocolEndpoint_OtherTypeDescription_quals), /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_ProtocolEndpoint, OtherTypeDescription), /* offset */
    MI_T("CIM_ProtocolEndpoint"), /* origin */
    MI_T("CIM_ProtocolEndpoint"), /* propagator */
    NULL,
};

static MI_PropertyDecl MI_CONST* MI_CONST CIM_ProtocolEndpoint_props[] =
{
    &CIM_ManagedElement_InstanceID_prop,
    &CIM_ManagedElement_Caption_prop,
    &CIM_ProtocolEndpoint_Description_prop,
    &CIM_ManagedElement_ElementName_prop,
    &CIM_ManagedSystemElement_InstallDate_prop,
    &CIM_ProtocolEndpoint_Name_prop,
    &CIM_ProtocolEndpoint_OperationalStatus_prop,
    &CIM_ManagedSystemElement_StatusDescriptions_prop,
    &CIM_ManagedSystemElement_Status_prop,
    &CIM_ManagedSystemElement_HealthState_prop,
    &CIM_ManagedSystemElement_CommunicationStatus_prop,
    &CIM_ManagedSystemElement_DetailedStatus_prop,
    &CIM_ManagedSystemElement_OperatingStatus_prop,
    &CIM_ManagedSystemElement_PrimaryStatus_prop,
    &CIM_ProtocolEndpoint_EnabledState_prop,
    &CIM_EnabledLogicalElement_OtherEnabledState_prop,
    &CIM_EnabledLogicalElement_RequestedState_prop,
    &CIM_EnabledLogicalElement_EnabledDefault_prop,
    &CIM_ProtocolEndpoint_TimeOfLastStateChange_prop,
    &CIM_EnabledLogicalElement_AvailableRequestedStates_prop,
    &CIM_EnabledLogicalElement_TransitioningToState_prop,
    &CIM_ServiceAccessPoint_SystemCreationClassName_prop,
    &CIM_ServiceAccessPoint_SystemName_prop,
    &CIM_ServiceAccessPoint_CreationClassName_prop,
    &CIM_ProtocolEndpoint_NameFormat_prop,
    &CIM_ProtocolEndpoint_ProtocolType_prop,
    &CIM_ProtocolEndpoint_ProtocolIFType_prop,
    &CIM_ProtocolEndpoint_OtherTypeDescription_prop,
};

static MI_MethodDecl MI_CONST* MI_CONST CIM_ProtocolEndpoint_meths[] =
{
    &CIM_EnabledLogicalElement_RequestStateChange_rtti,
};

static MI_CONST MI_Char* CIM_ProtocolEndpoint_UMLPackagePath_qual_value = MI_T("CIM::Core::Service");

static MI_CONST MI_Qualifier CIM_ProtocolEndpoint_UMLPackagePath_qual =
{
    MI_T("UMLPackagePath"),
    MI_STRING,
    0,
    &CIM_ProtocolEndpoint_UMLPackagePath_qual_value
};

static MI_CONST MI_Char* CIM_ProtocolEndpoint_Version_qual_value = MI_T("2.15.0");

static MI_CONST MI_Qualifier CIM_ProtocolEndpoint_Version_qual =
{
    MI_T("Version"),
    MI_STRING,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_TRANSLATABLE|MI_FLAG_RESTRICTED,
    &CIM_ProtocolEndpoint_Version_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_ProtocolEndpoint_quals[] =
{
    &CIM_ProtocolEndpoint_UMLPackagePath_qual,
    &CIM_ProtocolEndpoint_Version_qual,
};

/* class CIM_ProtocolEndpoint */
MI_CONST MI_ClassDecl CIM_ProtocolEndpoint_rtti =
{
    MI_FLAG_CLASS, /* flags */
    0x00637414, /* code */
    MI_T("CIM_ProtocolEndpoint"), /* name */
    CIM_ProtocolEndpoint_quals, /* qualifiers */
    MI_COUNT(CIM_ProtocolEndpoint_quals), /* numQualifiers */
    CIM_ProtocolEndpoint_props, /* properties */
    MI_COUNT(CIM_ProtocolEndpoint_props), /* numProperties */
    sizeof(CIM_ProtocolEndpoint), /* size */
    MI_T("CIM_ServiceAccessPoint"), /* superClass */
    &CIM_ServiceAccessPoint_rtti, /* superClassDecl */
    CIM_ProtocolEndpoint_meths, /* methods */
    MI_COUNT(CIM_ProtocolEndpoint_meths), /* numMethods */
    &schemaDecl, /* schema */
    NULL, /* functions */
    NULL, /* owningClass */
};

/*
**==============================================================================
**
** CIM_LANEndpoint
**
**==============================================================================
*/

/* property CIM_LANEndpoint.LANID */
static MI_CONST MI_PropertyDecl CIM_LANEndpoint_LANID_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006C6405, /* code */
    MI_T("LANID"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_LANEndpoint, LANID), /* offset */
    MI_T("CIM_LANEndpoint"), /* origin */
    MI_T("CIM_LANEndpoint"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* CIM_LANEndpoint_LANType_Deprecated_qual_data_value[] =
{
    MI_T("CIM_ProtocolEndpoint.ProtocolType"),
};

static MI_CONST MI_ConstStringA CIM_LANEndpoint_LANType_Deprecated_qual_value =
{
    CIM_LANEndpoint_LANType_Deprecated_qual_data_value,
    MI_COUNT(CIM_LANEndpoint_LANType_Deprecated_qual_data_value),
};

static MI_CONST MI_Qualifier CIM_LANEndpoint_LANType_Deprecated_qual =
{
    MI_T("Deprecated"),
    MI_STRINGA,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_RESTRICTED,
    &CIM_LANEndpoint_LANType_Deprecated_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_LANEndpoint_LANType_quals[] =
{
    &CIM_LANEndpoint_LANType_Deprecated_qual,
};

/* property CIM_LANEndpoint.LANType */
static MI_CONST MI_PropertyDecl CIM_LANEndpoint_LANType_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006C6507, /* code */
    MI_T("LANType"), /* name */
    CIM_LANEndpoint_LANType_quals, /* qualifiers */
    MI_COUNT(CIM_LANEndpoint_LANType_quals), /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_LANEndpoint, LANType), /* offset */
    MI_T("CIM_LANEndpoint"), /* origin */
    MI_T("CIM_LANEndpoint"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* CIM_LANEndpoint_OtherLANType_Deprecated_qual_data_value[] =
{
    MI_T("CIM_ProtocolEndpoint.OtherTypeDescription"),
};

static MI_CONST MI_ConstStringA CIM_LANEndpoint_OtherLANType_Deprecated_qual_value =
{
    CIM_LANEndpoint_OtherLANType_Deprecated_qual_data_value,
    MI_COUNT(CIM_LANEndpoint_OtherLANType_Deprecated_qual_data_value),
};

static MI_CONST MI_Qualifier CIM_LANEndpoint_OtherLANType_Deprecated_qual =
{
    MI_T("Deprecated"),
    MI_STRINGA,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_RESTRICTED,
    &CIM_LANEndpoint_OtherLANType_Deprecated_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_LANEndpoint_OtherLANType_quals[] =
{
    &CIM_LANEndpoint_OtherLANType_Deprecated_qual,
};

/* property CIM_LANEndpoint.OtherLANType */
static MI_CONST MI_PropertyDecl CIM_LANEndpoint_OtherLANType_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006F650C, /* code */
    MI_T("OtherLANType"), /* name */
    CIM_LANEndpoint_OtherLANType_quals, /* qualifiers */
    MI_COUNT(CIM_LANEndpoint_OtherLANType_quals), /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_LANEndpoint, OtherLANType), /* offset */
    MI_T("CIM_LANEndpoint"), /* origin */
    MI_T("CIM_LANEndpoint"), /* propagator */
    NULL,
};

static MI_CONST MI_Uint32 CIM_LANEndpoint_MACAddress_MaxLen_qual_value = 12U;

static MI_CONST MI_Qualifier CIM_LANEndpoint_MACAddress_MaxLen_qual =
{
    MI_T("MaxLen"),
    MI_UINT32,
    0,
    &CIM_LANEndpoint_MACAddress_MaxLen_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_LANEndpoint_MACAddress_quals[] =
{
    &CIM_LANEndpoint_MACAddress_MaxLen_qual,
};

/* property CIM_LANEndpoint.MACAddress */
static MI_CONST MI_PropertyDecl CIM_LANEndpoint_MACAddress_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006D730A, /* code */
    MI_T("MACAddress"), /* name */
    CIM_LANEndpoint_MACAddress_quals, /* qualifiers */
    MI_COUNT(CIM_LANEndpoint_MACAddress_quals), /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_LANEndpoint, MACAddress), /* offset */
    MI_T("CIM_LANEndpoint"), /* origin */
    MI_T("CIM_LANEndpoint"), /* propagator */
    NULL,
};

/* property CIM_LANEndpoint.AliasAddresses */
static MI_CONST MI_PropertyDecl CIM_LANEndpoint_AliasAddresses_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0061730E, /* code */
    MI_T("AliasAddresses"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRINGA, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_LANEndpoint, AliasAddresses), /* offset */
    MI_T("CIM_LANEndpoint"), /* origin */
    MI_T("CIM_LANEndpoint"), /* propagator */
    NULL,
};

/* property CIM_LANEndpoint.GroupAddresses */
static MI_CONST MI_PropertyDecl CIM_LANEndpoint_GroupAddresses_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0067730E, /* code */
    MI_T("GroupAddresses"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRINGA, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_LANEndpoint, GroupAddresses), /* offset */
    MI_T("CIM_LANEndpoint"), /* origin */
    MI_T("CIM_LANEndpoint"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* CIM_LANEndpoint_MaxDataSize_Units_qual_value = MI_T("Bits");

static MI_CONST MI_Qualifier CIM_LANEndpoint_MaxDataSize_Units_qual =
{
    MI_T("Units"),
    MI_STRING,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_TOSUBCLASS|MI_FLAG_TRANSLATABLE,
    &CIM_LANEndpoint_MaxDataSize_Units_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_LANEndpoint_MaxDataSize_quals[] =
{
    &CIM_LANEndpoint_MaxDataSize_Units_qual,
};

/* property CIM_LANEndpoint.MaxDataSize */
static MI_CONST MI_PropertyDecl CIM_LANEndpoint_MaxDataSize_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006D650B, /* code */
    MI_T("MaxDataSize"), /* name */
    CIM_LANEndpoint_MaxDataSize_quals, /* qualifiers */
    MI_COUNT(CIM_LANEndpoint_MaxDataSize_quals), /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_LANEndpoint, MaxDataSize), /* offset */
    MI_T("CIM_LANEndpoint"), /* origin */
    MI_T("CIM_LANEndpoint"), /* propagator */
    NULL,
};

static MI_PropertyDecl MI_CONST* MI_CONST CIM_LANEndpoint_props[] =
{
    &CIM_ManagedElement_InstanceID_prop,
    &CIM_ManagedElement_Caption_prop,
    &CIM_ProtocolEndpoint_Description_prop,
    &CIM_ManagedElement_ElementName_prop,
    &CIM_ManagedSystemElement_InstallDate_prop,
    &CIM_ProtocolEndpoint_Name_prop,
    &CIM_ProtocolEndpoint_OperationalStatus_prop,
    &CIM_ManagedSystemElement_StatusDescriptions_prop,
    &CIM_ManagedSystemElement_Status_prop,
    &CIM_ManagedSystemElement_HealthState_prop,
    &CIM_ManagedSystemElement_CommunicationStatus_prop,
    &CIM_ManagedSystemElement_DetailedStatus_prop,
    &CIM_ManagedSystemElement_OperatingStatus_prop,
    &CIM_ManagedSystemElement_PrimaryStatus_prop,
    &CIM_ProtocolEndpoint_EnabledState_prop,
    &CIM_EnabledLogicalElement_OtherEnabledState_prop,
    &CIM_EnabledLogicalElement_RequestedState_prop,
    &CIM_EnabledLogicalElement_EnabledDefault_prop,
    &CIM_ProtocolEndpoint_TimeOfLastStateChange_prop,
    &CIM_EnabledLogicalElement_AvailableRequestedStates_prop,
    &CIM_EnabledLogicalElement_TransitioningToState_prop,
    &CIM_ServiceAccessPoint_SystemCreationClassName_prop,
    &CIM_ServiceAccessPoint_SystemName_prop,
    &CIM_ServiceAccessPoint_CreationClassName_prop,
    &CIM_ProtocolEndpoint_NameFormat_prop,
    &CIM_ProtocolEndpoint_ProtocolType_prop,
    &CIM_ProtocolEndpoint_ProtocolIFType_prop,
    &CIM_ProtocolEndpoint_OtherTypeDescription_prop,
    &CIM_LANEndpoint_LANID_prop,
    &CIM_LANEndpoint_LANType_prop,
    &CIM_LANEndpoint_OtherLANType_prop,
    &CIM_LANEndpoint_MACAddress_prop,
    &CIM_LANEndpoint_AliasAddresses_prop,
    &CIM_LANEndpoint_GroupAddresses_prop,
    &CIM_LANEndpoint_MaxDataSize_prop,
};

/* parameter CIM_LANEndpoint.RequestStateChange(): RequestedState */
static MI_CONST MI_ParameterDecl CIM_LANEndpoint_RequestStateChange_RequestedState_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_IN, /* flags */
    0x0072650E, /* code */
    MI_T("RequestedState"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_LANEndpoint_RequestStateChange, RequestedState), /* offset */
};

/* parameter CIM_LANEndpoint.RequestStateChange(): Job */
static MI_CONST MI_ParameterDecl CIM_LANEndpoint_RequestStateChange_Job_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006A6203, /* code */
    MI_T("Job"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("CIM_ConcreteJob"), /* className */
    0, /* subscript */
    offsetof(CIM_LANEndpoint_RequestStateChange, Job), /* offset */
};

/* parameter CIM_LANEndpoint.RequestStateChange(): TimeoutPeriod */
static MI_CONST MI_ParameterDecl CIM_LANEndpoint_RequestStateChange_TimeoutPeriod_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_IN, /* flags */
    0x0074640D, /* code */
    MI_T("TimeoutPeriod"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_DATETIME, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_LANEndpoint_RequestStateChange, TimeoutPeriod), /* offset */
};

/* parameter CIM_LANEndpoint.RequestStateChange(): MIReturn */
static MI_CONST MI_ParameterDecl CIM_LANEndpoint_RequestStateChange_MIReturn_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006D6E08, /* code */
    MI_T("MIReturn"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_LANEndpoint_RequestStateChange, MIReturn), /* offset */
};

static MI_ParameterDecl MI_CONST* MI_CONST CIM_LANEndpoint_RequestStateChange_params[] =
{
    &CIM_LANEndpoint_RequestStateChange_MIReturn_param,
    &CIM_LANEndpoint_RequestStateChange_RequestedState_param,
    &CIM_LANEndpoint_RequestStateChange_Job_param,
    &CIM_LANEndpoint_RequestStateChange_TimeoutPeriod_param,
};

/* method CIM_LANEndpoint.RequestStateChange() */
MI_CONST MI_MethodDecl CIM_LANEndpoint_RequestStateChange_rtti =
{
    MI_FLAG_METHOD, /* flags */
    0x00726512, /* code */
    MI_T("RequestStateChange"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    CIM_LANEndpoint_RequestStateChange_params, /* parameters */
    MI_COUNT(CIM_LANEndpoint_RequestStateChange_params), /* numParameters */
    sizeof(CIM_LANEndpoint_RequestStateChange), /* size */
    MI_UINT32, /* returnType */
    MI_T("CIM_EnabledLogicalElement"), /* origin */
    MI_T("CIM_EnabledLogicalElement"), /* propagator */
    &schemaDecl, /* schema */
    (MI_ProviderFT_Invoke)CIM_LANEndpoint_Invoke_RequestStateChange, /* method */
};

static MI_MethodDecl MI_CONST* MI_CONST CIM_LANEndpoint_meths[] =
{
    &CIM_LANEndpoint_RequestStateChange_rtti,
};

static MI_CONST MI_ProviderFT CIM_LANEndpoint_funcs =
{
  (MI_ProviderFT_Load)CIM_LANEndpoint_Load,
  (MI_ProviderFT_Unload)CIM_LANEndpoint_Unload,
  (MI_ProviderFT_GetInstance)CIM_LANEndpoint_GetInstance,
  (MI_ProviderFT_EnumerateInstances)CIM_LANEndpoint_EnumerateInstances,
  (MI_ProviderFT_CreateInstance)CIM_LANEndpoint_CreateInstance,
  (MI_ProviderFT_ModifyInstance)CIM_LANEndpoint_ModifyInstance,
  (MI_ProviderFT_DeleteInstance)CIM_LANEndpoint_DeleteInstance,
  (MI_ProviderFT_AssociatorInstances)NULL,
  (MI_ProviderFT_ReferenceInstances)NULL,
  (MI_ProviderFT_EnableIndications)NULL,
  (MI_ProviderFT_DisableIndications)NULL,
  (MI_ProviderFT_Subscribe)NULL,
  (MI_ProviderFT_Unsubscribe)NULL,
  (MI_ProviderFT_Invoke)NULL,
};

static MI_CONST MI_Char* CIM_LANEndpoint_UMLPackagePath_qual_value = MI_T("CIM::Network::ProtocolEndpoints");

static MI_CONST MI_Qualifier CIM_LANEndpoint_UMLPackagePath_qual =
{
    MI_T("UMLPackagePath"),
    MI_STRING,
    0,
    &CIM_LANEndpoint_UMLPackagePath_qual_value
};

static MI_CONST MI_Char* CIM_LANEndpoint_Version_qual_value = MI_T("2.7.0");

static MI_CONST MI_Qualifier CIM_LANEndpoint_Version_qual =
{
    MI_T("Version"),
    MI_STRING,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_TRANSLATABLE|MI_FLAG_RESTRICTED,
    &CIM_LANEndpoint_Version_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_LANEndpoint_quals[] =
{
    &CIM_LANEndpoint_UMLPackagePath_qual,
    &CIM_LANEndpoint_Version_qual,
};

/* class CIM_LANEndpoint */
MI_CONST MI_ClassDecl CIM_LANEndpoint_rtti =
{
    MI_FLAG_CLASS, /* flags */
    0x0063740F, /* code */
    MI_T("CIM_LANEndpoint"), /* name */
    CIM_LANEndpoint_quals, /* qualifiers */
    MI_COUNT(CIM_LANEndpoint_quals), /* numQualifiers */
    CIM_LANEndpoint_props, /* properties */
    MI_COUNT(CIM_LANEndpoint_props), /* numProperties */
    sizeof(CIM_LANEndpoint), /* size */
    MI_T("CIM_ProtocolEndpoint"), /* superClass */
    &CIM_ProtocolEndpoint_rtti, /* superClassDecl */
    CIM_LANEndpoint_meths, /* methods */
    MI_COUNT(CIM_LANEndpoint_meths), /* numMethods */
    &schemaDecl, /* schema */
    &CIM_LANEndpoint_funcs, /* functions */
    NULL, /* owningClass */
};

/*
**==============================================================================
**
** CIM_EthPortAssociationLANEnd
**
**==============================================================================
*/

/* property CIM_EthPortAssociationLANEnd.Left */
static MI_CONST MI_PropertyDecl CIM_EthPortAssociationLANEnd_Left_prop =
{
    MI_FLAG_PROPERTY|MI_FLAG_KEY, /* flags */
    0x006C7404, /* code */
    MI_T("Left"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("MSFT_EthernetPort"), /* className */
    0, /* subscript */
    offsetof(CIM_EthPortAssociationLANEnd, Left), /* offset */
    MI_T("CIM_EthPortAssociationLANEnd"), /* origin */
    MI_T("CIM_EthPortAssociationLANEnd"), /* propagator */
    NULL,
};

/* property CIM_EthPortAssociationLANEnd.Right */
static MI_CONST MI_PropertyDecl CIM_EthPortAssociationLANEnd_Right_prop =
{
    MI_FLAG_PROPERTY|MI_FLAG_KEY, /* flags */
    0x00727405, /* code */
    MI_T("Right"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("CIM_LANEndpoint"), /* className */
    0, /* subscript */
    offsetof(CIM_EthPortAssociationLANEnd, Right), /* offset */
    MI_T("CIM_EthPortAssociationLANEnd"), /* origin */
    MI_T("CIM_EthPortAssociationLANEnd"), /* propagator */
    NULL,
};

static MI_PropertyDecl MI_CONST* MI_CONST CIM_EthPortAssociationLANEnd_props[] =
{
    &CIM_EthPortAssociationLANEnd_Left_prop,
    &CIM_EthPortAssociationLANEnd_Right_prop,
};

static void MI_CALL CIM_EthPortAssociationLANEnd_AssociatorInstances(
    CIM_EthPortAssociationLANEnd_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Instance* instanceName,
    const MI_Char* resultClass,
    const MI_Char* role,
    const MI_Char* resultRole,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    if (MSFT_EthernetPort_IsA(instanceName))
    {
        if (_Match(role, MI_T("Left")) && 
            _Match(resultRole, MI_T("Right")))
        {
            CIM_EthPortAssociationLANEnd_AssociatorInstancesLeft(
                self, 
                context, 
                nameSpace, 
                className, 
                (MSFT_EthernetPort*)instanceName, 
                resultClass, 
                propertySet, 
                keysOnly, 
                filter);
            return;
        }
    }

    if (CIM_LANEndpoint_IsA(instanceName))
    {
        if (_Match(role, MI_T("Right")) && 
            _Match(resultRole, MI_T("Left")))
        {
            CIM_EthPortAssociationLANEnd_AssociatorInstancesRight(
                self, 
                context, 
                nameSpace, 
                className, 
                (CIM_LANEndpoint*)instanceName, 
                resultClass, 
                propertySet, 
                keysOnly, 
                filter);
            return;
        }
    }

    MI_Context_PostResult(context, MI_RESULT_OK);
}

static void MI_CALL CIM_EthPortAssociationLANEnd_ReferenceInstances(
    CIM_EthPortAssociationLANEnd_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Instance* instanceName,
    const MI_Char* role,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    if (MSFT_EthernetPort_IsA(instanceName))
    {
        if (_Match(role, MI_T("Left")))
        {
            CIM_EthPortAssociationLANEnd_ReferenceInstancesLeft(
                self, 
                context, 
                nameSpace, 
                className, 
                (MSFT_EthernetPort*)instanceName, 
                propertySet, 
                keysOnly, 
                filter);
            return;
        }
    }

    if (CIM_LANEndpoint_IsA(instanceName))
    {
        if (_Match(role, MI_T("Right")))
        {
            CIM_EthPortAssociationLANEnd_ReferenceInstancesRight(
                self, 
                context, 
                nameSpace, 
                className, 
                (CIM_LANEndpoint*)instanceName, 
                propertySet, 
                keysOnly, 
                filter);
            return;
        }
    }

    MI_Context_PostResult(context, MI_RESULT_OK);
}

static MI_CONST MI_ProviderFT CIM_EthPortAssociationLANEnd_funcs =
{
  (MI_ProviderFT_Load)CIM_EthPortAssociationLANEnd_Load,
  (MI_ProviderFT_Unload)CIM_EthPortAssociationLANEnd_Unload,
  (MI_ProviderFT_GetInstance)CIM_EthPortAssociationLANEnd_GetInstance,
  (MI_ProviderFT_EnumerateInstances)CIM_EthPortAssociationLANEnd_EnumerateInstances,
  (MI_ProviderFT_CreateInstance)CIM_EthPortAssociationLANEnd_CreateInstance,
  (MI_ProviderFT_ModifyInstance)CIM_EthPortAssociationLANEnd_ModifyInstance,
  (MI_ProviderFT_DeleteInstance)CIM_EthPortAssociationLANEnd_DeleteInstance,
  (MI_ProviderFT_AssociatorInstances)CIM_EthPortAssociationLANEnd_AssociatorInstances,
  (MI_ProviderFT_ReferenceInstances)CIM_EthPortAssociationLANEnd_ReferenceInstances,
  (MI_ProviderFT_EnableIndications)NULL,
  (MI_ProviderFT_DisableIndications)NULL,
  (MI_ProviderFT_Subscribe)NULL,
  (MI_ProviderFT_Unsubscribe)NULL,
  (MI_ProviderFT_Invoke)NULL,
};

/* class CIM_EthPortAssociationLANEnd */
MI_CONST MI_ClassDecl CIM_EthPortAssociationLANEnd_rtti =
{
    MI_FLAG_CLASS|MI_FLAG_ASSOCIATION, /* flags */
    0x0063641C, /* code */
    MI_T("CIM_EthPortAssociationLANEnd"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    CIM_EthPortAssociationLANEnd_props, /* properties */
    MI_COUNT(CIM_EthPortAssociationLANEnd_props), /* numProperties */
    sizeof(CIM_EthPortAssociationLANEnd), /* size */
    NULL, /* superClass */
    NULL, /* superClassDecl */
    NULL, /* methods */
    0, /* numMethods */
    &schemaDecl, /* schema */
    &CIM_EthPortAssociationLANEnd_funcs, /* functions */
    NULL, /* owningClass */
};

/*
**==============================================================================
**
** CIM_VLANEndpoint
**
**==============================================================================
*/

/* property CIM_VLANEndpoint.DesiredEndpointMode */
static MI_CONST MI_PropertyDecl CIM_VLANEndpoint_DesiredEndpointMode_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00646513, /* code */
    MI_T("DesiredEndpointMode"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_VLANEndpoint, DesiredEndpointMode), /* offset */
    MI_T("CIM_VLANEndpoint"), /* origin */
    MI_T("CIM_VLANEndpoint"), /* propagator */
    NULL,
};

/* property CIM_VLANEndpoint.OtherEndpointMode */
static MI_CONST MI_PropertyDecl CIM_VLANEndpoint_OtherEndpointMode_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006F6511, /* code */
    MI_T("OtherEndpointMode"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_VLANEndpoint, OtherEndpointMode), /* offset */
    MI_T("CIM_VLANEndpoint"), /* origin */
    MI_T("CIM_VLANEndpoint"), /* propagator */
    NULL,
};

/* property CIM_VLANEndpoint.OperationalEndpointMode */
static MI_CONST MI_PropertyDecl CIM_VLANEndpoint_OperationalEndpointMode_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006F6517, /* code */
    MI_T("OperationalEndpointMode"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_VLANEndpoint, OperationalEndpointMode), /* offset */
    MI_T("CIM_VLANEndpoint"), /* origin */
    MI_T("CIM_VLANEndpoint"), /* propagator */
    NULL,
};

/* property CIM_VLANEndpoint.DesiredVLANTrunkEncapsulation */
static MI_CONST MI_PropertyDecl CIM_VLANEndpoint_DesiredVLANTrunkEncapsulation_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00646E1D, /* code */
    MI_T("DesiredVLANTrunkEncapsulation"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_VLANEndpoint, DesiredVLANTrunkEncapsulation), /* offset */
    MI_T("CIM_VLANEndpoint"), /* origin */
    MI_T("CIM_VLANEndpoint"), /* propagator */
    NULL,
};

/* property CIM_VLANEndpoint.OtherTrunkEncapsulation */
static MI_CONST MI_PropertyDecl CIM_VLANEndpoint_OtherTrunkEncapsulation_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006F6E17, /* code */
    MI_T("OtherTrunkEncapsulation"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_VLANEndpoint, OtherTrunkEncapsulation), /* offset */
    MI_T("CIM_VLANEndpoint"), /* origin */
    MI_T("CIM_VLANEndpoint"), /* propagator */
    NULL,
};

/* property CIM_VLANEndpoint.OperationalVLANTrunkEncapsulation */
static MI_CONST MI_PropertyDecl CIM_VLANEndpoint_OperationalVLANTrunkEncapsulation_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006F6E21, /* code */
    MI_T("OperationalVLANTrunkEncapsulation"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_VLANEndpoint, OperationalVLANTrunkEncapsulation), /* offset */
    MI_T("CIM_VLANEndpoint"), /* origin */
    MI_T("CIM_VLANEndpoint"), /* propagator */
    NULL,
};

/* property CIM_VLANEndpoint.GVRPStatus */
static MI_CONST MI_PropertyDecl CIM_VLANEndpoint_GVRPStatus_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0067730A, /* code */
    MI_T("GVRPStatus"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_VLANEndpoint, GVRPStatus), /* offset */
    MI_T("CIM_VLANEndpoint"), /* origin */
    MI_T("CIM_VLANEndpoint"), /* propagator */
    NULL,
};

static MI_PropertyDecl MI_CONST* MI_CONST CIM_VLANEndpoint_props[] =
{
    &CIM_ManagedElement_InstanceID_prop,
    &CIM_ManagedElement_Caption_prop,
    &CIM_ProtocolEndpoint_Description_prop,
    &CIM_ManagedElement_ElementName_prop,
    &CIM_ManagedSystemElement_InstallDate_prop,
    &CIM_ProtocolEndpoint_Name_prop,
    &CIM_ProtocolEndpoint_OperationalStatus_prop,
    &CIM_ManagedSystemElement_StatusDescriptions_prop,
    &CIM_ManagedSystemElement_Status_prop,
    &CIM_ManagedSystemElement_HealthState_prop,
    &CIM_ManagedSystemElement_CommunicationStatus_prop,
    &CIM_ManagedSystemElement_DetailedStatus_prop,
    &CIM_ManagedSystemElement_OperatingStatus_prop,
    &CIM_ManagedSystemElement_PrimaryStatus_prop,
    &CIM_ProtocolEndpoint_EnabledState_prop,
    &CIM_EnabledLogicalElement_OtherEnabledState_prop,
    &CIM_EnabledLogicalElement_RequestedState_prop,
    &CIM_EnabledLogicalElement_EnabledDefault_prop,
    &CIM_ProtocolEndpoint_TimeOfLastStateChange_prop,
    &CIM_EnabledLogicalElement_AvailableRequestedStates_prop,
    &CIM_EnabledLogicalElement_TransitioningToState_prop,
    &CIM_ServiceAccessPoint_SystemCreationClassName_prop,
    &CIM_ServiceAccessPoint_SystemName_prop,
    &CIM_ServiceAccessPoint_CreationClassName_prop,
    &CIM_ProtocolEndpoint_NameFormat_prop,
    &CIM_ProtocolEndpoint_ProtocolType_prop,
    &CIM_ProtocolEndpoint_ProtocolIFType_prop,
    &CIM_ProtocolEndpoint_OtherTypeDescription_prop,
    &CIM_VLANEndpoint_DesiredEndpointMode_prop,
    &CIM_VLANEndpoint_OtherEndpointMode_prop,
    &CIM_VLANEndpoint_OperationalEndpointMode_prop,
    &CIM_VLANEndpoint_DesiredVLANTrunkEncapsulation_prop,
    &CIM_VLANEndpoint_OtherTrunkEncapsulation_prop,
    &CIM_VLANEndpoint_OperationalVLANTrunkEncapsulation_prop,
    &CIM_VLANEndpoint_GVRPStatus_prop,
};

/* parameter CIM_VLANEndpoint.RequestStateChange(): RequestedState */
static MI_CONST MI_ParameterDecl CIM_VLANEndpoint_RequestStateChange_RequestedState_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_IN, /* flags */
    0x0072650E, /* code */
    MI_T("RequestedState"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_VLANEndpoint_RequestStateChange, RequestedState), /* offset */
};

/* parameter CIM_VLANEndpoint.RequestStateChange(): Job */
static MI_CONST MI_ParameterDecl CIM_VLANEndpoint_RequestStateChange_Job_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006A6203, /* code */
    MI_T("Job"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("CIM_ConcreteJob"), /* className */
    0, /* subscript */
    offsetof(CIM_VLANEndpoint_RequestStateChange, Job), /* offset */
};

/* parameter CIM_VLANEndpoint.RequestStateChange(): TimeoutPeriod */
static MI_CONST MI_ParameterDecl CIM_VLANEndpoint_RequestStateChange_TimeoutPeriod_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_IN, /* flags */
    0x0074640D, /* code */
    MI_T("TimeoutPeriod"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_DATETIME, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_VLANEndpoint_RequestStateChange, TimeoutPeriod), /* offset */
};

/* parameter CIM_VLANEndpoint.RequestStateChange(): MIReturn */
static MI_CONST MI_ParameterDecl CIM_VLANEndpoint_RequestStateChange_MIReturn_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006D6E08, /* code */
    MI_T("MIReturn"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_VLANEndpoint_RequestStateChange, MIReturn), /* offset */
};

static MI_ParameterDecl MI_CONST* MI_CONST CIM_VLANEndpoint_RequestStateChange_params[] =
{
    &CIM_VLANEndpoint_RequestStateChange_MIReturn_param,
    &CIM_VLANEndpoint_RequestStateChange_RequestedState_param,
    &CIM_VLANEndpoint_RequestStateChange_Job_param,
    &CIM_VLANEndpoint_RequestStateChange_TimeoutPeriod_param,
};

/* method CIM_VLANEndpoint.RequestStateChange() */
MI_CONST MI_MethodDecl CIM_VLANEndpoint_RequestStateChange_rtti =
{
    MI_FLAG_METHOD, /* flags */
    0x00726512, /* code */
    MI_T("RequestStateChange"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    CIM_VLANEndpoint_RequestStateChange_params, /* parameters */
    MI_COUNT(CIM_VLANEndpoint_RequestStateChange_params), /* numParameters */
    sizeof(CIM_VLANEndpoint_RequestStateChange), /* size */
    MI_UINT32, /* returnType */
    MI_T("CIM_EnabledLogicalElement"), /* origin */
    MI_T("CIM_EnabledLogicalElement"), /* propagator */
    &schemaDecl, /* schema */
    (MI_ProviderFT_Invoke)CIM_VLANEndpoint_Invoke_RequestStateChange, /* method */
};

static MI_MethodDecl MI_CONST* MI_CONST CIM_VLANEndpoint_meths[] =
{
    &CIM_VLANEndpoint_RequestStateChange_rtti,
};

static MI_CONST MI_ProviderFT CIM_VLANEndpoint_funcs =
{
  (MI_ProviderFT_Load)CIM_VLANEndpoint_Load,
  (MI_ProviderFT_Unload)CIM_VLANEndpoint_Unload,
  (MI_ProviderFT_GetInstance)CIM_VLANEndpoint_GetInstance,
  (MI_ProviderFT_EnumerateInstances)CIM_VLANEndpoint_EnumerateInstances,
  (MI_ProviderFT_CreateInstance)CIM_VLANEndpoint_CreateInstance,
  (MI_ProviderFT_ModifyInstance)CIM_VLANEndpoint_ModifyInstance,
  (MI_ProviderFT_DeleteInstance)CIM_VLANEndpoint_DeleteInstance,
  (MI_ProviderFT_AssociatorInstances)NULL,
  (MI_ProviderFT_ReferenceInstances)NULL,
  (MI_ProviderFT_EnableIndications)NULL,
  (MI_ProviderFT_DisableIndications)NULL,
  (MI_ProviderFT_Subscribe)NULL,
  (MI_ProviderFT_Unsubscribe)NULL,
  (MI_ProviderFT_Invoke)NULL,
};

static MI_CONST MI_Char* CIM_VLANEndpoint_UMLPackagePath_qual_value = MI_T("CIM::Network::VLAN");

static MI_CONST MI_Qualifier CIM_VLANEndpoint_UMLPackagePath_qual =
{
    MI_T("UMLPackagePath"),
    MI_STRING,
    0,
    &CIM_VLANEndpoint_UMLPackagePath_qual_value
};

static MI_CONST MI_Char* CIM_VLANEndpoint_Version_qual_value = MI_T("2.26.0");

static MI_CONST MI_Qualifier CIM_VLANEndpoint_Version_qual =
{
    MI_T("Version"),
    MI_STRING,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_TRANSLATABLE|MI_FLAG_RESTRICTED,
    &CIM_VLANEndpoint_Version_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_VLANEndpoint_quals[] =
{
    &CIM_VLANEndpoint_UMLPackagePath_qual,
    &CIM_VLANEndpoint_Version_qual,
};

/* class CIM_VLANEndpoint */
MI_CONST MI_ClassDecl CIM_VLANEndpoint_rtti =
{
    MI_FLAG_CLASS, /* flags */
    0x00637410, /* code */
    MI_T("CIM_VLANEndpoint"), /* name */
    CIM_VLANEndpoint_quals, /* qualifiers */
    MI_COUNT(CIM_VLANEndpoint_quals), /* numQualifiers */
    CIM_VLANEndpoint_props, /* properties */
    MI_COUNT(CIM_VLANEndpoint_props), /* numProperties */
    sizeof(CIM_VLANEndpoint), /* size */
    MI_T("CIM_ProtocolEndpoint"), /* superClass */
    &CIM_ProtocolEndpoint_rtti, /* superClassDecl */
    CIM_VLANEndpoint_meths, /* methods */
    MI_COUNT(CIM_VLANEndpoint_meths), /* numMethods */
    &schemaDecl, /* schema */
    &CIM_VLANEndpoint_funcs, /* functions */
    NULL, /* owningClass */
};

/*
**==============================================================================
**
** CIM_LANEndAssociationVlanEnd
**
**==============================================================================
*/

/* property CIM_LANEndAssociationVlanEnd.Left */
static MI_CONST MI_PropertyDecl CIM_LANEndAssociationVlanEnd_Left_prop =
{
    MI_FLAG_PROPERTY|MI_FLAG_KEY, /* flags */
    0x006C7404, /* code */
    MI_T("Left"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("CIM_LANEndpoint"), /* className */
    0, /* subscript */
    offsetof(CIM_LANEndAssociationVlanEnd, Left), /* offset */
    MI_T("CIM_LANEndAssociationVlanEnd"), /* origin */
    MI_T("CIM_LANEndAssociationVlanEnd"), /* propagator */
    NULL,
};

/* property CIM_LANEndAssociationVlanEnd.Right */
static MI_CONST MI_PropertyDecl CIM_LANEndAssociationVlanEnd_Right_prop =
{
    MI_FLAG_PROPERTY|MI_FLAG_KEY, /* flags */
    0x00727405, /* code */
    MI_T("Right"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("CIM_VLANEndpoint"), /* className */
    0, /* subscript */
    offsetof(CIM_LANEndAssociationVlanEnd, Right), /* offset */
    MI_T("CIM_LANEndAssociationVlanEnd"), /* origin */
    MI_T("CIM_LANEndAssociationVlanEnd"), /* propagator */
    NULL,
};

static MI_PropertyDecl MI_CONST* MI_CONST CIM_LANEndAssociationVlanEnd_props[] =
{
    &CIM_LANEndAssociationVlanEnd_Left_prop,
    &CIM_LANEndAssociationVlanEnd_Right_prop,
};

static void MI_CALL CIM_LANEndAssociationVlanEnd_AssociatorInstances(
    CIM_LANEndAssociationVlanEnd_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Instance* instanceName,
    const MI_Char* resultClass,
    const MI_Char* role,
    const MI_Char* resultRole,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    if (CIM_LANEndpoint_IsA(instanceName))
    {
        if (_Match(role, MI_T("Left")) && 
            _Match(resultRole, MI_T("Right")))
        {
            CIM_LANEndAssociationVlanEnd_AssociatorInstancesLeft(
                self, 
                context, 
                nameSpace, 
                className, 
                (CIM_LANEndpoint*)instanceName, 
                resultClass, 
                propertySet, 
                keysOnly, 
                filter);
            return;
        }
    }

    if (CIM_VLANEndpoint_IsA(instanceName))
    {
        if (_Match(role, MI_T("Right")) && 
            _Match(resultRole, MI_T("Left")))
        {
            CIM_LANEndAssociationVlanEnd_AssociatorInstancesRight(
                self, 
                context, 
                nameSpace, 
                className, 
                (CIM_VLANEndpoint*)instanceName, 
                resultClass, 
                propertySet, 
                keysOnly, 
                filter);
            return;
        }
    }

    MI_Context_PostResult(context, MI_RESULT_OK);
}

static void MI_CALL CIM_LANEndAssociationVlanEnd_ReferenceInstances(
    CIM_LANEndAssociationVlanEnd_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Instance* instanceName,
    const MI_Char* role,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    if (CIM_LANEndpoint_IsA(instanceName))
    {
        if (_Match(role, MI_T("Left")))
        {
            CIM_LANEndAssociationVlanEnd_ReferenceInstancesLeft(
                self, 
                context, 
                nameSpace, 
                className, 
                (CIM_LANEndpoint*)instanceName, 
                propertySet, 
                keysOnly, 
                filter);
            return;
        }
    }

    if (CIM_VLANEndpoint_IsA(instanceName))
    {
        if (_Match(role, MI_T("Right")))
        {
            CIM_LANEndAssociationVlanEnd_ReferenceInstancesRight(
                self, 
                context, 
                nameSpace, 
                className, 
                (CIM_VLANEndpoint*)instanceName, 
                propertySet, 
                keysOnly, 
                filter);
            return;
        }
    }

    MI_Context_PostResult(context, MI_RESULT_OK);
}

static MI_CONST MI_ProviderFT CIM_LANEndAssociationVlanEnd_funcs =
{
  (MI_ProviderFT_Load)CIM_LANEndAssociationVlanEnd_Load,
  (MI_ProviderFT_Unload)CIM_LANEndAssociationVlanEnd_Unload,
  (MI_ProviderFT_GetInstance)CIM_LANEndAssociationVlanEnd_GetInstance,
  (MI_ProviderFT_EnumerateInstances)CIM_LANEndAssociationVlanEnd_EnumerateInstances,
  (MI_ProviderFT_CreateInstance)CIM_LANEndAssociationVlanEnd_CreateInstance,
  (MI_ProviderFT_ModifyInstance)CIM_LANEndAssociationVlanEnd_ModifyInstance,
  (MI_ProviderFT_DeleteInstance)CIM_LANEndAssociationVlanEnd_DeleteInstance,
  (MI_ProviderFT_AssociatorInstances)CIM_LANEndAssociationVlanEnd_AssociatorInstances,
  (MI_ProviderFT_ReferenceInstances)CIM_LANEndAssociationVlanEnd_ReferenceInstances,
  (MI_ProviderFT_EnableIndications)NULL,
  (MI_ProviderFT_DisableIndications)NULL,
  (MI_ProviderFT_Subscribe)NULL,
  (MI_ProviderFT_Unsubscribe)NULL,
  (MI_ProviderFT_Invoke)NULL,
};

/* class CIM_LANEndAssociationVlanEnd */
MI_CONST MI_ClassDecl CIM_LANEndAssociationVlanEnd_rtti =
{
    MI_FLAG_CLASS|MI_FLAG_ASSOCIATION, /* flags */
    0x0063641C, /* code */
    MI_T("CIM_LANEndAssociationVlanEnd"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    CIM_LANEndAssociationVlanEnd_props, /* properties */
    MI_COUNT(CIM_LANEndAssociationVlanEnd_props), /* numProperties */
    sizeof(CIM_LANEndAssociationVlanEnd), /* size */
    NULL, /* superClass */
    NULL, /* superClassDecl */
    NULL, /* methods */
    0, /* numMethods */
    &schemaDecl, /* schema */
    &CIM_LANEndAssociationVlanEnd_funcs, /* functions */
    NULL, /* owningClass */
};

/*
**==============================================================================
**
** CIM_VLANEndpointSettingData
**
**==============================================================================
*/

/* property CIM_VLANEndpointSettingData.PruneEligibleVLANList */
static MI_CONST MI_PropertyDecl CIM_VLANEndpointSettingData_PruneEligibleVLANList_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00707415, /* code */
    MI_T("PruneEligibleVLANList"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16A, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_VLANEndpointSettingData, PruneEligibleVLANList), /* offset */
    MI_T("CIM_VLANEndpointSettingData"), /* origin */
    MI_T("CIM_VLANEndpointSettingData"), /* propagator */
    NULL,
};

/* property CIM_VLANEndpointSettingData.NativeVLAN */
static MI_CONST MI_PropertyDecl CIM_VLANEndpointSettingData_NativeVLAN_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006E6E0A, /* code */
    MI_T("NativeVLAN"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_VLANEndpointSettingData, NativeVLAN), /* offset */
    MI_T("CIM_VLANEndpointSettingData"), /* origin */
    MI_T("CIM_VLANEndpointSettingData"), /* propagator */
    NULL,
};

/* property CIM_VLANEndpointSettingData.DefaultVLAN */
static MI_CONST MI_PropertyDecl CIM_VLANEndpointSettingData_DefaultVLAN_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00646E0B, /* code */
    MI_T("DefaultVLAN"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_VLANEndpointSettingData, DefaultVLAN), /* offset */
    MI_T("CIM_VLANEndpointSettingData"), /* origin */
    MI_T("CIM_VLANEndpointSettingData"), /* propagator */
    NULL,
};

/* property CIM_VLANEndpointSettingData.TrunkedVLANList */
static MI_CONST MI_PropertyDecl CIM_VLANEndpointSettingData_TrunkedVLANList_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0074740F, /* code */
    MI_T("TrunkedVLANList"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16A, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_VLANEndpointSettingData, TrunkedVLANList), /* offset */
    MI_T("CIM_VLANEndpointSettingData"), /* origin */
    MI_T("CIM_VLANEndpointSettingData"), /* propagator */
    NULL,
};

/* property CIM_VLANEndpointSettingData.AccessVLAN */
static MI_CONST MI_PropertyDecl CIM_VLANEndpointSettingData_AccessVLAN_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00616E0A, /* code */
    MI_T("AccessVLAN"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_VLANEndpointSettingData, AccessVLAN), /* offset */
    MI_T("CIM_VLANEndpointSettingData"), /* origin */
    MI_T("CIM_VLANEndpointSettingData"), /* propagator */
    NULL,
};

static MI_PropertyDecl MI_CONST* MI_CONST CIM_VLANEndpointSettingData_props[] =
{
    &CIM_SettingData_InstanceID_prop,
    &CIM_ManagedElement_Caption_prop,
    &CIM_ManagedElement_Description_prop,
    &CIM_SettingData_ElementName_prop,
    &CIM_VLANEndpointSettingData_PruneEligibleVLANList_prop,
    &CIM_VLANEndpointSettingData_NativeVLAN_prop,
    &CIM_VLANEndpointSettingData_DefaultVLAN_prop,
    &CIM_VLANEndpointSettingData_TrunkedVLANList_prop,
    &CIM_VLANEndpointSettingData_AccessVLAN_prop,
};

static MI_CONST MI_ProviderFT CIM_VLANEndpointSettingData_funcs =
{
  (MI_ProviderFT_Load)CIM_VLANEndpointSettingData_Load,
  (MI_ProviderFT_Unload)CIM_VLANEndpointSettingData_Unload,
  (MI_ProviderFT_GetInstance)CIM_VLANEndpointSettingData_GetInstance,
  (MI_ProviderFT_EnumerateInstances)CIM_VLANEndpointSettingData_EnumerateInstances,
  (MI_ProviderFT_CreateInstance)CIM_VLANEndpointSettingData_CreateInstance,
  (MI_ProviderFT_ModifyInstance)CIM_VLANEndpointSettingData_ModifyInstance,
  (MI_ProviderFT_DeleteInstance)CIM_VLANEndpointSettingData_DeleteInstance,
  (MI_ProviderFT_AssociatorInstances)NULL,
  (MI_ProviderFT_ReferenceInstances)NULL,
  (MI_ProviderFT_EnableIndications)NULL,
  (MI_ProviderFT_DisableIndications)NULL,
  (MI_ProviderFT_Subscribe)NULL,
  (MI_ProviderFT_Unsubscribe)NULL,
  (MI_ProviderFT_Invoke)NULL,
};

static MI_CONST MI_Char* CIM_VLANEndpointSettingData_UMLPackagePath_qual_value = MI_T("CIM::Network::VLAN");

static MI_CONST MI_Qualifier CIM_VLANEndpointSettingData_UMLPackagePath_qual =
{
    MI_T("UMLPackagePath"),
    MI_STRING,
    0,
    &CIM_VLANEndpointSettingData_UMLPackagePath_qual_value
};

static MI_CONST MI_Char* CIM_VLANEndpointSettingData_Version_qual_value = MI_T("2.27.0");

static MI_CONST MI_Qualifier CIM_VLANEndpointSettingData_Version_qual =
{
    MI_T("Version"),
    MI_STRING,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_TRANSLATABLE|MI_FLAG_RESTRICTED,
    &CIM_VLANEndpointSettingData_Version_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_VLANEndpointSettingData_quals[] =
{
    &CIM_VLANEndpointSettingData_UMLPackagePath_qual,
    &CIM_VLANEndpointSettingData_Version_qual,
};

/* class CIM_VLANEndpointSettingData */
MI_CONST MI_ClassDecl CIM_VLANEndpointSettingData_rtti =
{
    MI_FLAG_CLASS, /* flags */
    0x0063611B, /* code */
    MI_T("CIM_VLANEndpointSettingData"), /* name */
    CIM_VLANEndpointSettingData_quals, /* qualifiers */
    MI_COUNT(CIM_VLANEndpointSettingData_quals), /* numQualifiers */
    CIM_VLANEndpointSettingData_props, /* properties */
    MI_COUNT(CIM_VLANEndpointSettingData_props), /* numProperties */
    sizeof(CIM_VLANEndpointSettingData), /* size */
    MI_T("CIM_SettingData"), /* superClass */
    &CIM_SettingData_rtti, /* superClassDecl */
    NULL, /* methods */
    0, /* numMethods */
    &schemaDecl, /* schema */
    &CIM_VLANEndpointSettingData_funcs, /* functions */
    NULL, /* owningClass */
};

/*
**==============================================================================
**
** CIM_VlanEndAssociationData
**
**==============================================================================
*/

/* property CIM_VlanEndAssociationData.Left */
static MI_CONST MI_PropertyDecl CIM_VlanEndAssociationData_Left_prop =
{
    MI_FLAG_PROPERTY|MI_FLAG_KEY, /* flags */
    0x006C7404, /* code */
    MI_T("Left"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("CIM_VLANEndpoint"), /* className */
    0, /* subscript */
    offsetof(CIM_VlanEndAssociationData, Left), /* offset */
    MI_T("CIM_VlanEndAssociationData"), /* origin */
    MI_T("CIM_VlanEndAssociationData"), /* propagator */
    NULL,
};

/* property CIM_VlanEndAssociationData.Right */
static MI_CONST MI_PropertyDecl CIM_VlanEndAssociationData_Right_prop =
{
    MI_FLAG_PROPERTY|MI_FLAG_KEY, /* flags */
    0x00727405, /* code */
    MI_T("Right"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("CIM_VLANEndpointSettingData"), /* className */
    0, /* subscript */
    offsetof(CIM_VlanEndAssociationData, Right), /* offset */
    MI_T("CIM_VlanEndAssociationData"), /* origin */
    MI_T("CIM_VlanEndAssociationData"), /* propagator */
    NULL,
};

static MI_PropertyDecl MI_CONST* MI_CONST CIM_VlanEndAssociationData_props[] =
{
    &CIM_VlanEndAssociationData_Left_prop,
    &CIM_VlanEndAssociationData_Right_prop,
};

static void MI_CALL CIM_VlanEndAssociationData_AssociatorInstances(
    CIM_VlanEndAssociationData_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Instance* instanceName,
    const MI_Char* resultClass,
    const MI_Char* role,
    const MI_Char* resultRole,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    if (CIM_VLANEndpoint_IsA(instanceName))
    {
        if (_Match(role, MI_T("Left")) && 
            _Match(resultRole, MI_T("Right")))
        {
            CIM_VlanEndAssociationData_AssociatorInstancesLeft(
                self, 
                context, 
                nameSpace, 
                className, 
                (CIM_VLANEndpoint*)instanceName, 
                resultClass, 
                propertySet, 
                keysOnly, 
                filter);
            return;
        }
    }

    if (CIM_VLANEndpointSettingData_IsA(instanceName))
    {
        if (_Match(role, MI_T("Right")) && 
            _Match(resultRole, MI_T("Left")))
        {
            CIM_VlanEndAssociationData_AssociatorInstancesRight(
                self, 
                context, 
                nameSpace, 
                className, 
                (CIM_VLANEndpointSettingData*)instanceName, 
                resultClass, 
                propertySet, 
                keysOnly, 
                filter);
            return;
        }
    }

    MI_Context_PostResult(context, MI_RESULT_OK);
}

static void MI_CALL CIM_VlanEndAssociationData_ReferenceInstances(
    CIM_VlanEndAssociationData_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Instance* instanceName,
    const MI_Char* role,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    if (CIM_VLANEndpoint_IsA(instanceName))
    {
        if (_Match(role, MI_T("Left")))
        {
            CIM_VlanEndAssociationData_ReferenceInstancesLeft(
                self, 
                context, 
                nameSpace, 
                className, 
                (CIM_VLANEndpoint*)instanceName, 
                propertySet, 
                keysOnly, 
                filter);
            return;
        }
    }

    if (CIM_VLANEndpointSettingData_IsA(instanceName))
    {
        if (_Match(role, MI_T("Right")))
        {
            CIM_VlanEndAssociationData_ReferenceInstancesRight(
                self, 
                context, 
                nameSpace, 
                className, 
                (CIM_VLANEndpointSettingData*)instanceName, 
                propertySet, 
                keysOnly, 
                filter);
            return;
        }
    }

    MI_Context_PostResult(context, MI_RESULT_OK);
}

static MI_CONST MI_ProviderFT CIM_VlanEndAssociationData_funcs =
{
  (MI_ProviderFT_Load)CIM_VlanEndAssociationData_Load,
  (MI_ProviderFT_Unload)CIM_VlanEndAssociationData_Unload,
  (MI_ProviderFT_GetInstance)CIM_VlanEndAssociationData_GetInstance,
  (MI_ProviderFT_EnumerateInstances)CIM_VlanEndAssociationData_EnumerateInstances,
  (MI_ProviderFT_CreateInstance)CIM_VlanEndAssociationData_CreateInstance,
  (MI_ProviderFT_ModifyInstance)CIM_VlanEndAssociationData_ModifyInstance,
  (MI_ProviderFT_DeleteInstance)CIM_VlanEndAssociationData_DeleteInstance,
  (MI_ProviderFT_AssociatorInstances)CIM_VlanEndAssociationData_AssociatorInstances,
  (MI_ProviderFT_ReferenceInstances)CIM_VlanEndAssociationData_ReferenceInstances,
  (MI_ProviderFT_EnableIndications)NULL,
  (MI_ProviderFT_DisableIndications)NULL,
  (MI_ProviderFT_Subscribe)NULL,
  (MI_ProviderFT_Unsubscribe)NULL,
  (MI_ProviderFT_Invoke)NULL,
};

/* class CIM_VlanEndAssociationData */
MI_CONST MI_ClassDecl CIM_VlanEndAssociationData_rtti =
{
    MI_FLAG_CLASS|MI_FLAG_ASSOCIATION, /* flags */
    0x0063611A, /* code */
    MI_T("CIM_VlanEndAssociationData"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    CIM_VlanEndAssociationData_props, /* properties */
    MI_COUNT(CIM_VlanEndAssociationData_props), /* numProperties */
    sizeof(CIM_VlanEndAssociationData), /* size */
    NULL, /* superClass */
    NULL, /* superClassDecl */
    NULL, /* methods */
    0, /* numMethods */
    &schemaDecl, /* schema */
    &CIM_VlanEndAssociationData_funcs, /* functions */
    NULL, /* owningClass */
};

/*
**==============================================================================
**
** CIM_Service
**
**==============================================================================
*/

static MI_CONST MI_Uint32 CIM_Service_Name_MaxLen_qual_value = 256U;

static MI_CONST MI_Qualifier CIM_Service_Name_MaxLen_qual =
{
    MI_T("MaxLen"),
    MI_UINT32,
    0,
    &CIM_Service_Name_MaxLen_qual_value
};

static MI_CONST MI_Char* CIM_Service_Name_Override_qual_value = MI_T("Name");

static MI_CONST MI_Qualifier CIM_Service_Name_Override_qual =
{
    MI_T("Override"),
    MI_STRING,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_RESTRICTED,
    &CIM_Service_Name_Override_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_Service_Name_quals[] =
{
    &CIM_Service_Name_MaxLen_qual,
    &CIM_Service_Name_Override_qual,
};

/* property CIM_Service.Name */
static MI_CONST MI_PropertyDecl CIM_Service_Name_prop =
{
    MI_FLAG_PROPERTY|MI_FLAG_KEY, /* flags */
    0x006E6504, /* code */
    MI_T("Name"), /* name */
    CIM_Service_Name_quals, /* qualifiers */
    MI_COUNT(CIM_Service_Name_quals), /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_Service, Name), /* offset */
    MI_T("CIM_ManagedSystemElement"), /* origin */
    MI_T("CIM_Service"), /* propagator */
    NULL,
};

static MI_CONST MI_Uint32 CIM_Service_SystemCreationClassName_MaxLen_qual_value = 256U;

static MI_CONST MI_Qualifier CIM_Service_SystemCreationClassName_MaxLen_qual =
{
    MI_T("MaxLen"),
    MI_UINT32,
    0,
    &CIM_Service_SystemCreationClassName_MaxLen_qual_value
};

static MI_CONST MI_Char* CIM_Service_SystemCreationClassName_Propagated_qual_value = MI_T("CIM_System.CreationClassName");

static MI_CONST MI_Qualifier CIM_Service_SystemCreationClassName_Propagated_qual =
{
    MI_T("Propagated"),
    MI_STRING,
    MI_FLAG_DISABLEOVERRIDE|MI_FLAG_TOSUBCLASS,
    &CIM_Service_SystemCreationClassName_Propagated_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_Service_SystemCreationClassName_quals[] =
{
    &CIM_Service_SystemCreationClassName_MaxLen_qual,
    &CIM_Service_SystemCreationClassName_Propagated_qual,
};

/* property CIM_Service.SystemCreationClassName */
static MI_CONST MI_PropertyDecl CIM_Service_SystemCreationClassName_prop =
{
    MI_FLAG_PROPERTY|MI_FLAG_KEY, /* flags */
    0x00736517, /* code */
    MI_T("SystemCreationClassName"), /* name */
    CIM_Service_SystemCreationClassName_quals, /* qualifiers */
    MI_COUNT(CIM_Service_SystemCreationClassName_quals), /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_Service, SystemCreationClassName), /* offset */
    MI_T("CIM_Service"), /* origin */
    MI_T("CIM_Service"), /* propagator */
    NULL,
};

static MI_CONST MI_Uint32 CIM_Service_SystemName_MaxLen_qual_value = 256U;

static MI_CONST MI_Qualifier CIM_Service_SystemName_MaxLen_qual =
{
    MI_T("MaxLen"),
    MI_UINT32,
    0,
    &CIM_Service_SystemName_MaxLen_qual_value
};

static MI_CONST MI_Char* CIM_Service_SystemName_Propagated_qual_value = MI_T("CIM_System.Name");

static MI_CONST MI_Qualifier CIM_Service_SystemName_Propagated_qual =
{
    MI_T("Propagated"),
    MI_STRING,
    MI_FLAG_DISABLEOVERRIDE|MI_FLAG_TOSUBCLASS,
    &CIM_Service_SystemName_Propagated_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_Service_SystemName_quals[] =
{
    &CIM_Service_SystemName_MaxLen_qual,
    &CIM_Service_SystemName_Propagated_qual,
};

/* property CIM_Service.SystemName */
static MI_CONST MI_PropertyDecl CIM_Service_SystemName_prop =
{
    MI_FLAG_PROPERTY|MI_FLAG_KEY, /* flags */
    0x0073650A, /* code */
    MI_T("SystemName"), /* name */
    CIM_Service_SystemName_quals, /* qualifiers */
    MI_COUNT(CIM_Service_SystemName_quals), /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_Service, SystemName), /* offset */
    MI_T("CIM_Service"), /* origin */
    MI_T("CIM_Service"), /* propagator */
    NULL,
};

static MI_CONST MI_Uint32 CIM_Service_CreationClassName_MaxLen_qual_value = 256U;

static MI_CONST MI_Qualifier CIM_Service_CreationClassName_MaxLen_qual =
{
    MI_T("MaxLen"),
    MI_UINT32,
    0,
    &CIM_Service_CreationClassName_MaxLen_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_Service_CreationClassName_quals[] =
{
    &CIM_Service_CreationClassName_MaxLen_qual,
};

/* property CIM_Service.CreationClassName */
static MI_CONST MI_PropertyDecl CIM_Service_CreationClassName_prop =
{
    MI_FLAG_PROPERTY|MI_FLAG_KEY, /* flags */
    0x00636511, /* code */
    MI_T("CreationClassName"), /* name */
    CIM_Service_CreationClassName_quals, /* qualifiers */
    MI_COUNT(CIM_Service_CreationClassName_quals), /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_Service, CreationClassName), /* offset */
    MI_T("CIM_Service"), /* origin */
    MI_T("CIM_Service"), /* propagator */
    NULL,
};

static MI_CONST MI_Uint32 CIM_Service_PrimaryOwnerName_MaxLen_qual_value = 64U;

static MI_CONST MI_Qualifier CIM_Service_PrimaryOwnerName_MaxLen_qual =
{
    MI_T("MaxLen"),
    MI_UINT32,
    0,
    &CIM_Service_PrimaryOwnerName_MaxLen_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_Service_PrimaryOwnerName_quals[] =
{
    &CIM_Service_PrimaryOwnerName_MaxLen_qual,
};

/* property CIM_Service.PrimaryOwnerName */
static MI_CONST MI_PropertyDecl CIM_Service_PrimaryOwnerName_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00706510, /* code */
    MI_T("PrimaryOwnerName"), /* name */
    CIM_Service_PrimaryOwnerName_quals, /* qualifiers */
    MI_COUNT(CIM_Service_PrimaryOwnerName_quals), /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_Service, PrimaryOwnerName), /* offset */
    MI_T("CIM_Service"), /* origin */
    MI_T("CIM_Service"), /* propagator */
    NULL,
};

static MI_CONST MI_Uint32 CIM_Service_PrimaryOwnerContact_MaxLen_qual_value = 256U;

static MI_CONST MI_Qualifier CIM_Service_PrimaryOwnerContact_MaxLen_qual =
{
    MI_T("MaxLen"),
    MI_UINT32,
    0,
    &CIM_Service_PrimaryOwnerContact_MaxLen_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_Service_PrimaryOwnerContact_quals[] =
{
    &CIM_Service_PrimaryOwnerContact_MaxLen_qual,
};

/* property CIM_Service.PrimaryOwnerContact */
static MI_CONST MI_PropertyDecl CIM_Service_PrimaryOwnerContact_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00707413, /* code */
    MI_T("PrimaryOwnerContact"), /* name */
    CIM_Service_PrimaryOwnerContact_quals, /* qualifiers */
    MI_COUNT(CIM_Service_PrimaryOwnerContact_quals), /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_Service, PrimaryOwnerContact), /* offset */
    MI_T("CIM_Service"), /* origin */
    MI_T("CIM_Service"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* CIM_Service_StartMode_Deprecated_qual_data_value[] =
{
    MI_T("CIM_Service.EnabledDefault"),
};

static MI_CONST MI_ConstStringA CIM_Service_StartMode_Deprecated_qual_value =
{
    CIM_Service_StartMode_Deprecated_qual_data_value,
    MI_COUNT(CIM_Service_StartMode_Deprecated_qual_data_value),
};

static MI_CONST MI_Qualifier CIM_Service_StartMode_Deprecated_qual =
{
    MI_T("Deprecated"),
    MI_STRINGA,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_RESTRICTED,
    &CIM_Service_StartMode_Deprecated_qual_value
};

static MI_CONST MI_Uint32 CIM_Service_StartMode_MaxLen_qual_value = 10U;

static MI_CONST MI_Qualifier CIM_Service_StartMode_MaxLen_qual =
{
    MI_T("MaxLen"),
    MI_UINT32,
    0,
    &CIM_Service_StartMode_MaxLen_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_Service_StartMode_quals[] =
{
    &CIM_Service_StartMode_Deprecated_qual,
    &CIM_Service_StartMode_MaxLen_qual,
};

/* property CIM_Service.StartMode */
static MI_CONST MI_PropertyDecl CIM_Service_StartMode_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00736509, /* code */
    MI_T("StartMode"), /* name */
    CIM_Service_StartMode_quals, /* qualifiers */
    MI_COUNT(CIM_Service_StartMode_quals), /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_Service, StartMode), /* offset */
    MI_T("CIM_Service"), /* origin */
    MI_T("CIM_Service"), /* propagator */
    NULL,
};

/* property CIM_Service.Started */
static MI_CONST MI_PropertyDecl CIM_Service_Started_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00736407, /* code */
    MI_T("Started"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_BOOLEAN, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_Service, Started), /* offset */
    MI_T("CIM_Service"), /* origin */
    MI_T("CIM_Service"), /* propagator */
    NULL,
};

static MI_PropertyDecl MI_CONST* MI_CONST CIM_Service_props[] =
{
    &CIM_ManagedElement_InstanceID_prop,
    &CIM_ManagedElement_Caption_prop,
    &CIM_ManagedElement_Description_prop,
    &CIM_ManagedElement_ElementName_prop,
    &CIM_ManagedSystemElement_InstallDate_prop,
    &CIM_Service_Name_prop,
    &CIM_ManagedSystemElement_OperationalStatus_prop,
    &CIM_ManagedSystemElement_StatusDescriptions_prop,
    &CIM_ManagedSystemElement_Status_prop,
    &CIM_ManagedSystemElement_HealthState_prop,
    &CIM_ManagedSystemElement_CommunicationStatus_prop,
    &CIM_ManagedSystemElement_DetailedStatus_prop,
    &CIM_ManagedSystemElement_OperatingStatus_prop,
    &CIM_ManagedSystemElement_PrimaryStatus_prop,
    &CIM_EnabledLogicalElement_EnabledState_prop,
    &CIM_EnabledLogicalElement_OtherEnabledState_prop,
    &CIM_EnabledLogicalElement_RequestedState_prop,
    &CIM_EnabledLogicalElement_EnabledDefault_prop,
    &CIM_EnabledLogicalElement_TimeOfLastStateChange_prop,
    &CIM_EnabledLogicalElement_AvailableRequestedStates_prop,
    &CIM_EnabledLogicalElement_TransitioningToState_prop,
    &CIM_Service_SystemCreationClassName_prop,
    &CIM_Service_SystemName_prop,
    &CIM_Service_CreationClassName_prop,
    &CIM_Service_PrimaryOwnerName_prop,
    &CIM_Service_PrimaryOwnerContact_prop,
    &CIM_Service_StartMode_prop,
    &CIM_Service_Started_prop,
};

/* parameter CIM_Service.StartService(): MIReturn */
static MI_CONST MI_ParameterDecl CIM_Service_StartService_MIReturn_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006D6E08, /* code */
    MI_T("MIReturn"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_Service_StartService, MIReturn), /* offset */
};

static MI_ParameterDecl MI_CONST* MI_CONST CIM_Service_StartService_params[] =
{
    &CIM_Service_StartService_MIReturn_param,
};

/* method CIM_Service.StartService() */
MI_CONST MI_MethodDecl CIM_Service_StartService_rtti =
{
    MI_FLAG_METHOD, /* flags */
    0x0073650C, /* code */
    MI_T("StartService"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    CIM_Service_StartService_params, /* parameters */
    MI_COUNT(CIM_Service_StartService_params), /* numParameters */
    sizeof(CIM_Service_StartService), /* size */
    MI_UINT32, /* returnType */
    MI_T("CIM_Service"), /* origin */
    MI_T("CIM_Service"), /* propagator */
    &schemaDecl, /* schema */
    NULL, /* method */
};

/* parameter CIM_Service.StopService(): MIReturn */
static MI_CONST MI_ParameterDecl CIM_Service_StopService_MIReturn_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006D6E08, /* code */
    MI_T("MIReturn"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_Service_StopService, MIReturn), /* offset */
};

static MI_ParameterDecl MI_CONST* MI_CONST CIM_Service_StopService_params[] =
{
    &CIM_Service_StopService_MIReturn_param,
};

/* method CIM_Service.StopService() */
MI_CONST MI_MethodDecl CIM_Service_StopService_rtti =
{
    MI_FLAG_METHOD, /* flags */
    0x0073650B, /* code */
    MI_T("StopService"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    CIM_Service_StopService_params, /* parameters */
    MI_COUNT(CIM_Service_StopService_params), /* numParameters */
    sizeof(CIM_Service_StopService), /* size */
    MI_UINT32, /* returnType */
    MI_T("CIM_Service"), /* origin */
    MI_T("CIM_Service"), /* propagator */
    &schemaDecl, /* schema */
    NULL, /* method */
};

static MI_MethodDecl MI_CONST* MI_CONST CIM_Service_meths[] =
{
    &CIM_EnabledLogicalElement_RequestStateChange_rtti,
    &CIM_Service_StartService_rtti,
    &CIM_Service_StopService_rtti,
};

static MI_CONST MI_Char* CIM_Service_UMLPackagePath_qual_value = MI_T("CIM::Core::Service");

static MI_CONST MI_Qualifier CIM_Service_UMLPackagePath_qual =
{
    MI_T("UMLPackagePath"),
    MI_STRING,
    0,
    &CIM_Service_UMLPackagePath_qual_value
};

static MI_CONST MI_Char* CIM_Service_Version_qual_value = MI_T("2.14.0");

static MI_CONST MI_Qualifier CIM_Service_Version_qual =
{
    MI_T("Version"),
    MI_STRING,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_TRANSLATABLE|MI_FLAG_RESTRICTED,
    &CIM_Service_Version_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_Service_quals[] =
{
    &CIM_Service_UMLPackagePath_qual,
    &CIM_Service_Version_qual,
};

/* class CIM_Service */
MI_CONST MI_ClassDecl CIM_Service_rtti =
{
    MI_FLAG_CLASS|MI_FLAG_ABSTRACT, /* flags */
    0x0063650B, /* code */
    MI_T("CIM_Service"), /* name */
    CIM_Service_quals, /* qualifiers */
    MI_COUNT(CIM_Service_quals), /* numQualifiers */
    CIM_Service_props, /* properties */
    MI_COUNT(CIM_Service_props), /* numProperties */
    sizeof(CIM_Service), /* size */
    MI_T("CIM_EnabledLogicalElement"), /* superClass */
    &CIM_EnabledLogicalElement_rtti, /* superClassDecl */
    CIM_Service_meths, /* methods */
    MI_COUNT(CIM_Service_meths), /* numMethods */
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
** MSFT_NetworkVLAN
**
**==============================================================================
*/

/* property MSFT_NetworkVLAN.IsEnabled */
static MI_CONST MI_PropertyDecl MSFT_NetworkVLAN_IsEnabled_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00696409, /* code */
    MI_T("IsEnabled"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_BOOLEAN, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_NetworkVLAN, IsEnabled), /* offset */
    MI_T("MSFT_NetworkVLAN"), /* origin */
    MI_T("MSFT_NetworkVLAN"), /* propagator */
    NULL,
};

/* property MSFT_NetworkVLAN.State */
static MI_CONST MI_PropertyDecl MSFT_NetworkVLAN_State_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00736505, /* code */
    MI_T("State"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_NetworkVLAN, State), /* offset */
    MI_T("MSFT_NetworkVLAN"), /* origin */
    MI_T("MSFT_NetworkVLAN"), /* propagator */
    NULL,
};

/* property MSFT_NetworkVLAN.PrivateVLANType */
static MI_CONST MI_PropertyDecl MSFT_NetworkVLAN_PrivateVLANType_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0070650F, /* code */
    MI_T("PrivateVLANType"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_NetworkVLAN, PrivateVLANType), /* offset */
    MI_T("MSFT_NetworkVLAN"), /* origin */
    MI_T("MSFT_NetworkVLAN"), /* propagator */
    NULL,
};

/* property MSFT_NetworkVLAN.PrimaryVLANId */
static MI_CONST MI_PropertyDecl MSFT_NetworkVLAN_PrimaryVLANId_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0070640D, /* code */
    MI_T("PrimaryVLANId"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_NetworkVLAN, PrimaryVLANId), /* offset */
    MI_T("MSFT_NetworkVLAN"), /* origin */
    MI_T("MSFT_NetworkVLAN"), /* propagator */
    NULL,
};

/* property MSFT_NetworkVLAN.AssociatedVLANIds */
static MI_CONST MI_PropertyDecl MSFT_NetworkVLAN_AssociatedVLANIds_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00617311, /* code */
    MI_T("AssociatedVLANIds"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16A, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_NetworkVLAN, AssociatedVLANIds), /* offset */
    MI_T("MSFT_NetworkVLAN"), /* origin */
    MI_T("MSFT_NetworkVLAN"), /* propagator */
    NULL,
};

/* property MSFT_NetworkVLAN.MACAddressAgingTime */
static MI_CONST MI_PropertyDecl MSFT_NetworkVLAN_MACAddressAgingTime_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006D6513, /* code */
    MI_T("MACAddressAgingTime"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_NetworkVLAN, MACAddressAgingTime), /* offset */
    MI_T("MSFT_NetworkVLAN"), /* origin */
    MI_T("MSFT_NetworkVLAN"), /* propagator */
    NULL,
};

static MI_PropertyDecl MI_CONST* MI_CONST MSFT_NetworkVLAN_props[] =
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
    &MSFT_NetworkVLAN_IsEnabled_prop,
    &MSFT_NetworkVLAN_State_prop,
    &MSFT_NetworkVLAN_PrivateVLANType_prop,
    &MSFT_NetworkVLAN_PrimaryVLANId_prop,
    &MSFT_NetworkVLAN_AssociatedVLANIds_prop,
    &MSFT_NetworkVLAN_MACAddressAgingTime_prop,
};

static MI_CONST MI_ProviderFT MSFT_NetworkVLAN_funcs =
{
  (MI_ProviderFT_Load)MSFT_NetworkVLAN_Load,
  (MI_ProviderFT_Unload)MSFT_NetworkVLAN_Unload,
  (MI_ProviderFT_GetInstance)MSFT_NetworkVLAN_GetInstance,
  (MI_ProviderFT_EnumerateInstances)MSFT_NetworkVLAN_EnumerateInstances,
  (MI_ProviderFT_CreateInstance)MSFT_NetworkVLAN_CreateInstance,
  (MI_ProviderFT_ModifyInstance)MSFT_NetworkVLAN_ModifyInstance,
  (MI_ProviderFT_DeleteInstance)MSFT_NetworkVLAN_DeleteInstance,
  (MI_ProviderFT_AssociatorInstances)NULL,
  (MI_ProviderFT_ReferenceInstances)NULL,
  (MI_ProviderFT_EnableIndications)NULL,
  (MI_ProviderFT_DisableIndications)NULL,
  (MI_ProviderFT_Subscribe)NULL,
  (MI_ProviderFT_Unsubscribe)NULL,
  (MI_ProviderFT_Invoke)NULL,
};

static MI_CONST MI_Char* MSFT_NetworkVLAN_UMLPackagePath_qual_value = MI_T("CIM::Network::VLAN");

static MI_CONST MI_Qualifier MSFT_NetworkVLAN_UMLPackagePath_qual =
{
    MI_T("UMLPackagePath"),
    MI_STRING,
    0,
    &MSFT_NetworkVLAN_UMLPackagePath_qual_value
};

static MI_CONST MI_Char* MSFT_NetworkVLAN_Version_qual_value = MI_T("0.70");

static MI_CONST MI_Qualifier MSFT_NetworkVLAN_Version_qual =
{
    MI_T("Version"),
    MI_STRING,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_TRANSLATABLE|MI_FLAG_RESTRICTED,
    &MSFT_NetworkVLAN_Version_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST MSFT_NetworkVLAN_quals[] =
{
    &MSFT_NetworkVLAN_UMLPackagePath_qual,
    &MSFT_NetworkVLAN_Version_qual,
};

/* class MSFT_NetworkVLAN */
MI_CONST MI_ClassDecl MSFT_NetworkVLAN_rtti =
{
    MI_FLAG_CLASS, /* flags */
    0x006D6E10, /* code */
    MI_T("MSFT_NetworkVLAN"), /* name */
    MSFT_NetworkVLAN_quals, /* qualifiers */
    MI_COUNT(MSFT_NetworkVLAN_quals), /* numQualifiers */
    MSFT_NetworkVLAN_props, /* properties */
    MI_COUNT(MSFT_NetworkVLAN_props), /* numProperties */
    sizeof(MSFT_NetworkVLAN), /* size */
    MI_T("CIM_NetworkVLAN"), /* superClass */
    &CIM_NetworkVLAN_rtti, /* superClassDecl */
    NULL, /* methods */
    0, /* numMethods */
    &schemaDecl, /* schema */
    &MSFT_NetworkVLAN_funcs, /* functions */
    NULL, /* owningClass */
};

/*
**==============================================================================
**
** MSFT_LinkAggregation
**
**==============================================================================
*/

/* property MSFT_LinkAggregation.GroupNumber */
static MI_CONST MI_PropertyDecl MSFT_LinkAggregation_GroupNumber_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0067720B, /* code */
    MI_T("GroupNumber"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_LinkAggregation, GroupNumber), /* offset */
    MI_T("MSFT_LinkAggregation"), /* origin */
    MI_T("MSFT_LinkAggregation"), /* propagator */
    NULL,
};

/* property MSFT_LinkAggregation.LoadBalance */
static MI_CONST MI_PropertyDecl MSFT_LinkAggregation_LoadBalance_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006C650B, /* code */
    MI_T("LoadBalance"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_LinkAggregation, LoadBalance), /* offset */
    MI_T("MSFT_LinkAggregation"), /* origin */
    MI_T("MSFT_LinkAggregation"), /* propagator */
    NULL,
};

static MI_PropertyDecl MI_CONST* MI_CONST MSFT_LinkAggregation_props[] =
{
    &CIM_ManagedElement_InstanceID_prop,
    &CIM_ManagedElement_Caption_prop,
    &CIM_ManagedElement_Description_prop,
    &CIM_ManagedElement_ElementName_prop,
    &CIM_ManagedSystemElement_InstallDate_prop,
    &CIM_ManagedSystemElement_Name_prop,
    &CIM_ManagedSystemElement_OperationalStatus_prop,
    &CIM_ManagedSystemElement_StatusDescriptions_prop,
    &CIM_ManagedSystemElement_Status_prop,
    &CIM_ManagedSystemElement_HealthState_prop,
    &CIM_ManagedSystemElement_CommunicationStatus_prop,
    &CIM_ManagedSystemElement_DetailedStatus_prop,
    &CIM_ManagedSystemElement_OperatingStatus_prop,
    &CIM_ManagedSystemElement_PrimaryStatus_prop,
    &CIM_EnabledLogicalElement_EnabledState_prop,
    &CIM_EnabledLogicalElement_OtherEnabledState_prop,
    &CIM_EnabledLogicalElement_RequestedState_prop,
    &CIM_EnabledLogicalElement_EnabledDefault_prop,
    &CIM_EnabledLogicalElement_TimeOfLastStateChange_prop,
    &CIM_EnabledLogicalElement_AvailableRequestedStates_prop,
    &CIM_EnabledLogicalElement_TransitioningToState_prop,
    &CIM_LogicalDevice_SystemCreationClassName_prop,
    &CIM_LogicalDevice_SystemName_prop,
    &CIM_LogicalDevice_CreationClassName_prop,
    &CIM_LogicalDevice_DeviceID_prop,
    &CIM_LogicalDevice_PowerManagementSupported_prop,
    &CIM_LogicalDevice_PowerManagementCapabilities_prop,
    &CIM_LogicalDevice_Availability_prop,
    &CIM_LogicalDevice_StatusInfo_prop,
    &CIM_LogicalDevice_LastErrorCode_prop,
    &CIM_LogicalDevice_ErrorDescription_prop,
    &CIM_LogicalDevice_ErrorCleared_prop,
    &CIM_LogicalDevice_OtherIdentifyingInfo_prop,
    &CIM_LogicalDevice_PowerOnHours_prop,
    &CIM_LogicalDevice_TotalPowerOnHours_prop,
    &CIM_LogicalDevice_IdentifyingDescriptions_prop,
    &CIM_LogicalDevice_AdditionalAvailability_prop,
    &CIM_LogicalDevice_MaxQuiesceTime_prop,
    &CIM_NetworkPort_Speed_prop,
    &CIM_LogicalPort_MaxSpeed_prop,
    &CIM_LogicalPort_RequestedSpeed_prop,
    &CIM_LogicalPort_UsageRestriction_prop,
    &CIM_EthernetPort_PortType_prop,
    &CIM_LogicalPort_OtherPortType_prop,
    &CIM_NetworkPort_OtherNetworkPortType_prop,
    &CIM_NetworkPort_PortNumber_prop,
    &CIM_NetworkPort_LinkTechnology_prop,
    &CIM_NetworkPort_OtherLinkTechnology_prop,
    &CIM_NetworkPort_PermanentAddress_prop,
    &CIM_EthernetPort_NetworkAddresses_prop,
    &CIM_NetworkPort_FullDuplex_prop,
    &CIM_NetworkPort_AutoSense_prop,
    &CIM_NetworkPort_SupportedMaximumTransmissionUnit_prop,
    &CIM_NetworkPort_ActiveMaximumTransmissionUnit_prop,
    &CIM_EthernetPort_MaxDataSize_prop,
    &CIM_EthernetPort_Capabilities_prop,
    &CIM_EthernetPort_CapabilityDescriptions_prop,
    &CIM_EthernetPort_EnabledCapabilities_prop,
    &CIM_EthernetPort_OtherEnabledCapabilities_prop,
    &MSFT_EthernetPort_LACPPortPriority_prop,
    &MSFT_EthernetPort_LACPMode_prop,
    &MSFT_EthernetPort_LACPGroupNumber_prop,
    &MSFT_EthernetPort_SpanningTreePortType_prop,
    &MSFT_EthernetPort_LLDPTransmitEnabled_prop,
    &MSFT_EthernetPort_LLDPReceiveEnabled_prop,
    &MSFT_EthernetPort_cdpEnabled_prop,
    &MSFT_EthernetPort_SNMPLinkStatusTrapEnabled_prop,
    &MSFT_EthernetPort_LLDPRemotePortID_prop,
    &MSFT_EthernetPort_LLDPRemotePortIDType_prop,
    &MSFT_EthernetPort_LLDPRemoteDeviceID_prop,
    &MSFT_EthernetPort_LLDPRemoteDeviceIDType_prop,
    &MSFT_LinkAggregation_GroupNumber_prop,
    &MSFT_LinkAggregation_LoadBalance_prop,
};

static MI_MethodDecl MI_CONST* MI_CONST MSFT_LinkAggregation_meths[] =
{
    &CIM_EnabledLogicalElement_RequestStateChange_rtti,
    &CIM_LogicalDevice_SetPowerState_rtti,
    &CIM_LogicalDevice_Reset_rtti,
    &CIM_LogicalDevice_EnableDevice_rtti,
    &CIM_LogicalDevice_OnlineDevice_rtti,
    &CIM_LogicalDevice_QuiesceDevice_rtti,
    &CIM_LogicalDevice_SaveProperties_rtti,
    &CIM_LogicalDevice_RestoreProperties_rtti,
};

static MI_CONST MI_Char* MSFT_LinkAggregation_UMLPackagePath_qual_value = MI_T("CIM::Device::Ports");

static MI_CONST MI_Qualifier MSFT_LinkAggregation_UMLPackagePath_qual =
{
    MI_T("UMLPackagePath"),
    MI_STRING,
    0,
    &MSFT_LinkAggregation_UMLPackagePath_qual_value
};

static MI_CONST MI_Char* MSFT_LinkAggregation_Version_qual_value = MI_T("0.70");

static MI_CONST MI_Qualifier MSFT_LinkAggregation_Version_qual =
{
    MI_T("Version"),
    MI_STRING,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_TRANSLATABLE|MI_FLAG_RESTRICTED,
    &MSFT_LinkAggregation_Version_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST MSFT_LinkAggregation_quals[] =
{
    &MSFT_LinkAggregation_UMLPackagePath_qual,
    &MSFT_LinkAggregation_Version_qual,
};

/* class MSFT_LinkAggregation */
MI_CONST MI_ClassDecl MSFT_LinkAggregation_rtti =
{
    MI_FLAG_CLASS, /* flags */
    0x006D6E14, /* code */
    MI_T("MSFT_LinkAggregation"), /* name */
    MSFT_LinkAggregation_quals, /* qualifiers */
    MI_COUNT(MSFT_LinkAggregation_quals), /* numQualifiers */
    MSFT_LinkAggregation_props, /* properties */
    MI_COUNT(MSFT_LinkAggregation_props), /* numProperties */
    sizeof(MSFT_LinkAggregation), /* size */
    MI_T("MSFT_EthernetPort"), /* superClass */
    &MSFT_EthernetPort_rtti, /* superClassDecl */
    MSFT_LinkAggregation_meths, /* methods */
    MI_COUNT(MSFT_LinkAggregation_meths), /* numMethods */
    &schemaDecl, /* schema */
    NULL, /* functions */
    NULL, /* owningClass */
};

/*
**==============================================================================
**
** MSFT_RemoteServerGroup
**
**==============================================================================
*/

static MI_CONST MI_Char* MSFT_RemoteServerGroup_InstanceID_Override_qual_value = MI_T("InstanceID");

static MI_CONST MI_Qualifier MSFT_RemoteServerGroup_InstanceID_Override_qual =
{
    MI_T("Override"),
    MI_STRING,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_RESTRICTED,
    &MSFT_RemoteServerGroup_InstanceID_Override_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST MSFT_RemoteServerGroup_InstanceID_quals[] =
{
    &MSFT_RemoteServerGroup_InstanceID_Override_qual,
};

/* property MSFT_RemoteServerGroup.InstanceID */
static MI_CONST MI_PropertyDecl MSFT_RemoteServerGroup_InstanceID_prop =
{
    MI_FLAG_PROPERTY|MI_FLAG_KEY, /* flags */
    0x0069640A, /* code */
    MI_T("InstanceID"), /* name */
    MSFT_RemoteServerGroup_InstanceID_quals, /* qualifiers */
    MI_COUNT(MSFT_RemoteServerGroup_InstanceID_quals), /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_RemoteServerGroup, InstanceID), /* offset */
    MI_T("CIM_ManagedElement"), /* origin */
    MI_T("MSFT_RemoteServerGroup"), /* propagator */
    NULL,
};

/* property MSFT_RemoteServerGroup.FeatureName */
static MI_CONST MI_PropertyDecl MSFT_RemoteServerGroup_FeatureName_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0066650B, /* code */
    MI_T("FeatureName"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_RemoteServerGroup, FeatureName), /* offset */
    MI_T("MSFT_RemoteServerGroup"), /* origin */
    MI_T("MSFT_RemoteServerGroup"), /* propagator */
    NULL,
};

/* property MSFT_RemoteServerGroup.OtherFeatureName */
static MI_CONST MI_PropertyDecl MSFT_RemoteServerGroup_OtherFeatureName_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006F6510, /* code */
    MI_T("OtherFeatureName"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_RemoteServerGroup, OtherFeatureName), /* offset */
    MI_T("MSFT_RemoteServerGroup"), /* origin */
    MI_T("MSFT_RemoteServerGroup"), /* propagator */
    NULL,
};

static MI_PropertyDecl MI_CONST* MI_CONST MSFT_RemoteServerGroup_props[] =
{
    &MSFT_RemoteServerGroup_InstanceID_prop,
    &CIM_ManagedElement_Caption_prop,
    &CIM_ManagedElement_Description_prop,
    &CIM_ManagedElement_ElementName_prop,
    &MSFT_RemoteServerGroup_FeatureName_prop,
    &MSFT_RemoteServerGroup_OtherFeatureName_prop,
};

static MI_CONST MI_Char* MSFT_RemoteServerGroup_UMLPackagePath_qual_value = MI_T("CIM::Core::Collection");

static MI_CONST MI_Qualifier MSFT_RemoteServerGroup_UMLPackagePath_qual =
{
    MI_T("UMLPackagePath"),
    MI_STRING,
    0,
    &MSFT_RemoteServerGroup_UMLPackagePath_qual_value
};

static MI_CONST MI_Char* MSFT_RemoteServerGroup_Version_qual_value = MI_T(".7");

static MI_CONST MI_Qualifier MSFT_RemoteServerGroup_Version_qual =
{
    MI_T("Version"),
    MI_STRING,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_TRANSLATABLE|MI_FLAG_RESTRICTED,
    &MSFT_RemoteServerGroup_Version_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST MSFT_RemoteServerGroup_quals[] =
{
    &MSFT_RemoteServerGroup_UMLPackagePath_qual,
    &MSFT_RemoteServerGroup_Version_qual,
};

/* class MSFT_RemoteServerGroup */
MI_CONST MI_ClassDecl MSFT_RemoteServerGroup_rtti =
{
    MI_FLAG_CLASS, /* flags */
    0x006D7016, /* code */
    MI_T("MSFT_RemoteServerGroup"), /* name */
    MSFT_RemoteServerGroup_quals, /* qualifiers */
    MI_COUNT(MSFT_RemoteServerGroup_quals), /* numQualifiers */
    MSFT_RemoteServerGroup_props, /* properties */
    MI_COUNT(MSFT_RemoteServerGroup_props), /* numProperties */
    sizeof(MSFT_RemoteServerGroup), /* size */
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
** MSFT_MACTable
**
**==============================================================================
*/

static MI_PropertyDecl MI_CONST* MI_CONST MSFT_MACTable_props[] =
{
    &CIM_SystemSpecificCollection_InstanceID_prop,
    &CIM_ManagedElement_Caption_prop,
    &CIM_ManagedElement_Description_prop,
    &CIM_ManagedElement_ElementName_prop,
};

static MI_CONST MI_ProviderFT MSFT_MACTable_funcs =
{
  (MI_ProviderFT_Load)MSFT_MACTable_Load,
  (MI_ProviderFT_Unload)MSFT_MACTable_Unload,
  (MI_ProviderFT_GetInstance)MSFT_MACTable_GetInstance,
  (MI_ProviderFT_EnumerateInstances)MSFT_MACTable_EnumerateInstances,
  (MI_ProviderFT_CreateInstance)MSFT_MACTable_CreateInstance,
  (MI_ProviderFT_ModifyInstance)MSFT_MACTable_ModifyInstance,
  (MI_ProviderFT_DeleteInstance)MSFT_MACTable_DeleteInstance,
  (MI_ProviderFT_AssociatorInstances)NULL,
  (MI_ProviderFT_ReferenceInstances)NULL,
  (MI_ProviderFT_EnableIndications)NULL,
  (MI_ProviderFT_DisableIndications)NULL,
  (MI_ProviderFT_Subscribe)NULL,
  (MI_ProviderFT_Unsubscribe)NULL,
  (MI_ProviderFT_Invoke)NULL,
};

static MI_CONST MI_Char* MSFT_MACTable_UMLPackagePath_qual_value = MI_T("CIM::Core::Collection");

static MI_CONST MI_Qualifier MSFT_MACTable_UMLPackagePath_qual =
{
    MI_T("UMLPackagePath"),
    MI_STRING,
    0,
    &MSFT_MACTable_UMLPackagePath_qual_value
};

static MI_CONST MI_Char* MSFT_MACTable_Version_qual_value = MI_T(".7");

static MI_CONST MI_Qualifier MSFT_MACTable_Version_qual =
{
    MI_T("Version"),
    MI_STRING,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_TRANSLATABLE|MI_FLAG_RESTRICTED,
    &MSFT_MACTable_Version_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST MSFT_MACTable_quals[] =
{
    &MSFT_MACTable_UMLPackagePath_qual,
    &MSFT_MACTable_Version_qual,
};

/* class MSFT_MACTable */
MI_CONST MI_ClassDecl MSFT_MACTable_rtti =
{
    MI_FLAG_CLASS, /* flags */
    0x006D650D, /* code */
    MI_T("MSFT_MACTable"), /* name */
    MSFT_MACTable_quals, /* qualifiers */
    MI_COUNT(MSFT_MACTable_quals), /* numQualifiers */
    MSFT_MACTable_props, /* properties */
    MI_COUNT(MSFT_MACTable_props), /* numProperties */
    sizeof(MSFT_MACTable), /* size */
    MI_T("CIM_SystemSpecificCollection"), /* superClass */
    &CIM_SystemSpecificCollection_rtti, /* superClassDecl */
    NULL, /* methods */
    0, /* numMethods */
    &schemaDecl, /* schema */
    &MSFT_MACTable_funcs, /* functions */
    NULL, /* owningClass */
};

/*
**==============================================================================
**
** MSFT_MACTableEntry
**
**==============================================================================
*/

static MI_CONST MI_Char* MSFT_MACTableEntry_InstanceID_Override_qual_value = MI_T("InstanceID");

static MI_CONST MI_Qualifier MSFT_MACTableEntry_InstanceID_Override_qual =
{
    MI_T("Override"),
    MI_STRING,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_RESTRICTED,
    &MSFT_MACTableEntry_InstanceID_Override_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST MSFT_MACTableEntry_InstanceID_quals[] =
{
    &MSFT_MACTableEntry_InstanceID_Override_qual,
};

/* property MSFT_MACTableEntry.InstanceID */
static MI_CONST MI_PropertyDecl MSFT_MACTableEntry_InstanceID_prop =
{
    MI_FLAG_PROPERTY|MI_FLAG_KEY, /* flags */
    0x0069640A, /* code */
    MI_T("InstanceID"), /* name */
    MSFT_MACTableEntry_InstanceID_quals, /* qualifiers */
    MI_COUNT(MSFT_MACTableEntry_InstanceID_quals), /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_MACTableEntry, InstanceID), /* offset */
    MI_T("CIM_ManagedElement"), /* origin */
    MI_T("MSFT_MACTableEntry"), /* propagator */
    NULL,
};

/* property MSFT_MACTableEntry.MACAddress */
static MI_CONST MI_PropertyDecl MSFT_MACTableEntry_MACAddress_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006D730A, /* code */
    MI_T("MACAddress"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_MACTableEntry, MACAddress), /* offset */
    MI_T("MSFT_MACTableEntry"), /* origin */
    MI_T("MSFT_MACTableEntry"), /* propagator */
    NULL,
};

/* property MSFT_MACTableEntry.VLANId */
static MI_CONST MI_PropertyDecl MSFT_MACTableEntry_VLANId_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00766406, /* code */
    MI_T("VLANId"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_MACTableEntry, VLANId), /* offset */
    MI_T("MSFT_MACTableEntry"), /* origin */
    MI_T("MSFT_MACTableEntry"), /* propagator */
    NULL,
};

/* property MSFT_MACTableEntry.EntryType */
static MI_CONST MI_PropertyDecl MSFT_MACTableEntry_EntryType_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00656509, /* code */
    MI_T("EntryType"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_MACTableEntry, EntryType), /* offset */
    MI_T("MSFT_MACTableEntry"), /* origin */
    MI_T("MSFT_MACTableEntry"), /* propagator */
    NULL,
};

/* property MSFT_MACTableEntry.InterfaceName */
static MI_CONST MI_PropertyDecl MSFT_MACTableEntry_InterfaceName_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0069650D, /* code */
    MI_T("InterfaceName"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_MACTableEntry, InterfaceName), /* offset */
    MI_T("MSFT_MACTableEntry"), /* origin */
    MI_T("MSFT_MACTableEntry"), /* propagator */
    NULL,
};

/* property MSFT_MACTableEntry.Age */
static MI_CONST MI_PropertyDecl MSFT_MACTableEntry_Age_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00616503, /* code */
    MI_T("Age"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_MACTableEntry, Age), /* offset */
    MI_T("MSFT_MACTableEntry"), /* origin */
    MI_T("MSFT_MACTableEntry"), /* propagator */
    NULL,
};

static MI_PropertyDecl MI_CONST* MI_CONST MSFT_MACTableEntry_props[] =
{
    &MSFT_MACTableEntry_InstanceID_prop,
    &CIM_ManagedElement_Caption_prop,
    &CIM_ManagedElement_Description_prop,
    &CIM_ManagedElement_ElementName_prop,
    &MSFT_MACTableEntry_MACAddress_prop,
    &MSFT_MACTableEntry_VLANId_prop,
    &MSFT_MACTableEntry_EntryType_prop,
    &MSFT_MACTableEntry_InterfaceName_prop,
    &MSFT_MACTableEntry_Age_prop,
};

static MI_CONST MI_ProviderFT MSFT_MACTableEntry_funcs =
{
  (MI_ProviderFT_Load)MSFT_MACTableEntry_Load,
  (MI_ProviderFT_Unload)MSFT_MACTableEntry_Unload,
  (MI_ProviderFT_GetInstance)MSFT_MACTableEntry_GetInstance,
  (MI_ProviderFT_EnumerateInstances)MSFT_MACTableEntry_EnumerateInstances,
  (MI_ProviderFT_CreateInstance)MSFT_MACTableEntry_CreateInstance,
  (MI_ProviderFT_ModifyInstance)MSFT_MACTableEntry_ModifyInstance,
  (MI_ProviderFT_DeleteInstance)MSFT_MACTableEntry_DeleteInstance,
  (MI_ProviderFT_AssociatorInstances)NULL,
  (MI_ProviderFT_ReferenceInstances)NULL,
  (MI_ProviderFT_EnableIndications)NULL,
  (MI_ProviderFT_DisableIndications)NULL,
  (MI_ProviderFT_Subscribe)NULL,
  (MI_ProviderFT_Unsubscribe)NULL,
  (MI_ProviderFT_Invoke)NULL,
};

static MI_CONST MI_Char* MSFT_MACTableEntry_UMLPackagePath_qual_value = MI_T("CIM::Core::CoreElements");

static MI_CONST MI_Qualifier MSFT_MACTableEntry_UMLPackagePath_qual =
{
    MI_T("UMLPackagePath"),
    MI_STRING,
    0,
    &MSFT_MACTableEntry_UMLPackagePath_qual_value
};

static MI_CONST MI_Char* MSFT_MACTableEntry_Version_qual_value = MI_T(".7");

static MI_CONST MI_Qualifier MSFT_MACTableEntry_Version_qual =
{
    MI_T("Version"),
    MI_STRING,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_TRANSLATABLE|MI_FLAG_RESTRICTED,
    &MSFT_MACTableEntry_Version_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST MSFT_MACTableEntry_quals[] =
{
    &MSFT_MACTableEntry_UMLPackagePath_qual,
    &MSFT_MACTableEntry_Version_qual,
};

/* class MSFT_MACTableEntry */
MI_CONST MI_ClassDecl MSFT_MACTableEntry_rtti =
{
    MI_FLAG_CLASS, /* flags */
    0x006D7912, /* code */
    MI_T("MSFT_MACTableEntry"), /* name */
    MSFT_MACTableEntry_quals, /* qualifiers */
    MI_COUNT(MSFT_MACTableEntry_quals), /* numQualifiers */
    MSFT_MACTableEntry_props, /* properties */
    MI_COUNT(MSFT_MACTableEntry_props), /* numProperties */
    sizeof(MSFT_MACTableEntry), /* size */
    MI_T("CIM_ManagedElement"), /* superClass */
    &CIM_ManagedElement_rtti, /* superClassDecl */
    NULL, /* methods */
    0, /* numMethods */
    &schemaDecl, /* schema */
    &MSFT_MACTableEntry_funcs, /* functions */
    NULL, /* owningClass */
};

/*
**==============================================================================
**
** MSFT_SwitchService
**
**==============================================================================
*/

static MI_PropertyDecl MI_CONST* MI_CONST MSFT_SwitchService_props[] =
{
    &CIM_ManagedElement_InstanceID_prop,
    &CIM_ManagedElement_Caption_prop,
    &CIM_ManagedElement_Description_prop,
    &CIM_ManagedElement_ElementName_prop,
    &CIM_ManagedSystemElement_InstallDate_prop,
    &CIM_Service_Name_prop,
    &CIM_ManagedSystemElement_OperationalStatus_prop,
    &CIM_ManagedSystemElement_StatusDescriptions_prop,
    &CIM_ManagedSystemElement_Status_prop,
    &CIM_ManagedSystemElement_HealthState_prop,
    &CIM_ManagedSystemElement_CommunicationStatus_prop,
    &CIM_ManagedSystemElement_DetailedStatus_prop,
    &CIM_ManagedSystemElement_OperatingStatus_prop,
    &CIM_ManagedSystemElement_PrimaryStatus_prop,
    &CIM_EnabledLogicalElement_EnabledState_prop,
    &CIM_EnabledLogicalElement_OtherEnabledState_prop,
    &CIM_EnabledLogicalElement_RequestedState_prop,
    &CIM_EnabledLogicalElement_EnabledDefault_prop,
    &CIM_EnabledLogicalElement_TimeOfLastStateChange_prop,
    &CIM_EnabledLogicalElement_AvailableRequestedStates_prop,
    &CIM_EnabledLogicalElement_TransitioningToState_prop,
    &CIM_Service_SystemCreationClassName_prop,
    &CIM_Service_SystemName_prop,
    &CIM_Service_CreationClassName_prop,
    &CIM_Service_PrimaryOwnerName_prop,
    &CIM_Service_PrimaryOwnerContact_prop,
    &CIM_Service_StartMode_prop,
    &CIM_Service_Started_prop,
};

/* parameter MSFT_SwitchService.RequestStateChange(): RequestedState */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_RequestStateChange_RequestedState_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_IN, /* flags */
    0x0072650E, /* code */
    MI_T("RequestedState"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_RequestStateChange, RequestedState), /* offset */
};

/* parameter MSFT_SwitchService.RequestStateChange(): Job */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_RequestStateChange_Job_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006A6203, /* code */
    MI_T("Job"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("CIM_ConcreteJob"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_RequestStateChange, Job), /* offset */
};

/* parameter MSFT_SwitchService.RequestStateChange(): TimeoutPeriod */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_RequestStateChange_TimeoutPeriod_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_IN, /* flags */
    0x0074640D, /* code */
    MI_T("TimeoutPeriod"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_DATETIME, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_RequestStateChange, TimeoutPeriod), /* offset */
};

/* parameter MSFT_SwitchService.RequestStateChange(): MIReturn */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_RequestStateChange_MIReturn_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006D6E08, /* code */
    MI_T("MIReturn"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_RequestStateChange, MIReturn), /* offset */
};

static MI_ParameterDecl MI_CONST* MI_CONST MSFT_SwitchService_RequestStateChange_params[] =
{
    &MSFT_SwitchService_RequestStateChange_MIReturn_param,
    &MSFT_SwitchService_RequestStateChange_RequestedState_param,
    &MSFT_SwitchService_RequestStateChange_Job_param,
    &MSFT_SwitchService_RequestStateChange_TimeoutPeriod_param,
};

/* method MSFT_SwitchService.RequestStateChange() */
MI_CONST MI_MethodDecl MSFT_SwitchService_RequestStateChange_rtti =
{
    MI_FLAG_METHOD, /* flags */
    0x00726512, /* code */
    MI_T("RequestStateChange"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MSFT_SwitchService_RequestStateChange_params, /* parameters */
    MI_COUNT(MSFT_SwitchService_RequestStateChange_params), /* numParameters */
    sizeof(MSFT_SwitchService_RequestStateChange), /* size */
    MI_UINT32, /* returnType */
    MI_T("CIM_EnabledLogicalElement"), /* origin */
    MI_T("CIM_EnabledLogicalElement"), /* propagator */
    &schemaDecl, /* schema */
    (MI_ProviderFT_Invoke)MSFT_SwitchService_Invoke_RequestStateChange, /* method */
};

/* parameter MSFT_SwitchService.StartService(): MIReturn */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_StartService_MIReturn_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006D6E08, /* code */
    MI_T("MIReturn"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_StartService, MIReturn), /* offset */
};

static MI_ParameterDecl MI_CONST* MI_CONST MSFT_SwitchService_StartService_params[] =
{
    &MSFT_SwitchService_StartService_MIReturn_param,
};

/* method MSFT_SwitchService.StartService() */
MI_CONST MI_MethodDecl MSFT_SwitchService_StartService_rtti =
{
    MI_FLAG_METHOD, /* flags */
    0x0073650C, /* code */
    MI_T("StartService"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MSFT_SwitchService_StartService_params, /* parameters */
    MI_COUNT(MSFT_SwitchService_StartService_params), /* numParameters */
    sizeof(MSFT_SwitchService_StartService), /* size */
    MI_UINT32, /* returnType */
    MI_T("CIM_Service"), /* origin */
    MI_T("CIM_Service"), /* propagator */
    &schemaDecl, /* schema */
    (MI_ProviderFT_Invoke)MSFT_SwitchService_Invoke_StartService, /* method */
};

/* parameter MSFT_SwitchService.StopService(): MIReturn */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_StopService_MIReturn_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006D6E08, /* code */
    MI_T("MIReturn"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_StopService, MIReturn), /* offset */
};

static MI_ParameterDecl MI_CONST* MI_CONST MSFT_SwitchService_StopService_params[] =
{
    &MSFT_SwitchService_StopService_MIReturn_param,
};

/* method MSFT_SwitchService.StopService() */
MI_CONST MI_MethodDecl MSFT_SwitchService_StopService_rtti =
{
    MI_FLAG_METHOD, /* flags */
    0x0073650B, /* code */
    MI_T("StopService"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MSFT_SwitchService_StopService_params, /* parameters */
    MI_COUNT(MSFT_SwitchService_StopService_params), /* numParameters */
    sizeof(MSFT_SwitchService_StopService), /* size */
    MI_UINT32, /* returnType */
    MI_T("CIM_Service"), /* origin */
    MI_T("CIM_Service"), /* propagator */
    &schemaDecl, /* schema */
    (MI_ProviderFT_Invoke)MSFT_SwitchService_Invoke_StopService, /* method */
};

/* parameter MSFT_SwitchService.AddProtocolEndpoint(): TargetInterface */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_AddProtocolEndpoint_TargetInterface_param =
{
    MI_FLAG_PARAMETER, /* flags */
    0x0074650F, /* code */
    MI_T("TargetInterface"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("CIM_ManagedElement"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_AddProtocolEndpoint, TargetInterface), /* offset */
};

static MI_CONST MI_Char* MSFT_SwitchService_AddProtocolEndpoint_ProtocolEndpoint_EmbeddedInstance_qual_value = MI_T("CIM_ProtocolEndpoint");

static MI_CONST MI_Qualifier MSFT_SwitchService_AddProtocolEndpoint_ProtocolEndpoint_EmbeddedInstance_qual =
{
    MI_T("EmbeddedInstance"),
    MI_STRING,
    0,
    &MSFT_SwitchService_AddProtocolEndpoint_ProtocolEndpoint_EmbeddedInstance_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST MSFT_SwitchService_AddProtocolEndpoint_ProtocolEndpoint_quals[] =
{
    &MSFT_SwitchService_AddProtocolEndpoint_ProtocolEndpoint_EmbeddedInstance_qual,
};

/* parameter MSFT_SwitchService.AddProtocolEndpoint(): ProtocolEndpoint */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_AddProtocolEndpoint_ProtocolEndpoint_param =
{
    MI_FLAG_PARAMETER, /* flags */
    0x00707410, /* code */
    MI_T("ProtocolEndpoint"), /* name */
    MSFT_SwitchService_AddProtocolEndpoint_ProtocolEndpoint_quals, /* qualifiers */
    MI_COUNT(MSFT_SwitchService_AddProtocolEndpoint_ProtocolEndpoint_quals), /* numQualifiers */
    MI_INSTANCEA, /* type */
    MI_T("CIM_ProtocolEndpoint"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_AddProtocolEndpoint, ProtocolEndpoint), /* offset */
};

static MI_CONST MI_Char* MSFT_SwitchService_AddProtocolEndpoint_EndPointSettings_EmbeddedInstance_qual_value = MI_T("CIM_SettingData");

static MI_CONST MI_Qualifier MSFT_SwitchService_AddProtocolEndpoint_EndPointSettings_EmbeddedInstance_qual =
{
    MI_T("EmbeddedInstance"),
    MI_STRING,
    0,
    &MSFT_SwitchService_AddProtocolEndpoint_EndPointSettings_EmbeddedInstance_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST MSFT_SwitchService_AddProtocolEndpoint_EndPointSettings_quals[] =
{
    &MSFT_SwitchService_AddProtocolEndpoint_EndPointSettings_EmbeddedInstance_qual,
};

/* parameter MSFT_SwitchService.AddProtocolEndpoint(): EndPointSettings */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_AddProtocolEndpoint_EndPointSettings_param =
{
    MI_FLAG_PARAMETER, /* flags */
    0x00657310, /* code */
    MI_T("EndPointSettings"), /* name */
    MSFT_SwitchService_AddProtocolEndpoint_EndPointSettings_quals, /* qualifiers */
    MI_COUNT(MSFT_SwitchService_AddProtocolEndpoint_EndPointSettings_quals), /* numQualifiers */
    MI_INSTANCEA, /* type */
    MI_T("CIM_SettingData"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_AddProtocolEndpoint, EndPointSettings), /* offset */
};

/* parameter MSFT_SwitchService.AddProtocolEndpoint(): ResultingEndpoint */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_AddProtocolEndpoint_ResultingEndpoint_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x00727411, /* code */
    MI_T("ResultingEndpoint"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCEA, /* type */
    MI_T("CIM_ProtocolEndpoint"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_AddProtocolEndpoint, ResultingEndpoint), /* offset */
};

/* parameter MSFT_SwitchService.AddProtocolEndpoint(): Job */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_AddProtocolEndpoint_Job_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006A6203, /* code */
    MI_T("Job"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("CIM_ConcreteJob"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_AddProtocolEndpoint, Job), /* offset */
};

/* parameter MSFT_SwitchService.AddProtocolEndpoint(): MIReturn */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_AddProtocolEndpoint_MIReturn_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006D6E08, /* code */
    MI_T("MIReturn"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_AddProtocolEndpoint, MIReturn), /* offset */
};

static MI_ParameterDecl MI_CONST* MI_CONST MSFT_SwitchService_AddProtocolEndpoint_params[] =
{
    &MSFT_SwitchService_AddProtocolEndpoint_MIReturn_param,
    &MSFT_SwitchService_AddProtocolEndpoint_TargetInterface_param,
    &MSFT_SwitchService_AddProtocolEndpoint_ProtocolEndpoint_param,
    &MSFT_SwitchService_AddProtocolEndpoint_EndPointSettings_param,
    &MSFT_SwitchService_AddProtocolEndpoint_ResultingEndpoint_param,
    &MSFT_SwitchService_AddProtocolEndpoint_Job_param,
};

/* method MSFT_SwitchService.AddProtocolEndpoint() */
MI_CONST MI_MethodDecl MSFT_SwitchService_AddProtocolEndpoint_rtti =
{
    MI_FLAG_METHOD, /* flags */
    0x00617413, /* code */
    MI_T("AddProtocolEndpoint"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MSFT_SwitchService_AddProtocolEndpoint_params, /* parameters */
    MI_COUNT(MSFT_SwitchService_AddProtocolEndpoint_params), /* numParameters */
    sizeof(MSFT_SwitchService_AddProtocolEndpoint), /* size */
    MI_UINT32, /* returnType */
    MI_T("MSFT_SwitchService"), /* origin */
    MI_T("MSFT_SwitchService"), /* propagator */
    &schemaDecl, /* schema */
    (MI_ProviderFT_Invoke)MSFT_SwitchService_Invoke_AddProtocolEndpoint, /* method */
};

/* parameter MSFT_SwitchService.RemoveProtocolEndpoint(): Endpoint */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_RemoveProtocolEndpoint_Endpoint_param =
{
    MI_FLAG_PARAMETER, /* flags */
    0x00657408, /* code */
    MI_T("Endpoint"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("CIM_ProtocolEndpoint"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_RemoveProtocolEndpoint, Endpoint), /* offset */
};

/* parameter MSFT_SwitchService.RemoveProtocolEndpoint(): Job */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_RemoveProtocolEndpoint_Job_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006A6203, /* code */
    MI_T("Job"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("CIM_ConcreteJob"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_RemoveProtocolEndpoint, Job), /* offset */
};

/* parameter MSFT_SwitchService.RemoveProtocolEndpoint(): MIReturn */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_RemoveProtocolEndpoint_MIReturn_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006D6E08, /* code */
    MI_T("MIReturn"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_RemoveProtocolEndpoint, MIReturn), /* offset */
};

static MI_ParameterDecl MI_CONST* MI_CONST MSFT_SwitchService_RemoveProtocolEndpoint_params[] =
{
    &MSFT_SwitchService_RemoveProtocolEndpoint_MIReturn_param,
    &MSFT_SwitchService_RemoveProtocolEndpoint_Endpoint_param,
    &MSFT_SwitchService_RemoveProtocolEndpoint_Job_param,
};

/* method MSFT_SwitchService.RemoveProtocolEndpoint() */
MI_CONST MI_MethodDecl MSFT_SwitchService_RemoveProtocolEndpoint_rtti =
{
    MI_FLAG_METHOD, /* flags */
    0x00727416, /* code */
    MI_T("RemoveProtocolEndpoint"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MSFT_SwitchService_RemoveProtocolEndpoint_params, /* parameters */
    MI_COUNT(MSFT_SwitchService_RemoveProtocolEndpoint_params), /* numParameters */
    sizeof(MSFT_SwitchService_RemoveProtocolEndpoint), /* size */
    MI_UINT32, /* returnType */
    MI_T("MSFT_SwitchService"), /* origin */
    MI_T("MSFT_SwitchService"), /* propagator */
    &schemaDecl, /* schema */
    (MI_ProviderFT_Invoke)MSFT_SwitchService_Invoke_RemoveProtocolEndpoint, /* method */
};

/* parameter MSFT_SwitchService.AddVLAN(): TargetedSwitch */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_AddVLAN_TargetedSwitch_param =
{
    MI_FLAG_PARAMETER, /* flags */
    0x0074680E, /* code */
    MI_T("TargetedSwitch"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("CIM_ComputerSystem"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_AddVLAN, TargetedSwitch), /* offset */
};

static MI_CONST MI_Char* MSFT_SwitchService_AddVLAN_NetworkVLAN_EmbeddedInstance_qual_value = MI_T("MSFT_NetworkVLAN");

static MI_CONST MI_Qualifier MSFT_SwitchService_AddVLAN_NetworkVLAN_EmbeddedInstance_qual =
{
    MI_T("EmbeddedInstance"),
    MI_STRING,
    0,
    &MSFT_SwitchService_AddVLAN_NetworkVLAN_EmbeddedInstance_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST MSFT_SwitchService_AddVLAN_NetworkVLAN_quals[] =
{
    &MSFT_SwitchService_AddVLAN_NetworkVLAN_EmbeddedInstance_qual,
};

/* parameter MSFT_SwitchService.AddVLAN(): NetworkVLAN */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_AddVLAN_NetworkVLAN_param =
{
    MI_FLAG_PARAMETER, /* flags */
    0x006E6E0B, /* code */
    MI_T("NetworkVLAN"), /* name */
    MSFT_SwitchService_AddVLAN_NetworkVLAN_quals, /* qualifiers */
    MI_COUNT(MSFT_SwitchService_AddVLAN_NetworkVLAN_quals), /* numQualifiers */
    MI_INSTANCEA, /* type */
    MI_T("MSFT_NetworkVLAN"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_AddVLAN, NetworkVLAN), /* offset */
};

/* parameter MSFT_SwitchService.AddVLAN(): VLAN */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_AddVLAN_VLAN_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x00766E04, /* code */
    MI_T("VLAN"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCEA, /* type */
    MI_T("MSFT_NetworkVLAN"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_AddVLAN, VLAN), /* offset */
};

/* parameter MSFT_SwitchService.AddVLAN(): Job */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_AddVLAN_Job_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006A6203, /* code */
    MI_T("Job"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("CIM_ConcreteJob"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_AddVLAN, Job), /* offset */
};

/* parameter MSFT_SwitchService.AddVLAN(): MIReturn */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_AddVLAN_MIReturn_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006D6E08, /* code */
    MI_T("MIReturn"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_AddVLAN, MIReturn), /* offset */
};

static MI_ParameterDecl MI_CONST* MI_CONST MSFT_SwitchService_AddVLAN_params[] =
{
    &MSFT_SwitchService_AddVLAN_MIReturn_param,
    &MSFT_SwitchService_AddVLAN_TargetedSwitch_param,
    &MSFT_SwitchService_AddVLAN_NetworkVLAN_param,
    &MSFT_SwitchService_AddVLAN_VLAN_param,
    &MSFT_SwitchService_AddVLAN_Job_param,
};

/* method MSFT_SwitchService.AddVLAN() */
MI_CONST MI_MethodDecl MSFT_SwitchService_AddVLAN_rtti =
{
    MI_FLAG_METHOD, /* flags */
    0x00616E07, /* code */
    MI_T("AddVLAN"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MSFT_SwitchService_AddVLAN_params, /* parameters */
    MI_COUNT(MSFT_SwitchService_AddVLAN_params), /* numParameters */
    sizeof(MSFT_SwitchService_AddVLAN), /* size */
    MI_UINT32, /* returnType */
    MI_T("MSFT_SwitchService"), /* origin */
    MI_T("MSFT_SwitchService"), /* propagator */
    &schemaDecl, /* schema */
    (MI_ProviderFT_Invoke)MSFT_SwitchService_Invoke_AddVLAN, /* method */
};

/* parameter MSFT_SwitchService.RemoveVLAN(): VLAN */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_RemoveVLAN_VLAN_param =
{
    MI_FLAG_PARAMETER, /* flags */
    0x00766E04, /* code */
    MI_T("VLAN"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCEA, /* type */
    MI_T("MSFT_NetworkVLAN"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_RemoveVLAN, VLAN), /* offset */
};

/* parameter MSFT_SwitchService.RemoveVLAN(): Job */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_RemoveVLAN_Job_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006A6203, /* code */
    MI_T("Job"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("CIM_ConcreteJob"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_RemoveVLAN, Job), /* offset */
};

/* parameter MSFT_SwitchService.RemoveVLAN(): MIReturn */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_RemoveVLAN_MIReturn_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006D6E08, /* code */
    MI_T("MIReturn"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_RemoveVLAN, MIReturn), /* offset */
};

static MI_ParameterDecl MI_CONST* MI_CONST MSFT_SwitchService_RemoveVLAN_params[] =
{
    &MSFT_SwitchService_RemoveVLAN_MIReturn_param,
    &MSFT_SwitchService_RemoveVLAN_VLAN_param,
    &MSFT_SwitchService_RemoveVLAN_Job_param,
};

/* method MSFT_SwitchService.RemoveVLAN() */
MI_CONST MI_MethodDecl MSFT_SwitchService_RemoveVLAN_rtti =
{
    MI_FLAG_METHOD, /* flags */
    0x00726E0A, /* code */
    MI_T("RemoveVLAN"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MSFT_SwitchService_RemoveVLAN_params, /* parameters */
    MI_COUNT(MSFT_SwitchService_RemoveVLAN_params), /* numParameters */
    sizeof(MSFT_SwitchService_RemoveVLAN), /* size */
    MI_UINT32, /* returnType */
    MI_T("MSFT_SwitchService"), /* origin */
    MI_T("MSFT_SwitchService"), /* propagator */
    &schemaDecl, /* schema */
    (MI_ProviderFT_Invoke)MSFT_SwitchService_Invoke_RemoveVLAN, /* method */
};

/* parameter MSFT_SwitchService.EnableVLAN(): VLAN */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_EnableVLAN_VLAN_param =
{
    MI_FLAG_PARAMETER, /* flags */
    0x00766E04, /* code */
    MI_T("VLAN"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCEA, /* type */
    MI_T("MSFT_NetworkVLAN"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_EnableVLAN, VLAN), /* offset */
};

/* parameter MSFT_SwitchService.EnableVLAN(): Job */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_EnableVLAN_Job_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006A6203, /* code */
    MI_T("Job"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("CIM_ConcreteJob"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_EnableVLAN, Job), /* offset */
};

/* parameter MSFT_SwitchService.EnableVLAN(): MIReturn */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_EnableVLAN_MIReturn_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006D6E08, /* code */
    MI_T("MIReturn"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_EnableVLAN, MIReturn), /* offset */
};

static MI_ParameterDecl MI_CONST* MI_CONST MSFT_SwitchService_EnableVLAN_params[] =
{
    &MSFT_SwitchService_EnableVLAN_MIReturn_param,
    &MSFT_SwitchService_EnableVLAN_VLAN_param,
    &MSFT_SwitchService_EnableVLAN_Job_param,
};

/* method MSFT_SwitchService.EnableVLAN() */
MI_CONST MI_MethodDecl MSFT_SwitchService_EnableVLAN_rtti =
{
    MI_FLAG_METHOD, /* flags */
    0x00656E0A, /* code */
    MI_T("EnableVLAN"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MSFT_SwitchService_EnableVLAN_params, /* parameters */
    MI_COUNT(MSFT_SwitchService_EnableVLAN_params), /* numParameters */
    sizeof(MSFT_SwitchService_EnableVLAN), /* size */
    MI_UINT32, /* returnType */
    MI_T("MSFT_SwitchService"), /* origin */
    MI_T("MSFT_SwitchService"), /* propagator */
    &schemaDecl, /* schema */
    (MI_ProviderFT_Invoke)MSFT_SwitchService_Invoke_EnableVLAN, /* method */
};

/* parameter MSFT_SwitchService.DisableVLAN(): VLAN */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_DisableVLAN_VLAN_param =
{
    MI_FLAG_PARAMETER, /* flags */
    0x00766E04, /* code */
    MI_T("VLAN"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCEA, /* type */
    MI_T("MSFT_NetworkVLAN"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_DisableVLAN, VLAN), /* offset */
};

/* parameter MSFT_SwitchService.DisableVLAN(): Job */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_DisableVLAN_Job_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006A6203, /* code */
    MI_T("Job"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("CIM_ConcreteJob"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_DisableVLAN, Job), /* offset */
};

/* parameter MSFT_SwitchService.DisableVLAN(): MIReturn */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_DisableVLAN_MIReturn_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006D6E08, /* code */
    MI_T("MIReturn"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_DisableVLAN, MIReturn), /* offset */
};

static MI_ParameterDecl MI_CONST* MI_CONST MSFT_SwitchService_DisableVLAN_params[] =
{
    &MSFT_SwitchService_DisableVLAN_MIReturn_param,
    &MSFT_SwitchService_DisableVLAN_VLAN_param,
    &MSFT_SwitchService_DisableVLAN_Job_param,
};

/* method MSFT_SwitchService.DisableVLAN() */
MI_CONST MI_MethodDecl MSFT_SwitchService_DisableVLAN_rtti =
{
    MI_FLAG_METHOD, /* flags */
    0x00646E0B, /* code */
    MI_T("DisableVLAN"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MSFT_SwitchService_DisableVLAN_params, /* parameters */
    MI_COUNT(MSFT_SwitchService_DisableVLAN_params), /* numParameters */
    sizeof(MSFT_SwitchService_DisableVLAN), /* size */
    MI_UINT32, /* returnType */
    MI_T("MSFT_SwitchService"), /* origin */
    MI_T("MSFT_SwitchService"), /* propagator */
    &schemaDecl, /* schema */
    (MI_ProviderFT_Invoke)MSFT_SwitchService_Invoke_DisableVLAN, /* method */
};

/* parameter MSFT_SwitchService.SetVLANState(): VLAN */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_SetVLANState_VLAN_param =
{
    MI_FLAG_PARAMETER, /* flags */
    0x00766E04, /* code */
    MI_T("VLAN"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("MSFT_NetworkVLAN"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_SetVLANState, VLAN), /* offset */
};

/* parameter MSFT_SwitchService.SetVLANState(): State */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_SetVLANState_State_param =
{
    MI_FLAG_PARAMETER, /* flags */
    0x00736505, /* code */
    MI_T("State"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_SetVLANState, State), /* offset */
};

/* parameter MSFT_SwitchService.SetVLANState(): Job */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_SetVLANState_Job_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006A6203, /* code */
    MI_T("Job"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("CIM_ConcreteJob"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_SetVLANState, Job), /* offset */
};

/* parameter MSFT_SwitchService.SetVLANState(): MIReturn */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_SetVLANState_MIReturn_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006D6E08, /* code */
    MI_T("MIReturn"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_SetVLANState, MIReturn), /* offset */
};

static MI_ParameterDecl MI_CONST* MI_CONST MSFT_SwitchService_SetVLANState_params[] =
{
    &MSFT_SwitchService_SetVLANState_MIReturn_param,
    &MSFT_SwitchService_SetVLANState_VLAN_param,
    &MSFT_SwitchService_SetVLANState_State_param,
    &MSFT_SwitchService_SetVLANState_Job_param,
};

/* method MSFT_SwitchService.SetVLANState() */
MI_CONST MI_MethodDecl MSFT_SwitchService_SetVLANState_rtti =
{
    MI_FLAG_METHOD, /* flags */
    0x0073650C, /* code */
    MI_T("SetVLANState"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MSFT_SwitchService_SetVLANState_params, /* parameters */
    MI_COUNT(MSFT_SwitchService_SetVLANState_params), /* numParameters */
    sizeof(MSFT_SwitchService_SetVLANState), /* size */
    MI_UINT32, /* returnType */
    MI_T("MSFT_SwitchService"), /* origin */
    MI_T("MSFT_SwitchService"), /* propagator */
    &schemaDecl, /* schema */
    (MI_ProviderFT_Invoke)MSFT_SwitchService_Invoke_SetVLANState, /* method */
};

static MI_CONST MI_Char* MSFT_SwitchService_CreateLinkAggregation_LinkAggregation_EmbeddedInstance_qual_value = MI_T("MSFT_LinkAggregation");

static MI_CONST MI_Qualifier MSFT_SwitchService_CreateLinkAggregation_LinkAggregation_EmbeddedInstance_qual =
{
    MI_T("EmbeddedInstance"),
    MI_STRING,
    0,
    &MSFT_SwitchService_CreateLinkAggregation_LinkAggregation_EmbeddedInstance_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST MSFT_SwitchService_CreateLinkAggregation_LinkAggregation_quals[] =
{
    &MSFT_SwitchService_CreateLinkAggregation_LinkAggregation_EmbeddedInstance_qual,
};

/* parameter MSFT_SwitchService.CreateLinkAggregation(): LinkAggregation */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_CreateLinkAggregation_LinkAggregation_param =
{
    MI_FLAG_PARAMETER, /* flags */
    0x006C6E0F, /* code */
    MI_T("LinkAggregation"), /* name */
    MSFT_SwitchService_CreateLinkAggregation_LinkAggregation_quals, /* qualifiers */
    MI_COUNT(MSFT_SwitchService_CreateLinkAggregation_LinkAggregation_quals), /* numQualifiers */
    MI_INSTANCEA, /* type */
    MI_T("MSFT_LinkAggregation"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_CreateLinkAggregation, LinkAggregation), /* offset */
};

/* parameter MSFT_SwitchService.CreateLinkAggregation(): EthernetPort */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_CreateLinkAggregation_EthernetPort_param =
{
    MI_FLAG_PARAMETER, /* flags */
    0x0065740C, /* code */
    MI_T("EthernetPort"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCEA, /* type */
    MI_T("CIM_EthernetPort"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_CreateLinkAggregation, EthernetPort), /* offset */
};

/* parameter MSFT_SwitchService.CreateLinkAggregation(): ResultingLinkAggregation */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_CreateLinkAggregation_ResultingLinkAggregation_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x00726E18, /* code */
    MI_T("ResultingLinkAggregation"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("MSFT_LinkAggregation"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_CreateLinkAggregation, ResultingLinkAggregation), /* offset */
};

/* parameter MSFT_SwitchService.CreateLinkAggregation(): Job */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_CreateLinkAggregation_Job_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006A6203, /* code */
    MI_T("Job"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("CIM_ConcreteJob"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_CreateLinkAggregation, Job), /* offset */
};

/* parameter MSFT_SwitchService.CreateLinkAggregation(): MIReturn */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_CreateLinkAggregation_MIReturn_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006D6E08, /* code */
    MI_T("MIReturn"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_CreateLinkAggregation, MIReturn), /* offset */
};

static MI_ParameterDecl MI_CONST* MI_CONST MSFT_SwitchService_CreateLinkAggregation_params[] =
{
    &MSFT_SwitchService_CreateLinkAggregation_MIReturn_param,
    &MSFT_SwitchService_CreateLinkAggregation_LinkAggregation_param,
    &MSFT_SwitchService_CreateLinkAggregation_EthernetPort_param,
    &MSFT_SwitchService_CreateLinkAggregation_ResultingLinkAggregation_param,
    &MSFT_SwitchService_CreateLinkAggregation_Job_param,
};

/* method MSFT_SwitchService.CreateLinkAggregation() */
MI_CONST MI_MethodDecl MSFT_SwitchService_CreateLinkAggregation_rtti =
{
    MI_FLAG_METHOD, /* flags */
    0x00636E15, /* code */
    MI_T("CreateLinkAggregation"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MSFT_SwitchService_CreateLinkAggregation_params, /* parameters */
    MI_COUNT(MSFT_SwitchService_CreateLinkAggregation_params), /* numParameters */
    sizeof(MSFT_SwitchService_CreateLinkAggregation), /* size */
    MI_UINT32, /* returnType */
    MI_T("MSFT_SwitchService"), /* origin */
    MI_T("MSFT_SwitchService"), /* propagator */
    &schemaDecl, /* schema */
    (MI_ProviderFT_Invoke)MSFT_SwitchService_Invoke_CreateLinkAggregation, /* method */
};

/* parameter MSFT_SwitchService.RemoveLinkAggregation(): LinkAggregation */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_RemoveLinkAggregation_LinkAggregation_param =
{
    MI_FLAG_PARAMETER, /* flags */
    0x006C6E0F, /* code */
    MI_T("LinkAggregation"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("MSFT_LinkAggregation"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_RemoveLinkAggregation, LinkAggregation), /* offset */
};

/* parameter MSFT_SwitchService.RemoveLinkAggregation(): Job */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_RemoveLinkAggregation_Job_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006A6203, /* code */
    MI_T("Job"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("CIM_ConcreteJob"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_RemoveLinkAggregation, Job), /* offset */
};

/* parameter MSFT_SwitchService.RemoveLinkAggregation(): MIReturn */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_RemoveLinkAggregation_MIReturn_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006D6E08, /* code */
    MI_T("MIReturn"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_RemoveLinkAggregation, MIReturn), /* offset */
};

static MI_ParameterDecl MI_CONST* MI_CONST MSFT_SwitchService_RemoveLinkAggregation_params[] =
{
    &MSFT_SwitchService_RemoveLinkAggregation_MIReturn_param,
    &MSFT_SwitchService_RemoveLinkAggregation_LinkAggregation_param,
    &MSFT_SwitchService_RemoveLinkAggregation_Job_param,
};

/* method MSFT_SwitchService.RemoveLinkAggregation() */
MI_CONST MI_MethodDecl MSFT_SwitchService_RemoveLinkAggregation_rtti =
{
    MI_FLAG_METHOD, /* flags */
    0x00726E15, /* code */
    MI_T("RemoveLinkAggregation"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MSFT_SwitchService_RemoveLinkAggregation_params, /* parameters */
    MI_COUNT(MSFT_SwitchService_RemoveLinkAggregation_params), /* numParameters */
    sizeof(MSFT_SwitchService_RemoveLinkAggregation), /* size */
    MI_UINT32, /* returnType */
    MI_T("MSFT_SwitchService"), /* origin */
    MI_T("MSFT_SwitchService"), /* propagator */
    &schemaDecl, /* schema */
    (MI_ProviderFT_Invoke)MSFT_SwitchService_Invoke_RemoveLinkAggregation, /* method */
};

/* parameter MSFT_SwitchService.AddPortToAggregation(): LinkAggregation */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_AddPortToAggregation_LinkAggregation_param =
{
    MI_FLAG_PARAMETER, /* flags */
    0x006C6E0F, /* code */
    MI_T("LinkAggregation"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("MSFT_LinkAggregation"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_AddPortToAggregation, LinkAggregation), /* offset */
};

/* parameter MSFT_SwitchService.AddPortToAggregation(): EthernetPort */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_AddPortToAggregation_EthernetPort_param =
{
    MI_FLAG_PARAMETER, /* flags */
    0x0065740C, /* code */
    MI_T("EthernetPort"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCEA, /* type */
    MI_T("CIM_EthernetPort"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_AddPortToAggregation, EthernetPort), /* offset */
};

/* parameter MSFT_SwitchService.AddPortToAggregation(): Job */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_AddPortToAggregation_Job_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006A6203, /* code */
    MI_T("Job"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("CIM_ConcreteJob"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_AddPortToAggregation, Job), /* offset */
};

/* parameter MSFT_SwitchService.AddPortToAggregation(): MIReturn */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_AddPortToAggregation_MIReturn_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006D6E08, /* code */
    MI_T("MIReturn"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_AddPortToAggregation, MIReturn), /* offset */
};

static MI_ParameterDecl MI_CONST* MI_CONST MSFT_SwitchService_AddPortToAggregation_params[] =
{
    &MSFT_SwitchService_AddPortToAggregation_MIReturn_param,
    &MSFT_SwitchService_AddPortToAggregation_LinkAggregation_param,
    &MSFT_SwitchService_AddPortToAggregation_EthernetPort_param,
    &MSFT_SwitchService_AddPortToAggregation_Job_param,
};

/* method MSFT_SwitchService.AddPortToAggregation() */
MI_CONST MI_MethodDecl MSFT_SwitchService_AddPortToAggregation_rtti =
{
    MI_FLAG_METHOD, /* flags */
    0x00616E14, /* code */
    MI_T("AddPortToAggregation"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MSFT_SwitchService_AddPortToAggregation_params, /* parameters */
    MI_COUNT(MSFT_SwitchService_AddPortToAggregation_params), /* numParameters */
    sizeof(MSFT_SwitchService_AddPortToAggregation), /* size */
    MI_UINT32, /* returnType */
    MI_T("MSFT_SwitchService"), /* origin */
    MI_T("MSFT_SwitchService"), /* propagator */
    &schemaDecl, /* schema */
    (MI_ProviderFT_Invoke)MSFT_SwitchService_Invoke_AddPortToAggregation, /* method */
};

/* parameter MSFT_SwitchService.RemovePortFromLinkAggregation(): EthernetPort */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_RemovePortFromLinkAggregation_EthernetPort_param =
{
    MI_FLAG_PARAMETER, /* flags */
    0x0065740C, /* code */
    MI_T("EthernetPort"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("CIM_EthernetPort"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_RemovePortFromLinkAggregation, EthernetPort), /* offset */
};

/* parameter MSFT_SwitchService.RemovePortFromLinkAggregation(): Job */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_RemovePortFromLinkAggregation_Job_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006A6203, /* code */
    MI_T("Job"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("CIM_ConcreteJob"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_RemovePortFromLinkAggregation, Job), /* offset */
};

/* parameter MSFT_SwitchService.RemovePortFromLinkAggregation(): MIReturn */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_RemovePortFromLinkAggregation_MIReturn_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006D6E08, /* code */
    MI_T("MIReturn"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_RemovePortFromLinkAggregation, MIReturn), /* offset */
};

static MI_ParameterDecl MI_CONST* MI_CONST MSFT_SwitchService_RemovePortFromLinkAggregation_params[] =
{
    &MSFT_SwitchService_RemovePortFromLinkAggregation_MIReturn_param,
    &MSFT_SwitchService_RemovePortFromLinkAggregation_EthernetPort_param,
    &MSFT_SwitchService_RemovePortFromLinkAggregation_Job_param,
};

/* method MSFT_SwitchService.RemovePortFromLinkAggregation() */
MI_CONST MI_MethodDecl MSFT_SwitchService_RemovePortFromLinkAggregation_rtti =
{
    MI_FLAG_METHOD, /* flags */
    0x00726E1D, /* code */
    MI_T("RemovePortFromLinkAggregation"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MSFT_SwitchService_RemovePortFromLinkAggregation_params, /* parameters */
    MI_COUNT(MSFT_SwitchService_RemovePortFromLinkAggregation_params), /* numParameters */
    sizeof(MSFT_SwitchService_RemovePortFromLinkAggregation), /* size */
    MI_UINT32, /* returnType */
    MI_T("MSFT_SwitchService"), /* origin */
    MI_T("MSFT_SwitchService"), /* propagator */
    &schemaDecl, /* schema */
    (MI_ProviderFT_Invoke)MSFT_SwitchService_Invoke_RemovePortFromLinkAggregation, /* method */
};

/* parameter MSFT_SwitchService.CopyCurrentToStartup(): Job */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_CopyCurrentToStartup_Job_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006A6203, /* code */
    MI_T("Job"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("CIM_ConcreteJob"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_CopyCurrentToStartup, Job), /* offset */
};

/* parameter MSFT_SwitchService.CopyCurrentToStartup(): MIReturn */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_CopyCurrentToStartup_MIReturn_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006D6E08, /* code */
    MI_T("MIReturn"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_CopyCurrentToStartup, MIReturn), /* offset */
};

static MI_ParameterDecl MI_CONST* MI_CONST MSFT_SwitchService_CopyCurrentToStartup_params[] =
{
    &MSFT_SwitchService_CopyCurrentToStartup_MIReturn_param,
    &MSFT_SwitchService_CopyCurrentToStartup_Job_param,
};

/* method MSFT_SwitchService.CopyCurrentToStartup() */
MI_CONST MI_MethodDecl MSFT_SwitchService_CopyCurrentToStartup_rtti =
{
    MI_FLAG_METHOD, /* flags */
    0x00637014, /* code */
    MI_T("CopyCurrentToStartup"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MSFT_SwitchService_CopyCurrentToStartup_params, /* parameters */
    MI_COUNT(MSFT_SwitchService_CopyCurrentToStartup_params), /* numParameters */
    sizeof(MSFT_SwitchService_CopyCurrentToStartup), /* size */
    MI_UINT32, /* returnType */
    MI_T("MSFT_SwitchService"), /* origin */
    MI_T("MSFT_SwitchService"), /* propagator */
    &schemaDecl, /* schema */
    (MI_ProviderFT_Invoke)MSFT_SwitchService_Invoke_CopyCurrentToStartup, /* method */
};

/* parameter MSFT_SwitchService.CopyStartupToCurrent(): Job */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_CopyStartupToCurrent_Job_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006A6203, /* code */
    MI_T("Job"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("CIM_ConcreteJob"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_CopyStartupToCurrent, Job), /* offset */
};

/* parameter MSFT_SwitchService.CopyStartupToCurrent(): MIReturn */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_CopyStartupToCurrent_MIReturn_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006D6E08, /* code */
    MI_T("MIReturn"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_CopyStartupToCurrent, MIReturn), /* offset */
};

static MI_ParameterDecl MI_CONST* MI_CONST MSFT_SwitchService_CopyStartupToCurrent_params[] =
{
    &MSFT_SwitchService_CopyStartupToCurrent_MIReturn_param,
    &MSFT_SwitchService_CopyStartupToCurrent_Job_param,
};

/* method MSFT_SwitchService.CopyStartupToCurrent() */
MI_CONST MI_MethodDecl MSFT_SwitchService_CopyStartupToCurrent_rtti =
{
    MI_FLAG_METHOD, /* flags */
    0x00637414, /* code */
    MI_T("CopyStartupToCurrent"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MSFT_SwitchService_CopyStartupToCurrent_params, /* parameters */
    MI_COUNT(MSFT_SwitchService_CopyStartupToCurrent_params), /* numParameters */
    sizeof(MSFT_SwitchService_CopyStartupToCurrent), /* size */
    MI_UINT32, /* returnType */
    MI_T("MSFT_SwitchService"), /* origin */
    MI_T("MSFT_SwitchService"), /* propagator */
    &schemaDecl, /* schema */
    (MI_ProviderFT_Invoke)MSFT_SwitchService_Invoke_CopyStartupToCurrent, /* method */
};

/* parameter MSFT_SwitchService.CopyCurrentToFile(): FileURI */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_CopyCurrentToFile_FileURI_param =
{
    MI_FLAG_PARAMETER, /* flags */
    0x00666907, /* code */
    MI_T("FileURI"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_CopyCurrentToFile, FileURI), /* offset */
};

/* parameter MSFT_SwitchService.CopyCurrentToFile(): Job */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_CopyCurrentToFile_Job_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006A6203, /* code */
    MI_T("Job"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("CIM_ConcreteJob"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_CopyCurrentToFile, Job), /* offset */
};

/* parameter MSFT_SwitchService.CopyCurrentToFile(): MIReturn */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_CopyCurrentToFile_MIReturn_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006D6E08, /* code */
    MI_T("MIReturn"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_CopyCurrentToFile, MIReturn), /* offset */
};

static MI_ParameterDecl MI_CONST* MI_CONST MSFT_SwitchService_CopyCurrentToFile_params[] =
{
    &MSFT_SwitchService_CopyCurrentToFile_MIReturn_param,
    &MSFT_SwitchService_CopyCurrentToFile_FileURI_param,
    &MSFT_SwitchService_CopyCurrentToFile_Job_param,
};

/* method MSFT_SwitchService.CopyCurrentToFile() */
MI_CONST MI_MethodDecl MSFT_SwitchService_CopyCurrentToFile_rtti =
{
    MI_FLAG_METHOD, /* flags */
    0x00636511, /* code */
    MI_T("CopyCurrentToFile"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MSFT_SwitchService_CopyCurrentToFile_params, /* parameters */
    MI_COUNT(MSFT_SwitchService_CopyCurrentToFile_params), /* numParameters */
    sizeof(MSFT_SwitchService_CopyCurrentToFile), /* size */
    MI_UINT32, /* returnType */
    MI_T("MSFT_SwitchService"), /* origin */
    MI_T("MSFT_SwitchService"), /* propagator */
    &schemaDecl, /* schema */
    (MI_ProviderFT_Invoke)MSFT_SwitchService_Invoke_CopyCurrentToFile, /* method */
};

/* parameter MSFT_SwitchService.CopyFile(): SourceFileURI */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_CopyFile_SourceFileURI_param =
{
    MI_FLAG_PARAMETER, /* flags */
    0x0073690D, /* code */
    MI_T("SourceFileURI"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_CopyFile, SourceFileURI), /* offset */
};

/* parameter MSFT_SwitchService.CopyFile(): DestinationFileURI */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_CopyFile_DestinationFileURI_param =
{
    MI_FLAG_PARAMETER, /* flags */
    0x00646912, /* code */
    MI_T("DestinationFileURI"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_CopyFile, DestinationFileURI), /* offset */
};

/* parameter MSFT_SwitchService.CopyFile(): Job */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_CopyFile_Job_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006A6203, /* code */
    MI_T("Job"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("CIM_ConcreteJob"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_CopyFile, Job), /* offset */
};

/* parameter MSFT_SwitchService.CopyFile(): MIReturn */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_CopyFile_MIReturn_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006D6E08, /* code */
    MI_T("MIReturn"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_CopyFile, MIReturn), /* offset */
};

static MI_ParameterDecl MI_CONST* MI_CONST MSFT_SwitchService_CopyFile_params[] =
{
    &MSFT_SwitchService_CopyFile_MIReturn_param,
    &MSFT_SwitchService_CopyFile_SourceFileURI_param,
    &MSFT_SwitchService_CopyFile_DestinationFileURI_param,
    &MSFT_SwitchService_CopyFile_Job_param,
};

/* method MSFT_SwitchService.CopyFile() */
MI_CONST MI_MethodDecl MSFT_SwitchService_CopyFile_rtti =
{
    MI_FLAG_METHOD, /* flags */
    0x00636508, /* code */
    MI_T("CopyFile"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MSFT_SwitchService_CopyFile_params, /* parameters */
    MI_COUNT(MSFT_SwitchService_CopyFile_params), /* numParameters */
    sizeof(MSFT_SwitchService_CopyFile), /* size */
    MI_UINT32, /* returnType */
    MI_T("MSFT_SwitchService"), /* origin */
    MI_T("MSFT_SwitchService"), /* propagator */
    &schemaDecl, /* schema */
    (MI_ProviderFT_Invoke)MSFT_SwitchService_Invoke_CopyFile, /* method */
};

/* parameter MSFT_SwitchService.CopyStartupToFile(): FileURI */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_CopyStartupToFile_FileURI_param =
{
    MI_FLAG_PARAMETER, /* flags */
    0x00666907, /* code */
    MI_T("FileURI"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_CopyStartupToFile, FileURI), /* offset */
};

/* parameter MSFT_SwitchService.CopyStartupToFile(): Job */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_CopyStartupToFile_Job_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006A6203, /* code */
    MI_T("Job"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("CIM_ConcreteJob"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_CopyStartupToFile, Job), /* offset */
};

/* parameter MSFT_SwitchService.CopyStartupToFile(): MIReturn */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_CopyStartupToFile_MIReturn_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006D6E08, /* code */
    MI_T("MIReturn"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_CopyStartupToFile, MIReturn), /* offset */
};

static MI_ParameterDecl MI_CONST* MI_CONST MSFT_SwitchService_CopyStartupToFile_params[] =
{
    &MSFT_SwitchService_CopyStartupToFile_MIReturn_param,
    &MSFT_SwitchService_CopyStartupToFile_FileURI_param,
    &MSFT_SwitchService_CopyStartupToFile_Job_param,
};

/* method MSFT_SwitchService.CopyStartupToFile() */
MI_CONST MI_MethodDecl MSFT_SwitchService_CopyStartupToFile_rtti =
{
    MI_FLAG_METHOD, /* flags */
    0x00636511, /* code */
    MI_T("CopyStartupToFile"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MSFT_SwitchService_CopyStartupToFile_params, /* parameters */
    MI_COUNT(MSFT_SwitchService_CopyStartupToFile_params), /* numParameters */
    sizeof(MSFT_SwitchService_CopyStartupToFile), /* size */
    MI_UINT32, /* returnType */
    MI_T("MSFT_SwitchService"), /* origin */
    MI_T("MSFT_SwitchService"), /* propagator */
    &schemaDecl, /* schema */
    (MI_ProviderFT_Invoke)MSFT_SwitchService_Invoke_CopyStartupToFile, /* method */
};

/* parameter MSFT_SwitchService.CopyFileToCurrent(): FileURI */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_CopyFileToCurrent_FileURI_param =
{
    MI_FLAG_PARAMETER, /* flags */
    0x00666907, /* code */
    MI_T("FileURI"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_CopyFileToCurrent, FileURI), /* offset */
};

/* parameter MSFT_SwitchService.CopyFileToCurrent(): Job */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_CopyFileToCurrent_Job_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006A6203, /* code */
    MI_T("Job"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("CIM_ConcreteJob"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_CopyFileToCurrent, Job), /* offset */
};

/* parameter MSFT_SwitchService.CopyFileToCurrent(): MIReturn */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_CopyFileToCurrent_MIReturn_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006D6E08, /* code */
    MI_T("MIReturn"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_CopyFileToCurrent, MIReturn), /* offset */
};

static MI_ParameterDecl MI_CONST* MI_CONST MSFT_SwitchService_CopyFileToCurrent_params[] =
{
    &MSFT_SwitchService_CopyFileToCurrent_MIReturn_param,
    &MSFT_SwitchService_CopyFileToCurrent_FileURI_param,
    &MSFT_SwitchService_CopyFileToCurrent_Job_param,
};

/* method MSFT_SwitchService.CopyFileToCurrent() */
MI_CONST MI_MethodDecl MSFT_SwitchService_CopyFileToCurrent_rtti =
{
    MI_FLAG_METHOD, /* flags */
    0x00637411, /* code */
    MI_T("CopyFileToCurrent"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MSFT_SwitchService_CopyFileToCurrent_params, /* parameters */
    MI_COUNT(MSFT_SwitchService_CopyFileToCurrent_params), /* numParameters */
    sizeof(MSFT_SwitchService_CopyFileToCurrent), /* size */
    MI_UINT32, /* returnType */
    MI_T("MSFT_SwitchService"), /* origin */
    MI_T("MSFT_SwitchService"), /* propagator */
    &schemaDecl, /* schema */
    (MI_ProviderFT_Invoke)MSFT_SwitchService_Invoke_CopyFileToCurrent, /* method */
};

/* parameter MSFT_SwitchService.CopyFileToStartup(): FileURI */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_CopyFileToStartup_FileURI_param =
{
    MI_FLAG_PARAMETER, /* flags */
    0x00666907, /* code */
    MI_T("FileURI"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_CopyFileToStartup, FileURI), /* offset */
};

/* parameter MSFT_SwitchService.CopyFileToStartup(): Job */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_CopyFileToStartup_Job_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006A6203, /* code */
    MI_T("Job"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("CIM_ConcreteJob"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_CopyFileToStartup, Job), /* offset */
};

/* parameter MSFT_SwitchService.CopyFileToStartup(): MIReturn */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_CopyFileToStartup_MIReturn_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006D6E08, /* code */
    MI_T("MIReturn"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_CopyFileToStartup, MIReturn), /* offset */
};

static MI_ParameterDecl MI_CONST* MI_CONST MSFT_SwitchService_CopyFileToStartup_params[] =
{
    &MSFT_SwitchService_CopyFileToStartup_MIReturn_param,
    &MSFT_SwitchService_CopyFileToStartup_FileURI_param,
    &MSFT_SwitchService_CopyFileToStartup_Job_param,
};

/* method MSFT_SwitchService.CopyFileToStartup() */
MI_CONST MI_MethodDecl MSFT_SwitchService_CopyFileToStartup_rtti =
{
    MI_FLAG_METHOD, /* flags */
    0x00637011, /* code */
    MI_T("CopyFileToStartup"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MSFT_SwitchService_CopyFileToStartup_params, /* parameters */
    MI_COUNT(MSFT_SwitchService_CopyFileToStartup_params), /* numParameters */
    sizeof(MSFT_SwitchService_CopyFileToStartup), /* size */
    MI_UINT32, /* returnType */
    MI_T("MSFT_SwitchService"), /* origin */
    MI_T("MSFT_SwitchService"), /* propagator */
    &schemaDecl, /* schema */
    (MI_ProviderFT_Invoke)MSFT_SwitchService_Invoke_CopyFileToStartup, /* method */
};

/* parameter MSFT_SwitchService.ClearCurrent(): Job */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_ClearCurrent_Job_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006A6203, /* code */
    MI_T("Job"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("CIM_ConcreteJob"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_ClearCurrent, Job), /* offset */
};

/* parameter MSFT_SwitchService.ClearCurrent(): MIReturn */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_ClearCurrent_MIReturn_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006D6E08, /* code */
    MI_T("MIReturn"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_ClearCurrent, MIReturn), /* offset */
};

static MI_ParameterDecl MI_CONST* MI_CONST MSFT_SwitchService_ClearCurrent_params[] =
{
    &MSFT_SwitchService_ClearCurrent_MIReturn_param,
    &MSFT_SwitchService_ClearCurrent_Job_param,
};

/* method MSFT_SwitchService.ClearCurrent() */
MI_CONST MI_MethodDecl MSFT_SwitchService_ClearCurrent_rtti =
{
    MI_FLAG_METHOD, /* flags */
    0x0063740C, /* code */
    MI_T("ClearCurrent"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MSFT_SwitchService_ClearCurrent_params, /* parameters */
    MI_COUNT(MSFT_SwitchService_ClearCurrent_params), /* numParameters */
    sizeof(MSFT_SwitchService_ClearCurrent), /* size */
    MI_UINT32, /* returnType */
    MI_T("MSFT_SwitchService"), /* origin */
    MI_T("MSFT_SwitchService"), /* propagator */
    &schemaDecl, /* schema */
    (MI_ProviderFT_Invoke)MSFT_SwitchService_Invoke_ClearCurrent, /* method */
};

/* parameter MSFT_SwitchService.ClearStartup(): Job */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_ClearStartup_Job_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006A6203, /* code */
    MI_T("Job"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("CIM_ConcreteJob"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_ClearStartup, Job), /* offset */
};

/* parameter MSFT_SwitchService.ClearStartup(): MIReturn */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_ClearStartup_MIReturn_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006D6E08, /* code */
    MI_T("MIReturn"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_ClearStartup, MIReturn), /* offset */
};

static MI_ParameterDecl MI_CONST* MI_CONST MSFT_SwitchService_ClearStartup_params[] =
{
    &MSFT_SwitchService_ClearStartup_MIReturn_param,
    &MSFT_SwitchService_ClearStartup_Job_param,
};

/* method MSFT_SwitchService.ClearStartup() */
MI_CONST MI_MethodDecl MSFT_SwitchService_ClearStartup_rtti =
{
    MI_FLAG_METHOD, /* flags */
    0x0063700C, /* code */
    MI_T("ClearStartup"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MSFT_SwitchService_ClearStartup_params, /* parameters */
    MI_COUNT(MSFT_SwitchService_ClearStartup_params), /* numParameters */
    sizeof(MSFT_SwitchService_ClearStartup), /* size */
    MI_UINT32, /* returnType */
    MI_T("MSFT_SwitchService"), /* origin */
    MI_T("MSFT_SwitchService"), /* propagator */
    &schemaDecl, /* schema */
    (MI_ProviderFT_Invoke)MSFT_SwitchService_Invoke_ClearStartup, /* method */
};

/* parameter MSFT_SwitchService.DeleteFile(): FileURI */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_DeleteFile_FileURI_param =
{
    MI_FLAG_PARAMETER, /* flags */
    0x00666907, /* code */
    MI_T("FileURI"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_DeleteFile, FileURI), /* offset */
};

/* parameter MSFT_SwitchService.DeleteFile(): Job */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_DeleteFile_Job_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006A6203, /* code */
    MI_T("Job"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("CIM_ConcreteJob"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_DeleteFile, Job), /* offset */
};

/* parameter MSFT_SwitchService.DeleteFile(): MIReturn */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_DeleteFile_MIReturn_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006D6E08, /* code */
    MI_T("MIReturn"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_DeleteFile, MIReturn), /* offset */
};

static MI_ParameterDecl MI_CONST* MI_CONST MSFT_SwitchService_DeleteFile_params[] =
{
    &MSFT_SwitchService_DeleteFile_MIReturn_param,
    &MSFT_SwitchService_DeleteFile_FileURI_param,
    &MSFT_SwitchService_DeleteFile_Job_param,
};

/* method MSFT_SwitchService.DeleteFile() */
MI_CONST MI_MethodDecl MSFT_SwitchService_DeleteFile_rtti =
{
    MI_FLAG_METHOD, /* flags */
    0x0064650A, /* code */
    MI_T("DeleteFile"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MSFT_SwitchService_DeleteFile_params, /* parameters */
    MI_COUNT(MSFT_SwitchService_DeleteFile_params), /* numParameters */
    sizeof(MSFT_SwitchService_DeleteFile), /* size */
    MI_UINT32, /* returnType */
    MI_T("MSFT_SwitchService"), /* origin */
    MI_T("MSFT_SwitchService"), /* propagator */
    &schemaDecl, /* schema */
    (MI_ProviderFT_Invoke)MSFT_SwitchService_Invoke_DeleteFile, /* method */
};

/* parameter MSFT_SwitchService.CreateRemoteServerGroup(): AssociatedFeature */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_CreateRemoteServerGroup_AssociatedFeature_param =
{
    MI_FLAG_PARAMETER, /* flags */
    0x00616511, /* code */
    MI_T("AssociatedFeature"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("MSFT_Feature"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_CreateRemoteServerGroup, AssociatedFeature), /* offset */
};

static MI_CONST MI_Char* MSFT_SwitchService_CreateRemoteServerGroup_RemoteServerGroup_EmbeddedInstance_qual_value = MI_T("MSFT_RemoteServerGroup");

static MI_CONST MI_Qualifier MSFT_SwitchService_CreateRemoteServerGroup_RemoteServerGroup_EmbeddedInstance_qual =
{
    MI_T("EmbeddedInstance"),
    MI_STRING,
    0,
    &MSFT_SwitchService_CreateRemoteServerGroup_RemoteServerGroup_EmbeddedInstance_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST MSFT_SwitchService_CreateRemoteServerGroup_RemoteServerGroup_quals[] =
{
    &MSFT_SwitchService_CreateRemoteServerGroup_RemoteServerGroup_EmbeddedInstance_qual,
};

/* parameter MSFT_SwitchService.CreateRemoteServerGroup(): RemoteServerGroup */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_CreateRemoteServerGroup_RemoteServerGroup_param =
{
    MI_FLAG_PARAMETER, /* flags */
    0x00727011, /* code */
    MI_T("RemoteServerGroup"), /* name */
    MSFT_SwitchService_CreateRemoteServerGroup_RemoteServerGroup_quals, /* qualifiers */
    MI_COUNT(MSFT_SwitchService_CreateRemoteServerGroup_RemoteServerGroup_quals), /* numQualifiers */
    MI_INSTANCE, /* type */
    MI_T("MSFT_RemoteServerGroup"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_CreateRemoteServerGroup, RemoteServerGroup), /* offset */
};

/* parameter MSFT_SwitchService.CreateRemoteServerGroup(): ResultingServerGroup */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_CreateRemoteServerGroup_ResultingServerGroup_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x00727014, /* code */
    MI_T("ResultingServerGroup"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("MSFT_RemoteServerGroup"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_CreateRemoteServerGroup, ResultingServerGroup), /* offset */
};

/* parameter MSFT_SwitchService.CreateRemoteServerGroup(): Job */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_CreateRemoteServerGroup_Job_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006A6203, /* code */
    MI_T("Job"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("CIM_ConcreteJob"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_CreateRemoteServerGroup, Job), /* offset */
};

/* parameter MSFT_SwitchService.CreateRemoteServerGroup(): MIReturn */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_CreateRemoteServerGroup_MIReturn_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006D6E08, /* code */
    MI_T("MIReturn"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_CreateRemoteServerGroup, MIReturn), /* offset */
};

static MI_ParameterDecl MI_CONST* MI_CONST MSFT_SwitchService_CreateRemoteServerGroup_params[] =
{
    &MSFT_SwitchService_CreateRemoteServerGroup_MIReturn_param,
    &MSFT_SwitchService_CreateRemoteServerGroup_AssociatedFeature_param,
    &MSFT_SwitchService_CreateRemoteServerGroup_RemoteServerGroup_param,
    &MSFT_SwitchService_CreateRemoteServerGroup_ResultingServerGroup_param,
    &MSFT_SwitchService_CreateRemoteServerGroup_Job_param,
};

/* method MSFT_SwitchService.CreateRemoteServerGroup() */
MI_CONST MI_MethodDecl MSFT_SwitchService_CreateRemoteServerGroup_rtti =
{
    MI_FLAG_METHOD, /* flags */
    0x00637017, /* code */
    MI_T("CreateRemoteServerGroup"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MSFT_SwitchService_CreateRemoteServerGroup_params, /* parameters */
    MI_COUNT(MSFT_SwitchService_CreateRemoteServerGroup_params), /* numParameters */
    sizeof(MSFT_SwitchService_CreateRemoteServerGroup), /* size */
    MI_UINT32, /* returnType */
    MI_T("MSFT_SwitchService"), /* origin */
    MI_T("MSFT_SwitchService"), /* propagator */
    &schemaDecl, /* schema */
    (MI_ProviderFT_Invoke)MSFT_SwitchService_Invoke_CreateRemoteServerGroup, /* method */
};

/* parameter MSFT_SwitchService.RemoveRemoteServerGroup(): AssociatedFeature */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_RemoveRemoteServerGroup_AssociatedFeature_param =
{
    MI_FLAG_PARAMETER, /* flags */
    0x00616511, /* code */
    MI_T("AssociatedFeature"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("MSFT_Feature"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_RemoveRemoteServerGroup, AssociatedFeature), /* offset */
};

/* parameter MSFT_SwitchService.RemoveRemoteServerGroup(): RemoteServerGroup */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_RemoveRemoteServerGroup_RemoteServerGroup_param =
{
    MI_FLAG_PARAMETER, /* flags */
    0x00727011, /* code */
    MI_T("RemoteServerGroup"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("MSFT_RemoteServerGroup"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_RemoveRemoteServerGroup, RemoteServerGroup), /* offset */
};

/* parameter MSFT_SwitchService.RemoveRemoteServerGroup(): Job */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_RemoveRemoteServerGroup_Job_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006A6203, /* code */
    MI_T("Job"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("CIM_ConcreteJob"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_RemoveRemoteServerGroup, Job), /* offset */
};

/* parameter MSFT_SwitchService.RemoveRemoteServerGroup(): MIReturn */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_RemoveRemoteServerGroup_MIReturn_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006D6E08, /* code */
    MI_T("MIReturn"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_RemoveRemoteServerGroup, MIReturn), /* offset */
};

static MI_ParameterDecl MI_CONST* MI_CONST MSFT_SwitchService_RemoveRemoteServerGroup_params[] =
{
    &MSFT_SwitchService_RemoveRemoteServerGroup_MIReturn_param,
    &MSFT_SwitchService_RemoveRemoteServerGroup_AssociatedFeature_param,
    &MSFT_SwitchService_RemoveRemoteServerGroup_RemoteServerGroup_param,
    &MSFT_SwitchService_RemoveRemoteServerGroup_Job_param,
};

/* method MSFT_SwitchService.RemoveRemoteServerGroup() */
MI_CONST MI_MethodDecl MSFT_SwitchService_RemoveRemoteServerGroup_rtti =
{
    MI_FLAG_METHOD, /* flags */
    0x00727017, /* code */
    MI_T("RemoveRemoteServerGroup"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MSFT_SwitchService_RemoveRemoteServerGroup_params, /* parameters */
    MI_COUNT(MSFT_SwitchService_RemoveRemoteServerGroup_params), /* numParameters */
    sizeof(MSFT_SwitchService_RemoveRemoteServerGroup), /* size */
    MI_UINT32, /* returnType */
    MI_T("MSFT_SwitchService"), /* origin */
    MI_T("MSFT_SwitchService"), /* propagator */
    &schemaDecl, /* schema */
    (MI_ProviderFT_Invoke)MSFT_SwitchService_Invoke_RemoveRemoteServerGroup, /* method */
};

/* parameter MSFT_SwitchService.ConfigureSeviceAccessPoint(): TargetSystem */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_ConfigureSeviceAccessPoint_TargetSystem_param =
{
    MI_FLAG_PARAMETER, /* flags */
    0x00746D0C, /* code */
    MI_T("TargetSystem"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("CIM_System"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_ConfigureSeviceAccessPoint, TargetSystem), /* offset */
};

/* parameter MSFT_SwitchService.ConfigureSeviceAccessPoint(): Group */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_ConfigureSeviceAccessPoint_Group_param =
{
    MI_FLAG_PARAMETER, /* flags */
    0x00677005, /* code */
    MI_T("Group"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("CIM_Collection"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_ConfigureSeviceAccessPoint, Group), /* offset */
};

static MI_CONST MI_Char* MSFT_SwitchService_ConfigureSeviceAccessPoint_ServiceAccessPoint_EmbeddedInstance_qual_value = MI_T("CIM_ServiceAccessPoint");

static MI_CONST MI_Qualifier MSFT_SwitchService_ConfigureSeviceAccessPoint_ServiceAccessPoint_EmbeddedInstance_qual =
{
    MI_T("EmbeddedInstance"),
    MI_STRING,
    0,
    &MSFT_SwitchService_ConfigureSeviceAccessPoint_ServiceAccessPoint_EmbeddedInstance_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST MSFT_SwitchService_ConfigureSeviceAccessPoint_ServiceAccessPoint_quals[] =
{
    &MSFT_SwitchService_ConfigureSeviceAccessPoint_ServiceAccessPoint_EmbeddedInstance_qual,
};

/* parameter MSFT_SwitchService.ConfigureSeviceAccessPoint(): ServiceAccessPoint */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_ConfigureSeviceAccessPoint_ServiceAccessPoint_param =
{
    MI_FLAG_PARAMETER, /* flags */
    0x00737412, /* code */
    MI_T("ServiceAccessPoint"), /* name */
    MSFT_SwitchService_ConfigureSeviceAccessPoint_ServiceAccessPoint_quals, /* qualifiers */
    MI_COUNT(MSFT_SwitchService_ConfigureSeviceAccessPoint_ServiceAccessPoint_quals), /* numQualifiers */
    MI_INSTANCE, /* type */
    MI_T("CIM_ServiceAccessPoint"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_ConfigureSeviceAccessPoint, ServiceAccessPoint), /* offset */
};

/* parameter MSFT_SwitchService.ConfigureSeviceAccessPoint(): ResultingServiceAccessPoint */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_ConfigureSeviceAccessPoint_ResultingServiceAccessPoint_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x0072741B, /* code */
    MI_T("ResultingServiceAccessPoint"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("CIM_ServiceAccessPoint"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_ConfigureSeviceAccessPoint, ResultingServiceAccessPoint), /* offset */
};

/* parameter MSFT_SwitchService.ConfigureSeviceAccessPoint(): Job */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_ConfigureSeviceAccessPoint_Job_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006A6203, /* code */
    MI_T("Job"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("CIM_ConcreteJob"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_ConfigureSeviceAccessPoint, Job), /* offset */
};

/* parameter MSFT_SwitchService.ConfigureSeviceAccessPoint(): MIReturn */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_ConfigureSeviceAccessPoint_MIReturn_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006D6E08, /* code */
    MI_T("MIReturn"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_ConfigureSeviceAccessPoint, MIReturn), /* offset */
};

static MI_ParameterDecl MI_CONST* MI_CONST MSFT_SwitchService_ConfigureSeviceAccessPoint_params[] =
{
    &MSFT_SwitchService_ConfigureSeviceAccessPoint_MIReturn_param,
    &MSFT_SwitchService_ConfigureSeviceAccessPoint_TargetSystem_param,
    &MSFT_SwitchService_ConfigureSeviceAccessPoint_Group_param,
    &MSFT_SwitchService_ConfigureSeviceAccessPoint_ServiceAccessPoint_param,
    &MSFT_SwitchService_ConfigureSeviceAccessPoint_ResultingServiceAccessPoint_param,
    &MSFT_SwitchService_ConfigureSeviceAccessPoint_Job_param,
};

/* method MSFT_SwitchService.ConfigureSeviceAccessPoint() */
MI_CONST MI_MethodDecl MSFT_SwitchService_ConfigureSeviceAccessPoint_rtti =
{
    MI_FLAG_METHOD, /* flags */
    0x0063741A, /* code */
    MI_T("ConfigureSeviceAccessPoint"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MSFT_SwitchService_ConfigureSeviceAccessPoint_params, /* parameters */
    MI_COUNT(MSFT_SwitchService_ConfigureSeviceAccessPoint_params), /* numParameters */
    sizeof(MSFT_SwitchService_ConfigureSeviceAccessPoint), /* size */
    MI_UINT32, /* returnType */
    MI_T("MSFT_SwitchService"), /* origin */
    MI_T("MSFT_SwitchService"), /* propagator */
    &schemaDecl, /* schema */
    (MI_ProviderFT_Invoke)MSFT_SwitchService_Invoke_ConfigureSeviceAccessPoint, /* method */
};

/* parameter MSFT_SwitchService.ModifySeviceAccessPoint(): TargetSystem */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_ModifySeviceAccessPoint_TargetSystem_param =
{
    MI_FLAG_PARAMETER, /* flags */
    0x00746D0C, /* code */
    MI_T("TargetSystem"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("CIM_System"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_ModifySeviceAccessPoint, TargetSystem), /* offset */
};

/* parameter MSFT_SwitchService.ModifySeviceAccessPoint(): Group */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_ModifySeviceAccessPoint_Group_param =
{
    MI_FLAG_PARAMETER, /* flags */
    0x00677005, /* code */
    MI_T("Group"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("CIM_Collection"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_ModifySeviceAccessPoint, Group), /* offset */
};

/* parameter MSFT_SwitchService.ModifySeviceAccessPoint(): ServiceAccessPoint */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_ModifySeviceAccessPoint_ServiceAccessPoint_param =
{
    MI_FLAG_PARAMETER, /* flags */
    0x00737412, /* code */
    MI_T("ServiceAccessPoint"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("CIM_ServiceAccessPoint"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_ModifySeviceAccessPoint, ServiceAccessPoint), /* offset */
};

/* parameter MSFT_SwitchService.ModifySeviceAccessPoint(): Job */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_ModifySeviceAccessPoint_Job_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006A6203, /* code */
    MI_T("Job"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("CIM_ConcreteJob"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_ModifySeviceAccessPoint, Job), /* offset */
};

/* parameter MSFT_SwitchService.ModifySeviceAccessPoint(): MIReturn */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_ModifySeviceAccessPoint_MIReturn_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006D6E08, /* code */
    MI_T("MIReturn"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_ModifySeviceAccessPoint, MIReturn), /* offset */
};

static MI_ParameterDecl MI_CONST* MI_CONST MSFT_SwitchService_ModifySeviceAccessPoint_params[] =
{
    &MSFT_SwitchService_ModifySeviceAccessPoint_MIReturn_param,
    &MSFT_SwitchService_ModifySeviceAccessPoint_TargetSystem_param,
    &MSFT_SwitchService_ModifySeviceAccessPoint_Group_param,
    &MSFT_SwitchService_ModifySeviceAccessPoint_ServiceAccessPoint_param,
    &MSFT_SwitchService_ModifySeviceAccessPoint_Job_param,
};

/* method MSFT_SwitchService.ModifySeviceAccessPoint() */
MI_CONST MI_MethodDecl MSFT_SwitchService_ModifySeviceAccessPoint_rtti =
{
    MI_FLAG_METHOD, /* flags */
    0x006D7417, /* code */
    MI_T("ModifySeviceAccessPoint"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MSFT_SwitchService_ModifySeviceAccessPoint_params, /* parameters */
    MI_COUNT(MSFT_SwitchService_ModifySeviceAccessPoint_params), /* numParameters */
    sizeof(MSFT_SwitchService_ModifySeviceAccessPoint), /* size */
    MI_UINT32, /* returnType */
    MI_T("MSFT_SwitchService"), /* origin */
    MI_T("MSFT_SwitchService"), /* propagator */
    &schemaDecl, /* schema */
    (MI_ProviderFT_Invoke)MSFT_SwitchService_Invoke_ModifySeviceAccessPoint, /* method */
};

/* parameter MSFT_SwitchService.DeleteSeviceAccessPoint(): TargetSystem */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_DeleteSeviceAccessPoint_TargetSystem_param =
{
    MI_FLAG_PARAMETER, /* flags */
    0x00746D0C, /* code */
    MI_T("TargetSystem"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("CIM_System"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_DeleteSeviceAccessPoint, TargetSystem), /* offset */
};

/* parameter MSFT_SwitchService.DeleteSeviceAccessPoint(): Group */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_DeleteSeviceAccessPoint_Group_param =
{
    MI_FLAG_PARAMETER, /* flags */
    0x00677005, /* code */
    MI_T("Group"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("CIM_Collection"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_DeleteSeviceAccessPoint, Group), /* offset */
};

/* parameter MSFT_SwitchService.DeleteSeviceAccessPoint(): ServiceAccessPoint */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_DeleteSeviceAccessPoint_ServiceAccessPoint_param =
{
    MI_FLAG_PARAMETER, /* flags */
    0x00737412, /* code */
    MI_T("ServiceAccessPoint"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("CIM_ServiceAccessPoint"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_DeleteSeviceAccessPoint, ServiceAccessPoint), /* offset */
};

/* parameter MSFT_SwitchService.DeleteSeviceAccessPoint(): Job */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_DeleteSeviceAccessPoint_Job_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006A6203, /* code */
    MI_T("Job"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("CIM_ConcreteJob"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_DeleteSeviceAccessPoint, Job), /* offset */
};

/* parameter MSFT_SwitchService.DeleteSeviceAccessPoint(): MIReturn */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_DeleteSeviceAccessPoint_MIReturn_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006D6E08, /* code */
    MI_T("MIReturn"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_DeleteSeviceAccessPoint, MIReturn), /* offset */
};

static MI_ParameterDecl MI_CONST* MI_CONST MSFT_SwitchService_DeleteSeviceAccessPoint_params[] =
{
    &MSFT_SwitchService_DeleteSeviceAccessPoint_MIReturn_param,
    &MSFT_SwitchService_DeleteSeviceAccessPoint_TargetSystem_param,
    &MSFT_SwitchService_DeleteSeviceAccessPoint_Group_param,
    &MSFT_SwitchService_DeleteSeviceAccessPoint_ServiceAccessPoint_param,
    &MSFT_SwitchService_DeleteSeviceAccessPoint_Job_param,
};

/* method MSFT_SwitchService.DeleteSeviceAccessPoint() */
MI_CONST MI_MethodDecl MSFT_SwitchService_DeleteSeviceAccessPoint_rtti =
{
    MI_FLAG_METHOD, /* flags */
    0x00647417, /* code */
    MI_T("DeleteSeviceAccessPoint"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MSFT_SwitchService_DeleteSeviceAccessPoint_params, /* parameters */
    MI_COUNT(MSFT_SwitchService_DeleteSeviceAccessPoint_params), /* numParameters */
    sizeof(MSFT_SwitchService_DeleteSeviceAccessPoint), /* size */
    MI_UINT32, /* returnType */
    MI_T("MSFT_SwitchService"), /* origin */
    MI_T("MSFT_SwitchService"), /* propagator */
    &schemaDecl, /* schema */
    (MI_ProviderFT_Invoke)MSFT_SwitchService_Invoke_DeleteSeviceAccessPoint, /* method */
};

/* parameter MSFT_SwitchService.ApplyPortProfile(): TargetInterface */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_ApplyPortProfile_TargetInterface_param =
{
    MI_FLAG_PARAMETER, /* flags */
    0x0074650F, /* code */
    MI_T("TargetInterface"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("CIM_EthernetPort"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_ApplyPortProfile, TargetInterface), /* offset */
};

static MI_CONST MI_Char* MSFT_SwitchService_ApplyPortProfile_PortProfile_EmbeddedInstance_qual_value = MI_T("CIM_EthernetPortAllocationSettingData");

static MI_CONST MI_Qualifier MSFT_SwitchService_ApplyPortProfile_PortProfile_EmbeddedInstance_qual =
{
    MI_T("EmbeddedInstance"),
    MI_STRING,
    0,
    &MSFT_SwitchService_ApplyPortProfile_PortProfile_EmbeddedInstance_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST MSFT_SwitchService_ApplyPortProfile_PortProfile_quals[] =
{
    &MSFT_SwitchService_ApplyPortProfile_PortProfile_EmbeddedInstance_qual,
};

/* parameter MSFT_SwitchService.ApplyPortProfile(): PortProfile */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_ApplyPortProfile_PortProfile_param =
{
    MI_FLAG_PARAMETER, /* flags */
    0x0070650B, /* code */
    MI_T("PortProfile"), /* name */
    MSFT_SwitchService_ApplyPortProfile_PortProfile_quals, /* qualifiers */
    MI_COUNT(MSFT_SwitchService_ApplyPortProfile_PortProfile_quals), /* numQualifiers */
    MI_INSTANCE, /* type */
    MI_T("CIM_EthernetPortAllocationSettingData"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_ApplyPortProfile, PortProfile), /* offset */
};

/* parameter MSFT_SwitchService.ApplyPortProfile(): Job */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_ApplyPortProfile_Job_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006A6203, /* code */
    MI_T("Job"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("CIM_ConcreteJob"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_ApplyPortProfile, Job), /* offset */
};

/* parameter MSFT_SwitchService.ApplyPortProfile(): MIReturn */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_ApplyPortProfile_MIReturn_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006D6E08, /* code */
    MI_T("MIReturn"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_ApplyPortProfile, MIReturn), /* offset */
};

static MI_ParameterDecl MI_CONST* MI_CONST MSFT_SwitchService_ApplyPortProfile_params[] =
{
    &MSFT_SwitchService_ApplyPortProfile_MIReturn_param,
    &MSFT_SwitchService_ApplyPortProfile_TargetInterface_param,
    &MSFT_SwitchService_ApplyPortProfile_PortProfile_param,
    &MSFT_SwitchService_ApplyPortProfile_Job_param,
};

/* method MSFT_SwitchService.ApplyPortProfile() */
MI_CONST MI_MethodDecl MSFT_SwitchService_ApplyPortProfile_rtti =
{
    MI_FLAG_METHOD, /* flags */
    0x00616510, /* code */
    MI_T("ApplyPortProfile"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MSFT_SwitchService_ApplyPortProfile_params, /* parameters */
    MI_COUNT(MSFT_SwitchService_ApplyPortProfile_params), /* numParameters */
    sizeof(MSFT_SwitchService_ApplyPortProfile), /* size */
    MI_UINT32, /* returnType */
    MI_T("MSFT_SwitchService"), /* origin */
    MI_T("MSFT_SwitchService"), /* propagator */
    &schemaDecl, /* schema */
    (MI_ProviderFT_Invoke)MSFT_SwitchService_Invoke_ApplyPortProfile, /* method */
};

/* parameter MSFT_SwitchService.ReloadSwitch(): TargetedSwitch */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_ReloadSwitch_TargetedSwitch_param =
{
    MI_FLAG_PARAMETER, /* flags */
    0x0074680E, /* code */
    MI_T("TargetedSwitch"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("CIM_ComputerSystem"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_ReloadSwitch, TargetedSwitch), /* offset */
};

/* parameter MSFT_SwitchService.ReloadSwitch(): Job */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_ReloadSwitch_Job_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006A6203, /* code */
    MI_T("Job"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("CIM_ConcreteJob"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_ReloadSwitch, Job), /* offset */
};

/* parameter MSFT_SwitchService.ReloadSwitch(): MIReturn */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_ReloadSwitch_MIReturn_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006D6E08, /* code */
    MI_T("MIReturn"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_ReloadSwitch, MIReturn), /* offset */
};

static MI_ParameterDecl MI_CONST* MI_CONST MSFT_SwitchService_ReloadSwitch_params[] =
{
    &MSFT_SwitchService_ReloadSwitch_MIReturn_param,
    &MSFT_SwitchService_ReloadSwitch_TargetedSwitch_param,
    &MSFT_SwitchService_ReloadSwitch_Job_param,
};

/* method MSFT_SwitchService.ReloadSwitch() */
MI_CONST MI_MethodDecl MSFT_SwitchService_ReloadSwitch_rtti =
{
    MI_FLAG_METHOD, /* flags */
    0x0072680C, /* code */
    MI_T("ReloadSwitch"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MSFT_SwitchService_ReloadSwitch_params, /* parameters */
    MI_COUNT(MSFT_SwitchService_ReloadSwitch_params), /* numParameters */
    sizeof(MSFT_SwitchService_ReloadSwitch), /* size */
    MI_UINT32, /* returnType */
    MI_T("MSFT_SwitchService"), /* origin */
    MI_T("MSFT_SwitchService"), /* propagator */
    &schemaDecl, /* schema */
    (MI_ProviderFT_Invoke)MSFT_SwitchService_Invoke_ReloadSwitch, /* method */
};

/* parameter MSFT_SwitchService.SetMACAddressAgingTime(): AgingTime */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_SetMACAddressAgingTime_AgingTime_param =
{
    MI_FLAG_PARAMETER, /* flags */
    0x00616509, /* code */
    MI_T("AgingTime"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_SetMACAddressAgingTime, AgingTime), /* offset */
};

/* parameter MSFT_SwitchService.SetMACAddressAgingTime(): VLAN */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_SetMACAddressAgingTime_VLAN_param =
{
    MI_FLAG_PARAMETER, /* flags */
    0x00766E04, /* code */
    MI_T("VLAN"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("MSFT_NetworkVLAN"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_SetMACAddressAgingTime, VLAN), /* offset */
};

/* parameter MSFT_SwitchService.SetMACAddressAgingTime(): Job */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_SetMACAddressAgingTime_Job_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006A6203, /* code */
    MI_T("Job"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("CIM_ConcreteJob"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_SetMACAddressAgingTime, Job), /* offset */
};

/* parameter MSFT_SwitchService.SetMACAddressAgingTime(): MIReturn */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_SetMACAddressAgingTime_MIReturn_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006D6E08, /* code */
    MI_T("MIReturn"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_SetMACAddressAgingTime, MIReturn), /* offset */
};

static MI_ParameterDecl MI_CONST* MI_CONST MSFT_SwitchService_SetMACAddressAgingTime_params[] =
{
    &MSFT_SwitchService_SetMACAddressAgingTime_MIReturn_param,
    &MSFT_SwitchService_SetMACAddressAgingTime_AgingTime_param,
    &MSFT_SwitchService_SetMACAddressAgingTime_VLAN_param,
    &MSFT_SwitchService_SetMACAddressAgingTime_Job_param,
};

/* method MSFT_SwitchService.SetMACAddressAgingTime() */
MI_CONST MI_MethodDecl MSFT_SwitchService_SetMACAddressAgingTime_rtti =
{
    MI_FLAG_METHOD, /* flags */
    0x00736516, /* code */
    MI_T("SetMACAddressAgingTime"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MSFT_SwitchService_SetMACAddressAgingTime_params, /* parameters */
    MI_COUNT(MSFT_SwitchService_SetMACAddressAgingTime_params), /* numParameters */
    sizeof(MSFT_SwitchService_SetMACAddressAgingTime), /* size */
    MI_UINT32, /* returnType */
    MI_T("MSFT_SwitchService"), /* origin */
    MI_T("MSFT_SwitchService"), /* propagator */
    &schemaDecl, /* schema */
    (MI_ProviderFT_Invoke)MSFT_SwitchService_Invoke_SetMACAddressAgingTime, /* method */
};

/* parameter MSFT_SwitchService.AddStaticMACTableEntry(): MACTable */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_AddStaticMACTableEntry_MACTable_param =
{
    MI_FLAG_PARAMETER, /* flags */
    0x006D6508, /* code */
    MI_T("MACTable"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("MSFT_MACTable"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_AddStaticMACTableEntry, MACTable), /* offset */
};

static MI_CONST MI_Char* MSFT_SwitchService_AddStaticMACTableEntry_MACTableEntry_EmbeddedInstance_qual_value = MI_T("MSFT_MACTableEntry");

static MI_CONST MI_Qualifier MSFT_SwitchService_AddStaticMACTableEntry_MACTableEntry_EmbeddedInstance_qual =
{
    MI_T("EmbeddedInstance"),
    MI_STRING,
    0,
    &MSFT_SwitchService_AddStaticMACTableEntry_MACTableEntry_EmbeddedInstance_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST MSFT_SwitchService_AddStaticMACTableEntry_MACTableEntry_quals[] =
{
    &MSFT_SwitchService_AddStaticMACTableEntry_MACTableEntry_EmbeddedInstance_qual,
};

/* parameter MSFT_SwitchService.AddStaticMACTableEntry(): MACTableEntry */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_AddStaticMACTableEntry_MACTableEntry_param =
{
    MI_FLAG_PARAMETER, /* flags */
    0x006D790D, /* code */
    MI_T("MACTableEntry"), /* name */
    MSFT_SwitchService_AddStaticMACTableEntry_MACTableEntry_quals, /* qualifiers */
    MI_COUNT(MSFT_SwitchService_AddStaticMACTableEntry_MACTableEntry_quals), /* numQualifiers */
    MI_INSTANCE, /* type */
    MI_T("MSFT_MACTableEntry"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_AddStaticMACTableEntry, MACTableEntry), /* offset */
};

/* parameter MSFT_SwitchService.AddStaticMACTableEntry(): ResultingEntry */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_AddStaticMACTableEntry_ResultingEntry_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x0072790E, /* code */
    MI_T("ResultingEntry"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("MSFT_MACTableEntry"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_AddStaticMACTableEntry, ResultingEntry), /* offset */
};

/* parameter MSFT_SwitchService.AddStaticMACTableEntry(): Job */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_AddStaticMACTableEntry_Job_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006A6203, /* code */
    MI_T("Job"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("CIM_ConcreteJob"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_AddStaticMACTableEntry, Job), /* offset */
};

/* parameter MSFT_SwitchService.AddStaticMACTableEntry(): MIReturn */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_AddStaticMACTableEntry_MIReturn_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006D6E08, /* code */
    MI_T("MIReturn"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_AddStaticMACTableEntry, MIReturn), /* offset */
};

static MI_ParameterDecl MI_CONST* MI_CONST MSFT_SwitchService_AddStaticMACTableEntry_params[] =
{
    &MSFT_SwitchService_AddStaticMACTableEntry_MIReturn_param,
    &MSFT_SwitchService_AddStaticMACTableEntry_MACTable_param,
    &MSFT_SwitchService_AddStaticMACTableEntry_MACTableEntry_param,
    &MSFT_SwitchService_AddStaticMACTableEntry_ResultingEntry_param,
    &MSFT_SwitchService_AddStaticMACTableEntry_Job_param,
};

/* method MSFT_SwitchService.AddStaticMACTableEntry() */
MI_CONST MI_MethodDecl MSFT_SwitchService_AddStaticMACTableEntry_rtti =
{
    MI_FLAG_METHOD, /* flags */
    0x00617916, /* code */
    MI_T("AddStaticMACTableEntry"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MSFT_SwitchService_AddStaticMACTableEntry_params, /* parameters */
    MI_COUNT(MSFT_SwitchService_AddStaticMACTableEntry_params), /* numParameters */
    sizeof(MSFT_SwitchService_AddStaticMACTableEntry), /* size */
    MI_UINT32, /* returnType */
    MI_T("MSFT_SwitchService"), /* origin */
    MI_T("MSFT_SwitchService"), /* propagator */
    &schemaDecl, /* schema */
    (MI_ProviderFT_Invoke)MSFT_SwitchService_Invoke_AddStaticMACTableEntry, /* method */
};

/* parameter MSFT_SwitchService.ClearStaticMACTableEntry(): MACTable */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_ClearStaticMACTableEntry_MACTable_param =
{
    MI_FLAG_PARAMETER, /* flags */
    0x006D6508, /* code */
    MI_T("MACTable"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("MSFT_MACTable"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_ClearStaticMACTableEntry, MACTable), /* offset */
};

/* parameter MSFT_SwitchService.ClearStaticMACTableEntry(): MACTableEntry */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_ClearStaticMACTableEntry_MACTableEntry_param =
{
    MI_FLAG_PARAMETER, /* flags */
    0x006D790D, /* code */
    MI_T("MACTableEntry"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("MSFT_MACTableEntry"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_ClearStaticMACTableEntry, MACTableEntry), /* offset */
};

/* parameter MSFT_SwitchService.ClearStaticMACTableEntry(): Job */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_ClearStaticMACTableEntry_Job_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006A6203, /* code */
    MI_T("Job"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("CIM_ConcreteJob"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_ClearStaticMACTableEntry, Job), /* offset */
};

/* parameter MSFT_SwitchService.ClearStaticMACTableEntry(): MIReturn */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_ClearStaticMACTableEntry_MIReturn_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006D6E08, /* code */
    MI_T("MIReturn"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_ClearStaticMACTableEntry, MIReturn), /* offset */
};

static MI_ParameterDecl MI_CONST* MI_CONST MSFT_SwitchService_ClearStaticMACTableEntry_params[] =
{
    &MSFT_SwitchService_ClearStaticMACTableEntry_MIReturn_param,
    &MSFT_SwitchService_ClearStaticMACTableEntry_MACTable_param,
    &MSFT_SwitchService_ClearStaticMACTableEntry_MACTableEntry_param,
    &MSFT_SwitchService_ClearStaticMACTableEntry_Job_param,
};

/* method MSFT_SwitchService.ClearStaticMACTableEntry() */
MI_CONST MI_MethodDecl MSFT_SwitchService_ClearStaticMACTableEntry_rtti =
{
    MI_FLAG_METHOD, /* flags */
    0x00637918, /* code */
    MI_T("ClearStaticMACTableEntry"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MSFT_SwitchService_ClearStaticMACTableEntry_params, /* parameters */
    MI_COUNT(MSFT_SwitchService_ClearStaticMACTableEntry_params), /* numParameters */
    sizeof(MSFT_SwitchService_ClearStaticMACTableEntry), /* size */
    MI_UINT32, /* returnType */
    MI_T("MSFT_SwitchService"), /* origin */
    MI_T("MSFT_SwitchService"), /* propagator */
    &schemaDecl, /* schema */
    (MI_ProviderFT_Invoke)MSFT_SwitchService_Invoke_ClearStaticMACTableEntry, /* method */
};

/* parameter MSFT_SwitchService.ClearDynamicMACTableEntries(): MACTable */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_ClearDynamicMACTableEntries_MACTable_param =
{
    MI_FLAG_PARAMETER, /* flags */
    0x006D6508, /* code */
    MI_T("MACTable"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("MSFT_MACTable"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_ClearDynamicMACTableEntries, MACTable), /* offset */
};

/* parameter MSFT_SwitchService.ClearDynamicMACTableEntries(): Job */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_ClearDynamicMACTableEntries_Job_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006A6203, /* code */
    MI_T("Job"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("CIM_ConcreteJob"), /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_ClearDynamicMACTableEntries, Job), /* offset */
};

/* parameter MSFT_SwitchService.ClearDynamicMACTableEntries(): MIReturn */
static MI_CONST MI_ParameterDecl MSFT_SwitchService_ClearDynamicMACTableEntries_MIReturn_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006D6E08, /* code */
    MI_T("MIReturn"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_SwitchService_ClearDynamicMACTableEntries, MIReturn), /* offset */
};

static MI_ParameterDecl MI_CONST* MI_CONST MSFT_SwitchService_ClearDynamicMACTableEntries_params[] =
{
    &MSFT_SwitchService_ClearDynamicMACTableEntries_MIReturn_param,
    &MSFT_SwitchService_ClearDynamicMACTableEntries_MACTable_param,
    &MSFT_SwitchService_ClearDynamicMACTableEntries_Job_param,
};

/* method MSFT_SwitchService.ClearDynamicMACTableEntries() */
MI_CONST MI_MethodDecl MSFT_SwitchService_ClearDynamicMACTableEntries_rtti =
{
    MI_FLAG_METHOD, /* flags */
    0x0063731B, /* code */
    MI_T("ClearDynamicMACTableEntries"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MSFT_SwitchService_ClearDynamicMACTableEntries_params, /* parameters */
    MI_COUNT(MSFT_SwitchService_ClearDynamicMACTableEntries_params), /* numParameters */
    sizeof(MSFT_SwitchService_ClearDynamicMACTableEntries), /* size */
    MI_UINT32, /* returnType */
    MI_T("MSFT_SwitchService"), /* origin */
    MI_T("MSFT_SwitchService"), /* propagator */
    &schemaDecl, /* schema */
    (MI_ProviderFT_Invoke)MSFT_SwitchService_Invoke_ClearDynamicMACTableEntries, /* method */
};

static MI_MethodDecl MI_CONST* MI_CONST MSFT_SwitchService_meths[] =
{
    &MSFT_SwitchService_RequestStateChange_rtti,
    &MSFT_SwitchService_StartService_rtti,
    &MSFT_SwitchService_StopService_rtti,
    &MSFT_SwitchService_AddProtocolEndpoint_rtti,
    &MSFT_SwitchService_RemoveProtocolEndpoint_rtti,
    &MSFT_SwitchService_AddVLAN_rtti,
    &MSFT_SwitchService_RemoveVLAN_rtti,
    &MSFT_SwitchService_EnableVLAN_rtti,
    &MSFT_SwitchService_DisableVLAN_rtti,
    &MSFT_SwitchService_SetVLANState_rtti,
    &MSFT_SwitchService_CreateLinkAggregation_rtti,
    &MSFT_SwitchService_RemoveLinkAggregation_rtti,
    &MSFT_SwitchService_AddPortToAggregation_rtti,
    &MSFT_SwitchService_RemovePortFromLinkAggregation_rtti,
    &MSFT_SwitchService_CopyCurrentToStartup_rtti,
    &MSFT_SwitchService_CopyStartupToCurrent_rtti,
    &MSFT_SwitchService_CopyCurrentToFile_rtti,
    &MSFT_SwitchService_CopyFile_rtti,
    &MSFT_SwitchService_CopyStartupToFile_rtti,
    &MSFT_SwitchService_CopyFileToCurrent_rtti,
    &MSFT_SwitchService_CopyFileToStartup_rtti,
    &MSFT_SwitchService_ClearCurrent_rtti,
    &MSFT_SwitchService_ClearStartup_rtti,
    &MSFT_SwitchService_DeleteFile_rtti,
    &MSFT_SwitchService_CreateRemoteServerGroup_rtti,
    &MSFT_SwitchService_RemoveRemoteServerGroup_rtti,
    &MSFT_SwitchService_ConfigureSeviceAccessPoint_rtti,
    &MSFT_SwitchService_ModifySeviceAccessPoint_rtti,
    &MSFT_SwitchService_DeleteSeviceAccessPoint_rtti,
    &MSFT_SwitchService_ApplyPortProfile_rtti,
    &MSFT_SwitchService_ReloadSwitch_rtti,
    &MSFT_SwitchService_SetMACAddressAgingTime_rtti,
    &MSFT_SwitchService_AddStaticMACTableEntry_rtti,
    &MSFT_SwitchService_ClearStaticMACTableEntry_rtti,
    &MSFT_SwitchService_ClearDynamicMACTableEntries_rtti,
};

static MI_CONST MI_ProviderFT MSFT_SwitchService_funcs =
{
  (MI_ProviderFT_Load)MSFT_SwitchService_Load,
  (MI_ProviderFT_Unload)MSFT_SwitchService_Unload,
  (MI_ProviderFT_GetInstance)MSFT_SwitchService_GetInstance,
  (MI_ProviderFT_EnumerateInstances)MSFT_SwitchService_EnumerateInstances,
  (MI_ProviderFT_CreateInstance)MSFT_SwitchService_CreateInstance,
  (MI_ProviderFT_ModifyInstance)MSFT_SwitchService_ModifyInstance,
  (MI_ProviderFT_DeleteInstance)MSFT_SwitchService_DeleteInstance,
  (MI_ProviderFT_AssociatorInstances)NULL,
  (MI_ProviderFT_ReferenceInstances)NULL,
  (MI_ProviderFT_EnableIndications)NULL,
  (MI_ProviderFT_DisableIndications)NULL,
  (MI_ProviderFT_Subscribe)NULL,
  (MI_ProviderFT_Unsubscribe)NULL,
  (MI_ProviderFT_Invoke)NULL,
};

static MI_CONST MI_Char* MSFT_SwitchService_UMLPackagePath_qual_value = MI_T("CIM::Core::Service");

static MI_CONST MI_Qualifier MSFT_SwitchService_UMLPackagePath_qual =
{
    MI_T("UMLPackagePath"),
    MI_STRING,
    0,
    &MSFT_SwitchService_UMLPackagePath_qual_value
};

static MI_CONST MI_Char* MSFT_SwitchService_Version_qual_value = MI_T("0.7");

static MI_CONST MI_Qualifier MSFT_SwitchService_Version_qual =
{
    MI_T("Version"),
    MI_STRING,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_TRANSLATABLE|MI_FLAG_RESTRICTED,
    &MSFT_SwitchService_Version_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST MSFT_SwitchService_quals[] =
{
    &MSFT_SwitchService_UMLPackagePath_qual,
    &MSFT_SwitchService_Version_qual,
};

/* class MSFT_SwitchService */
MI_CONST MI_ClassDecl MSFT_SwitchService_rtti =
{
    MI_FLAG_CLASS, /* flags */
    0x006D6512, /* code */
    MI_T("MSFT_SwitchService"), /* name */
    MSFT_SwitchService_quals, /* qualifiers */
    MI_COUNT(MSFT_SwitchService_quals), /* numQualifiers */
    MSFT_SwitchService_props, /* properties */
    MI_COUNT(MSFT_SwitchService_props), /* numProperties */
    sizeof(MSFT_SwitchService), /* size */
    MI_T("CIM_Service"), /* superClass */
    &CIM_Service_rtti, /* superClassDecl */
    MSFT_SwitchService_meths, /* methods */
    MI_COUNT(MSFT_SwitchService_meths), /* numMethods */
    &schemaDecl, /* schema */
    &MSFT_SwitchService_funcs, /* functions */
    NULL, /* owningClass */
};

/*
**==============================================================================
**
** CIM_VlanAssociationVlanEnd
**
**==============================================================================
*/

/* property CIM_VlanAssociationVlanEnd.Left */
static MI_CONST MI_PropertyDecl CIM_VlanAssociationVlanEnd_Left_prop =
{
    MI_FLAG_PROPERTY|MI_FLAG_KEY, /* flags */
    0x006C7404, /* code */
    MI_T("Left"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("MSFT_NetworkVLAN"), /* className */
    0, /* subscript */
    offsetof(CIM_VlanAssociationVlanEnd, Left), /* offset */
    MI_T("CIM_VlanAssociationVlanEnd"), /* origin */
    MI_T("CIM_VlanAssociationVlanEnd"), /* propagator */
    NULL,
};

/* property CIM_VlanAssociationVlanEnd.Right */
static MI_CONST MI_PropertyDecl CIM_VlanAssociationVlanEnd_Right_prop =
{
    MI_FLAG_PROPERTY|MI_FLAG_KEY, /* flags */
    0x00727405, /* code */
    MI_T("Right"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("CIM_VLANEndpoint"), /* className */
    0, /* subscript */
    offsetof(CIM_VlanAssociationVlanEnd, Right), /* offset */
    MI_T("CIM_VlanAssociationVlanEnd"), /* origin */
    MI_T("CIM_VlanAssociationVlanEnd"), /* propagator */
    NULL,
};

static MI_PropertyDecl MI_CONST* MI_CONST CIM_VlanAssociationVlanEnd_props[] =
{
    &CIM_VlanAssociationVlanEnd_Left_prop,
    &CIM_VlanAssociationVlanEnd_Right_prop,
};

static void MI_CALL CIM_VlanAssociationVlanEnd_AssociatorInstances(
    CIM_VlanAssociationVlanEnd_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Instance* instanceName,
    const MI_Char* resultClass,
    const MI_Char* role,
    const MI_Char* resultRole,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    if (MSFT_NetworkVLAN_IsA(instanceName))
    {
        if (_Match(role, MI_T("Left")) && 
            _Match(resultRole, MI_T("Right")))
        {
            CIM_VlanAssociationVlanEnd_AssociatorInstancesLeft(
                self, 
                context, 
                nameSpace, 
                className, 
                (MSFT_NetworkVLAN*)instanceName, 
                resultClass, 
                propertySet, 
                keysOnly, 
                filter);
            return;
        }
    }

    if (CIM_VLANEndpoint_IsA(instanceName))
    {
        if (_Match(role, MI_T("Right")) && 
            _Match(resultRole, MI_T("Left")))
        {
            CIM_VlanAssociationVlanEnd_AssociatorInstancesRight(
                self, 
                context, 
                nameSpace, 
                className, 
                (CIM_VLANEndpoint*)instanceName, 
                resultClass, 
                propertySet, 
                keysOnly, 
                filter);
            return;
        }
    }

    MI_Context_PostResult(context, MI_RESULT_OK);
}

static void MI_CALL CIM_VlanAssociationVlanEnd_ReferenceInstances(
    CIM_VlanAssociationVlanEnd_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Instance* instanceName,
    const MI_Char* role,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    if (MSFT_NetworkVLAN_IsA(instanceName))
    {
        if (_Match(role, MI_T("Left")))
        {
            CIM_VlanAssociationVlanEnd_ReferenceInstancesLeft(
                self, 
                context, 
                nameSpace, 
                className, 
                (MSFT_NetworkVLAN*)instanceName, 
                propertySet, 
                keysOnly, 
                filter);
            return;
        }
    }

    if (CIM_VLANEndpoint_IsA(instanceName))
    {
        if (_Match(role, MI_T("Right")))
        {
            CIM_VlanAssociationVlanEnd_ReferenceInstancesRight(
                self, 
                context, 
                nameSpace, 
                className, 
                (CIM_VLANEndpoint*)instanceName, 
                propertySet, 
                keysOnly, 
                filter);
            return;
        }
    }

    MI_Context_PostResult(context, MI_RESULT_OK);
}

static MI_CONST MI_ProviderFT CIM_VlanAssociationVlanEnd_funcs =
{
  (MI_ProviderFT_Load)CIM_VlanAssociationVlanEnd_Load,
  (MI_ProviderFT_Unload)CIM_VlanAssociationVlanEnd_Unload,
  (MI_ProviderFT_GetInstance)CIM_VlanAssociationVlanEnd_GetInstance,
  (MI_ProviderFT_EnumerateInstances)CIM_VlanAssociationVlanEnd_EnumerateInstances,
  (MI_ProviderFT_CreateInstance)CIM_VlanAssociationVlanEnd_CreateInstance,
  (MI_ProviderFT_ModifyInstance)CIM_VlanAssociationVlanEnd_ModifyInstance,
  (MI_ProviderFT_DeleteInstance)CIM_VlanAssociationVlanEnd_DeleteInstance,
  (MI_ProviderFT_AssociatorInstances)CIM_VlanAssociationVlanEnd_AssociatorInstances,
  (MI_ProviderFT_ReferenceInstances)CIM_VlanAssociationVlanEnd_ReferenceInstances,
  (MI_ProviderFT_EnableIndications)NULL,
  (MI_ProviderFT_DisableIndications)NULL,
  (MI_ProviderFT_Subscribe)NULL,
  (MI_ProviderFT_Unsubscribe)NULL,
  (MI_ProviderFT_Invoke)NULL,
};

/* class CIM_VlanAssociationVlanEnd */
MI_CONST MI_ClassDecl CIM_VlanAssociationVlanEnd_rtti =
{
    MI_FLAG_CLASS|MI_FLAG_ASSOCIATION, /* flags */
    0x0063641A, /* code */
    MI_T("CIM_VlanAssociationVlanEnd"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    CIM_VlanAssociationVlanEnd_props, /* properties */
    MI_COUNT(CIM_VlanAssociationVlanEnd_props), /* numProperties */
    sizeof(CIM_VlanAssociationVlanEnd), /* size */
    NULL, /* superClass */
    NULL, /* superClassDecl */
    NULL, /* methods */
    0, /* numMethods */
    &schemaDecl, /* schema */
    &CIM_VlanAssociationVlanEnd_funcs, /* functions */
    NULL, /* owningClass */
};

/*
**==============================================================================
**
** CIM_View
**
**==============================================================================
*/

static MI_PropertyDecl MI_CONST* MI_CONST CIM_View_props[] =
{
    &CIM_ManagedElement_InstanceID_prop,
    &CIM_ManagedElement_Caption_prop,
    &CIM_ManagedElement_Description_prop,
    &CIM_ManagedElement_ElementName_prop,
};

static MI_CONST MI_Char* CIM_View_UMLPackagePath_qual_value = MI_T("CIM::Core::CoreElements");

static MI_CONST MI_Qualifier CIM_View_UMLPackagePath_qual =
{
    MI_T("UMLPackagePath"),
    MI_STRING,
    0,
    &CIM_View_UMLPackagePath_qual_value
};

static MI_CONST MI_Char* CIM_View_Version_qual_value = MI_T("2.26.0");

static MI_CONST MI_Qualifier CIM_View_Version_qual =
{
    MI_T("Version"),
    MI_STRING,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_TRANSLATABLE|MI_FLAG_RESTRICTED,
    &CIM_View_Version_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_View_quals[] =
{
    &CIM_View_UMLPackagePath_qual,
    &CIM_View_Version_qual,
};

/* class CIM_View */
MI_CONST MI_ClassDecl CIM_View_rtti =
{
    MI_FLAG_CLASS|MI_FLAG_ABSTRACT, /* flags */
    0x00637708, /* code */
    MI_T("CIM_View"), /* name */
    CIM_View_quals, /* qualifiers */
    MI_COUNT(CIM_View_quals), /* numQualifiers */
    CIM_View_props, /* properties */
    MI_COUNT(CIM_View_props), /* numProperties */
    sizeof(CIM_View), /* size */
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
** CIM_PhysicalComputerSystemView
**
**==============================================================================
*/

static MI_CONST MI_Char* CIM_PhysicalComputerSystemView_InstanceID_Override_qual_value = MI_T("InstanceID");

static MI_CONST MI_Qualifier CIM_PhysicalComputerSystemView_InstanceID_Override_qual =
{
    MI_T("Override"),
    MI_STRING,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_RESTRICTED,
    &CIM_PhysicalComputerSystemView_InstanceID_Override_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_PhysicalComputerSystemView_InstanceID_quals[] =
{
    &CIM_PhysicalComputerSystemView_InstanceID_Override_qual,
};

/* property CIM_PhysicalComputerSystemView.InstanceID */
static MI_CONST MI_PropertyDecl CIM_PhysicalComputerSystemView_InstanceID_prop =
{
    MI_FLAG_PROPERTY|MI_FLAG_KEY, /* flags */
    0x0069640A, /* code */
    MI_T("InstanceID"), /* name */
    CIM_PhysicalComputerSystemView_InstanceID_quals, /* qualifiers */
    MI_COUNT(CIM_PhysicalComputerSystemView_InstanceID_quals), /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView, InstanceID), /* offset */
    MI_T("CIM_ManagedElement"), /* origin */
    MI_T("CIM_PhysicalComputerSystemView"), /* propagator */
    NULL,
};

/* property CIM_PhysicalComputerSystemView.EnabledState */
static MI_CONST MI_PropertyDecl CIM_PhysicalComputerSystemView_EnabledState_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0065650C, /* code */
    MI_T("EnabledState"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView, EnabledState), /* offset */
    MI_T("CIM_PhysicalComputerSystemView"), /* origin */
    MI_T("CIM_PhysicalComputerSystemView"), /* propagator */
    NULL,
};

/* property CIM_PhysicalComputerSystemView.RequestedState */
static MI_CONST MI_PropertyDecl CIM_PhysicalComputerSystemView_RequestedState_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0072650E, /* code */
    MI_T("RequestedState"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView, RequestedState), /* offset */
    MI_T("CIM_PhysicalComputerSystemView"), /* origin */
    MI_T("CIM_PhysicalComputerSystemView"), /* propagator */
    NULL,
};

/* property CIM_PhysicalComputerSystemView.OperationalStatus */
static MI_CONST MI_PropertyDecl CIM_PhysicalComputerSystemView_OperationalStatus_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006F7311, /* code */
    MI_T("OperationalStatus"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16A, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView, OperationalStatus), /* offset */
    MI_T("CIM_PhysicalComputerSystemView"), /* origin */
    MI_T("CIM_PhysicalComputerSystemView"), /* propagator */
    NULL,
};

/* property CIM_PhysicalComputerSystemView.HealthState */
static MI_CONST MI_PropertyDecl CIM_PhysicalComputerSystemView_HealthState_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0068650B, /* code */
    MI_T("HealthState"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView, HealthState), /* offset */
    MI_T("CIM_PhysicalComputerSystemView"), /* origin */
    MI_T("CIM_PhysicalComputerSystemView"), /* propagator */
    NULL,
};

/* property CIM_PhysicalComputerSystemView.FRUInfoSupported */
static MI_CONST MI_PropertyDecl CIM_PhysicalComputerSystemView_FRUInfoSupported_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00666410, /* code */
    MI_T("FRUInfoSupported"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_BOOLEAN, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView, FRUInfoSupported), /* offset */
    MI_T("CIM_PhysicalComputerSystemView"), /* origin */
    MI_T("CIM_PhysicalComputerSystemView"), /* propagator */
    NULL,
};

/* property CIM_PhysicalComputerSystemView.Tag */
static MI_CONST MI_PropertyDecl CIM_PhysicalComputerSystemView_Tag_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00746703, /* code */
    MI_T("Tag"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView, Tag), /* offset */
    MI_T("CIM_PhysicalComputerSystemView"), /* origin */
    MI_T("CIM_PhysicalComputerSystemView"), /* propagator */
    NULL,
};

/* property CIM_PhysicalComputerSystemView.Manufacturer */
static MI_CONST MI_PropertyDecl CIM_PhysicalComputerSystemView_Manufacturer_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006D720C, /* code */
    MI_T("Manufacturer"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView, Manufacturer), /* offset */
    MI_T("CIM_PhysicalComputerSystemView"), /* origin */
    MI_T("CIM_PhysicalComputerSystemView"), /* propagator */
    NULL,
};

/* property CIM_PhysicalComputerSystemView.Model */
static MI_CONST MI_PropertyDecl CIM_PhysicalComputerSystemView_Model_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006D6C05, /* code */
    MI_T("Model"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView, Model), /* offset */
    MI_T("CIM_PhysicalComputerSystemView"), /* origin */
    MI_T("CIM_PhysicalComputerSystemView"), /* propagator */
    NULL,
};

/* property CIM_PhysicalComputerSystemView.SKU */
static MI_CONST MI_PropertyDecl CIM_PhysicalComputerSystemView_SKU_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00737503, /* code */
    MI_T("SKU"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView, SKU), /* offset */
    MI_T("CIM_PhysicalComputerSystemView"), /* origin */
    MI_T("CIM_PhysicalComputerSystemView"), /* propagator */
    NULL,
};

/* property CIM_PhysicalComputerSystemView.SerialNumber */
static MI_CONST MI_PropertyDecl CIM_PhysicalComputerSystemView_SerialNumber_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0073720C, /* code */
    MI_T("SerialNumber"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView, SerialNumber), /* offset */
    MI_T("CIM_PhysicalComputerSystemView"), /* origin */
    MI_T("CIM_PhysicalComputerSystemView"), /* propagator */
    NULL,
};

/* property CIM_PhysicalComputerSystemView.Version */
static MI_CONST MI_PropertyDecl CIM_PhysicalComputerSystemView_Version_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00766E07, /* code */
    MI_T("Version"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView, Version), /* offset */
    MI_T("CIM_PhysicalComputerSystemView"), /* origin */
    MI_T("CIM_PhysicalComputerSystemView"), /* propagator */
    NULL,
};

/* property CIM_PhysicalComputerSystemView.PartNumber */
static MI_CONST MI_PropertyDecl CIM_PhysicalComputerSystemView_PartNumber_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0070720A, /* code */
    MI_T("PartNumber"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView, PartNumber), /* offset */
    MI_T("CIM_PhysicalComputerSystemView"), /* origin */
    MI_T("CIM_PhysicalComputerSystemView"), /* propagator */
    NULL,
};

/* property CIM_PhysicalComputerSystemView.PowerUtilizationModesSupported */
static MI_CONST MI_PropertyDecl CIM_PhysicalComputerSystemView_PowerUtilizationModesSupported_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0070641E, /* code */
    MI_T("PowerUtilizationModesSupported"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16A, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView, PowerUtilizationModesSupported), /* offset */
    MI_T("CIM_PhysicalComputerSystemView"), /* origin */
    MI_T("CIM_PhysicalComputerSystemView"), /* propagator */
    NULL,
};

/* property CIM_PhysicalComputerSystemView.PowerUtilizationMode */
static MI_CONST MI_PropertyDecl CIM_PhysicalComputerSystemView_PowerUtilizationMode_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00706514, /* code */
    MI_T("PowerUtilizationMode"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView, PowerUtilizationMode), /* offset */
    MI_T("CIM_PhysicalComputerSystemView"), /* origin */
    MI_T("CIM_PhysicalComputerSystemView"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* CIM_PhysicalComputerSystemView_PowerAllocationLimit_PUnit_qual_value = MI_T("watt * 10^-3");

static MI_CONST MI_Qualifier CIM_PhysicalComputerSystemView_PowerAllocationLimit_PUnit_qual =
{
    MI_T("PUnit"),
    MI_STRING,
    0,
    &CIM_PhysicalComputerSystemView_PowerAllocationLimit_PUnit_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_PhysicalComputerSystemView_PowerAllocationLimit_quals[] =
{
    &CIM_PhysicalComputerSystemView_PowerAllocationLimit_PUnit_qual,
};

/* property CIM_PhysicalComputerSystemView.PowerAllocationLimit */
static MI_CONST MI_PropertyDecl CIM_PhysicalComputerSystemView_PowerAllocationLimit_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00707414, /* code */
    MI_T("PowerAllocationLimit"), /* name */
    CIM_PhysicalComputerSystemView_PowerAllocationLimit_quals, /* qualifiers */
    MI_COUNT(CIM_PhysicalComputerSystemView_PowerAllocationLimit_quals), /* numQualifiers */
    MI_UINT64, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView, PowerAllocationLimit), /* offset */
    MI_T("CIM_PhysicalComputerSystemView"), /* origin */
    MI_T("CIM_PhysicalComputerSystemView"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* CIM_PhysicalComputerSystemView_NumericSensorElementName_ArrayType_qual_value = MI_T("Indexed");

static MI_CONST MI_Qualifier CIM_PhysicalComputerSystemView_NumericSensorElementName_ArrayType_qual =
{
    MI_T("ArrayType"),
    MI_STRING,
    MI_FLAG_DISABLEOVERRIDE|MI_FLAG_TOSUBCLASS,
    &CIM_PhysicalComputerSystemView_NumericSensorElementName_ArrayType_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_PhysicalComputerSystemView_NumericSensorElementName_quals[] =
{
    &CIM_PhysicalComputerSystemView_NumericSensorElementName_ArrayType_qual,
};

/* property CIM_PhysicalComputerSystemView.NumericSensorElementName */
static MI_CONST MI_PropertyDecl CIM_PhysicalComputerSystemView_NumericSensorElementName_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006E6518, /* code */
    MI_T("NumericSensorElementName"), /* name */
    CIM_PhysicalComputerSystemView_NumericSensorElementName_quals, /* qualifiers */
    MI_COUNT(CIM_PhysicalComputerSystemView_NumericSensorElementName_quals), /* numQualifiers */
    MI_STRINGA, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView, NumericSensorElementName), /* offset */
    MI_T("CIM_PhysicalComputerSystemView"), /* origin */
    MI_T("CIM_PhysicalComputerSystemView"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* CIM_PhysicalComputerSystemView_NumericSensorEnabledState_ArrayType_qual_value = MI_T("Indexed");

static MI_CONST MI_Qualifier CIM_PhysicalComputerSystemView_NumericSensorEnabledState_ArrayType_qual =
{
    MI_T("ArrayType"),
    MI_STRING,
    MI_FLAG_DISABLEOVERRIDE|MI_FLAG_TOSUBCLASS,
    &CIM_PhysicalComputerSystemView_NumericSensorEnabledState_ArrayType_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_PhysicalComputerSystemView_NumericSensorEnabledState_quals[] =
{
    &CIM_PhysicalComputerSystemView_NumericSensorEnabledState_ArrayType_qual,
};

/* property CIM_PhysicalComputerSystemView.NumericSensorEnabledState */
static MI_CONST MI_PropertyDecl CIM_PhysicalComputerSystemView_NumericSensorEnabledState_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006E6519, /* code */
    MI_T("NumericSensorEnabledState"), /* name */
    CIM_PhysicalComputerSystemView_NumericSensorEnabledState_quals, /* qualifiers */
    MI_COUNT(CIM_PhysicalComputerSystemView_NumericSensorEnabledState_quals), /* numQualifiers */
    MI_UINT16A, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView, NumericSensorEnabledState), /* offset */
    MI_T("CIM_PhysicalComputerSystemView"), /* origin */
    MI_T("CIM_PhysicalComputerSystemView"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* CIM_PhysicalComputerSystemView_NumericSensorHealthState_ArrayType_qual_value = MI_T("Indexed");

static MI_CONST MI_Qualifier CIM_PhysicalComputerSystemView_NumericSensorHealthState_ArrayType_qual =
{
    MI_T("ArrayType"),
    MI_STRING,
    MI_FLAG_DISABLEOVERRIDE|MI_FLAG_TOSUBCLASS,
    &CIM_PhysicalComputerSystemView_NumericSensorHealthState_ArrayType_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_PhysicalComputerSystemView_NumericSensorHealthState_quals[] =
{
    &CIM_PhysicalComputerSystemView_NumericSensorHealthState_ArrayType_qual,
};

/* property CIM_PhysicalComputerSystemView.NumericSensorHealthState */
static MI_CONST MI_PropertyDecl CIM_PhysicalComputerSystemView_NumericSensorHealthState_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006E6518, /* code */
    MI_T("NumericSensorHealthState"), /* name */
    CIM_PhysicalComputerSystemView_NumericSensorHealthState_quals, /* qualifiers */
    MI_COUNT(CIM_PhysicalComputerSystemView_NumericSensorHealthState_quals), /* numQualifiers */
    MI_UINT16A, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView, NumericSensorHealthState), /* offset */
    MI_T("CIM_PhysicalComputerSystemView"), /* origin */
    MI_T("CIM_PhysicalComputerSystemView"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* CIM_PhysicalComputerSystemView_NumericSensorCurrentState_ArrayType_qual_value = MI_T("Indexed");

static MI_CONST MI_Qualifier CIM_PhysicalComputerSystemView_NumericSensorCurrentState_ArrayType_qual =
{
    MI_T("ArrayType"),
    MI_STRING,
    MI_FLAG_DISABLEOVERRIDE|MI_FLAG_TOSUBCLASS,
    &CIM_PhysicalComputerSystemView_NumericSensorCurrentState_ArrayType_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_PhysicalComputerSystemView_NumericSensorCurrentState_quals[] =
{
    &CIM_PhysicalComputerSystemView_NumericSensorCurrentState_ArrayType_qual,
};

/* property CIM_PhysicalComputerSystemView.NumericSensorCurrentState */
static MI_CONST MI_PropertyDecl CIM_PhysicalComputerSystemView_NumericSensorCurrentState_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006E6519, /* code */
    MI_T("NumericSensorCurrentState"), /* name */
    CIM_PhysicalComputerSystemView_NumericSensorCurrentState_quals, /* qualifiers */
    MI_COUNT(CIM_PhysicalComputerSystemView_NumericSensorCurrentState_quals), /* numQualifiers */
    MI_STRINGA, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView, NumericSensorCurrentState), /* offset */
    MI_T("CIM_PhysicalComputerSystemView"), /* origin */
    MI_T("CIM_PhysicalComputerSystemView"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* CIM_PhysicalComputerSystemView_NumericSensorPrimaryStatus_ArrayType_qual_value = MI_T("Indexed");

static MI_CONST MI_Qualifier CIM_PhysicalComputerSystemView_NumericSensorPrimaryStatus_ArrayType_qual =
{
    MI_T("ArrayType"),
    MI_STRING,
    MI_FLAG_DISABLEOVERRIDE|MI_FLAG_TOSUBCLASS,
    &CIM_PhysicalComputerSystemView_NumericSensorPrimaryStatus_ArrayType_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_PhysicalComputerSystemView_NumericSensorPrimaryStatus_quals[] =
{
    &CIM_PhysicalComputerSystemView_NumericSensorPrimaryStatus_ArrayType_qual,
};

/* property CIM_PhysicalComputerSystemView.NumericSensorPrimaryStatus */
static MI_CONST MI_PropertyDecl CIM_PhysicalComputerSystemView_NumericSensorPrimaryStatus_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006E731A, /* code */
    MI_T("NumericSensorPrimaryStatus"), /* name */
    CIM_PhysicalComputerSystemView_NumericSensorPrimaryStatus_quals, /* qualifiers */
    MI_COUNT(CIM_PhysicalComputerSystemView_NumericSensorPrimaryStatus_quals), /* numQualifiers */
    MI_UINT16A, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView, NumericSensorPrimaryStatus), /* offset */
    MI_T("CIM_PhysicalComputerSystemView"), /* origin */
    MI_T("CIM_PhysicalComputerSystemView"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* CIM_PhysicalComputerSystemView_NumericSensorBaseUnits_ArrayType_qual_value = MI_T("Indexed");

static MI_CONST MI_Qualifier CIM_PhysicalComputerSystemView_NumericSensorBaseUnits_ArrayType_qual =
{
    MI_T("ArrayType"),
    MI_STRING,
    MI_FLAG_DISABLEOVERRIDE|MI_FLAG_TOSUBCLASS,
    &CIM_PhysicalComputerSystemView_NumericSensorBaseUnits_ArrayType_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_PhysicalComputerSystemView_NumericSensorBaseUnits_quals[] =
{
    &CIM_PhysicalComputerSystemView_NumericSensorBaseUnits_ArrayType_qual,
};

/* property CIM_PhysicalComputerSystemView.NumericSensorBaseUnits */
static MI_CONST MI_PropertyDecl CIM_PhysicalComputerSystemView_NumericSensorBaseUnits_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006E7316, /* code */
    MI_T("NumericSensorBaseUnits"), /* name */
    CIM_PhysicalComputerSystemView_NumericSensorBaseUnits_quals, /* qualifiers */
    MI_COUNT(CIM_PhysicalComputerSystemView_NumericSensorBaseUnits_quals), /* numQualifiers */
    MI_UINT16A, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView, NumericSensorBaseUnits), /* offset */
    MI_T("CIM_PhysicalComputerSystemView"), /* origin */
    MI_T("CIM_PhysicalComputerSystemView"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* CIM_PhysicalComputerSystemView_NumericSensorUnitModifier_ArrayType_qual_value = MI_T("Indexed");

static MI_CONST MI_Qualifier CIM_PhysicalComputerSystemView_NumericSensorUnitModifier_ArrayType_qual =
{
    MI_T("ArrayType"),
    MI_STRING,
    MI_FLAG_DISABLEOVERRIDE|MI_FLAG_TOSUBCLASS,
    &CIM_PhysicalComputerSystemView_NumericSensorUnitModifier_ArrayType_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_PhysicalComputerSystemView_NumericSensorUnitModifier_quals[] =
{
    &CIM_PhysicalComputerSystemView_NumericSensorUnitModifier_ArrayType_qual,
};

/* property CIM_PhysicalComputerSystemView.NumericSensorUnitModifier */
static MI_CONST MI_PropertyDecl CIM_PhysicalComputerSystemView_NumericSensorUnitModifier_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006E7219, /* code */
    MI_T("NumericSensorUnitModifier"), /* name */
    CIM_PhysicalComputerSystemView_NumericSensorUnitModifier_quals, /* qualifiers */
    MI_COUNT(CIM_PhysicalComputerSystemView_NumericSensorUnitModifier_quals), /* numQualifiers */
    MI_SINT32A, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView, NumericSensorUnitModifier), /* offset */
    MI_T("CIM_PhysicalComputerSystemView"), /* origin */
    MI_T("CIM_PhysicalComputerSystemView"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* CIM_PhysicalComputerSystemView_NumericSensorRateUnits_ArrayType_qual_value = MI_T("Indexed");

static MI_CONST MI_Qualifier CIM_PhysicalComputerSystemView_NumericSensorRateUnits_ArrayType_qual =
{
    MI_T("ArrayType"),
    MI_STRING,
    MI_FLAG_DISABLEOVERRIDE|MI_FLAG_TOSUBCLASS,
    &CIM_PhysicalComputerSystemView_NumericSensorRateUnits_ArrayType_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_PhysicalComputerSystemView_NumericSensorRateUnits_quals[] =
{
    &CIM_PhysicalComputerSystemView_NumericSensorRateUnits_ArrayType_qual,
};

/* property CIM_PhysicalComputerSystemView.NumericSensorRateUnits */
static MI_CONST MI_PropertyDecl CIM_PhysicalComputerSystemView_NumericSensorRateUnits_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006E7316, /* code */
    MI_T("NumericSensorRateUnits"), /* name */
    CIM_PhysicalComputerSystemView_NumericSensorRateUnits_quals, /* qualifiers */
    MI_COUNT(CIM_PhysicalComputerSystemView_NumericSensorRateUnits_quals), /* numQualifiers */
    MI_UINT16A, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView, NumericSensorRateUnits), /* offset */
    MI_T("CIM_PhysicalComputerSystemView"), /* origin */
    MI_T("CIM_PhysicalComputerSystemView"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* CIM_PhysicalComputerSystemView_NumericSensorCurrentReading_ArrayType_qual_value = MI_T("Indexed");

static MI_CONST MI_Qualifier CIM_PhysicalComputerSystemView_NumericSensorCurrentReading_ArrayType_qual =
{
    MI_T("ArrayType"),
    MI_STRING,
    MI_FLAG_DISABLEOVERRIDE|MI_FLAG_TOSUBCLASS,
    &CIM_PhysicalComputerSystemView_NumericSensorCurrentReading_ArrayType_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_PhysicalComputerSystemView_NumericSensorCurrentReading_quals[] =
{
    &CIM_PhysicalComputerSystemView_NumericSensorCurrentReading_ArrayType_qual,
};

/* property CIM_PhysicalComputerSystemView.NumericSensorCurrentReading */
static MI_CONST MI_PropertyDecl CIM_PhysicalComputerSystemView_NumericSensorCurrentReading_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006E671B, /* code */
    MI_T("NumericSensorCurrentReading"), /* name */
    CIM_PhysicalComputerSystemView_NumericSensorCurrentReading_quals, /* qualifiers */
    MI_COUNT(CIM_PhysicalComputerSystemView_NumericSensorCurrentReading_quals), /* numQualifiers */
    MI_SINT32A, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView, NumericSensorCurrentReading), /* offset */
    MI_T("CIM_PhysicalComputerSystemView"), /* origin */
    MI_T("CIM_PhysicalComputerSystemView"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* CIM_PhysicalComputerSystemView_NumericSensorSensorType_ArrayType_qual_value = MI_T("Indexed");

static MI_CONST MI_Qualifier CIM_PhysicalComputerSystemView_NumericSensorSensorType_ArrayType_qual =
{
    MI_T("ArrayType"),
    MI_STRING,
    MI_FLAG_DISABLEOVERRIDE|MI_FLAG_TOSUBCLASS,
    &CIM_PhysicalComputerSystemView_NumericSensorSensorType_ArrayType_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_PhysicalComputerSystemView_NumericSensorSensorType_quals[] =
{
    &CIM_PhysicalComputerSystemView_NumericSensorSensorType_ArrayType_qual,
};

/* property CIM_PhysicalComputerSystemView.NumericSensorSensorType */
static MI_CONST MI_PropertyDecl CIM_PhysicalComputerSystemView_NumericSensorSensorType_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006E6517, /* code */
    MI_T("NumericSensorSensorType"), /* name */
    CIM_PhysicalComputerSystemView_NumericSensorSensorType_quals, /* qualifiers */
    MI_COUNT(CIM_PhysicalComputerSystemView_NumericSensorSensorType_quals), /* numQualifiers */
    MI_UINT16A, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView, NumericSensorSensorType), /* offset */
    MI_T("CIM_PhysicalComputerSystemView"), /* origin */
    MI_T("CIM_PhysicalComputerSystemView"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* CIM_PhysicalComputerSystemView_NumericSensorOtherSensorTypeDescription_ArrayType_qual_value = MI_T("Indexed");

static MI_CONST MI_Qualifier CIM_PhysicalComputerSystemView_NumericSensorOtherSensorTypeDescription_ArrayType_qual =
{
    MI_T("ArrayType"),
    MI_STRING,
    MI_FLAG_DISABLEOVERRIDE|MI_FLAG_TOSUBCLASS,
    &CIM_PhysicalComputerSystemView_NumericSensorOtherSensorTypeDescription_ArrayType_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_PhysicalComputerSystemView_NumericSensorOtherSensorTypeDescription_quals[] =
{
    &CIM_PhysicalComputerSystemView_NumericSensorOtherSensorTypeDescription_ArrayType_qual,
};

/* property CIM_PhysicalComputerSystemView.NumericSensorOtherSensorTypeDescription */
static MI_CONST MI_PropertyDecl CIM_PhysicalComputerSystemView_NumericSensorOtherSensorTypeDescription_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006E6E27, /* code */
    MI_T("NumericSensorOtherSensorTypeDescription"), /* name */
    CIM_PhysicalComputerSystemView_NumericSensorOtherSensorTypeDescription_quals, /* qualifiers */
    MI_COUNT(CIM_PhysicalComputerSystemView_NumericSensorOtherSensorTypeDescription_quals), /* numQualifiers */
    MI_STRINGA, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView, NumericSensorOtherSensorTypeDescription), /* offset */
    MI_T("CIM_PhysicalComputerSystemView"), /* origin */
    MI_T("CIM_PhysicalComputerSystemView"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* CIM_PhysicalComputerSystemView_NumericSensorUpperThresholdNonCritical_ArrayType_qual_value = MI_T("Indexed");

static MI_CONST MI_Qualifier CIM_PhysicalComputerSystemView_NumericSensorUpperThresholdNonCritical_ArrayType_qual =
{
    MI_T("ArrayType"),
    MI_STRING,
    MI_FLAG_DISABLEOVERRIDE|MI_FLAG_TOSUBCLASS,
    &CIM_PhysicalComputerSystemView_NumericSensorUpperThresholdNonCritical_ArrayType_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_PhysicalComputerSystemView_NumericSensorUpperThresholdNonCritical_quals[] =
{
    &CIM_PhysicalComputerSystemView_NumericSensorUpperThresholdNonCritical_ArrayType_qual,
};

/* property CIM_PhysicalComputerSystemView.NumericSensorUpperThresholdNonCritical */
static MI_CONST MI_PropertyDecl CIM_PhysicalComputerSystemView_NumericSensorUpperThresholdNonCritical_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006E6C26, /* code */
    MI_T("NumericSensorUpperThresholdNonCritical"), /* name */
    CIM_PhysicalComputerSystemView_NumericSensorUpperThresholdNonCritical_quals, /* qualifiers */
    MI_COUNT(CIM_PhysicalComputerSystemView_NumericSensorUpperThresholdNonCritical_quals), /* numQualifiers */
    MI_SINT32A, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView, NumericSensorUpperThresholdNonCritical), /* offset */
    MI_T("CIM_PhysicalComputerSystemView"), /* origin */
    MI_T("CIM_PhysicalComputerSystemView"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* CIM_PhysicalComputerSystemView_NumericSensorUpperThresholdCritical_ArrayType_qual_value = MI_T("Indexed");

static MI_CONST MI_Qualifier CIM_PhysicalComputerSystemView_NumericSensorUpperThresholdCritical_ArrayType_qual =
{
    MI_T("ArrayType"),
    MI_STRING,
    MI_FLAG_DISABLEOVERRIDE|MI_FLAG_TOSUBCLASS,
    &CIM_PhysicalComputerSystemView_NumericSensorUpperThresholdCritical_ArrayType_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_PhysicalComputerSystemView_NumericSensorUpperThresholdCritical_quals[] =
{
    &CIM_PhysicalComputerSystemView_NumericSensorUpperThresholdCritical_ArrayType_qual,
};

/* property CIM_PhysicalComputerSystemView.NumericSensorUpperThresholdCritical */
static MI_CONST MI_PropertyDecl CIM_PhysicalComputerSystemView_NumericSensorUpperThresholdCritical_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006E6C23, /* code */
    MI_T("NumericSensorUpperThresholdCritical"), /* name */
    CIM_PhysicalComputerSystemView_NumericSensorUpperThresholdCritical_quals, /* qualifiers */
    MI_COUNT(CIM_PhysicalComputerSystemView_NumericSensorUpperThresholdCritical_quals), /* numQualifiers */
    MI_SINT32A, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView, NumericSensorUpperThresholdCritical), /* offset */
    MI_T("CIM_PhysicalComputerSystemView"), /* origin */
    MI_T("CIM_PhysicalComputerSystemView"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* CIM_PhysicalComputerSystemView_NumericSensorUpperThresholdFatal_ArrayType_qual_value = MI_T("Indexed");

static MI_CONST MI_Qualifier CIM_PhysicalComputerSystemView_NumericSensorUpperThresholdFatal_ArrayType_qual =
{
    MI_T("ArrayType"),
    MI_STRING,
    MI_FLAG_DISABLEOVERRIDE|MI_FLAG_TOSUBCLASS,
    &CIM_PhysicalComputerSystemView_NumericSensorUpperThresholdFatal_ArrayType_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_PhysicalComputerSystemView_NumericSensorUpperThresholdFatal_quals[] =
{
    &CIM_PhysicalComputerSystemView_NumericSensorUpperThresholdFatal_ArrayType_qual,
};

/* property CIM_PhysicalComputerSystemView.NumericSensorUpperThresholdFatal */
static MI_CONST MI_PropertyDecl CIM_PhysicalComputerSystemView_NumericSensorUpperThresholdFatal_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006E6C20, /* code */
    MI_T("NumericSensorUpperThresholdFatal"), /* name */
    CIM_PhysicalComputerSystemView_NumericSensorUpperThresholdFatal_quals, /* qualifiers */
    MI_COUNT(CIM_PhysicalComputerSystemView_NumericSensorUpperThresholdFatal_quals), /* numQualifiers */
    MI_SINT32A, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView, NumericSensorUpperThresholdFatal), /* offset */
    MI_T("CIM_PhysicalComputerSystemView"), /* origin */
    MI_T("CIM_PhysicalComputerSystemView"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* CIM_PhysicalComputerSystemView_LogInstanceID_ArrayType_qual_value = MI_T("Indexed");

static MI_CONST MI_Qualifier CIM_PhysicalComputerSystemView_LogInstanceID_ArrayType_qual =
{
    MI_T("ArrayType"),
    MI_STRING,
    MI_FLAG_DISABLEOVERRIDE|MI_FLAG_TOSUBCLASS,
    &CIM_PhysicalComputerSystemView_LogInstanceID_ArrayType_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_PhysicalComputerSystemView_LogInstanceID_quals[] =
{
    &CIM_PhysicalComputerSystemView_LogInstanceID_ArrayType_qual,
};

/* property CIM_PhysicalComputerSystemView.LogInstanceID */
static MI_CONST MI_PropertyDecl CIM_PhysicalComputerSystemView_LogInstanceID_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006C640D, /* code */
    MI_T("LogInstanceID"), /* name */
    CIM_PhysicalComputerSystemView_LogInstanceID_quals, /* qualifiers */
    MI_COUNT(CIM_PhysicalComputerSystemView_LogInstanceID_quals), /* numQualifiers */
    MI_STRINGA, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView, LogInstanceID), /* offset */
    MI_T("CIM_PhysicalComputerSystemView"), /* origin */
    MI_T("CIM_PhysicalComputerSystemView"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* CIM_PhysicalComputerSystemView_LogMaxNumberOfRecords_ArrayType_qual_value = MI_T("Indexed");

static MI_CONST MI_Qualifier CIM_PhysicalComputerSystemView_LogMaxNumberOfRecords_ArrayType_qual =
{
    MI_T("ArrayType"),
    MI_STRING,
    MI_FLAG_DISABLEOVERRIDE|MI_FLAG_TOSUBCLASS,
    &CIM_PhysicalComputerSystemView_LogMaxNumberOfRecords_ArrayType_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_PhysicalComputerSystemView_LogMaxNumberOfRecords_quals[] =
{
    &CIM_PhysicalComputerSystemView_LogMaxNumberOfRecords_ArrayType_qual,
};

/* property CIM_PhysicalComputerSystemView.LogMaxNumberOfRecords */
static MI_CONST MI_PropertyDecl CIM_PhysicalComputerSystemView_LogMaxNumberOfRecords_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006C7315, /* code */
    MI_T("LogMaxNumberOfRecords"), /* name */
    CIM_PhysicalComputerSystemView_LogMaxNumberOfRecords_quals, /* qualifiers */
    MI_COUNT(CIM_PhysicalComputerSystemView_LogMaxNumberOfRecords_quals), /* numQualifiers */
    MI_UINT64A, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView, LogMaxNumberOfRecords), /* offset */
    MI_T("CIM_PhysicalComputerSystemView"), /* origin */
    MI_T("CIM_PhysicalComputerSystemView"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* CIM_PhysicalComputerSystemView_LogCurrentNumberOfRecords_ArrayType_qual_value = MI_T("Indexed");

static MI_CONST MI_Qualifier CIM_PhysicalComputerSystemView_LogCurrentNumberOfRecords_ArrayType_qual =
{
    MI_T("ArrayType"),
    MI_STRING,
    MI_FLAG_DISABLEOVERRIDE|MI_FLAG_TOSUBCLASS,
    &CIM_PhysicalComputerSystemView_LogCurrentNumberOfRecords_ArrayType_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_PhysicalComputerSystemView_LogCurrentNumberOfRecords_quals[] =
{
    &CIM_PhysicalComputerSystemView_LogCurrentNumberOfRecords_ArrayType_qual,
};

/* property CIM_PhysicalComputerSystemView.LogCurrentNumberOfRecords */
static MI_CONST MI_PropertyDecl CIM_PhysicalComputerSystemView_LogCurrentNumberOfRecords_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006C7319, /* code */
    MI_T("LogCurrentNumberOfRecords"), /* name */
    CIM_PhysicalComputerSystemView_LogCurrentNumberOfRecords_quals, /* qualifiers */
    MI_COUNT(CIM_PhysicalComputerSystemView_LogCurrentNumberOfRecords_quals), /* numQualifiers */
    MI_UINT64A, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView, LogCurrentNumberOfRecords), /* offset */
    MI_T("CIM_PhysicalComputerSystemView"), /* origin */
    MI_T("CIM_PhysicalComputerSystemView"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* CIM_PhysicalComputerSystemView_LogOverWritePolicy_ArrayType_qual_value = MI_T("Indexed");

static MI_CONST MI_Qualifier CIM_PhysicalComputerSystemView_LogOverWritePolicy_ArrayType_qual =
{
    MI_T("ArrayType"),
    MI_STRING,
    MI_FLAG_DISABLEOVERRIDE|MI_FLAG_TOSUBCLASS,
    &CIM_PhysicalComputerSystemView_LogOverWritePolicy_ArrayType_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_PhysicalComputerSystemView_LogOverWritePolicy_quals[] =
{
    &CIM_PhysicalComputerSystemView_LogOverWritePolicy_ArrayType_qual,
};

/* property CIM_PhysicalComputerSystemView.LogOverWritePolicy */
static MI_CONST MI_PropertyDecl CIM_PhysicalComputerSystemView_LogOverWritePolicy_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006C7912, /* code */
    MI_T("LogOverWritePolicy"), /* name */
    CIM_PhysicalComputerSystemView_LogOverWritePolicy_quals, /* qualifiers */
    MI_COUNT(CIM_PhysicalComputerSystemView_LogOverWritePolicy_quals), /* numQualifiers */
    MI_UINT16A, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView, LogOverWritePolicy), /* offset */
    MI_T("CIM_PhysicalComputerSystemView"), /* origin */
    MI_T("CIM_PhysicalComputerSystemView"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* CIM_PhysicalComputerSystemView_LogState_ArrayType_qual_value = MI_T("Indexed");

static MI_CONST MI_Qualifier CIM_PhysicalComputerSystemView_LogState_ArrayType_qual =
{
    MI_T("ArrayType"),
    MI_STRING,
    MI_FLAG_DISABLEOVERRIDE|MI_FLAG_TOSUBCLASS,
    &CIM_PhysicalComputerSystemView_LogState_ArrayType_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_PhysicalComputerSystemView_LogState_quals[] =
{
    &CIM_PhysicalComputerSystemView_LogState_ArrayType_qual,
};

/* property CIM_PhysicalComputerSystemView.LogState */
static MI_CONST MI_PropertyDecl CIM_PhysicalComputerSystemView_LogState_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006C6508, /* code */
    MI_T("LogState"), /* name */
    CIM_PhysicalComputerSystemView_LogState_quals, /* qualifiers */
    MI_COUNT(CIM_PhysicalComputerSystemView_LogState_quals), /* numQualifiers */
    MI_UINT16A, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView, LogState), /* offset */
    MI_T("CIM_PhysicalComputerSystemView"), /* origin */
    MI_T("CIM_PhysicalComputerSystemView"), /* propagator */
    NULL,
};

/* property CIM_PhysicalComputerSystemView.StructuredBootString */
static MI_CONST MI_PropertyDecl CIM_PhysicalComputerSystemView_StructuredBootString_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00736714, /* code */
    MI_T("StructuredBootString"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRINGA, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView, StructuredBootString), /* offset */
    MI_T("CIM_PhysicalComputerSystemView"), /* origin */
    MI_T("CIM_PhysicalComputerSystemView"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* CIM_PhysicalComputerSystemView_PersistentBootConfigOrder_ArrayType_qual_value = MI_T("Ordered");

static MI_CONST MI_Qualifier CIM_PhysicalComputerSystemView_PersistentBootConfigOrder_ArrayType_qual =
{
    MI_T("ArrayType"),
    MI_STRING,
    MI_FLAG_DISABLEOVERRIDE|MI_FLAG_TOSUBCLASS,
    &CIM_PhysicalComputerSystemView_PersistentBootConfigOrder_ArrayType_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_PhysicalComputerSystemView_PersistentBootConfigOrder_quals[] =
{
    &CIM_PhysicalComputerSystemView_PersistentBootConfigOrder_ArrayType_qual,
};

/* property CIM_PhysicalComputerSystemView.PersistentBootConfigOrder */
static MI_CONST MI_PropertyDecl CIM_PhysicalComputerSystemView_PersistentBootConfigOrder_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00707219, /* code */
    MI_T("PersistentBootConfigOrder"), /* name */
    CIM_PhysicalComputerSystemView_PersistentBootConfigOrder_quals, /* qualifiers */
    MI_COUNT(CIM_PhysicalComputerSystemView_PersistentBootConfigOrder_quals), /* numQualifiers */
    MI_UINT8A, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView, PersistentBootConfigOrder), /* offset */
    MI_T("CIM_PhysicalComputerSystemView"), /* origin */
    MI_T("CIM_PhysicalComputerSystemView"), /* propagator */
    NULL,
};

/* property CIM_PhysicalComputerSystemView.OneTimeBootSource */
static MI_CONST MI_PropertyDecl CIM_PhysicalComputerSystemView_OneTimeBootSource_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006F6511, /* code */
    MI_T("OneTimeBootSource"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT8, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView, OneTimeBootSource), /* offset */
    MI_T("CIM_PhysicalComputerSystemView"), /* origin */
    MI_T("CIM_PhysicalComputerSystemView"), /* propagator */
    NULL,
};

/* property CIM_PhysicalComputerSystemView.NumberOfProcessors */
static MI_CONST MI_PropertyDecl CIM_PhysicalComputerSystemView_NumberOfProcessors_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006E7312, /* code */
    MI_T("NumberOfProcessors"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView, NumberOfProcessors), /* offset */
    MI_T("CIM_PhysicalComputerSystemView"), /* origin */
    MI_T("CIM_PhysicalComputerSystemView"), /* propagator */
    NULL,
};

/* property CIM_PhysicalComputerSystemView.NumberOfProcessorCores */
static MI_CONST MI_PropertyDecl CIM_PhysicalComputerSystemView_NumberOfProcessorCores_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006E7316, /* code */
    MI_T("NumberOfProcessorCores"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView, NumberOfProcessorCores), /* offset */
    MI_T("CIM_PhysicalComputerSystemView"), /* origin */
    MI_T("CIM_PhysicalComputerSystemView"), /* propagator */
    NULL,
};

/* property CIM_PhysicalComputerSystemView.NumberOfProcessorThreads */
static MI_CONST MI_PropertyDecl CIM_PhysicalComputerSystemView_NumberOfProcessorThreads_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006E7318, /* code */
    MI_T("NumberOfProcessorThreads"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView, NumberOfProcessorThreads), /* offset */
    MI_T("CIM_PhysicalComputerSystemView"), /* origin */
    MI_T("CIM_PhysicalComputerSystemView"), /* propagator */
    NULL,
};

/* property CIM_PhysicalComputerSystemView.ProcessorFamily */
static MI_CONST MI_PropertyDecl CIM_PhysicalComputerSystemView_ProcessorFamily_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0070790F, /* code */
    MI_T("ProcessorFamily"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView, ProcessorFamily), /* offset */
    MI_T("CIM_PhysicalComputerSystemView"), /* origin */
    MI_T("CIM_PhysicalComputerSystemView"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* CIM_PhysicalComputerSystemView_ProcessorMaxClockSpeed_PUnit_qual_value = MI_T("hertz * 10^6");

static MI_CONST MI_Qualifier CIM_PhysicalComputerSystemView_ProcessorMaxClockSpeed_PUnit_qual =
{
    MI_T("PUnit"),
    MI_STRING,
    0,
    &CIM_PhysicalComputerSystemView_ProcessorMaxClockSpeed_PUnit_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_PhysicalComputerSystemView_ProcessorMaxClockSpeed_quals[] =
{
    &CIM_PhysicalComputerSystemView_ProcessorMaxClockSpeed_PUnit_qual,
};

/* property CIM_PhysicalComputerSystemView.ProcessorMaxClockSpeed */
static MI_CONST MI_PropertyDecl CIM_PhysicalComputerSystemView_ProcessorMaxClockSpeed_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00706416, /* code */
    MI_T("ProcessorMaxClockSpeed"), /* name */
    CIM_PhysicalComputerSystemView_ProcessorMaxClockSpeed_quals, /* qualifiers */
    MI_COUNT(CIM_PhysicalComputerSystemView_ProcessorMaxClockSpeed_quals), /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView, ProcessorMaxClockSpeed), /* offset */
    MI_T("CIM_PhysicalComputerSystemView"), /* origin */
    MI_T("CIM_PhysicalComputerSystemView"), /* propagator */
    NULL,
};

/* property CIM_PhysicalComputerSystemView.MemoryBlockSize */
static MI_CONST MI_PropertyDecl CIM_PhysicalComputerSystemView_MemoryBlockSize_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006D650F, /* code */
    MI_T("MemoryBlockSize"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT64, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView, MemoryBlockSize), /* offset */
    MI_T("CIM_PhysicalComputerSystemView"), /* origin */
    MI_T("CIM_PhysicalComputerSystemView"), /* propagator */
    NULL,
};

/* property CIM_PhysicalComputerSystemView.MemoryNumberOfBlocks */
static MI_CONST MI_PropertyDecl CIM_PhysicalComputerSystemView_MemoryNumberOfBlocks_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006D7314, /* code */
    MI_T("MemoryNumberOfBlocks"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT64, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView, MemoryNumberOfBlocks), /* offset */
    MI_T("CIM_PhysicalComputerSystemView"), /* origin */
    MI_T("CIM_PhysicalComputerSystemView"), /* propagator */
    NULL,
};

/* property CIM_PhysicalComputerSystemView.MemoryConsumableBlocks */
static MI_CONST MI_PropertyDecl CIM_PhysicalComputerSystemView_MemoryConsumableBlocks_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006D7316, /* code */
    MI_T("MemoryConsumableBlocks"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT64, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView, MemoryConsumableBlocks), /* offset */
    MI_T("CIM_PhysicalComputerSystemView"), /* origin */
    MI_T("CIM_PhysicalComputerSystemView"), /* propagator */
    NULL,
};

/* property CIM_PhysicalComputerSystemView.CurrentBIOSMajorVersion */
static MI_CONST MI_PropertyDecl CIM_PhysicalComputerSystemView_CurrentBIOSMajorVersion_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00636E17, /* code */
    MI_T("CurrentBIOSMajorVersion"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView, CurrentBIOSMajorVersion), /* offset */
    MI_T("CIM_PhysicalComputerSystemView"), /* origin */
    MI_T("CIM_PhysicalComputerSystemView"), /* propagator */
    NULL,
};

/* property CIM_PhysicalComputerSystemView.CurrentBIOSMinorVersion */
static MI_CONST MI_PropertyDecl CIM_PhysicalComputerSystemView_CurrentBIOSMinorVersion_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00636E17, /* code */
    MI_T("CurrentBIOSMinorVersion"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView, CurrentBIOSMinorVersion), /* offset */
    MI_T("CIM_PhysicalComputerSystemView"), /* origin */
    MI_T("CIM_PhysicalComputerSystemView"), /* propagator */
    NULL,
};

/* property CIM_PhysicalComputerSystemView.CurrentBIOSRevisionNumber */
static MI_CONST MI_PropertyDecl CIM_PhysicalComputerSystemView_CurrentBIOSRevisionNumber_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00637219, /* code */
    MI_T("CurrentBIOSRevisionNumber"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView, CurrentBIOSRevisionNumber), /* offset */
    MI_T("CIM_PhysicalComputerSystemView"), /* origin */
    MI_T("CIM_PhysicalComputerSystemView"), /* propagator */
    NULL,
};

/* property CIM_PhysicalComputerSystemView.CurrentBIOSBuildNumber */
static MI_CONST MI_PropertyDecl CIM_PhysicalComputerSystemView_CurrentBIOSBuildNumber_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00637216, /* code */
    MI_T("CurrentBIOSBuildNumber"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView, CurrentBIOSBuildNumber), /* offset */
    MI_T("CIM_PhysicalComputerSystemView"), /* origin */
    MI_T("CIM_PhysicalComputerSystemView"), /* propagator */
    NULL,
};

/* property CIM_PhysicalComputerSystemView.CurrentManagementFirmwareMajorVersion */
static MI_CONST MI_PropertyDecl CIM_PhysicalComputerSystemView_CurrentManagementFirmwareMajorVersion_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00636E25, /* code */
    MI_T("CurrentManagementFirmwareMajorVersion"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView, CurrentManagementFirmwareMajorVersion), /* offset */
    MI_T("CIM_PhysicalComputerSystemView"), /* origin */
    MI_T("CIM_PhysicalComputerSystemView"), /* propagator */
    NULL,
};

/* property CIM_PhysicalComputerSystemView.CurrentManagementFirmwareMinorVersion */
static MI_CONST MI_PropertyDecl CIM_PhysicalComputerSystemView_CurrentManagementFirmwareMinorVersion_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00636E25, /* code */
    MI_T("CurrentManagementFirmwareMinorVersion"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView, CurrentManagementFirmwareMinorVersion), /* offset */
    MI_T("CIM_PhysicalComputerSystemView"), /* origin */
    MI_T("CIM_PhysicalComputerSystemView"), /* propagator */
    NULL,
};

/* property CIM_PhysicalComputerSystemView.CurrentManagementFirmwareRevisionNumber */
static MI_CONST MI_PropertyDecl CIM_PhysicalComputerSystemView_CurrentManagementFirmwareRevisionNumber_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00637227, /* code */
    MI_T("CurrentManagementFirmwareRevisionNumber"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView, CurrentManagementFirmwareRevisionNumber), /* offset */
    MI_T("CIM_PhysicalComputerSystemView"), /* origin */
    MI_T("CIM_PhysicalComputerSystemView"), /* propagator */
    NULL,
};

/* property CIM_PhysicalComputerSystemView.CurrentManagementFirmwareBuildNumber */
static MI_CONST MI_PropertyDecl CIM_PhysicalComputerSystemView_CurrentManagementFirmwareBuildNumber_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00637224, /* code */
    MI_T("CurrentManagementFirmwareBuildNumber"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView, CurrentManagementFirmwareBuildNumber), /* offset */
    MI_T("CIM_PhysicalComputerSystemView"), /* origin */
    MI_T("CIM_PhysicalComputerSystemView"), /* propagator */
    NULL,
};

/* property CIM_PhysicalComputerSystemView.CurrentManagementFirmwareElementName */
static MI_CONST MI_PropertyDecl CIM_PhysicalComputerSystemView_CurrentManagementFirmwareElementName_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00636524, /* code */
    MI_T("CurrentManagementFirmwareElementName"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView, CurrentManagementFirmwareElementName), /* offset */
    MI_T("CIM_PhysicalComputerSystemView"), /* origin */
    MI_T("CIM_PhysicalComputerSystemView"), /* propagator */
    NULL,
};

/* property CIM_PhysicalComputerSystemView.CurrentManagementFirmwareVersionString */
static MI_CONST MI_PropertyDecl CIM_PhysicalComputerSystemView_CurrentManagementFirmwareVersionString_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00636726, /* code */
    MI_T("CurrentManagementFirmwareVersionString"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView, CurrentManagementFirmwareVersionString), /* offset */
    MI_T("CIM_PhysicalComputerSystemView"), /* origin */
    MI_T("CIM_PhysicalComputerSystemView"), /* propagator */
    NULL,
};

/* property CIM_PhysicalComputerSystemView.OSType */
static MI_CONST MI_PropertyDecl CIM_PhysicalComputerSystemView_OSType_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006F6506, /* code */
    MI_T("OSType"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView, OSType), /* offset */
    MI_T("CIM_PhysicalComputerSystemView"), /* origin */
    MI_T("CIM_PhysicalComputerSystemView"), /* propagator */
    NULL,
};

/* property CIM_PhysicalComputerSystemView.OSVersion */
static MI_CONST MI_PropertyDecl CIM_PhysicalComputerSystemView_OSVersion_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006F6E09, /* code */
    MI_T("OSVersion"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView, OSVersion), /* offset */
    MI_T("CIM_PhysicalComputerSystemView"), /* origin */
    MI_T("CIM_PhysicalComputerSystemView"), /* propagator */
    NULL,
};

/* property CIM_PhysicalComputerSystemView.OSEnabledState */
static MI_CONST MI_PropertyDecl CIM_PhysicalComputerSystemView_OSEnabledState_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006F650E, /* code */
    MI_T("OSEnabledState"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView, OSEnabledState), /* offset */
    MI_T("CIM_PhysicalComputerSystemView"), /* origin */
    MI_T("CIM_PhysicalComputerSystemView"), /* propagator */
    NULL,
};

/* property CIM_PhysicalComputerSystemView.CurrentBIOSVersionString */
static MI_CONST MI_PropertyDecl CIM_PhysicalComputerSystemView_CurrentBIOSVersionString_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00636718, /* code */
    MI_T("CurrentBIOSVersionString"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView, CurrentBIOSVersionString), /* offset */
    MI_T("CIM_PhysicalComputerSystemView"), /* origin */
    MI_T("CIM_PhysicalComputerSystemView"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* CIM_PhysicalComputerSystemView_Dedicated_ArrayType_qual_value = MI_T("Indexed");

static MI_CONST MI_Qualifier CIM_PhysicalComputerSystemView_Dedicated_ArrayType_qual =
{
    MI_T("ArrayType"),
    MI_STRING,
    MI_FLAG_DISABLEOVERRIDE|MI_FLAG_TOSUBCLASS,
    &CIM_PhysicalComputerSystemView_Dedicated_ArrayType_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_PhysicalComputerSystemView_Dedicated_quals[] =
{
    &CIM_PhysicalComputerSystemView_Dedicated_ArrayType_qual,
};

/* property CIM_PhysicalComputerSystemView.Dedicated */
static MI_CONST MI_PropertyDecl CIM_PhysicalComputerSystemView_Dedicated_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00646409, /* code */
    MI_T("Dedicated"), /* name */
    CIM_PhysicalComputerSystemView_Dedicated_quals, /* qualifiers */
    MI_COUNT(CIM_PhysicalComputerSystemView_Dedicated_quals), /* numQualifiers */
    MI_UINT16A, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView, Dedicated), /* offset */
    MI_T("CIM_PhysicalComputerSystemView"), /* origin */
    MI_T("CIM_PhysicalComputerSystemView"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* CIM_PhysicalComputerSystemView_IdentifyingDescriptions_ArrayType_qual_value = MI_T("Indexed");

static MI_CONST MI_Qualifier CIM_PhysicalComputerSystemView_IdentifyingDescriptions_ArrayType_qual =
{
    MI_T("ArrayType"),
    MI_STRING,
    MI_FLAG_DISABLEOVERRIDE|MI_FLAG_TOSUBCLASS,
    &CIM_PhysicalComputerSystemView_IdentifyingDescriptions_ArrayType_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_PhysicalComputerSystemView_IdentifyingDescriptions_quals[] =
{
    &CIM_PhysicalComputerSystemView_IdentifyingDescriptions_ArrayType_qual,
};

/* property CIM_PhysicalComputerSystemView.IdentifyingDescriptions */
static MI_CONST MI_PropertyDecl CIM_PhysicalComputerSystemView_IdentifyingDescriptions_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00697317, /* code */
    MI_T("IdentifyingDescriptions"), /* name */
    CIM_PhysicalComputerSystemView_IdentifyingDescriptions_quals, /* qualifiers */
    MI_COUNT(CIM_PhysicalComputerSystemView_IdentifyingDescriptions_quals), /* numQualifiers */
    MI_STRINGA, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView, IdentifyingDescriptions), /* offset */
    MI_T("CIM_PhysicalComputerSystemView"), /* origin */
    MI_T("CIM_PhysicalComputerSystemView"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* CIM_PhysicalComputerSystemView_NumericSensorSensorContext_ArrayType_qual_value = MI_T("Indexed");

static MI_CONST MI_Qualifier CIM_PhysicalComputerSystemView_NumericSensorSensorContext_ArrayType_qual =
{
    MI_T("ArrayType"),
    MI_STRING,
    MI_FLAG_DISABLEOVERRIDE|MI_FLAG_TOSUBCLASS,
    &CIM_PhysicalComputerSystemView_NumericSensorSensorContext_ArrayType_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_PhysicalComputerSystemView_NumericSensorSensorContext_quals[] =
{
    &CIM_PhysicalComputerSystemView_NumericSensorSensorContext_ArrayType_qual,
};

/* property CIM_PhysicalComputerSystemView.NumericSensorSensorContext */
static MI_CONST MI_PropertyDecl CIM_PhysicalComputerSystemView_NumericSensorSensorContext_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006E741A, /* code */
    MI_T("NumericSensorSensorContext"), /* name */
    CIM_PhysicalComputerSystemView_NumericSensorSensorContext_quals, /* qualifiers */
    MI_COUNT(CIM_PhysicalComputerSystemView_NumericSensorSensorContext_quals), /* numQualifiers */
    MI_STRINGA, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView, NumericSensorSensorContext), /* offset */
    MI_T("CIM_PhysicalComputerSystemView"), /* origin */
    MI_T("CIM_PhysicalComputerSystemView"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* CIM_PhysicalComputerSystemView_OtherDedicatedDescriptions_ArrayType_qual_value = MI_T("Indexed");

static MI_CONST MI_Qualifier CIM_PhysicalComputerSystemView_OtherDedicatedDescriptions_ArrayType_qual =
{
    MI_T("ArrayType"),
    MI_STRING,
    MI_FLAG_DISABLEOVERRIDE|MI_FLAG_TOSUBCLASS,
    &CIM_PhysicalComputerSystemView_OtherDedicatedDescriptions_ArrayType_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_PhysicalComputerSystemView_OtherDedicatedDescriptions_quals[] =
{
    &CIM_PhysicalComputerSystemView_OtherDedicatedDescriptions_ArrayType_qual,
};

/* property CIM_PhysicalComputerSystemView.OtherDedicatedDescriptions */
static MI_CONST MI_PropertyDecl CIM_PhysicalComputerSystemView_OtherDedicatedDescriptions_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006F731A, /* code */
    MI_T("OtherDedicatedDescriptions"), /* name */
    CIM_PhysicalComputerSystemView_OtherDedicatedDescriptions_quals, /* qualifiers */
    MI_COUNT(CIM_PhysicalComputerSystemView_OtherDedicatedDescriptions_quals), /* numQualifiers */
    MI_STRINGA, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView, OtherDedicatedDescriptions), /* offset */
    MI_T("CIM_PhysicalComputerSystemView"), /* origin */
    MI_T("CIM_PhysicalComputerSystemView"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* CIM_PhysicalComputerSystemView_OtherIdentifyingInfo_ArrayType_qual_value = MI_T("Indexed");

static MI_CONST MI_Qualifier CIM_PhysicalComputerSystemView_OtherIdentifyingInfo_ArrayType_qual =
{
    MI_T("ArrayType"),
    MI_STRING,
    MI_FLAG_DISABLEOVERRIDE|MI_FLAG_TOSUBCLASS,
    &CIM_PhysicalComputerSystemView_OtherIdentifyingInfo_ArrayType_qual_value
};

static MI_CONST MI_Uint32 CIM_PhysicalComputerSystemView_OtherIdentifyingInfo_MaxLen_qual_value = 256U;

static MI_CONST MI_Qualifier CIM_PhysicalComputerSystemView_OtherIdentifyingInfo_MaxLen_qual =
{
    MI_T("MaxLen"),
    MI_UINT32,
    0,
    &CIM_PhysicalComputerSystemView_OtherIdentifyingInfo_MaxLen_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_PhysicalComputerSystemView_OtherIdentifyingInfo_quals[] =
{
    &CIM_PhysicalComputerSystemView_OtherIdentifyingInfo_ArrayType_qual,
    &CIM_PhysicalComputerSystemView_OtherIdentifyingInfo_MaxLen_qual,
};

/* property CIM_PhysicalComputerSystemView.OtherIdentifyingInfo */
static MI_CONST MI_PropertyDecl CIM_PhysicalComputerSystemView_OtherIdentifyingInfo_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x006F6F14, /* code */
    MI_T("OtherIdentifyingInfo"), /* name */
    CIM_PhysicalComputerSystemView_OtherIdentifyingInfo_quals, /* qualifiers */
    MI_COUNT(CIM_PhysicalComputerSystemView_OtherIdentifyingInfo_quals), /* numQualifiers */
    MI_STRINGA, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView, OtherIdentifyingInfo), /* offset */
    MI_T("CIM_PhysicalComputerSystemView"), /* origin */
    MI_T("CIM_PhysicalComputerSystemView"), /* propagator */
    NULL,
};

static MI_CONST MI_Char* CIM_PhysicalComputerSystemView_ProcessorCurrentClockSpeed_PUnit_qual_value = MI_T("hertz * 10^6");

static MI_CONST MI_Qualifier CIM_PhysicalComputerSystemView_ProcessorCurrentClockSpeed_PUnit_qual =
{
    MI_T("PUnit"),
    MI_STRING,
    0,
    &CIM_PhysicalComputerSystemView_ProcessorCurrentClockSpeed_PUnit_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_PhysicalComputerSystemView_ProcessorCurrentClockSpeed_quals[] =
{
    &CIM_PhysicalComputerSystemView_ProcessorCurrentClockSpeed_PUnit_qual,
};

/* property CIM_PhysicalComputerSystemView.ProcessorCurrentClockSpeed */
static MI_CONST MI_PropertyDecl CIM_PhysicalComputerSystemView_ProcessorCurrentClockSpeed_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0070641A, /* code */
    MI_T("ProcessorCurrentClockSpeed"), /* name */
    CIM_PhysicalComputerSystemView_ProcessorCurrentClockSpeed_quals, /* qualifiers */
    MI_COUNT(CIM_PhysicalComputerSystemView_ProcessorCurrentClockSpeed_quals), /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView, ProcessorCurrentClockSpeed), /* offset */
    MI_T("CIM_PhysicalComputerSystemView"), /* origin */
    MI_T("CIM_PhysicalComputerSystemView"), /* propagator */
    NULL,
};

static MI_PropertyDecl MI_CONST* MI_CONST CIM_PhysicalComputerSystemView_props[] =
{
    &CIM_PhysicalComputerSystemView_InstanceID_prop,
    &CIM_ManagedElement_Caption_prop,
    &CIM_ManagedElement_Description_prop,
    &CIM_ManagedElement_ElementName_prop,
    &CIM_PhysicalComputerSystemView_EnabledState_prop,
    &CIM_PhysicalComputerSystemView_RequestedState_prop,
    &CIM_PhysicalComputerSystemView_OperationalStatus_prop,
    &CIM_PhysicalComputerSystemView_HealthState_prop,
    &CIM_PhysicalComputerSystemView_FRUInfoSupported_prop,
    &CIM_PhysicalComputerSystemView_Tag_prop,
    &CIM_PhysicalComputerSystemView_Manufacturer_prop,
    &CIM_PhysicalComputerSystemView_Model_prop,
    &CIM_PhysicalComputerSystemView_SKU_prop,
    &CIM_PhysicalComputerSystemView_SerialNumber_prop,
    &CIM_PhysicalComputerSystemView_Version_prop,
    &CIM_PhysicalComputerSystemView_PartNumber_prop,
    &CIM_PhysicalComputerSystemView_PowerUtilizationModesSupported_prop,
    &CIM_PhysicalComputerSystemView_PowerUtilizationMode_prop,
    &CIM_PhysicalComputerSystemView_PowerAllocationLimit_prop,
    &CIM_PhysicalComputerSystemView_NumericSensorElementName_prop,
    &CIM_PhysicalComputerSystemView_NumericSensorEnabledState_prop,
    &CIM_PhysicalComputerSystemView_NumericSensorHealthState_prop,
    &CIM_PhysicalComputerSystemView_NumericSensorCurrentState_prop,
    &CIM_PhysicalComputerSystemView_NumericSensorPrimaryStatus_prop,
    &CIM_PhysicalComputerSystemView_NumericSensorBaseUnits_prop,
    &CIM_PhysicalComputerSystemView_NumericSensorUnitModifier_prop,
    &CIM_PhysicalComputerSystemView_NumericSensorRateUnits_prop,
    &CIM_PhysicalComputerSystemView_NumericSensorCurrentReading_prop,
    &CIM_PhysicalComputerSystemView_NumericSensorSensorType_prop,
    &CIM_PhysicalComputerSystemView_NumericSensorOtherSensorTypeDescription_prop,
    &CIM_PhysicalComputerSystemView_NumericSensorUpperThresholdNonCritical_prop,
    &CIM_PhysicalComputerSystemView_NumericSensorUpperThresholdCritical_prop,
    &CIM_PhysicalComputerSystemView_NumericSensorUpperThresholdFatal_prop,
    &CIM_PhysicalComputerSystemView_LogInstanceID_prop,
    &CIM_PhysicalComputerSystemView_LogMaxNumberOfRecords_prop,
    &CIM_PhysicalComputerSystemView_LogCurrentNumberOfRecords_prop,
    &CIM_PhysicalComputerSystemView_LogOverWritePolicy_prop,
    &CIM_PhysicalComputerSystemView_LogState_prop,
    &CIM_PhysicalComputerSystemView_StructuredBootString_prop,
    &CIM_PhysicalComputerSystemView_PersistentBootConfigOrder_prop,
    &CIM_PhysicalComputerSystemView_OneTimeBootSource_prop,
    &CIM_PhysicalComputerSystemView_NumberOfProcessors_prop,
    &CIM_PhysicalComputerSystemView_NumberOfProcessorCores_prop,
    &CIM_PhysicalComputerSystemView_NumberOfProcessorThreads_prop,
    &CIM_PhysicalComputerSystemView_ProcessorFamily_prop,
    &CIM_PhysicalComputerSystemView_ProcessorMaxClockSpeed_prop,
    &CIM_PhysicalComputerSystemView_MemoryBlockSize_prop,
    &CIM_PhysicalComputerSystemView_MemoryNumberOfBlocks_prop,
    &CIM_PhysicalComputerSystemView_MemoryConsumableBlocks_prop,
    &CIM_PhysicalComputerSystemView_CurrentBIOSMajorVersion_prop,
    &CIM_PhysicalComputerSystemView_CurrentBIOSMinorVersion_prop,
    &CIM_PhysicalComputerSystemView_CurrentBIOSRevisionNumber_prop,
    &CIM_PhysicalComputerSystemView_CurrentBIOSBuildNumber_prop,
    &CIM_PhysicalComputerSystemView_CurrentManagementFirmwareMajorVersion_prop,
    &CIM_PhysicalComputerSystemView_CurrentManagementFirmwareMinorVersion_prop,
    &CIM_PhysicalComputerSystemView_CurrentManagementFirmwareRevisionNumber_prop,
    &CIM_PhysicalComputerSystemView_CurrentManagementFirmwareBuildNumber_prop,
    &CIM_PhysicalComputerSystemView_CurrentManagementFirmwareElementName_prop,
    &CIM_PhysicalComputerSystemView_CurrentManagementFirmwareVersionString_prop,
    &CIM_PhysicalComputerSystemView_OSType_prop,
    &CIM_PhysicalComputerSystemView_OSVersion_prop,
    &CIM_PhysicalComputerSystemView_OSEnabledState_prop,
    &CIM_PhysicalComputerSystemView_CurrentBIOSVersionString_prop,
    &CIM_PhysicalComputerSystemView_Dedicated_prop,
    &CIM_PhysicalComputerSystemView_IdentifyingDescriptions_prop,
    &CIM_PhysicalComputerSystemView_NumericSensorSensorContext_prop,
    &CIM_PhysicalComputerSystemView_OtherDedicatedDescriptions_prop,
    &CIM_PhysicalComputerSystemView_OtherIdentifyingInfo_prop,
    &CIM_PhysicalComputerSystemView_ProcessorCurrentClockSpeed_prop,
};

/* parameter CIM_PhysicalComputerSystemView.RequestStateChange(): RequestedState */
static MI_CONST MI_ParameterDecl CIM_PhysicalComputerSystemView_RequestStateChange_RequestedState_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_IN, /* flags */
    0x0072650E, /* code */
    MI_T("RequestedState"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT16, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView_RequestStateChange, RequestedState), /* offset */
};

/* parameter CIM_PhysicalComputerSystemView.RequestStateChange(): Job */
static MI_CONST MI_ParameterDecl CIM_PhysicalComputerSystemView_RequestStateChange_Job_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006A6203, /* code */
    MI_T("Job"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("CIM_ConcreteJob"), /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView_RequestStateChange, Job), /* offset */
};

/* parameter CIM_PhysicalComputerSystemView.RequestStateChange(): TimeoutPeriod */
static MI_CONST MI_ParameterDecl CIM_PhysicalComputerSystemView_RequestStateChange_TimeoutPeriod_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_IN, /* flags */
    0x0074640D, /* code */
    MI_T("TimeoutPeriod"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_DATETIME, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView_RequestStateChange, TimeoutPeriod), /* offset */
};

/* parameter CIM_PhysicalComputerSystemView.RequestStateChange(): MIReturn */
static MI_CONST MI_ParameterDecl CIM_PhysicalComputerSystemView_RequestStateChange_MIReturn_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006D6E08, /* code */
    MI_T("MIReturn"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView_RequestStateChange, MIReturn), /* offset */
};

static MI_ParameterDecl MI_CONST* MI_CONST CIM_PhysicalComputerSystemView_RequestStateChange_params[] =
{
    &CIM_PhysicalComputerSystemView_RequestStateChange_MIReturn_param,
    &CIM_PhysicalComputerSystemView_RequestStateChange_RequestedState_param,
    &CIM_PhysicalComputerSystemView_RequestStateChange_Job_param,
    &CIM_PhysicalComputerSystemView_RequestStateChange_TimeoutPeriod_param,
};

/* method CIM_PhysicalComputerSystemView.RequestStateChange() */
MI_CONST MI_MethodDecl CIM_PhysicalComputerSystemView_RequestStateChange_rtti =
{
    MI_FLAG_METHOD, /* flags */
    0x00726512, /* code */
    MI_T("RequestStateChange"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    CIM_PhysicalComputerSystemView_RequestStateChange_params, /* parameters */
    MI_COUNT(CIM_PhysicalComputerSystemView_RequestStateChange_params), /* numParameters */
    sizeof(CIM_PhysicalComputerSystemView_RequestStateChange), /* size */
    MI_UINT32, /* returnType */
    MI_T("CIM_PhysicalComputerSystemView"), /* origin */
    MI_T("CIM_PhysicalComputerSystemView"), /* propagator */
    &schemaDecl, /* schema */
    NULL, /* method */
};

/* parameter CIM_PhysicalComputerSystemView.ClearLog(): LogInstanceID */
static MI_CONST MI_ParameterDecl CIM_PhysicalComputerSystemView_ClearLog_LogInstanceID_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_IN, /* flags */
    0x006C640D, /* code */
    MI_T("LogInstanceID"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView_ClearLog, LogInstanceID), /* offset */
};

/* parameter CIM_PhysicalComputerSystemView.ClearLog(): MIReturn */
static MI_CONST MI_ParameterDecl CIM_PhysicalComputerSystemView_ClearLog_MIReturn_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006D6E08, /* code */
    MI_T("MIReturn"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView_ClearLog, MIReturn), /* offset */
};

static MI_ParameterDecl MI_CONST* MI_CONST CIM_PhysicalComputerSystemView_ClearLog_params[] =
{
    &CIM_PhysicalComputerSystemView_ClearLog_MIReturn_param,
    &CIM_PhysicalComputerSystemView_ClearLog_LogInstanceID_param,
};

/* method CIM_PhysicalComputerSystemView.ClearLog() */
MI_CONST MI_MethodDecl CIM_PhysicalComputerSystemView_ClearLog_rtti =
{
    MI_FLAG_METHOD, /* flags */
    0x00636708, /* code */
    MI_T("ClearLog"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    CIM_PhysicalComputerSystemView_ClearLog_params, /* parameters */
    MI_COUNT(CIM_PhysicalComputerSystemView_ClearLog_params), /* numParameters */
    sizeof(CIM_PhysicalComputerSystemView_ClearLog), /* size */
    MI_UINT32, /* returnType */
    MI_T("CIM_PhysicalComputerSystemView"), /* origin */
    MI_T("CIM_PhysicalComputerSystemView"), /* propagator */
    &schemaDecl, /* schema */
    NULL, /* method */
};

/* parameter CIM_PhysicalComputerSystemView.InstallSoftwareFromURI(): Job */
static MI_CONST MI_ParameterDecl CIM_PhysicalComputerSystemView_InstallSoftwareFromURI_Job_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006A6203, /* code */
    MI_T("Job"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("CIM_ConcreteJob"), /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView_InstallSoftwareFromURI, Job), /* offset */
};

/* parameter CIM_PhysicalComputerSystemView.InstallSoftwareFromURI(): URI */
static MI_CONST MI_ParameterDecl CIM_PhysicalComputerSystemView_InstallSoftwareFromURI_URI_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_IN, /* flags */
    0x00756903, /* code */
    MI_T("URI"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView_InstallSoftwareFromURI, URI), /* offset */
};

static MI_CONST MI_Char* CIM_PhysicalComputerSystemView_InstallSoftwareFromURI_InstallOptions_ArrayType_qual_value = MI_T("Indexed");

static MI_CONST MI_Qualifier CIM_PhysicalComputerSystemView_InstallSoftwareFromURI_InstallOptions_ArrayType_qual =
{
    MI_T("ArrayType"),
    MI_STRING,
    MI_FLAG_DISABLEOVERRIDE|MI_FLAG_TOSUBCLASS,
    &CIM_PhysicalComputerSystemView_InstallSoftwareFromURI_InstallOptions_ArrayType_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_PhysicalComputerSystemView_InstallSoftwareFromURI_InstallOptions_quals[] =
{
    &CIM_PhysicalComputerSystemView_InstallSoftwareFromURI_InstallOptions_ArrayType_qual,
};

/* parameter CIM_PhysicalComputerSystemView.InstallSoftwareFromURI(): InstallOptions */
static MI_CONST MI_ParameterDecl CIM_PhysicalComputerSystemView_InstallSoftwareFromURI_InstallOptions_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_IN, /* flags */
    0x0069730E, /* code */
    MI_T("InstallOptions"), /* name */
    CIM_PhysicalComputerSystemView_InstallSoftwareFromURI_InstallOptions_quals, /* qualifiers */
    MI_COUNT(CIM_PhysicalComputerSystemView_InstallSoftwareFromURI_InstallOptions_quals), /* numQualifiers */
    MI_UINT16A, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView_InstallSoftwareFromURI, InstallOptions), /* offset */
};

static MI_CONST MI_Char* CIM_PhysicalComputerSystemView_InstallSoftwareFromURI_InstallOptionsValues_ArrayType_qual_value = MI_T("Indexed");

static MI_CONST MI_Qualifier CIM_PhysicalComputerSystemView_InstallSoftwareFromURI_InstallOptionsValues_ArrayType_qual =
{
    MI_T("ArrayType"),
    MI_STRING,
    MI_FLAG_DISABLEOVERRIDE|MI_FLAG_TOSUBCLASS,
    &CIM_PhysicalComputerSystemView_InstallSoftwareFromURI_InstallOptionsValues_ArrayType_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_PhysicalComputerSystemView_InstallSoftwareFromURI_InstallOptionsValues_quals[] =
{
    &CIM_PhysicalComputerSystemView_InstallSoftwareFromURI_InstallOptionsValues_ArrayType_qual,
};

/* parameter CIM_PhysicalComputerSystemView.InstallSoftwareFromURI(): InstallOptionsValues */
static MI_CONST MI_ParameterDecl CIM_PhysicalComputerSystemView_InstallSoftwareFromURI_InstallOptionsValues_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_IN, /* flags */
    0x00697314, /* code */
    MI_T("InstallOptionsValues"), /* name */
    CIM_PhysicalComputerSystemView_InstallSoftwareFromURI_InstallOptionsValues_quals, /* qualifiers */
    MI_COUNT(CIM_PhysicalComputerSystemView_InstallSoftwareFromURI_InstallOptionsValues_quals), /* numQualifiers */
    MI_STRINGA, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView_InstallSoftwareFromURI, InstallOptionsValues), /* offset */
};

/* parameter CIM_PhysicalComputerSystemView.InstallSoftwareFromURI(): MIReturn */
static MI_CONST MI_ParameterDecl CIM_PhysicalComputerSystemView_InstallSoftwareFromURI_MIReturn_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006D6E08, /* code */
    MI_T("MIReturn"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView_InstallSoftwareFromURI, MIReturn), /* offset */
};

static MI_ParameterDecl MI_CONST* MI_CONST CIM_PhysicalComputerSystemView_InstallSoftwareFromURI_params[] =
{
    &CIM_PhysicalComputerSystemView_InstallSoftwareFromURI_MIReturn_param,
    &CIM_PhysicalComputerSystemView_InstallSoftwareFromURI_Job_param,
    &CIM_PhysicalComputerSystemView_InstallSoftwareFromURI_URI_param,
    &CIM_PhysicalComputerSystemView_InstallSoftwareFromURI_InstallOptions_param,
    &CIM_PhysicalComputerSystemView_InstallSoftwareFromURI_InstallOptionsValues_param,
};

/* method CIM_PhysicalComputerSystemView.InstallSoftwareFromURI() */
MI_CONST MI_MethodDecl CIM_PhysicalComputerSystemView_InstallSoftwareFromURI_rtti =
{
    MI_FLAG_METHOD, /* flags */
    0x00696916, /* code */
    MI_T("InstallSoftwareFromURI"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    CIM_PhysicalComputerSystemView_InstallSoftwareFromURI_params, /* parameters */
    MI_COUNT(CIM_PhysicalComputerSystemView_InstallSoftwareFromURI_params), /* numParameters */
    sizeof(CIM_PhysicalComputerSystemView_InstallSoftwareFromURI), /* size */
    MI_UINT32, /* returnType */
    MI_T("CIM_PhysicalComputerSystemView"), /* origin */
    MI_T("CIM_PhysicalComputerSystemView"), /* propagator */
    &schemaDecl, /* schema */
    NULL, /* method */
};

/* parameter CIM_PhysicalComputerSystemView.ModifyPersistentBootConfigOrder(): StructuredBootStringIndex */
static MI_CONST MI_ParameterDecl CIM_PhysicalComputerSystemView_ModifyPersistentBootConfigOrder_StructuredBootStringIndex_param =
{
    MI_FLAG_PARAMETER, /* flags */
    0x00737819, /* code */
    MI_T("StructuredBootStringIndex"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT8A, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView_ModifyPersistentBootConfigOrder, StructuredBootStringIndex), /* offset */
};

/* parameter CIM_PhysicalComputerSystemView.ModifyPersistentBootConfigOrder(): Job */
static MI_CONST MI_ParameterDecl CIM_PhysicalComputerSystemView_ModifyPersistentBootConfigOrder_Job_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006A6203, /* code */
    MI_T("Job"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("CIM_ConcreteJob"), /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView_ModifyPersistentBootConfigOrder, Job), /* offset */
};

/* parameter CIM_PhysicalComputerSystemView.ModifyPersistentBootConfigOrder(): MIReturn */
static MI_CONST MI_ParameterDecl CIM_PhysicalComputerSystemView_ModifyPersistentBootConfigOrder_MIReturn_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006D6E08, /* code */
    MI_T("MIReturn"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView_ModifyPersistentBootConfigOrder, MIReturn), /* offset */
};

static MI_ParameterDecl MI_CONST* MI_CONST CIM_PhysicalComputerSystemView_ModifyPersistentBootConfigOrder_params[] =
{
    &CIM_PhysicalComputerSystemView_ModifyPersistentBootConfigOrder_MIReturn_param,
    &CIM_PhysicalComputerSystemView_ModifyPersistentBootConfigOrder_StructuredBootStringIndex_param,
    &CIM_PhysicalComputerSystemView_ModifyPersistentBootConfigOrder_Job_param,
};

/* method CIM_PhysicalComputerSystemView.ModifyPersistentBootConfigOrder() */
MI_CONST MI_MethodDecl CIM_PhysicalComputerSystemView_ModifyPersistentBootConfigOrder_rtti =
{
    MI_FLAG_METHOD, /* flags */
    0x006D721F, /* code */
    MI_T("ModifyPersistentBootConfigOrder"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    CIM_PhysicalComputerSystemView_ModifyPersistentBootConfigOrder_params, /* parameters */
    MI_COUNT(CIM_PhysicalComputerSystemView_ModifyPersistentBootConfigOrder_params), /* numParameters */
    sizeof(CIM_PhysicalComputerSystemView_ModifyPersistentBootConfigOrder), /* size */
    MI_UINT32, /* returnType */
    MI_T("CIM_PhysicalComputerSystemView"), /* origin */
    MI_T("CIM_PhysicalComputerSystemView"), /* propagator */
    &schemaDecl, /* schema */
    NULL, /* method */
};

/* parameter CIM_PhysicalComputerSystemView.SetOneTimeBootSource(): StructuredBootStringIndex */
static MI_CONST MI_ParameterDecl CIM_PhysicalComputerSystemView_SetOneTimeBootSource_StructuredBootStringIndex_param =
{
    MI_FLAG_PARAMETER, /* flags */
    0x00737819, /* code */
    MI_T("StructuredBootStringIndex"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT8, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView_SetOneTimeBootSource, StructuredBootStringIndex), /* offset */
};

/* parameter CIM_PhysicalComputerSystemView.SetOneTimeBootSource(): Job */
static MI_CONST MI_ParameterDecl CIM_PhysicalComputerSystemView_SetOneTimeBootSource_Job_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006A6203, /* code */
    MI_T("Job"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("CIM_ConcreteJob"), /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView_SetOneTimeBootSource, Job), /* offset */
};

/* parameter CIM_PhysicalComputerSystemView.SetOneTimeBootSource(): MIReturn */
static MI_CONST MI_ParameterDecl CIM_PhysicalComputerSystemView_SetOneTimeBootSource_MIReturn_param =
{
    MI_FLAG_PARAMETER|MI_FLAG_OUT, /* flags */
    0x006D6E08, /* code */
    MI_T("MIReturn"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_UINT32, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(CIM_PhysicalComputerSystemView_SetOneTimeBootSource, MIReturn), /* offset */
};

static MI_ParameterDecl MI_CONST* MI_CONST CIM_PhysicalComputerSystemView_SetOneTimeBootSource_params[] =
{
    &CIM_PhysicalComputerSystemView_SetOneTimeBootSource_MIReturn_param,
    &CIM_PhysicalComputerSystemView_SetOneTimeBootSource_StructuredBootStringIndex_param,
    &CIM_PhysicalComputerSystemView_SetOneTimeBootSource_Job_param,
};

/* method CIM_PhysicalComputerSystemView.SetOneTimeBootSource() */
MI_CONST MI_MethodDecl CIM_PhysicalComputerSystemView_SetOneTimeBootSource_rtti =
{
    MI_FLAG_METHOD, /* flags */
    0x00736514, /* code */
    MI_T("SetOneTimeBootSource"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    CIM_PhysicalComputerSystemView_SetOneTimeBootSource_params, /* parameters */
    MI_COUNT(CIM_PhysicalComputerSystemView_SetOneTimeBootSource_params), /* numParameters */
    sizeof(CIM_PhysicalComputerSystemView_SetOneTimeBootSource), /* size */
    MI_UINT32, /* returnType */
    MI_T("CIM_PhysicalComputerSystemView"), /* origin */
    MI_T("CIM_PhysicalComputerSystemView"), /* propagator */
    &schemaDecl, /* schema */
    NULL, /* method */
};

static MI_MethodDecl MI_CONST* MI_CONST CIM_PhysicalComputerSystemView_meths[] =
{
    &CIM_PhysicalComputerSystemView_RequestStateChange_rtti,
    &CIM_PhysicalComputerSystemView_ClearLog_rtti,
    &CIM_PhysicalComputerSystemView_InstallSoftwareFromURI_rtti,
    &CIM_PhysicalComputerSystemView_ModifyPersistentBootConfigOrder_rtti,
    &CIM_PhysicalComputerSystemView_SetOneTimeBootSource_rtti,
};

static MI_CONST MI_Char* CIM_PhysicalComputerSystemView_UMLPackagePath_qual_value = MI_T("CIM::Core::CoreElements");

static MI_CONST MI_Qualifier CIM_PhysicalComputerSystemView_UMLPackagePath_qual =
{
    MI_T("UMLPackagePath"),
    MI_STRING,
    0,
    &CIM_PhysicalComputerSystemView_UMLPackagePath_qual_value
};

static MI_CONST MI_Char* CIM_PhysicalComputerSystemView_Version_qual_value = MI_T("2.32.0");

static MI_CONST MI_Qualifier CIM_PhysicalComputerSystemView_Version_qual =
{
    MI_T("Version"),
    MI_STRING,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_TRANSLATABLE|MI_FLAG_RESTRICTED,
    &CIM_PhysicalComputerSystemView_Version_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST CIM_PhysicalComputerSystemView_quals[] =
{
    &CIM_PhysicalComputerSystemView_UMLPackagePath_qual,
    &CIM_PhysicalComputerSystemView_Version_qual,
};

/* class CIM_PhysicalComputerSystemView */
MI_CONST MI_ClassDecl CIM_PhysicalComputerSystemView_rtti =
{
    MI_FLAG_CLASS, /* flags */
    0x0063771E, /* code */
    MI_T("CIM_PhysicalComputerSystemView"), /* name */
    CIM_PhysicalComputerSystemView_quals, /* qualifiers */
    MI_COUNT(CIM_PhysicalComputerSystemView_quals), /* numQualifiers */
    CIM_PhysicalComputerSystemView_props, /* properties */
    MI_COUNT(CIM_PhysicalComputerSystemView_props), /* numProperties */
    sizeof(CIM_PhysicalComputerSystemView), /* size */
    MI_T("CIM_View"), /* superClass */
    &CIM_View_rtti, /* superClassDecl */
    CIM_PhysicalComputerSystemView_meths, /* methods */
    MI_COUNT(CIM_PhysicalComputerSystemView_meths), /* numMethods */
    &schemaDecl, /* schema */
    NULL, /* functions */
    NULL, /* owningClass */
};

/*
**==============================================================================
**
** CIM_RegisterProfileAssociationPhyComputerSys
**
**==============================================================================
*/

/* property CIM_RegisterProfileAssociationPhyComputerSys.Left */
static MI_CONST MI_PropertyDecl CIM_RegisterProfileAssociationPhyComputerSys_Left_prop =
{
    MI_FLAG_PROPERTY|MI_FLAG_KEY, /* flags */
    0x006C7404, /* code */
    MI_T("Left"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("CIM_RegisteredProfile"), /* className */
    0, /* subscript */
    offsetof(CIM_RegisterProfileAssociationPhyComputerSys, Left), /* offset */
    MI_T("CIM_RegisterProfileAssociationPhyComputerSys"), /* origin */
    MI_T("CIM_RegisterProfileAssociationPhyComputerSys"), /* propagator */
    NULL,
};

/* property CIM_RegisterProfileAssociationPhyComputerSys.Right */
static MI_CONST MI_PropertyDecl CIM_RegisterProfileAssociationPhyComputerSys_Right_prop =
{
    MI_FLAG_PROPERTY|MI_FLAG_KEY, /* flags */
    0x00727405, /* code */
    MI_T("Right"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("CIM_PhysicalComputerSystemView"), /* className */
    0, /* subscript */
    offsetof(CIM_RegisterProfileAssociationPhyComputerSys, Right), /* offset */
    MI_T("CIM_RegisterProfileAssociationPhyComputerSys"), /* origin */
    MI_T("CIM_RegisterProfileAssociationPhyComputerSys"), /* propagator */
    NULL,
};

static MI_PropertyDecl MI_CONST* MI_CONST CIM_RegisterProfileAssociationPhyComputerSys_props[] =
{
    &CIM_RegisterProfileAssociationPhyComputerSys_Left_prop,
    &CIM_RegisterProfileAssociationPhyComputerSys_Right_prop,
};

static void MI_CALL CIM_RegisterProfileAssociationPhyComputerSys_AssociatorInstances(
    CIM_RegisterProfileAssociationPhyComputerSys_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Instance* instanceName,
    const MI_Char* resultClass,
    const MI_Char* role,
    const MI_Char* resultRole,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    if (CIM_RegisteredProfile_IsA(instanceName))
    {
        if (_Match(role, MI_T("Left")) && 
            _Match(resultRole, MI_T("Right")))
        {
            CIM_RegisterProfileAssociationPhyComputerSys_AssociatorInstancesLeft(
                self, 
                context, 
                nameSpace, 
                className, 
                (CIM_RegisteredProfile*)instanceName, 
                resultClass, 
                propertySet, 
                keysOnly, 
                filter);
            return;
        }
    }

    if (CIM_PhysicalComputerSystemView_IsA(instanceName))
    {
        if (_Match(role, MI_T("Right")) && 
            _Match(resultRole, MI_T("Left")))
        {
            CIM_RegisterProfileAssociationPhyComputerSys_AssociatorInstancesRight(
                self, 
                context, 
                nameSpace, 
                className, 
                (CIM_PhysicalComputerSystemView*)instanceName, 
                resultClass, 
                propertySet, 
                keysOnly, 
                filter);
            return;
        }
    }

    MI_Context_PostResult(context, MI_RESULT_OK);
}

static void MI_CALL CIM_RegisterProfileAssociationPhyComputerSys_ReferenceInstances(
    CIM_RegisterProfileAssociationPhyComputerSys_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Instance* instanceName,
    const MI_Char* role,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    if (CIM_RegisteredProfile_IsA(instanceName))
    {
        if (_Match(role, MI_T("Left")))
        {
            CIM_RegisterProfileAssociationPhyComputerSys_ReferenceInstancesLeft(
                self, 
                context, 
                nameSpace, 
                className, 
                (CIM_RegisteredProfile*)instanceName, 
                propertySet, 
                keysOnly, 
                filter);
            return;
        }
    }

    if (CIM_PhysicalComputerSystemView_IsA(instanceName))
    {
        if (_Match(role, MI_T("Right")))
        {
            CIM_RegisterProfileAssociationPhyComputerSys_ReferenceInstancesRight(
                self, 
                context, 
                nameSpace, 
                className, 
                (CIM_PhysicalComputerSystemView*)instanceName, 
                propertySet, 
                keysOnly, 
                filter);
            return;
        }
    }

    MI_Context_PostResult(context, MI_RESULT_OK);
}

static MI_CONST MI_ProviderFT CIM_RegisterProfileAssociationPhyComputerSys_funcs =
{
  (MI_ProviderFT_Load)CIM_RegisterProfileAssociationPhyComputerSys_Load,
  (MI_ProviderFT_Unload)CIM_RegisterProfileAssociationPhyComputerSys_Unload,
  (MI_ProviderFT_GetInstance)CIM_RegisterProfileAssociationPhyComputerSys_GetInstance,
  (MI_ProviderFT_EnumerateInstances)CIM_RegisterProfileAssociationPhyComputerSys_EnumerateInstances,
  (MI_ProviderFT_CreateInstance)CIM_RegisterProfileAssociationPhyComputerSys_CreateInstance,
  (MI_ProviderFT_ModifyInstance)CIM_RegisterProfileAssociationPhyComputerSys_ModifyInstance,
  (MI_ProviderFT_DeleteInstance)CIM_RegisterProfileAssociationPhyComputerSys_DeleteInstance,
  (MI_ProviderFT_AssociatorInstances)CIM_RegisterProfileAssociationPhyComputerSys_AssociatorInstances,
  (MI_ProviderFT_ReferenceInstances)CIM_RegisterProfileAssociationPhyComputerSys_ReferenceInstances,
  (MI_ProviderFT_EnableIndications)NULL,
  (MI_ProviderFT_DisableIndications)NULL,
  (MI_ProviderFT_Subscribe)NULL,
  (MI_ProviderFT_Unsubscribe)NULL,
  (MI_ProviderFT_Invoke)NULL,
};

/* class CIM_RegisterProfileAssociationPhyComputerSys */
MI_CONST MI_ClassDecl CIM_RegisterProfileAssociationPhyComputerSys_rtti =
{
    MI_FLAG_CLASS|MI_FLAG_ASSOCIATION, /* flags */
    0x0063732C, /* code */
    MI_T("CIM_RegisterProfileAssociationPhyComputerSys"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    CIM_RegisterProfileAssociationPhyComputerSys_props, /* properties */
    MI_COUNT(CIM_RegisterProfileAssociationPhyComputerSys_props), /* numProperties */
    sizeof(CIM_RegisterProfileAssociationPhyComputerSys), /* size */
    NULL, /* superClass */
    NULL, /* superClassDecl */
    NULL, /* methods */
    0, /* numMethods */
    &schemaDecl, /* schema */
    &CIM_RegisterProfileAssociationPhyComputerSys_funcs, /* functions */
    NULL, /* owningClass */
};

/*
**==============================================================================
**
** MSFT_GlobalEthernetSwitchSettingData
**
**==============================================================================
*/

/* property MSFT_GlobalEthernetSwitchSettingData.IsIPRoutingEnable */
static MI_CONST MI_PropertyDecl MSFT_GlobalEthernetSwitchSettingData_IsIPRoutingEnable_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00696511, /* code */
    MI_T("IsIPRoutingEnable"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_BOOLEAN, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_GlobalEthernetSwitchSettingData, IsIPRoutingEnable), /* offset */
    MI_T("MSFT_GlobalEthernetSwitchSettingData"), /* origin */
    MI_T("MSFT_GlobalEthernetSwitchSettingData"), /* propagator */
    NULL,
};

/* property MSFT_GlobalEthernetSwitchSettingData.IsIpMulticastRoutingEnable */
static MI_CONST MI_PropertyDecl MSFT_GlobalEthernetSwitchSettingData_IsIpMulticastRoutingEnable_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0069651A, /* code */
    MI_T("IsIpMulticastRoutingEnable"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_BOOLEAN, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_GlobalEthernetSwitchSettingData, IsIpMulticastRoutingEnable), /* offset */
    MI_T("MSFT_GlobalEthernetSwitchSettingData"), /* origin */
    MI_T("MSFT_GlobalEthernetSwitchSettingData"), /* propagator */
    NULL,
};

/* property MSFT_GlobalEthernetSwitchSettingData.Banner */
static MI_CONST MI_PropertyDecl MSFT_GlobalEthernetSwitchSettingData_Banner_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x00627206, /* code */
    MI_T("Banner"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_STRING, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_GlobalEthernetSwitchSettingData, Banner), /* offset */
    MI_T("MSFT_GlobalEthernetSwitchSettingData"), /* origin */
    MI_T("MSFT_GlobalEthernetSwitchSettingData"), /* propagator */
    NULL,
};

static MI_CONST MI_Boolean MSFT_GlobalEthernetSwitchSettingData_BannerIsEnabled_value = 0;

/* property MSFT_GlobalEthernetSwitchSettingData.BannerIsEnabled */
static MI_CONST MI_PropertyDecl MSFT_GlobalEthernetSwitchSettingData_BannerIsEnabled_prop =
{
    MI_FLAG_PROPERTY, /* flags */
    0x0062640F, /* code */
    MI_T("BannerIsEnabled"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_BOOLEAN, /* type */
    NULL, /* className */
    0, /* subscript */
    offsetof(MSFT_GlobalEthernetSwitchSettingData, BannerIsEnabled), /* offset */
    MI_T("MSFT_GlobalEthernetSwitchSettingData"), /* origin */
    MI_T("MSFT_GlobalEthernetSwitchSettingData"), /* propagator */
    &MSFT_GlobalEthernetSwitchSettingData_BannerIsEnabled_value,
};

static MI_PropertyDecl MI_CONST* MI_CONST MSFT_GlobalEthernetSwitchSettingData_props[] =
{
    &CIM_SettingData_InstanceID_prop,
    &CIM_ManagedElement_Caption_prop,
    &CIM_ManagedElement_Description_prop,
    &CIM_SettingData_ElementName_prop,
    &MSFT_GlobalEthernetSwitchSettingData_IsIPRoutingEnable_prop,
    &MSFT_GlobalEthernetSwitchSettingData_IsIpMulticastRoutingEnable_prop,
    &MSFT_GlobalEthernetSwitchSettingData_Banner_prop,
    &MSFT_GlobalEthernetSwitchSettingData_BannerIsEnabled_prop,
};

static MI_CONST MI_ProviderFT MSFT_GlobalEthernetSwitchSettingData_funcs =
{
  (MI_ProviderFT_Load)MSFT_GlobalEthernetSwitchSettingData_Load,
  (MI_ProviderFT_Unload)MSFT_GlobalEthernetSwitchSettingData_Unload,
  (MI_ProviderFT_GetInstance)MSFT_GlobalEthernetSwitchSettingData_GetInstance,
  (MI_ProviderFT_EnumerateInstances)MSFT_GlobalEthernetSwitchSettingData_EnumerateInstances,
  (MI_ProviderFT_CreateInstance)MSFT_GlobalEthernetSwitchSettingData_CreateInstance,
  (MI_ProviderFT_ModifyInstance)MSFT_GlobalEthernetSwitchSettingData_ModifyInstance,
  (MI_ProviderFT_DeleteInstance)MSFT_GlobalEthernetSwitchSettingData_DeleteInstance,
  (MI_ProviderFT_AssociatorInstances)NULL,
  (MI_ProviderFT_ReferenceInstances)NULL,
  (MI_ProviderFT_EnableIndications)NULL,
  (MI_ProviderFT_DisableIndications)NULL,
  (MI_ProviderFT_Subscribe)NULL,
  (MI_ProviderFT_Unsubscribe)NULL,
  (MI_ProviderFT_Invoke)NULL,
};

static MI_CONST MI_Char* MSFT_GlobalEthernetSwitchSettingData_UMLPackagePath_qual_value = MI_T("CIM::Core::Settings");

static MI_CONST MI_Qualifier MSFT_GlobalEthernetSwitchSettingData_UMLPackagePath_qual =
{
    MI_T("UMLPackagePath"),
    MI_STRING,
    0,
    &MSFT_GlobalEthernetSwitchSettingData_UMLPackagePath_qual_value
};

static MI_CONST MI_Char* MSFT_GlobalEthernetSwitchSettingData_Version_qual_value = MI_T(".7");

static MI_CONST MI_Qualifier MSFT_GlobalEthernetSwitchSettingData_Version_qual =
{
    MI_T("Version"),
    MI_STRING,
    MI_FLAG_ENABLEOVERRIDE|MI_FLAG_TRANSLATABLE|MI_FLAG_RESTRICTED,
    &MSFT_GlobalEthernetSwitchSettingData_Version_qual_value
};

static MI_Qualifier MI_CONST* MI_CONST MSFT_GlobalEthernetSwitchSettingData_quals[] =
{
    &MSFT_GlobalEthernetSwitchSettingData_UMLPackagePath_qual,
    &MSFT_GlobalEthernetSwitchSettingData_Version_qual,
};

/* class MSFT_GlobalEthernetSwitchSettingData */
MI_CONST MI_ClassDecl MSFT_GlobalEthernetSwitchSettingData_rtti =
{
    MI_FLAG_CLASS, /* flags */
    0x006D6124, /* code */
    MI_T("MSFT_GlobalEthernetSwitchSettingData"), /* name */
    MSFT_GlobalEthernetSwitchSettingData_quals, /* qualifiers */
    MI_COUNT(MSFT_GlobalEthernetSwitchSettingData_quals), /* numQualifiers */
    MSFT_GlobalEthernetSwitchSettingData_props, /* properties */
    MI_COUNT(MSFT_GlobalEthernetSwitchSettingData_props), /* numProperties */
    sizeof(MSFT_GlobalEthernetSwitchSettingData), /* size */
    MI_T("CIM_SettingData"), /* superClass */
    &CIM_SettingData_rtti, /* superClassDecl */
    NULL, /* methods */
    0, /* numMethods */
    &schemaDecl, /* schema */
    &MSFT_GlobalEthernetSwitchSettingData_funcs, /* functions */
    NULL, /* owningClass */
};

/*
**==============================================================================
**
** CIM_CSAssociationGlobalSetting
**
**==============================================================================
*/

/* property CIM_CSAssociationGlobalSetting.Left */
static MI_CONST MI_PropertyDecl CIM_CSAssociationGlobalSetting_Left_prop =
{
    MI_FLAG_PROPERTY|MI_FLAG_KEY, /* flags */
    0x006C7404, /* code */
    MI_T("Left"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("CIM_ComputerSystem"), /* className */
    0, /* subscript */
    offsetof(CIM_CSAssociationGlobalSetting, Left), /* offset */
    MI_T("CIM_CSAssociationGlobalSetting"), /* origin */
    MI_T("CIM_CSAssociationGlobalSetting"), /* propagator */
    NULL,
};

/* property CIM_CSAssociationGlobalSetting.Right */
static MI_CONST MI_PropertyDecl CIM_CSAssociationGlobalSetting_Right_prop =
{
    MI_FLAG_PROPERTY|MI_FLAG_KEY, /* flags */
    0x00727405, /* code */
    MI_T("Right"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("MSFT_GlobalEthernetSwitchSettingData"), /* className */
    0, /* subscript */
    offsetof(CIM_CSAssociationGlobalSetting, Right), /* offset */
    MI_T("CIM_CSAssociationGlobalSetting"), /* origin */
    MI_T("CIM_CSAssociationGlobalSetting"), /* propagator */
    NULL,
};

static MI_PropertyDecl MI_CONST* MI_CONST CIM_CSAssociationGlobalSetting_props[] =
{
    &CIM_CSAssociationGlobalSetting_Left_prop,
    &CIM_CSAssociationGlobalSetting_Right_prop,
};

static void MI_CALL CIM_CSAssociationGlobalSetting_AssociatorInstances(
    CIM_CSAssociationGlobalSetting_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Instance* instanceName,
    const MI_Char* resultClass,
    const MI_Char* role,
    const MI_Char* resultRole,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    if (CIM_ComputerSystem_IsA(instanceName))
    {
        if (_Match(role, MI_T("Left")) && 
            _Match(resultRole, MI_T("Right")))
        {
            CIM_CSAssociationGlobalSetting_AssociatorInstancesLeft(
                self, 
                context, 
                nameSpace, 
                className, 
                (CIM_ComputerSystem*)instanceName, 
                resultClass, 
                propertySet, 
                keysOnly, 
                filter);
            return;
        }
    }

    if (MSFT_GlobalEthernetSwitchSettingData_IsA(instanceName))
    {
        if (_Match(role, MI_T("Right")) && 
            _Match(resultRole, MI_T("Left")))
        {
            CIM_CSAssociationGlobalSetting_AssociatorInstancesRight(
                self, 
                context, 
                nameSpace, 
                className, 
                (MSFT_GlobalEthernetSwitchSettingData*)instanceName, 
                resultClass, 
                propertySet, 
                keysOnly, 
                filter);
            return;
        }
    }

    MI_Context_PostResult(context, MI_RESULT_OK);
}

static void MI_CALL CIM_CSAssociationGlobalSetting_ReferenceInstances(
    CIM_CSAssociationGlobalSetting_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Instance* instanceName,
    const MI_Char* role,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    if (CIM_ComputerSystem_IsA(instanceName))
    {
        if (_Match(role, MI_T("Left")))
        {
            CIM_CSAssociationGlobalSetting_ReferenceInstancesLeft(
                self, 
                context, 
                nameSpace, 
                className, 
                (CIM_ComputerSystem*)instanceName, 
                propertySet, 
                keysOnly, 
                filter);
            return;
        }
    }

    if (MSFT_GlobalEthernetSwitchSettingData_IsA(instanceName))
    {
        if (_Match(role, MI_T("Right")))
        {
            CIM_CSAssociationGlobalSetting_ReferenceInstancesRight(
                self, 
                context, 
                nameSpace, 
                className, 
                (MSFT_GlobalEthernetSwitchSettingData*)instanceName, 
                propertySet, 
                keysOnly, 
                filter);
            return;
        }
    }

    MI_Context_PostResult(context, MI_RESULT_OK);
}

static MI_CONST MI_ProviderFT CIM_CSAssociationGlobalSetting_funcs =
{
  (MI_ProviderFT_Load)CIM_CSAssociationGlobalSetting_Load,
  (MI_ProviderFT_Unload)CIM_CSAssociationGlobalSetting_Unload,
  (MI_ProviderFT_GetInstance)CIM_CSAssociationGlobalSetting_GetInstance,
  (MI_ProviderFT_EnumerateInstances)CIM_CSAssociationGlobalSetting_EnumerateInstances,
  (MI_ProviderFT_CreateInstance)CIM_CSAssociationGlobalSetting_CreateInstance,
  (MI_ProviderFT_ModifyInstance)CIM_CSAssociationGlobalSetting_ModifyInstance,
  (MI_ProviderFT_DeleteInstance)CIM_CSAssociationGlobalSetting_DeleteInstance,
  (MI_ProviderFT_AssociatorInstances)CIM_CSAssociationGlobalSetting_AssociatorInstances,
  (MI_ProviderFT_ReferenceInstances)CIM_CSAssociationGlobalSetting_ReferenceInstances,
  (MI_ProviderFT_EnableIndications)NULL,
  (MI_ProviderFT_DisableIndications)NULL,
  (MI_ProviderFT_Subscribe)NULL,
  (MI_ProviderFT_Unsubscribe)NULL,
  (MI_ProviderFT_Invoke)NULL,
};

/* class CIM_CSAssociationGlobalSetting */
MI_CONST MI_ClassDecl CIM_CSAssociationGlobalSetting_rtti =
{
    MI_FLAG_CLASS|MI_FLAG_ASSOCIATION, /* flags */
    0x0063671E, /* code */
    MI_T("CIM_CSAssociationGlobalSetting"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    CIM_CSAssociationGlobalSetting_props, /* properties */
    MI_COUNT(CIM_CSAssociationGlobalSetting_props), /* numProperties */
    sizeof(CIM_CSAssociationGlobalSetting), /* size */
    NULL, /* superClass */
    NULL, /* superClassDecl */
    NULL, /* methods */
    0, /* numMethods */
    &schemaDecl, /* schema */
    &CIM_CSAssociationGlobalSetting_funcs, /* functions */
    NULL, /* owningClass */
};

/*
**==============================================================================
**
** CIM_MACTableAssociationEntry
**
**==============================================================================
*/

/* property CIM_MACTableAssociationEntry.Left */
static MI_CONST MI_PropertyDecl CIM_MACTableAssociationEntry_Left_prop =
{
    MI_FLAG_PROPERTY|MI_FLAG_KEY, /* flags */
    0x006C7404, /* code */
    MI_T("Left"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("MSFT_MACTable"), /* className */
    0, /* subscript */
    offsetof(CIM_MACTableAssociationEntry, Left), /* offset */
    MI_T("CIM_MACTableAssociationEntry"), /* origin */
    MI_T("CIM_MACTableAssociationEntry"), /* propagator */
    NULL,
};

/* property CIM_MACTableAssociationEntry.Right */
static MI_CONST MI_PropertyDecl CIM_MACTableAssociationEntry_Right_prop =
{
    MI_FLAG_PROPERTY|MI_FLAG_KEY, /* flags */
    0x00727405, /* code */
    MI_T("Right"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    MI_REFERENCE, /* type */
    MI_T("MSFT_MACTableEntry"), /* className */
    0, /* subscript */
    offsetof(CIM_MACTableAssociationEntry, Right), /* offset */
    MI_T("CIM_MACTableAssociationEntry"), /* origin */
    MI_T("CIM_MACTableAssociationEntry"), /* propagator */
    NULL,
};

static MI_PropertyDecl MI_CONST* MI_CONST CIM_MACTableAssociationEntry_props[] =
{
    &CIM_MACTableAssociationEntry_Left_prop,
    &CIM_MACTableAssociationEntry_Right_prop,
};

static void MI_CALL CIM_MACTableAssociationEntry_AssociatorInstances(
    CIM_MACTableAssociationEntry_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Instance* instanceName,
    const MI_Char* resultClass,
    const MI_Char* role,
    const MI_Char* resultRole,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    if (MSFT_MACTable_IsA(instanceName))
    {
        if (_Match(role, MI_T("Left")) && 
            _Match(resultRole, MI_T("Right")))
        {
            CIM_MACTableAssociationEntry_AssociatorInstancesLeft(
                self, 
                context, 
                nameSpace, 
                className, 
                (MSFT_MACTable*)instanceName, 
                resultClass, 
                propertySet, 
                keysOnly, 
                filter);
            return;
        }
    }

    if (MSFT_MACTableEntry_IsA(instanceName))
    {
        if (_Match(role, MI_T("Right")) && 
            _Match(resultRole, MI_T("Left")))
        {
            CIM_MACTableAssociationEntry_AssociatorInstancesRight(
                self, 
                context, 
                nameSpace, 
                className, 
                (MSFT_MACTableEntry*)instanceName, 
                resultClass, 
                propertySet, 
                keysOnly, 
                filter);
            return;
        }
    }

    MI_Context_PostResult(context, MI_RESULT_OK);
}

static void MI_CALL CIM_MACTableAssociationEntry_ReferenceInstances(
    CIM_MACTableAssociationEntry_Self* self,
    MI_Context* context,
    const MI_Char* nameSpace,
    const MI_Char* className,
    const MI_Instance* instanceName,
    const MI_Char* role,
    const MI_PropertySet* propertySet,
    MI_Boolean keysOnly,
    const MI_Filter* filter)
{
    if (MSFT_MACTable_IsA(instanceName))
    {
        if (_Match(role, MI_T("Left")))
        {
            CIM_MACTableAssociationEntry_ReferenceInstancesLeft(
                self, 
                context, 
                nameSpace, 
                className, 
                (MSFT_MACTable*)instanceName, 
                propertySet, 
                keysOnly, 
                filter);
            return;
        }
    }

    if (MSFT_MACTableEntry_IsA(instanceName))
    {
        if (_Match(role, MI_T("Right")))
        {
            CIM_MACTableAssociationEntry_ReferenceInstancesRight(
                self, 
                context, 
                nameSpace, 
                className, 
                (MSFT_MACTableEntry*)instanceName, 
                propertySet, 
                keysOnly, 
                filter);
            return;
        }
    }

    MI_Context_PostResult(context, MI_RESULT_OK);
}

static MI_CONST MI_ProviderFT CIM_MACTableAssociationEntry_funcs =
{
  (MI_ProviderFT_Load)CIM_MACTableAssociationEntry_Load,
  (MI_ProviderFT_Unload)CIM_MACTableAssociationEntry_Unload,
  (MI_ProviderFT_GetInstance)CIM_MACTableAssociationEntry_GetInstance,
  (MI_ProviderFT_EnumerateInstances)CIM_MACTableAssociationEntry_EnumerateInstances,
  (MI_ProviderFT_CreateInstance)CIM_MACTableAssociationEntry_CreateInstance,
  (MI_ProviderFT_ModifyInstance)CIM_MACTableAssociationEntry_ModifyInstance,
  (MI_ProviderFT_DeleteInstance)CIM_MACTableAssociationEntry_DeleteInstance,
  (MI_ProviderFT_AssociatorInstances)CIM_MACTableAssociationEntry_AssociatorInstances,
  (MI_ProviderFT_ReferenceInstances)CIM_MACTableAssociationEntry_ReferenceInstances,
  (MI_ProviderFT_EnableIndications)NULL,
  (MI_ProviderFT_DisableIndications)NULL,
  (MI_ProviderFT_Subscribe)NULL,
  (MI_ProviderFT_Unsubscribe)NULL,
  (MI_ProviderFT_Invoke)NULL,
};

/* class CIM_MACTableAssociationEntry */
MI_CONST MI_ClassDecl CIM_MACTableAssociationEntry_rtti =
{
    MI_FLAG_CLASS|MI_FLAG_ASSOCIATION, /* flags */
    0x0063791C, /* code */
    MI_T("CIM_MACTableAssociationEntry"), /* name */
    NULL, /* qualifiers */
    0, /* numQualifiers */
    CIM_MACTableAssociationEntry_props, /* properties */
    MI_COUNT(CIM_MACTableAssociationEntry_props), /* numProperties */
    sizeof(CIM_MACTableAssociationEntry), /* size */
    NULL, /* superClass */
    NULL, /* superClassDecl */
    NULL, /* methods */
    0, /* numMethods */
    &schemaDecl, /* schema */
    &CIM_MACTableAssociationEntry_funcs, /* functions */
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
    &CIM_CSAssociationGlobalSetting_rtti,
    &CIM_Collection_rtti,
    &CIM_ComRegProf_rtti,
    &CIM_ComputerSystem_rtti,
    &CIM_ConcreteJob_rtti,
    &CIM_ConnectivityCollection_rtti,
    &CIM_EnabledLogicalElement_rtti,
    &CIM_Error_rtti,
    &CIM_EthPortAssocationData_rtti,
    &CIM_EthPortAssociationLANEnd_rtti,
    &CIM_EthernetPort_rtti,
    &CIM_EthernetPortAllocationSettingData_rtti,
    &CIM_Job_rtti,
    &CIM_LANEndAssociationVlanEnd_rtti,
    &CIM_LANEndpoint_rtti,
    &CIM_LogicalDevice_rtti,
    &CIM_LogicalElement_rtti,
    &CIM_LogicalPort_rtti,
    &CIM_MACTableAssociationEntry_rtti,
    &CIM_ManagedElement_rtti,
    &CIM_ManagedSystemElement_rtti,
    &CIM_NetworkPort_rtti,
    &CIM_NetworkVLAN_rtti,
    &CIM_PhysicalComputerSystemView_rtti,
    &CIM_ProtocolEndpoint_rtti,
    &CIM_RegisterProfileAssociationPhyComputerSys_rtti,
    &CIM_RegisteredProfile_rtti,
    &CIM_ResourceAllocationSettingData_rtti,
    &CIM_Service_rtti,
    &CIM_ServiceAccessPoint_rtti,
    &CIM_SettingData_rtti,
    &CIM_System_rtti,
    &CIM_SystemSpecificCollection_rtti,
    &CIM_VLANEndpoint_rtti,
    &CIM_VLANEndpointSettingData_rtti,
    &CIM_View_rtti,
    &CIM_VlanAssociationVlanEnd_rtti,
    &CIM_VlanEndAssociationData_rtti,
    &MSFT_EthernetPort_rtti,
    &MSFT_Feature_rtti,
    &MSFT_GlobalEthernetSwitchSettingData_rtti,
    &MSFT_LinkAggregation_rtti,
    &MSFT_MACTable_rtti,
    &MSFT_MACTableEntry_rtti,
    &MSFT_NetworkVLAN_rtti,
    &MSFT_RemoteServerGroup_rtti,
    &MSFT_SwitchService_rtti,
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

