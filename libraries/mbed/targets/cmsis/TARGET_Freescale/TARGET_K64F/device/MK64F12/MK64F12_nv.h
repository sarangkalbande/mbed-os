/*
 * Copyright (c) 2013 - 2014, Freescale Semiconductor, Inc.
 * All rights reserved.
 *
 * THIS SOFTWARE IS PROVIDED BY FREESCALE "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT
 * SHALL FREESCALE BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT
 * OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
 * IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY
 * OF SUCH DAMAGE.
 */
/*
 * WARNING! DO NOT EDIT THIS FILE DIRECTLY!
 *
 * This file was generated automatically and any changes may be lost.
 */
#ifndef __HW_NV_REGISTERS_H__
#define __HW_NV_REGISTERS_H__

#include "regs.h"

/*
 * MK64F12 NV
 *
 * Flash configuration field
 *
 * Registers defined in this header file:
 * - HW_NV_BACKKEY3 - Backdoor Comparison Key 3.
 * - HW_NV_BACKKEY2 - Backdoor Comparison Key 2.
 * - HW_NV_BACKKEY1 - Backdoor Comparison Key 1.
 * - HW_NV_BACKKEY0 - Backdoor Comparison Key 0.
 * - HW_NV_BACKKEY7 - Backdoor Comparison Key 7.
 * - HW_NV_BACKKEY6 - Backdoor Comparison Key 6.
 * - HW_NV_BACKKEY5 - Backdoor Comparison Key 5.
 * - HW_NV_BACKKEY4 - Backdoor Comparison Key 4.
 * - HW_NV_FPROT3 - Non-volatile P-Flash Protection 1 - Low Register
 * - HW_NV_FPROT2 - Non-volatile P-Flash Protection 1 - High Register
 * - HW_NV_FPROT1 - Non-volatile P-Flash Protection 0 - Low Register
 * - HW_NV_FPROT0 - Non-volatile P-Flash Protection 0 - High Register
 * - HW_NV_FSEC - Non-volatile Flash Security Register
 * - HW_NV_FOPT - Non-volatile Flash Option Register
 * - HW_NV_FEPROT - Non-volatile EERAM Protection Register
 * - HW_NV_FDPROT - Non-volatile D-Flash Protection Register
 *
 * - hw_nv_t - Struct containing all module registers.
 */

//! @name Module base addresses
//@{
#ifndef REGS_NV_BASE
#define HW_NV_INSTANCE_COUNT (1U) //!< Number of instances of the NV module.
#define REGS_NV_BASE (0x400U) //!< Base address for FTFE_FlashConfig.
#endif
//@}

//-------------------------------------------------------------------------------------------
// HW_NV_BACKKEY3 - Backdoor Comparison Key 3.
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_NV_BACKKEY3 - Backdoor Comparison Key 3. (RO)
 *
 * Reset value: 0xFFU
 */
typedef union _hw_nv_backkey3
{
    uint8_t U;
    struct _hw_nv_backkey3_bitfields
    {
        uint8_t KEY : 8;               //!< [7:0] Backdoor Comparison Key.
    } B;
} hw_nv_backkey3_t;
#endif

/*!
 * @name Constants and macros for entire NV_BACKKEY3 register
 */
//@{
#define HW_NV_BACKKEY3_ADDR      (REGS_NV_BASE + 0x0U)

#ifndef __LANGUAGE_ASM__
#define HW_NV_BACKKEY3           (*(__I hw_nv_backkey3_t *) HW_NV_BACKKEY3_ADDR)
#define HW_NV_BACKKEY3_RD        (HW_NV_BACKKEY3.U)
#endif
//@}

/*
 * Constants & macros for individual NV_BACKKEY3 bitfields
 */

/*!
 * @name Register NV_BACKKEY3, field KEY[7:0] (RO)
 */
//@{
#define BP_NV_BACKKEY3_KEY   (0U)          //!< Bit position for NV_BACKKEY3_KEY.
#define BM_NV_BACKKEY3_KEY   (0xFFU)       //!< Bit mask for NV_BACKKEY3_KEY.
#define BS_NV_BACKKEY3_KEY   (8U)          //!< Bit field size in bits for NV_BACKKEY3_KEY.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the NV_BACKKEY3_KEY field.
#define BR_NV_BACKKEY3_KEY   (HW_NV_BACKKEY3.B.KEY)
#endif
//@}

//-------------------------------------------------------------------------------------------
// HW_NV_BACKKEY2 - Backdoor Comparison Key 2.
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_NV_BACKKEY2 - Backdoor Comparison Key 2. (RO)
 *
 * Reset value: 0xFFU
 */
