/*
 * Platform_Types.h
 * version   : 1.0.0
 * brief     : AUTOSAR Base - Standard types difination
 * details   : AUTOSAR Standard header file contain all types that used across several module of basic software
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

#ifndef PLATFORM_TYPES_H_
#define PLATFORM_TYPES_H_

/*==========================================================================================
                               SOURCE FILE VERSION INFORMATION
============================================================================================*/
/**
 * @brief parameters that shall be published within the standard types header file and also in module's description file
*/
#define PLATFORM_VENDOR_ID                      127

#define PLATFORM_AR_RELEASE_MAJOR_VERSION       4
#define PLATFORM_AR_RELEASE_MMINOR_VERSION      4
#define PLATFORM_AR_RELEASE_REVISION_VERSION    0

#define PLATFORM_SW_MAJOR_VERSION               1
#define PLATFORM_SW_MINOR_VERSION               0
#define PLATFORM_SW_PATCH_VERSION               0

/*==========================================================================================
                               API SPECIFICATION SYMBOL DEFINITIONS
============================================================================================*/

/**
 * @brief Indicating a 8 bit processor
 * @implements CPU_TYPE_ENUMERATION
*/
#define CPU_TYPE_8   8

/**
 * @brief Indicating a 16 bit processor
 * @implements CPU_TYPE_ENUMERATION
*/
#define CPU_TYPE_16   16

/**
 * @brief Indicating a 32 bit processor
 * @implements CPU_TYPE_ENUMERATION
*/
#define CPU_TYPE_32   32

/**
 * @brief Indicating a 64 bit processor
 * @implements CPU_TYPE_ENUMERATION
*/
#define CPU_TYPE_64   64

/**
 * @brief The most significant bit is the first bit of the bit sequence.
 * @implements CPU_BIT_ORDER
*/
#define MSB_FIRST     0

/**
 * @brief The least significant bit is the first bit of the bit sequence.
 * @implements CPU_BIT_ORDER
*/
#define LSB_FIRST     1

/**
 * @brief Within uint16, the high byte is located before the low byte.
 * @implements CPU_BYTE_ORDER
*/
#define HIGH_BYTE_FIRST     0

/**
 * @brief Within uint16, the low byte is located before the high byte.
 * @implements CPU_BYTE_ORDER
*/
#define LOW_BYTE_FIRST     1

/**
 * @brief This symbol shall be defined as #define having one of the values CPU_TYPE_8,
 *        CPU_TYPE_16, CPU_TYPE_32 or CPU_TYPE_64 according to the platform.
 * @implements CPU_TYPE
*/
#define CPU_TYPE       (CPU_TYPE_32)

/**
 * @brief This symbol shall be defined as #define having one of the values MSB_FIRST or
          LSB_FIRST according to the platform.
 * @implements CPU_BIT_ORDER
*/
#define CPU_BIT_ORDER  (LSB_FIRST)

/**
 * @brief This symbol shall be defined as #define having one of the values HIGH_BYTE_FIRST
          or LOW_BYTE_FIRST according to the platform.
 * @implements CPU_BYTE_ORDER
*/
#define CPU_BYTE_ORDER (LOW_BYTE_FIRST)

#ifndef TRUE
/**
 * @brief Boolean true value
 * @implements TRUE_FALSE
*/
	#define TRUE 1
#endif

#ifndef FALSE
/**
 * @brief Boolean false value
 * @implements TRUE_FALSE
*/
	#define FALSE 0
#endif

/*==========================================================================================
                               API SPECIFICATION TYPE DEFINITIONS
============================================================================================*/

#if (CPU_TYPE == CPU_TYPE_64)

/**
 * @brief      This standard AUTOSAR type shall only be used together with the definitions
 *             TRUE and FALSE.
 * @implements boolean type
 * @range      FALSE--->0    TRUE--->1
*/
typedef unsigned char    boolean;

/**
 * @brief      This standard AUTOSAR type shall be of 8 bit unsigned.
 * @implements uint8 type
 * @range      0..255 -- 0x00..0xFF
*/
typedef unsigned char    uint8;

