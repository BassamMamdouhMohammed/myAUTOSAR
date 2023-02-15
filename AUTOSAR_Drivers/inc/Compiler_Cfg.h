/*
 * file      : Compiler_Cfg.h
 * version   : 1.0.0
 * brief     : AUTOSAR Base - Module specification memory and pointer classes
 * details   : this file contain module specific parameters(memclass and ptrclass) that are
 *             passed to the macros defined in compiler.h
 * Created on: Feb 8, 2023
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

#ifndef COMPILER_CFG_H_
#define COMPILER_CFG_H_

/**
 * @brief DIO memory and pointer classes
*/

#define DIO_CODE
#define DIO_CONST
#define DIO_APPL_DATA
#define DIO_APPL_CONST
#define DIO_APPL_CODE
#define DIO_CALLOUT_CODE
#define DIO_VAR_NOINIT
#define DIO_VAR_POWER_ON_INIT
#define DIO_VAR_FAST
#define DIO_VAR

/**
 * @brief PORT memory and pointer classes
*/

#define PORT_CODE
#define PORT_CONST
#define PORT_APPL_DATA
#define PORT_APPL_CONST
#define PORT_APPL_CODE
#define PORT_CALLOUT_CODE
#define PORT_VAR_NOINIT
#define PORT_VAR_POWER_ON_INIT
#define PORT_VAR_FAST
#define PORT_VAR


#endif /* COMPILER_CFG_H_ */
