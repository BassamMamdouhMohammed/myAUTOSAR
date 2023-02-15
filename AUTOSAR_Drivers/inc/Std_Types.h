/*
 * Std_ReturnType.h
 * version   : 1.0.0
 * brief     : AUTOSAR Base - Module specification memory and pointer classes
 * details   : AUTOSAR Standard header file contain all types that used across several module of basic software
 * Created on: Feb 8, 2023
 * Author    : Bassam Mamdouh Mohammed
 */

#ifndef STD_TYPES_H_
#define STD_TYPES_H_

/*==========================================================================================
*  Project                : AUTOSAR 4.4.0 MCAL
*  Platform               : ARM
*  Peripheral             : STM32F446RE
*  Autosar Version        : 4.4.0
*  Autosar Revision       : ASR_REL_4_0_REV_0000
*  SW Version             : 1.0.0
============================================================================================*/

/**
 * @brief Include Platform abctraction
*/
#include "Platform_Types.h"

/**
 * @brief Include Compiler abctraction
*/
#include "Compiler.h"

/*==========================================================================================
                               SOURCE FILE VERSION INFORMATION
============================================================================================*/
/**
 * @brief parameters that shall be published within the standard types header file and also in module's description file
*/
#define STD_VENDOR_ID                      127

#define STD_AR_RELEASE_MAJOR_VERSION       4
#define STD_AR_RELEASE_MMINOR_VERSION      4
#define STD_AR_RELEASE_REVISION_VERSION    0

#define STD_SW_MAJOR_VERSION               1
#define STD_SW_MINOR_VERSION               0
#define STD_SW_PATCH_VERSION               0


/*==========================================================================================
                                FILE VERSION CHECKS
============================================================================================*/
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
/* Check if source file and Platform_Types header file are of the same autosar version */
#if ((STD_AR_RELEASE_MAJOR_VERSION != PLATFORM_AR_RELEASE_MAJOR_VERSION) || \
    (STD_AR_RELEASE_MMINOR_VERSION != PLATFORM_AR_RELEASE_MMINOR_VERSION))
    #error "Autosar versison Numbers of Std_Types.h and Platform_Types.h are different"
#endif
#endif

#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
/* Check if source file and Compiler header file are of the same autosar version */
#if ((STD_AR_RELEASE_MAJOR_VERSION != COMPILER_AR_RELEASE_MAJOR_VERSION) || \
    (STD_AR_RELEASE_MMINOR_VERSION != COMPILER_AR_RELEASE_MMINOR_VERSION))
    #error "Autosar versison Numbers of Std_Types.h and Compiler.h are different"
#endif
#endif

/*==========================================================================================
                                         CONSTANTS
============================================================================================*/

/**
 * @brief Physical state 5V or 3.3V
 * @implements SympolDefinition_enumeration
*/
#define STD_HIGH     0x01

/**
 * @brief Physical state 0V
 * @implements SympolDefinition_enumeration
*/
#define STD_LOW      0x00

/**
 * @brief Logical state active
 * @implements SympolDefinition_enumeration
*/
#define STD_ACTIVE     0x01

/**
 * @brief Logical state idle
 * @implements SympolDefinition_enumeration
*/
#define STD_IDLE       0x00

/**
 * @brief
 * @implements SympolDefinition_enumeration
*/
#define STD_ON     0x01

/**
 * @brief
 * @implements SympolDefinition_enumeration
*/
#define STD_OFF       0x00

/**
 * @brief
 * @implements SympolDefinition_enumeration
*/
typedef uint8 Std_ReturnType;

/**
 * @brief This type shall be used to request the version of a BSW module using the <Module name>_GetVersionInfo() function.
 * @implements Std_VersionInfoType_Structure
*/
typedef struct
{
    uint16 vendorID;
    uint16 moduleID;
    uint8 sw_major_version;
    uint8 sw_minor_version;
    uint8 sw_patch_version;
} Std_VersionInfoType;

/**
 * @brief return code for failure/error
 * @implements Std_VersionInfoType_Structure
*/
#define E_NOT_OK     0x01

/**
 * @brief This type shall be used to request the version of a BSW module using the <Module name>_GetVersionInfo() function.
 * @implements Std_VersionInfoType_Structure
*/
#ifndef STATUSTYPEDEFINED
#define STATUSTYPEDEFINED

/**
 * @brief Failed to return
 * @implements Std_VersionInfoType_Structure
*/
    #define E_OK 0x00u

/**
 * @brief This type is defined for OSEK Compliance
*/
    typedef unsigned char StatusType; /* OSEK compliance */

#endif

#endif /* STD_TYPES_H_ */