typedef union _hw_nv_backkey2
{
    uint8_t U;
    struct _hw_nv_backkey2_bitfields
    {
        uint8_t KEY : 8;               //!< [7:0] Backdoor Comparison Key.
    } B;
} hw_nv_backkey2_t;
#endif

/*!
 * @name Constants and macros for entire NV_BACKKEY2 register
 */
//@{
#define HW_NV_BACKKEY2_ADDR      (REGS_NV_BASE + 0x1U)

#ifndef __LANGUAGE_ASM__
#define HW_NV_BACKKEY2           (*(__I hw_nv_backkey2_t *) HW_NV_BACKKEY2_ADDR)
#define HW_NV_BACKKEY2_RD        (HW_NV_BACKKEY2.U)
#endif
//@}

/*
 * Constants & macros for individual NV_BACKKEY2 bitfields
 */

/*!
 * @name Register NV_BACKKEY2, field KEY[7:0] (RO)
 */
//@{
#define BP_NV_BACKKEY2_KEY   (0U)          //!< Bit position for NV_BACKKEY2_KEY.
#define BM_NV_BACKKEY2_KEY   (0xFFU)       //!< Bit mask for NV_BACKKEY2_KEY.
#define BS_NV_BACKKEY2_KEY   (8U)          //!< Bit field size in bits for NV_BACKKEY2_KEY.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the NV_BACKKEY2_KEY field.
#define BR_NV_BACKKEY2_KEY   (HW_NV_BACKKEY2.B.KEY)
#endif
//@}

//-------------------------------------------------------------------------------------------
// HW_NV_BACKKEY1 - Backdoor Comparison Key 1.
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_NV_BACKKEY1 - Backdoor Comparison Key 1. (RO)
 *
 * Reset value: 0xFFU
 */
typedef union _hw_nv_backkey1
{
    uint8_t U;
    struct _hw_nv_backkey1_bitfields
    {
        uint8_t KEY : 8;               //!< [7:0] Backdoor Comparison Key.
    } B;
} hw_nv_backkey1_t;
#endif

/*!
 * @name Constants and macros for entire NV_BACKKEY1 register
 */
//@{
#define HW_NV_BACKKEY1_ADDR      (REGS_NV_BASE + 0x2U)

#ifndef __LANGUAGE_ASM__
#define HW_NV_BACKKEY1           (*(__I hw_nv_backkey1_t *) HW_NV_BACKKEY1_ADDR)
#define HW_NV_BACKKEY1_RD        (HW_NV_BACKKEY1.U)
#endif
//@}

/*
 * Constants & macros for individual NV_BACKKEY1 bitfields
 */

/*!
 * @name Register NV_BACKKEY1, field KEY[7:0] (RO)
 */
//@{
#define BP_NV_BACKKEY1_KEY   (0U)          //!< Bit position for NV_BACKKEY1_KEY.
#define BM_NV_BACKKEY1_KEY   (0xFFU)       //!< Bit mask for NV_BACKKEY1_KEY.
#define BS_NV_BACKKEY1_KEY   (8U)          //!< Bit field size in bits for NV_BACKKEY1_KEY.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the NV_BACKKEY1_KEY field.
#define BR_NV_BACKKEY1_KEY   (HW_NV_BACKKEY1.B.KEY)
#endif
//@}

//-------------------------------------------------------------------------------------------
// HW_NV_BACKKEY0 - Backdoor Comparison Key 0.
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_NV_BACKKEY0 - Backdoor Comparison Key 0. (RO)
 *
 * Reset value: 0xFFU
 */
typedef union _hw_nv_backkey0
{
    uint8_t U;
    struct _hw_nv_backkey0_bitfields
    {
        uint8_t KEY : 8;               //!< [7:0] Backdoor Comparison Key.
    } B;
} hw_nv_backkey0_t;
#endif

/*!
 * @name Constants and macros for entire NV_BACKKEY0 register
 */
//@{
#define HW_NV_BACKKEY0_ADDR      (REGS_NV_BASE + 0x3U)

#ifndef __LANGUAGE_ASM__
#define HW_NV_BACKKEY0           (*(__I hw_nv_backkey0_t *) HW_NV_BACKKEY0_ADDR)
#define HW_NV_BACKKEY0_RD        (HW_NV_BACKKEY0.U)
#endif
//@}

/*
 * Constants & macros for individual NV_BACKKEY0 bitfields
 */