/**
 * @brief      This standard AUTOSAR type shall be of 16 bit unsigned.
 * @implements uint16 type
 * @range      0..65535 -- 0x0000..0xFFFF
*/
typedef unsigned short    uint16;

/**
 * @brief      This standard AUTOSAR type shall be 32 bit unsigned
 * @implements uint32 type
 * @range      0..4294967295 -- 0x00000000..0xFFFFFFFF
*/
typedef unsigned int      uint32;

/**
 * @brief      This standard AUTOSAR type shall be 64 bit unsigned.
 * @implements uint64 type
 * @range      0..18446744073709551615 -- 0x0000000000000000..0xFFFFFFFFFFFFFFFF
*/
typedef unsigned long long     uint64;

/**
 * @brief      This standard AUTOSAR type shall be of 8 bit signed.
 * @implements sint8 type
 * @range      -128..+127 -- 0x80..0x7F
*/
typedef signed char    sint8;

/**
 * @brief      This standard AUTOSAR type shall be of 16 bit signed.
 * @implements sint16 type
 * @range      -32768..+32767 -- 0x8000..0x7FFF
*/
typedef signed short    sint16;

/**
 * @brief      This standard AUTOSAR type shall be 32 bit signed.
 * @implements sint32 type
 * @range      -2147483648..+2147483647 -- 0x80000000..0x7FFFFFFF
*/
typedef signed int      sint32;

/**
 * @brief      This standard AUTOSAR type shall be 64 bit signed.
 * @implements sint64 type
 * @range      -9223372036854775808 ..9223372036854775807
 *               0x8000000000000000 ..0x7FFFFFFFFFFFFFFF
*/
typedef signed long long     sint64;

/**
 * @brief      This optimized AUTOSAR type shall be at least 8 bit unsigned.
 * @implements uint8_least type
 * @range      At least 0..255 -- 0x00..0xFF
*/
typedef unsigned long        uint8_least;

/**
 * @brief      This optimized AUTOSAR type shall be at least 16 bit unsigned.
 * @implements uint16_least type
 * @range      At least 0..65535 -- 0x0000..0xFFFF
*/
typedef unsigned long        uint16_least;

/**
 * @brief      This optimized AUTOSAR type shall be at least 32 bit unsigned.
 * @implements uint32_least type
 * @range      At least 0..4294967295 -- 0x00000000..0xFFFFFFFF
*/
typedef unsigned long        uint32_least;

/**
 * @brief      This optimized AUTOSAR type shall be at least 8 bit signed.
 * @implements sint8_least type
 * @range      At least -128..+127 -- 0x80..0x7F
*/
typedef signed long        sint8_least;

/**
 * @brief      This optimized AUTOSAR type shall be at least 16 bit signed.
 * @implements sint16_least type
 * @range      At least -32768..+32767 -- 0x8000..0x7FFF
*/
typedef signed long        sint16_least;

/**
 * @brief      This optimized AUTOSAR type shall be at least 32 bit signed.
 * @implements sint32_least type
 * @range      At least -2147483648..+2147483647 -- 0x80000000..0x7FFFFFFF
*/
typedef signed long        sint32_least;

/**
 * @brief      This standard AUTOSAR type shall follow the 32-bit binary interchange format
 * @implements float32 type
 * @range      -3.4028235e+38..+3.4028235e+38
*/
typedef float             float32;

/**
 * @brief      This standard AUTOSAR type shall follow the 64-bit binary interchange format
 * @implements float64 type
 * @range      -1.7976931348623157e+308..+1.7976931348623157e+308
*/
typedef double             float64;

#elif (CPU_TYPE == CPU_TYPE_32)
/**
 * @brief      This standard AUTOSAR type shall only be used together with the definitions
 *             TRUE and FALSE.
 * @implements boolean type
 * @range      FALSE--->0    TRUE--->1
*/
typedef unsigned char    boolean;
/**
 * @brief      This standard AUTOSAR type shall be of 8 bit unsigned.
 * @implements uint8 type
 * @range      0..255 -- 0x00..0xFF
*/
typedef unsigned char    uint8;

