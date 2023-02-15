/*
 * Dio.h
 * version   : 1.0.0
 * brief     : AUTOSAR DIO high level header
 * details   : AUTOSAR DIO high level header, containing APIs sepecification and other variables
 * Created on: Feb 11, 2023
 * Author    : Bassam Mamdouh Mohammed
 */

/*==========================================================================================
*  Project                : AUTOSAR 4.4.0 MCAL
*  Platform               : ARM
*  Peripheral             : STM32F446RE
*  Autosar Version        : 4.4.0
*  Autosar Revision       : ASR_REL_4_0_REV_0000
*  SW Version             : 1.0.0
============================================================================================*/
#ifndef DIO_H_
#define DIO_H_

/*==========================================================================================
                                            INCLUDES
============================================================================================*/
#include "Std_Types.h"
#include "Dio_Cfg.h"

/*==========================================================================================
                               SOURCE FILE VERSION INFORMATION
============================================================================================*/
/**
 * @brief parameters that shall be published within the standard types header file and also in module's description file
*/
#define DIO_VENDOR_ID                      127
#define DIO_MODULE_ID                      120

#define DIO_AR_RELEASE_MAJOR_VERSION       4
#define DIO_AR_RELEASE_MMINOR_VERSION      4
#define DIO_AR_RELEASE_REVISION_VERSION    0

#define DIO_SW_MAJOR_VERSION               1
#define DIO_SW_MINOR_VERSION               0
#define DIO_SW_PATCH_VERSION               0

/*==========================================================================================
                                FILE VERSION CHECKS
============================================================================================*/
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
/* Check if source file and Platform_Types header file are of the same autosar version */
	#if ((DIO_AR_RELEASE_MAJOR_VERSION != STD_AR_RELEASE_MAJOR_VERSION) || \
		(DIO_AR_RELEASE_MMINOR_VERSION != STD_AR_RELEASE_MMINOR_VERSION))
		#error "Autosar versison Numbers of Std_Types.h and Platform_Types.h are different"
	#endif
#endif

#if (DIO_VENDOR_ID != DIO_VENDOR_ID_CFG)
	#error "Dio.h and Dio_Cfg.h have different vendor ids"
#endif

#if ((DIO_AR_RELEASE_MAJOR_VERSION != DIO_AR_RELEASE_MAJOR_VERSION_CFG)    || \
	 (DIO_AR_RELEASE_MINOR_VERSION != DIO_AR_RELEASE_MINOR_VERSION_CFG)    || \
	 (DIO_AR_RELEASE_REVISION_VERSION != DIO_AR_RELEASE_REVISION_VERSION_CFG) \
	)
	#error "AUTOSAR Version number of Dio.h and Dio_Cfg.h are deffirent"
#endif

#if ((DIO_SW_MAJOR_VERSION != DIO_SW_MAJOR_VERSION_CFG)    || \
	 (DIO_SW_MINOR_VERSION != DIO_SW_MINOR_VERSION_CFG)    || \
	 (DIO_SW_PATCH_VERSION != DIO_SW_PATCH_VERSION_CFG) \
	)
	#error "Software Version number of Dio.h and Dio_Cfg.h are deffirent"
#endif

/**
 * @brief Invalid channel name requested
*/
#define DIO_E_PARAM_INVALID_CHANNEL_ID   ((uint8)0x0A)

/**
 * @brief API service called with “NULL pointer” parameter
*/
#define DIO_E_PARAM_CONFIG               ((uint8)0x10)

/**
 * @brief Invalid port name requested
*/
#define DIO_E_PARAM_INVALID_PORT_ID      ((uint8)0x14)

/**
 * @brief Invalid ChannelGroup passed
*/
#define DIO_E_PARAM_INVALID_GROUP        ((uint8)0x1F)

/**
 * @details API service called with a NULL pointer. In case of this error, the API service
 *          shall return immediately without any further action, beside reporting this
 *          development error.
*/
#define DIO_E_PARAM_POINTER              ((uint8)0x20)

/**
 * @brief   API Service ID for @p Dio_ReadChannel() function
 * @details Returns the value of the specified DIO channel.
*/
#define DIO_READCHANNEL_ID               ((uint8)0x00)

/**
 * @brief   API Service ID for @p Dio_WriteChannel() function
 * @details Service to set a level of a channel.
*/
#define DIO_WRITECHANNEL_ID               ((uint8)0x01)

/**
 * @brief   API Service ID for @p Dio_ReadPort() function
 * @details Returns the level of all channels of that port.
*/
#define DIO_READPORT_ID               ((uint8)0x02)

/**
 * @brief   API Service ID for @p Dio_WritePort() function
 * @details Service to set a value of the port.
*/
#define DIO_WRITEPORT_ID               ((uint8)0x03)

/**
 * @brief   API Service ID for @p Dio_ReadChannelGroup() function
 * @details This Service reads a subset of the adjoining bits of a port.
*/
#define DIO_READCHANNELGROUP_ID        ((uint8)0x04)

/**
 * @brief   API Service ID for @p Dio_WriteChannelGroup() function
 * @details Service to set a subset of the adjoining bits of a port to a specified level.
*/
#define DIO_WRITECHANNELGROUP_ID        ((uint8)0x05)

/**
 * @brief   API Service ID for @p Dio_GetVersionInfo() function
 * @details Service to get the version information of this module.
*/
#define DIO_GETVERSIONINFO_ID        ((uint8)0x12)

/**
 * @brief   API Service ID for @p Dio_FlipChannel() function
 * @details Service to flip (change from 1 to 0 or from 0 to 1) the level of a channel and return
 *        the level of the channel after flip.
*/
#define DIO_FLIPCHANNEL_ID        ((uint8)0x11)

/**
 * @brief   Instance ID of Dio driver
*/
#define DIO_INSTANCE_ID            ((uint8)0x00)

/*==========================================================================================
                                FUNCTIONS PROTOTYPE
============================================================================================*/

#define DIO_START_SEC_CODE
#include "MemMap.h"

FUNC(void,DIO_CODE) Dio_Init
(
	//P2CONST(Dio_ConfigType,AUTOMATIC,DIO_APPL_CODE) configPtr
);
#define DIO_STOP_SEC_CODE
#include "MemMap.h"

#endif /* DIO_H_ */