/*!
 * @name Register NV_BACKKEY0, field KEY[7:0] (RO)
 */
//@{
#define BP_NV_BACKKEY0_KEY   (0U)          //!< Bit position for NV_BACKKEY0_KEY.
#define BM_NV_BACKKEY0_KEY   (0xFFU)       //!< Bit mask for NV_BACKKEY0_KEY.
#define BS_NV_BACKKEY0_KEY   (8U)          //!< Bit field size in bits for NV_BACKKEY0_KEY.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the NV_BACKKEY0_KEY field.
#define BR_NV_BACKKEY0_KEY   (HW_NV_BACKKEY0.B.KEY)
#endif
//@}

//-------------------------------------------------------------------------------------------
// HW_NV_BACKKEY7 - Backdoor Comparison Key 7.
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_NV_BACKKEY7 - Backdoor Comparison Key 7. (RO)
 *
 * Reset value: 0xFFU
 */
typedef union _hw_nv_backkey7
{
    uint8_t U;
    struct _hw_nv_backkey7_bitfields
    {
        uint8_t KEY : 8;               //!< [7:0] Backdoor Comparison Key.
    } B;
} hw_nv_backkey7_t;
#endif

/*!
 * @name Constants and macros for entire NV_BACKKEY7 register
 */
//@{
#define HW_NV_BACKKEY7_ADDR      (REGS_NV_BASE + 0x4U)

#ifndef __LANGUAGE_ASM__
#define HW_NV_BACKKEY7           (*(__I hw_nv_backkey7_t *) HW_NV_BACKKEY7_ADDR)
#define HW_NV_BACKKEY7_RD        (HW_NV_BACKKEY7.U)
#endif
//@}

/*
 * Constants & macros for individual NV_BACKKEY7 bitfields
 */

/*!
 * @name Register NV_BACKKEY7, field KEY[7:0] (RO)
 */
//@{
#define BP_NV_BACKKEY7_KEY   (0U)          //!< Bit position for NV_BACKKEY7_KEY.
#define BM_NV_BACKKEY7_KEY   (0xFFU)       //!< Bit mask for NV_BACKKEY7_KEY.
#define BS_NV_BACKKEY7_KEY   (8U)          //!< Bit field size in bits for NV_BACKKEY7_KEY.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the NV_BACKKEY7_KEY field.
#define BR_NV_BACKKEY7_KEY   (HW_NV_BACKKEY7.B.KEY)
#endif
//@}

//-------------------------------------------------------------------------------------------
// HW_NV_BACKKEY6 - Backdoor Comparison Key 6.
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_NV_BACKKEY6 - Backdoor Comparison Key 6. (RO)
 *
 * Reset value: 0xFFU
 */
typedef union _hw_nv_backkey6
{
    uint8_t U;
    struct _hw_nv_backkey6_bitfields
    {
        uint8_t KEY : 8;               //!< [7:0] Backdoor Comparison Key.
    } B;
} hw_nv_backkey6_t;
#endif

/*!
 * @name Constants and macros for entire NV_BACKKEY6 register
 */
//@{
#define HW_NV_BACKKEY6_ADDR      (REGS_NV_BASE + 0x5U)

#ifndef __LANGUAGE_ASM__
#define HW_NV_BACKKEY6           (*(__I hw_nv_backkey6_t *) HW_NV_BACKKEY6_ADDR)
#define HW_NV_BACKKEY6_RD        (HW_NV_BACKKEY6.U)
#endif
//@}

/*
 * Constants & macros for individual NV_BACKKEY6 bitfields
 */

/*!
 * @name Register NV_BACKKEY6, field KEY[7:0] (RO)
 */
//@{
#define BP_NV_BACKKEY6_KEY   (0U)          //!< Bit position for NV_BACKKEY6_KEY.
#define BM_NV_BACKKEY6_KEY   (0xFFU)       //!< Bit mask for NV_BACKKEY6_KEY.
#define BS_NV_BACKKEY6_KEY   (8U)          //!< Bit field size in bits for NV_BACKKEY6_KEY.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the NV_BACKKEY6_KEY field.
#define BR_NV_BACKKEY6_KEY   (HW_NV_BACKKEY6.B.KEY)
#endif
//@}

//-------------------------------------------------------------------------------------------
// HW_NV_BACKKEY5 - Backdoor Comparison Key 5.
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_NV_BACKKEY5 - Backdoor Comparison Key 5. (RO)
 *
 * Reset value: 0xFFU
 */