/**
 * @brief      This standard AUTOSAR type shall be of 16 bit unsigned.
 * @implements uint16 type
 * @range      0..65535 -- 0x0000..0xFFFF
*/
typedef unsigned short    uint16;

/**
 * @brief      This standard AUTOSAR type shall be 32 bit unsigned
 * @implements uint32 type
 * @range      0..4294967295 -- 0x00000000..0xFFFFFFFF
*/
typedef unsigned int      uint32;

/**
 * @brief      This standard AUTOSAR type shall be 64 bit unsigned.
 * @implements uint64 type
 * @range      0..18446744073709551615 -- 0x0000000000000000..0xFFFFFFFFFFFFFFFF
*/
typedef unsigned long long     uint64;

/**
 * @brief      This standard AUTOSAR type shall be of 8 bit signed.
 * @implements sint8 type
 * @range      -128..+127 -- 0x80..0x7F
*/
typedef signed char    sint8;

/**
 * @brief      This standard AUTOSAR type shall be of 16 bit signed.
 * @implements sint16 type
 * @range      -32768..+32767 -- 0x8000..0x7FFF
*/
typedef signed short    sint16;

/**
 * @brief      This standard AUTOSAR type shall be 32 bit signed.
 * @implements sint32 type
 * @range      -2147483648..+2147483647 -- 0x80000000..0x7FFFFFFF
*/
typedef signed int      sint32;

/**
 * @brief      This standard AUTOSAR type shall be 64 bit signed.
 * @implements sint64 type
 * @range      -9223372036854775808 ..9223372036854775807
 *               0x8000000000000000 ..0x7FFFFFFFFFFFFFFF
*/
typedef signed long long     sint64;

/**
 * @brief      This optimized AUTOSAR type shall be at least 8 bit unsigned.
 * @implements uint8_least type
 * @range      At least 0..255 -- 0x00..0xFF
*/
typedef unsigned long        uint8_least;

/**
 * @brief      This optimized AUTOSAR type shall be at least 16 bit unsigned.
 * @implements uint16_least type
 * @range      At least 0..65535 -- 0x0000..0xFFFF
*/
typedef unsigned long        uint16_least;

/**
 * @brief      This optimized AUTOSAR type shall be at least 32 bit unsigned.
 * @implements uint32_least type
 * @range      At least 0..4294967295 -- 0x00000000..0xFFFFFFFF
*/
typedef unsigned long        uint32_least;

/**
 * @brief      This optimized AUTOSAR type shall be at least 8 bit signed.
 * @implements sint8_least type
 * @range      At least -128..+127 -- 0x80..0x7F
*/
typedef signed long        sint8_least;

/**
 * @brief      This optimized AUTOSAR type shall be at least 16 bit signed.
 * @implements sint16_least type
 * @range      At least -32768..+32767 -- 0x8000..0x7FFF
*/
typedef signed long        sint16_least;

/**
 * @brief      This optimized AUTOSAR type shall be at least 32 bit signed.
 * @implements sint32_least type
 * @range      At least -2147483648..+2147483647 -- 0x80000000..0x7FFFFFFF
*/
typedef signed long        sint32_least;

/**
 * @brief      This standard AUTOSAR type shall follow the 32-bit binary interchange format
 * @implements float32 type
 * @range      -3.4028235e+38..+3.4028235e+38
*/
typedef float             float32;

/**
 * @brief      This standard AUTOSAR type shall follow the 64-bit binary interchange format
 * @implements float64 type
 * @range      -1.7976931348623157e+308..+1.7976931348623157e+308
*/
typedef double             float64;

