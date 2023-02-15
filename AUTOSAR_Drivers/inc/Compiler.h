/*
 * file      : Compiler.h
 * version   : 1.0.0
 * brief     : AUTOSAR Base - Standard types difination
 * details   : AUTOSAR Standard header file contain all types that used across several module of basic software
 * Created on: Feb 8, 2023
 * Author    : Bassam Mamdouh Mohammed
 */

#ifndef COMPILER_H_
#define COMPILER_H_

/*==========================================================================================
*  Project                : AUTOSAR 4.4.0 MCAL
*  Platform               : ARM
*  Peripheral             : STM32F446RE
*  Autosar Version        : 4.4.0
*  Autosar Revision       : ASR_REL_4_0_REV_0000
*  SW Version             : 1.0.0
============================================================================================*/

/*==========================================================================================
                                        INCLUDES
============================================================================================*/
#include "Compiler_Cfg.h"

/*==========================================================================================
                               SOURCE FILE VERSION INFORMATION
============================================================================================*/
/**
 * @brief parameters that shall be published within the standard types header file and also in module's description file
*/
#define COMPILER_VENDOR_ID                      127

#define COMPILER_AR_RELEASE_MAJOR_VERSION       4
#define COMPILER_AR_RELEASE_MMINOR_VERSION      4
#define COMPILER_AR_RELEASE_REVISION_VERSION    0

#define COMPILER_SW_MAJOR_VERSION               1
#define COMPILER_SW_MINOR_VERSION               0
#define COMPILER_SW_PATCH_VERSION               0

#ifndef _GNU_ARM_C_STM32F446_
	#define _GNU_ARM_C_STM32F446_
#endif
/*==========================================================================================
                               API SPECIFICATION MACRO DEFINITIONS
============================================================================================*/

/**
 * @brief The memory class AUTOMATIC shall be provided as empty definition, used for
 *        the declaration of local pointers.
 * @implements AUTOMATIC
*/
#define AUTOMATIC

/**
 * @brief The memory class TYPEDEF shall be provided as empty definition. This memory
 *        class shall be used within type definitions, where no memory qualifier can be
 *        specified. This can be necessary for defining pointer types, with e.g. P2VAR,
 *        where the macros require two parameters. First parameter can be specified in the
 *        type definition (distance to the memory location referenced by the pointer), but
 *        the second one (memory allocation of the pointer itself) cannot be defined at this
 *        time. Hence, memory class TYPEDEF shall be applied.
 * @implements TYPEDEF
*/
#define TYPEDEF

/**
 * @brief The compiler abstraction shall provide the NULL_PTR define with a void pointer
 *        to zero definition.
 * @implements NULL_PTR void pointer
*/
#define NULL_PTR ((void *)0)

/*************************************** GREEN HILLS ************************************/

#ifdef _CODEWARRIOR_C_STM32F446_
	/**
	* @brief The compiler abstraction shall provide the INLINE define for abstraction of the
    *        keyword inline.
	*/
	#define INLINE        __inline

	/**
	* @brief The compiler abstraction shall provide the LOCAL_INLINE define for abstraction
    *        of the keyword inline in functions with “static” scope.
	*/
	#define LOCAL_INLINE       static __inline

	/**
	* @brief The compiler abstraction for specifying an interrupt handler
	*/
	#define STATIC
	#define INTERRUPT_FUNC

#endif

/*************************************** GNU ARM ************************************/

#ifdef _GNU_ARM_C_STM32F446_
	/**
	* @brief The compiler abstraction shall provide the INLINE define for abstraction of the
    *        keyword inline.
	*/
	#define INLINE        inline

	/**
	* @brief The compiler abstraction shall provide the LOCAL_INLINE define for abstraction
    *        of the keyword inline in functions with “static” scope.
	*/
	#define LOCAL_INLINE  static inline

	/**
	* @brief The compiler abstraction for specifying an interrupt handler
	*/
	#define STATIC        static
	#define INTERRUPT_FUNC

#endif

/**
 * @brief The compiler abstraction shall define the FUNC macro for the declaration and
 *        definition of functions that ensures correct syntax of function declarations as
 *        required by a specific compiler.
*/
#define FUNC(rettype, memclass) rettype

/**
 * @brief The compiler abstraction shall define the FUNC_P2CONST macro for the
 *        declaration and definition of functions returning a pointer to a constant. This shall
 *        ensure the correct syntax of function declarations as required by a specific compiler.
*/
#define FUNC_P2CONST(rettype, ptrclass, memclass) const ptrtype *

/**
 * @brief The compiler abstraction shall define the FUNC_P2VAR macro for the declaration
 *        and definition of functions returning a pointer to a variable. This shall ensure the
 *        correct syntax of function declarations as required by a specific compiler.
*/
#define FUNC_P2VAR(rettype, ptrclass, memclass) ptrtype *

/**
 * @brief The compiler abstraction shall define the CONST macro for the declaration and
 *        definition of constants.
*/
#define CONST(consttype, memclass) const

/**
 * @brief The compiler abstraction shall define the VAR macro for the declaration and
 *        definition of constants.
*/
#define VAR(vartype, memclass) vartype

/**
 * @brief The compiler abstraction shall define the P2VAR macro for the declaration and
 *        definition of pointers in RAM, pointing to variables.
*/
#define P2VAR(ptrtype, memclass, ptrclass) ptrtype *

/**
 * @brief The compiler abstraction shall define the P2VAR macro for the declaration and
 *        definition of pointers in RAM, pointing to variables.
*/
#define P2CONST(ptrtype, memclass, ptrclass) ptrtype * const

/**
 * @brief The compiler abstraction shall define the P2VAR macro for the declaration and
 *        definition of pointers in RAM, pointing to variables.
*/
#define CONSTP2VAR (ptrtype, memclass, ptrclass) const ptrtype *

/**
 * @brief The compiler abstraction shall define the CONSTP2CONST macro for the
 *        declaration and definition of constant pointers accessing constants.
*/
#define CONSTP2CONST(ptrtype, memclass, ptrclass) const ptrtype * const

/**
 * @brief The compiler abstraction shall define the CONSTP2CONST macro for the
 *        declaration and definition of constant pointers accessing constants.
*/
#define P2FUNC(rettype, ptrclass, fctname) rettype (*fctname)

/**
 * @brief The compiler abstraction shall define the CONSTP2FUNC macro for the type
 *        definition of constant pointers to functions.
*/
#define CONSTP2FUNC(rettype, ptrclass, fctname) rettype (*const fctname)

#endif /* COMPILER_H_ */