typedef union _hw_nv_backkey5
{
    uint8_t U;
    struct _hw_nv_backkey5_bitfields
    {
        uint8_t KEY : 8;               //!< [7:0] Backdoor Comparison Key.
    } B;
} hw_nv_backkey5_t;
#endif

/*!
 * @name Constants and macros for entire NV_BACKKEY5 register
 */
//@{
#define HW_NV_BACKKEY5_ADDR      (REGS_NV_BASE + 0x6U)

#ifndef __LANGUAGE_ASM__
#define HW_NV_BACKKEY5           (*(__I hw_nv_backkey5_t *) HW_NV_BACKKEY5_ADDR)
#define HW_NV_BACKKEY5_RD        (HW_NV_BACKKEY5.U)
#endif
//@}

/*
 * Constants & macros for individual NV_BACKKEY5 bitfields
 */

/*!
 * @name Register NV_BACKKEY5, field KEY[7:0] (RO)
 */
//@{
#define BP_NV_BACKKEY5_KEY   (0U)          //!< Bit position for NV_BACKKEY5_KEY.
#define BM_NV_BACKKEY5_KEY   (0xFFU)       //!< Bit mask for NV_BACKKEY5_KEY.
#define BS_NV_BACKKEY5_KEY   (8U)          //!< Bit field size in bits for NV_BACKKEY5_KEY.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the NV_BACKKEY5_KEY field.
#define BR_NV_BACKKEY5_KEY   (HW_NV_BACKKEY5.B.KEY)
#endif
//@}

//-------------------------------------------------------------------------------------------
// HW_NV_BACKKEY4 - Backdoor Comparison Key 4.
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_NV_BACKKEY4 - Backdoor Comparison Key 4. (RO)
 *
 * Reset value: 0xFFU
 */
typedef union _hw_nv_backkey4
{
    uint8_t U;
    struct _hw_nv_backkey4_bitfields
    {
        uint8_t KEY : 8;               //!< [7:0] Backdoor Comparison Key.
    } B;
} hw_nv_backkey4_t;
#endif

/*!
 * @name Constants and macros for entire NV_BACKKEY4 register
 */
//@{
#define HW_NV_BACKKEY4_ADDR      (REGS_NV_BASE + 0x7U)

#ifndef __LANGUAGE_ASM__
#define HW_NV_BACKKEY4           (*(__I hw_nv_backkey4_t *) HW_NV_BACKKEY4_ADDR)
#define HW_NV_BACKKEY4_RD        (HW_NV_BACKKEY4.U)
#endif
//@}

/*
 * Constants & macros for individual NV_BACKKEY4 bitfields
 */

/*!
 * @name Register NV_BACKKEY4, field KEY[7:0] (RO)
 */
//@{
#define BP_NV_BACKKEY4_KEY   (0U)          //!< Bit position for NV_BACKKEY4_KEY.
#define BM_NV_BACKKEY4_KEY   (0xFFU)       //!< Bit mask for NV_BACKKEY4_KEY.
#define BS_NV_BACKKEY4_KEY   (8U)          //!< Bit field size in bits for NV_BACKKEY4_KEY.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the NV_BACKKEY4_KEY field.
#define BR_NV_BACKKEY4_KEY   (HW_NV_BACKKEY4.B.KEY)
#endif
//@}

//-------------------------------------------------------------------------------------------
// HW_NV_FPROT3 - Non-volatile P-Flash Protection 1 - Low Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_NV_FPROT3 - Non-volatile P-Flash Protection 1 - Low Register (RO)
 *
 * Reset value: 0xFFU
 */
typedef union _hw_nv_fprot3
{
    uint8_t U;
    struct _hw_nv_fprot3_bitfields
    {
        uint8_t PROT : 8;              //!< [7:0] P-Flash Region Protect
    } B;
} hw_nv_fprot3_t;
#endif

/*!
 * @name Constants and macros for entire NV_FPROT3 register
 */
//@{
#define HW_NV_FPROT3_ADDR        (REGS_NV_BASE + 0x8U)

#ifndef __LANGUAGE_ASM__
#define HW_NV_FPROT3             (*(__I hw_nv_fprot3_t *) HW_NV_FPROT3_ADDR)
#define HW_NV_FPROT3_RD          (HW_NV_FPROT3.U)
#endif
//@}

/*
 * Constants & macros for individual NV_FPROT3 bitfields
 */

/*!
 * @name Register NV_FPROT3, field PROT[7:0] (RO)
 */