#elif (CPU_TYPE == CPU_TYPE_16)
/**
 * @brief      This standard AUTOSAR type shall only be used together with the definitions
 *             TRUE and FALSE.
 * @implements boolean type
 * @range      FALSE--->0    TRUE--->1
*/
typedef unsigned char    boolean;
/**
 * @brief      This standard AUTOSAR type shall be of 8 bit unsigned.
 * @implements uint8 type
 * @range      0..255 -- 0x00..0xFF
*/
typedef unsigned char    uint8;

/**
 * @brief      This standard AUTOSAR type shall be of 16 bit unsigned.
 * @implements uint16 type
 * @range      0..65535 -- 0x0000..0xFFFF
*/
typedef unsigned short    uint16;

/**
 * @brief      This standard AUTOSAR type shall be 32 bit unsigned
 * @implements uint32 type
 * @range      0..4294967295 -- 0x00000000..0xFFFFFFFF
*/
typedef unsigned int      uint32;

/**
 * @brief      This standard AUTOSAR type shall be 64 bit unsigned.
 * @implements uint64 type
 * @range      0..18446744073709551615 -- 0x0000000000000000..0xFFFFFFFFFFFFFFFF
*/
typedef unsigned long long     uint64;

/**
 * @brief      This standard AUTOSAR type shall be of 8 bit signed.
 * @implements sint8 type
 * @range      -128..+127 -- 0x80..0x7F
*/
typedef signed char    sint8;

/**
 * @brief      This standard AUTOSAR type shall be of 16 bit signed.
 * @implements sint16 type
 * @range      -32768..+32767 -- 0x8000..0x7FFF
*/
typedef signed short    sint16;

/**
 * @brief      This standard AUTOSAR type shall be 32 bit signed.
 * @implements sint32 type
 * @range      -2147483648..+2147483647 -- 0x80000000..0x7FFFFFFF
*/
typedef signed int      sint32;

/**
 * @brief      This standard AUTOSAR type shall be 64 bit signed.
 * @implements sint64 type
 * @range      -9223372036854775808 ..9223372036854775807
 *               0x8000000000000000 ..0x7FFFFFFFFFFFFFFF
*/
typedef signed long long     sint64;

/**
 * @brief      This optimized AUTOSAR type shall be at least 8 bit unsigned.
 * @implements uint8_least type
 * @range      At least 0..255 -- 0x00..0xFF
*/
typedef unsigned long        uint8_least;

/**
 * @brief      This optimized AUTOSAR type shall be at least 16 bit unsigned.
 * @implements uint16_least type
 * @range      At least 0..65535 -- 0x0000..0xFFFF
*/
typedef unsigned long        uint16_least;

/**
 * @brief      This optimized AUTOSAR type shall be at least 32 bit unsigned.
 * @implements uint32_least type
 * @range      At least 0..4294967295 -- 0x00000000..0xFFFFFFFF
*/
typedef unsigned long        uint32_least;

/**
 * @brief      This optimized AUTOSAR type shall be at least 8 bit signed.
 * @implements sint8_least type
 * @range      At least -128..+127 -- 0x80..0x7F
*/
typedef signed long        sint8_least;

/**
 * @brief      This optimized AUTOSAR type shall be at least 16 bit signed.
 * @implements sint16_least type
 * @range      At least -32768..+32767 -- 0x8000..0x7FFF
*/
typedef signed long        sint16_least;

/**
 * @brief      This optimized AUTOSAR type shall be at least 32 bit signed.
 * @implements sint32_least type
 * @range      At least -2147483648..+2147483647 -- 0x80000000..0x7FFFFFFF
*/
typedef signed long        sint32_least;

/**
 * @brief      This standard AUTOSAR type shall follow the 32-bit binary interchange format
 * @implements float32 type
 * @range      -3.4028235e+38..+3.4028235e+38
*/
typedef float             float32;

/**
 * @brief      This standard AUTOSAR type shall follow the 64-bit binary interchange format
 * @implements float64 type
 * @range      -1.7976931348623157e+308..+1.7976931348623157e+308
*/
typedef double             float64;