//@{
#define BP_NV_FPROT3_PROT    (0U)          //!< Bit position for NV_FPROT3_PROT.
#define BM_NV_FPROT3_PROT    (0xFFU)       //!< Bit mask for NV_FPROT3_PROT.
#define BS_NV_FPROT3_PROT    (8U)          //!< Bit field size in bits for NV_FPROT3_PROT.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the NV_FPROT3_PROT field.
#define BR_NV_FPROT3_PROT    (HW_NV_FPROT3.B.PROT)
#endif
//@}

//-------------------------------------------------------------------------------------------
// HW_NV_FPROT2 - Non-volatile P-Flash Protection 1 - High Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_NV_FPROT2 - Non-volatile P-Flash Protection 1 - High Register (RO)
 *
 * Reset value: 0xFFU
 */
typedef union _hw_nv_fprot2
{
    uint8_t U;
    struct _hw_nv_fprot2_bitfields
    {
        uint8_t PROT : 8;              //!< [7:0] P-Flash Region Protect
    } B;
} hw_nv_fprot2_t;
#endif

/*!
 * @name Constants and macros for entire NV_FPROT2 register
 */
//@{
#define HW_NV_FPROT2_ADDR        (REGS_NV_BASE + 0x9U)

#ifndef __LANGUAGE_ASM__
#define HW_NV_FPROT2             (*(__I hw_nv_fprot2_t *) HW_NV_FPROT2_ADDR)
#define HW_NV_FPROT2_RD          (HW_NV_FPROT2.U)
#endif
//@}

/*
 * Constants & macros for individual NV_FPROT2 bitfields
 */

/*!
 * @name Register NV_FPROT2, field PROT[7:0] (RO)
 */
//@{
#define BP_NV_FPROT2_PROT    (0U)          //!< Bit position for NV_FPROT2_PROT.
#define BM_NV_FPROT2_PROT    (0xFFU)       //!< Bit mask for NV_FPROT2_PROT.
#define BS_NV_FPROT2_PROT    (8U)          //!< Bit field size in bits for NV_FPROT2_PROT.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the NV_FPROT2_PROT field.
#define BR_NV_FPROT2_PROT    (HW_NV_FPROT2.B.PROT)
#endif
//@}

//-------------------------------------------------------------------------------------------
// HW_NV_FPROT1 - Non-volatile P-Flash Protection 0 - Low Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_NV_FPROT1 - Non-volatile P-Flash Protection 0 - Low Register (RO)
 *
 * Reset value: 0xFFU
 */
typedef union _hw_nv_fprot1
{
    uint8_t U;
    struct _hw_nv_fprot1_bitfields
    {
        uint8_t PROT : 8;              //!< [7:0] P-Flash Region Protect
    } B;
} hw_nv_fprot1_t;
#endif

/*!
 * @name Constants and macros for entire NV_FPROT1 register
 */
//@{
#define HW_NV_FPROT1_ADDR        (REGS_NV_BASE + 0xAU)

#ifndef __LANGUAGE_ASM__
#define HW_NV_FPROT1             (*(__I hw_nv_fprot1_t *) HW_NV_FPROT1_ADDR)
#define HW_NV_FPROT1_RD          (HW_NV_FPROT1.U)
#endif
//@}

/*
 * Constants & macros for individual NV_FPROT1 bitfields
 */

/*!
 * @name Register NV_FPROT1, field PROT[7:0] (RO)
 */
//@{
#define BP_NV_FPROT1_PROT    (0U)          //!< Bit position for NV_FPROT1_PROT.
#define BM_NV_FPROT1_PROT    (0xFFU)       //!< Bit mask for NV_FPROT1_PROT.
#define BS_NV_FPROT1_PROT    (8U)          //!< Bit field size in bits for NV_FPROT1_PROT.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the NV_FPROT1_PROT field.
#define BR_NV_FPROT1_PROT    (HW_NV_FPROT1.B.PROT)
#endif
//@}

//-------------------------------------------------------------------------------------------
// HW_NV_FPROT0 - Non-volatile P-Flash Protection 0 - High Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_NV_FPROT0 - Non-volatile P-Flash Protection 0 - High Register (RO)
 *
 * Reset value: 0xFFU
 */
typedef union _hw_nv_fprot0
{
    uint8_t U;
    struct _hw_nv_fprot0_bitfields
    {
        uint8_t PROT : 8;              //!< [7:0] P-Flash Region Protect
    } B;
} hw_nv_fprot0_t;
#endif

/*!
 * @name Constants and macros for entire NV_FPROT0 register
 */
//@{
#define HW_NV_FPROT0_ADDR        (REGS_NV_BASE + 0xBU)

#ifndef __LANGUAGE_ASM__
#define HW_NV_FPROT0             (*(__I hw_nv_fprot0_t *) HW_NV_FPROT0_ADDR)
#define HW_NV_FPROT0_RD          (HW_NV_FPROT0.U)
#endif
//@}

/*
 * Constants & macros for individual NV_FPROT0 bitfields
 */

/*!
 * @name Register NV_FPROT0, field PROT[7:0] (RO)
 */
//@{
#define BP_NV_FPROT0_PROT    (0U)          //!< Bit position for NV_FPROT0_PROT.
#define BM_NV_FPROT0_PROT    (0xFFU)       //!< Bit mask for NV_FPROT0_PROT.
#define BS_NV_FPROT0_PROT    (8U)          //!< Bit field size in bits for NV_FPROT0_PROT.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the NV_FPROT0_PROT field.
#define BR_NV_FPROT0_PROT    (HW_NV_FPROT0.B.PROT)
#endif
//@}

//-------------------------------------------------------------------------------------------
// HW_NV_FSEC - Non-volatile Flash Security Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_NV_FSEC - Non-volatile Flash Security Register (RO)
 *
 * Reset value: 0xFFU
 */
typedef union _hw_nv_fsec
{
    uint8_t U;
    struct _hw_nv_fsec_bitfields
    {
        uint8_t SEC : 2;               //!< [1:0] Flash Security
        uint8_t FSLACC : 2;            //!< [3:2] Freescale Failure Analysis Access Code
        uint8_t MEEN : 2;              //!< [5:4]
        uint8_t KEYEN : 2;             //!< [7:6] Backdoor Key Security Enable
    } B;
} hw_nv_fsec_t;
#endif

/*!
 * @name Constants and macros for entire NV_FSEC register
 */
//@{
#define HW_NV_FSEC_ADDR          (REGS_NV_BASE + 0xCU)

#ifndef __LANGUAGE_ASM__
#define HW_NV_FSEC               (*(__I hw_nv_fsec_t *) HW_NV_FSEC_ADDR)
#define HW_NV_FSEC_RD            (HW_NV_FSEC.U)
#endif
//@}

/*
 * Constants & macros for individual NV_FSEC bitfields
 */

/*!
 * @name Register NV_FSEC, field SEC[1:0] (RO)
 */
//@{
#define BP_NV_FSEC_SEC       (0U)          //!< Bit position for NV_FSEC_SEC.
#define BM_NV_FSEC_SEC       (0x03U)       //!< Bit mask for NV_FSEC_SEC.
#define BS_NV_FSEC_SEC       (2U)          //!< Bit field size in bits for NV_FSEC_SEC.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the NV_FSEC_SEC field.
#define BR_NV_FSEC_SEC       (HW_NV_FSEC.B.SEC)
#endif
//@}

/*!
 * @name Register NV_FSEC, field FSLACC[3:2] (RO)
 */
//@{
#define BP_NV_FSEC_FSLACC    (2U)          //!< Bit position for NV_FSEC_FSLACC.
#define BM_NV_FSEC_FSLACC    (0x0CU)       //!< Bit mask for NV_FSEC_FSLACC.
#define BS_NV_FSEC_FSLACC    (2U)          //!< Bit field size in bits for NV_FSEC_FSLACC.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the NV_FSEC_FSLACC field.
#define BR_NV_FSEC_FSLACC    (HW_NV_FSEC.B.FSLACC)
#endif
//@}

/*!
 * @name Register NV_FSEC, field MEEN[5:4] (RO)
 */
//@{
#define BP_NV_FSEC_MEEN      (4U)          //!< Bit position for NV_FSEC_MEEN.
#define BM_NV_FSEC_MEEN      (0x30U)       //!< Bit mask for NV_FSEC_MEEN.
#define BS_NV_FSEC_MEEN      (2U)          //!< Bit field size in bits for NV_FSEC_MEEN.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the NV_FSEC_MEEN field.
#define BR_NV_FSEC_MEEN      (HW_NV_FSEC.B.MEEN)
#endif
//@}

/*!
 * @name Register NV_FSEC, field KEYEN[7:6] (RO)
 */
//@{
#define BP_NV_FSEC_KEYEN     (6U)          //!< Bit position for NV_FSEC_KEYEN.
#define BM_NV_FSEC_KEYEN     (0xC0U)       //!< Bit mask for NV_FSEC_KEYEN.
#define BS_NV_FSEC_KEYEN     (2U)          //!< Bit field size in bits for NV_FSEC_KEYEN.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the NV_FSEC_KEYEN field.
#define BR_NV_FSEC_KEYEN     (HW_NV_FSEC.B.KEYEN)
#endif
//@}