#elif (CPU_TYPE == CPU_TYPE_8)
/**
 * @brief      This standard AUTOSAR type shall only be used together with the definitions
 *             TRUE and FALSE.
 * @implements boolean type
 * @range      FALSE--->0    TRUE--->1
*/
typedef unsigned char    boolean;
/**
 * @brief      This standard AUTOSAR type shall be of 8 bit unsigned.
 * @implements uint8 type
 * @range      0..255 -- 0x00..0xFF
*/
typedef unsigned char    uint8;

/**
 * @brief      This standard AUTOSAR type shall be of 16 bit unsigned.
 * @implements uint16 type
 * @range      0..65535 -- 0x0000..0xFFFF
*/
typedef unsigned short    uint16;

/**
 * @brief      This standard AUTOSAR type shall be 32 bit unsigned
 * @implements uint32 type
 * @range      0..4294967295 -- 0x00000000..0xFFFFFFFF
*/
typedef unsigned int      uint32;

/**
 * @brief      This standard AUTOSAR type shall be 64 bit unsigned.
 * @implements uint64 type
 * @range      0..18446744073709551615 -- 0x0000000000000000..0xFFFFFFFFFFFFFFFF
*/
typedef unsigned long long     uint64;

/**
 * @brief      This standard AUTOSAR type shall be of 8 bit signed.
 * @implements sint8 type
 * @range      -128..+127 -- 0x80..0x7F
*/
typedef signed char    sint8;

/**
 * @brief      This standard AUTOSAR type shall be of 16 bit signed.
 * @implements sint16 type
 * @range      -32768..+32767 -- 0x8000..0x7FFF
*/
typedef signed short    sint16;

/**
 * @brief      This standard AUTOSAR type shall be 32 bit signed.
 * @implements sint32 type
 * @range      -2147483648..+2147483647 -- 0x80000000..0x7FFFFFFF
*/
typedef signed int      sint32;

/**
 * @brief      This standard AUTOSAR type shall be 64 bit signed.
 * @implements sint64 type
 * @range      -9223372036854775808 ..9223372036854775807
 *               0x8000000000000000 ..0x7FFFFFFFFFFFFFFF
*/
typedef signed long long     sint64;

/**
 * @brief      This optimized AUTOSAR type shall be at least 8 bit unsigned.
 * @implements uint8_least type
 * @range      At least 0..255 -- 0x00..0xFF
*/
typedef unsigned long        uint8_least;

/**
 * @brief      This optimized AUTOSAR type shall be at least 16 bit unsigned.
 * @implements uint16_least type
 * @range      At least 0..65535 -- 0x0000..0xFFFF
*/
typedef unsigned long        uint16_least;

/**
 * @brief      This optimized AUTOSAR type shall be at least 32 bit unsigned.
 * @implements uint32_least type
 * @range      At least 0..4294967295 -- 0x00000000..0xFFFFFFFF
*/
typedef unsigned long        uint32_least;

/**
 * @brief      This optimized AUTOSAR type shall be at least 8 bit signed.
 * @implements sint8_least type
 * @range      At least -128..+127 -- 0x80..0x7F
*/
typedef signed long        sint8_least;

/**
 * @brief      This optimized AUTOSAR type shall be at least 16 bit signed.
 * @implements sint16_least type
 * @range      At least -32768..+32767 -- 0x8000..0x7FFF
*/
typedef signed long        sint16_least;

/**
 * @brief      This optimized AUTOSAR type shall be at least 32 bit signed.
 * @implements sint32_least type
 * @range      At least -2147483648..+2147483647 -- 0x80000000..0x7FFFFFFF
*/
typedef signed long        sint32_least;

/**
 * @brief      This standard AUTOSAR type shall follow the 32-bit binary interchange format
 * @implements float32 type
 * @range      -3.4028235e+38..+3.4028235e+38
*/
typedef float             float32;

/**
 * @brief      This standard AUTOSAR type shall follow the 64-bit binary interchange format
 * @implements float64 type
 * @range      -1.7976931348623157e+308..+1.7976931348623157e+308
*/
typedef double             float64;
#endif

#endif /* PLATFORM_TYPES_H_ */