//-------------------------------------------------------------------------------------------
// HW_NV_FOPT - Non-volatile Flash Option Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_NV_FOPT - Non-volatile Flash Option Register (RO)
 *
 * Reset value: 0xFFU
 */
typedef union _hw_nv_fopt
{
    uint8_t U;
    struct _hw_nv_fopt_bitfields
    {
        uint8_t LPBOOT : 1;            //!< [0]
        uint8_t EZPORT_DIS : 1;        //!< [1]
        uint8_t RESERVED0 : 6;         //!< [7:2]
    } B;
} hw_nv_fopt_t;
#endif

/*!
 * @name Constants and macros for entire NV_FOPT register
 */
//@{
#define HW_NV_FOPT_ADDR          (REGS_NV_BASE + 0xDU)

#ifndef __LANGUAGE_ASM__
#define HW_NV_FOPT               (*(__I hw_nv_fopt_t *) HW_NV_FOPT_ADDR)
#define HW_NV_FOPT_RD            (HW_NV_FOPT.U)
#endif
//@}

/*
 * Constants & macros for individual NV_FOPT bitfields
 */

/*!
 * @name Register NV_FOPT, field LPBOOT[0] (RO)
 */
//@{
#define BP_NV_FOPT_LPBOOT    (0U)          //!< Bit position for NV_FOPT_LPBOOT.
#define BM_NV_FOPT_LPBOOT    (0x01U)       //!< Bit mask for NV_FOPT_LPBOOT.
#define BS_NV_FOPT_LPBOOT    (1U)          //!< Bit field size in bits for NV_FOPT_LPBOOT.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the NV_FOPT_LPBOOT field.
#define BR_NV_FOPT_LPBOOT    (BITBAND_ACCESS8(HW_NV_FOPT_ADDR, BP_NV_FOPT_LPBOOT))
#endif
//@}

/*!
 * @name Register NV_FOPT, field EZPORT_DIS[1] (RO)
 */
//@{
#define BP_NV_FOPT_EZPORT_DIS (1U)         //!< Bit position for NV_FOPT_EZPORT_DIS.
#define BM_NV_FOPT_EZPORT_DIS (0x02U)      //!< Bit mask for NV_FOPT_EZPORT_DIS.
#define BS_NV_FOPT_EZPORT_DIS (1U)         //!< Bit field size in bits for NV_FOPT_EZPORT_DIS.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the NV_FOPT_EZPORT_DIS field.
#define BR_NV_FOPT_EZPORT_DIS (BITBAND_ACCESS8(HW_NV_FOPT_ADDR, BP_NV_FOPT_EZPORT_DIS))
#endif
//@}

//-------------------------------------------------------------------------------------------
// HW_NV_FEPROT - Non-volatile EERAM Protection Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_NV_FEPROT - Non-volatile EERAM Protection Register (RO)
 *
 * Reset value: 0xFFU
 */
typedef union _hw_nv_feprot
{
    uint8_t U;
    struct _hw_nv_feprot_bitfields
    {
        uint8_t EPROT : 8;             //!< [7:0]
    } B;
} hw_nv_feprot_t;
#endif

/*!
 * @name Constants and macros for entire NV_FEPROT register
 */
//@{
#define HW_NV_FEPROT_ADDR        (REGS_NV_BASE + 0xEU)

#ifndef __LANGUAGE_ASM__
#define HW_NV_FEPROT             (*(__I hw_nv_feprot_t *) HW_NV_FEPROT_ADDR)
#define HW_NV_FEPROT_RD          (HW_NV_FEPROT.U)
#endif
//@}

/*
 * Constants & macros for individual NV_FEPROT bitfields
 */

/*!
 * @name Register NV_FEPROT, field EPROT[7:0] (RO)
 */
//@{
#define BP_NV_FEPROT_EPROT   (0U)          //!< Bit position for NV_FEPROT_EPROT.
#define BM_NV_FEPROT_EPROT   (0xFFU)       //!< Bit mask for NV_FEPROT_EPROT.
#define BS_NV_FEPROT_EPROT   (8U)          //!< Bit field size in bits for NV_FEPROT_EPROT.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the NV_FEPROT_EPROT field.
#define BR_NV_FEPROT_EPROT   (HW_NV_FEPROT.B.EPROT)
#endif
//@}

//-------------------------------------------------------------------------------------------
// HW_NV_FDPROT - Non-volatile D-Flash Protection Register
//-------------------------------------------------------------------------------------------

#ifndef __LANGUAGE_ASM__
/*!
 * @brief HW_NV_FDPROT - Non-volatile D-Flash Protection Register (RO)
 *
 * Reset value: 0xFFU
 */
typedef union _hw_nv_fdprot
{
    uint8_t U;
    struct _hw_nv_fdprot_bitfields
    {
        uint8_t DPROT : 8;             //!< [7:0] D-Flash Region Protect
    } B;
} hw_nv_fdprot_t;
#endif

/*!
 * @name Constants and macros for entire NV_FDPROT register
 */
//@{
#define HW_NV_FDPROT_ADDR        (REGS_NV_BASE + 0xFU)

#ifndef __LANGUAGE_ASM__
#define HW_NV_FDPROT             (*(__I hw_nv_fdprot_t *) HW_NV_FDPROT_ADDR)
#define HW_NV_FDPROT_RD          (HW_NV_FDPROT.U)
#endif
//@}

/*
 * Constants & macros for individual NV_FDPROT bitfields
 */

/*!
 * @name Register NV_FDPROT, field DPROT[7:0] (RO)
 */
//@{
#define BP_NV_FDPROT_DPROT   (0U)          //!< Bit position for NV_FDPROT_DPROT.
#define BM_NV_FDPROT_DPROT   (0xFFU)       //!< Bit mask for NV_FDPROT_DPROT.
#define BS_NV_FDPROT_DPROT   (8U)          //!< Bit field size in bits for NV_FDPROT_DPROT.

#ifndef __LANGUAGE_ASM__
//! @brief Read current value of the NV_FDPROT_DPROT field.
#define BR_NV_FDPROT_DPROT   (HW_NV_FDPROT.B.DPROT)
#endif
//@}

//-------------------------------------------------------------------------------------------
// hw_nv_t - module struct
//-------------------------------------------------------------------------------------------
/*!
 * @brief All NV module registers.
 */
#ifndef __LANGUAGE_ASM__
#pragma pack(1)
typedef struct _hw_nv
{
    __I hw_nv_backkey3_t BACKKEY3;         //!< [0x0] Backdoor Comparison Key 3.
    __I hw_nv_backkey2_t BACKKEY2;         //!< [0x1] Backdoor Comparison Key 2.
    __I hw_nv_backkey1_t BACKKEY1;         //!< [0x2] Backdoor Comparison Key 1.
    __I hw_nv_backkey0_t BACKKEY0;         //!< [0x3] Backdoor Comparison Key 0.
    __I hw_nv_backkey7_t BACKKEY7;         //!< [0x4] Backdoor Comparison Key 7.
    __I hw_nv_backkey6_t BACKKEY6;         //!< [0x5] Backdoor Comparison Key 6.
    __I hw_nv_backkey5_t BACKKEY5;         //!< [0x6] Backdoor Comparison Key 5.
    __I hw_nv_backkey4_t BACKKEY4;         //!< [0x7] Backdoor Comparison Key 4.
    __I hw_nv_fprot3_t FPROT3;             //!< [0x8] Non-volatile P-Flash Protection 1 - Low Register
    __I hw_nv_fprot2_t FPROT2;             //!< [0x9] Non-volatile P-Flash Protection 1 - High Register
    __I hw_nv_fprot1_t FPROT1;             //!< [0xA] Non-volatile P-Flash Protection 0 - Low Register
    __I hw_nv_fprot0_t FPROT0;             //!< [0xB] Non-volatile P-Flash Protection 0 - High Register
    __I hw_nv_fsec_t FSEC;                 //!< [0xC] Non-volatile Flash Security Register
    __I hw_nv_fopt_t FOPT;                 //!< [0xD] Non-volatile Flash Option Register
    __I hw_nv_feprot_t FEPROT;             //!< [0xE] Non-volatile EERAM Protection Register
    __I hw_nv_fdprot_t FDPROT;             //!< [0xF] Non-volatile D-Flash Protection Register
} hw_nv_t;
#pragma pack()

//! @brief Macro to access all NV registers.
//! @return Reference (not a pointer) to the registers struct. To get a pointer to the struct,
//!     use the '&' operator, like <code>&HW_NV</code>.
#define HW_NV          (*(hw_nv_t *) REGS_NV_BASE)
#endif

#endif // __HW_NV_REGISTERS_H__
// v22/130726/0.9
// EOF
