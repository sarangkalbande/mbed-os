/*
 * Copyright (c) 2013 - 2014, Freescale Semiconductor, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * o Redistributions of source code must retain the above copyright notice, this list
 *   of conditions and the following disclaimer.
 *
 * o Redistributions in binary form must reproduce the above copyright notice, this
 *   list of conditions and the following disclaimer in the documentation and/or
 *   other materials provided with the distribution.
 *
 * o Neither the name of Freescale Semiconductor, Inc. nor the names of its
 *   contributors may be used to endorse or promote products derived from this
 *   software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef __FSL_SGTL_5000_DRIVER_H__
#define __FSL_SGTL_5000_DRIVER_H__

#include "fsl_i2c_master_driver.h"

/*!
 * @addtogroup sgtl5000
 * @{
 */

/*! @file */

/*******************************************************************************
 * Definitions
 ******************************************************************************/

/*! @brief Define the register address of sgtl5000. */
#define CHIP_ID 0x0000
#define CHIP_DIG_POWER 0x0002
#define CHIP_CLK_CTRL 0x0004
#define CHIP_I2S_CTRL 0x0006
#define CHIP_SSS_CTRL 0x000A
#define CHIP_ADCDAC_CTRL 0x000E
#define CHIP_DAC_VOL 0x0010
#define CHIP_PAD_STRENGTH 0x0014
#define CHIP_ANA_ADC_CTRL 0x0020
#define CHIP_ANA_HP_CTRL 0x0022
#define CHIP_ANA_CTRL 0x0024
#define CHIP_LINREG_CTRL 0x0026
#define CHIP_REF_CTRL 0x0028
#define CHIP_MIC_CTRL 0x002A
#define CHIP_LINE_OUT_CTRL 0x002C
#define CHIP_LINE_OUT_VOL 0x002E
#define CHIP_ANA_POWER 0x0030
#define CHIP_PLL_CTRL 0x0032
#define CHIP_CLK_TOP_CTRL 0x0034
#define CHIP_ANA_STATUS 0x0036
#define CHIP_ANA_TEST2 0x003A
#define CHIP_SHORT_CTRL 0x003C
#define DAP_CONTROL 0x0100
#define DAP_PEQ 0x0102
#define DAP_BASS_ENHANCE 0x0104
#define DAP_BASS_ENHANCE_CTRL 0x0106
#define DAP_AUDIO_EQ 0x0108
#define DAP_SGTL_SURROUND 0x010A
#define DAP_FILTER_COEF_ACCESS 0x010C
#define DAP_COEF_WR_B0_MSB 0x010E
#define DAP_COEF_WR_B0_LSB 0x0110
#define DAP_AUDIO_EQ_BASS_BAND0 0x0116
#define DAP_AUDIO_EQ_BAND1 0x0118
#define DAP_AUDIO_EQ_BAND2 0x011A
#define DAP_AUDIO_EQ_BAND3 0x011C
#define DAP_AUDIO_EQ_TREBLE_BAND4 0x011E
#define DAP_MAIN_CHAN 0x0120
#define DAP_MIX_CHAN 0x0122
#define DAP_AVC_CTRL 0x0124
#define DAP_AVC_THRESHOLD 0x0126
#define DAP_AVC_ATTACK 0x0128
#define DAP_AVC_DECAY 0x012A
#define DAP_COEF_WR_B1_MSB 0x012C
#define DAP_COEF_WR_B1_LSB 0x012E
#define DAP_COEF_WR_B2_MSB 0x0130
#define DAP_COEF_WR_B2_LSB 0x0132
#define DAP_COEF_WR_A1_MSB 0x0134
#define DAP_COEF_WR_A1_LSB 0x0136
#define DAP_COEF_WR_A2_MSB 0x0138
#define DAP_COEF_WR_A2_LSB 0x013A
/*! @brief SGTL5000 I2C address. */
#define SGTL5000_I2C_ADDR 0x0A

/*! @brief Sgtl5000 return status. */
typedef enum _sgtl5000_status
{
    kStatus_SGTL_Success,
    kStatus_SGTL_Fail
} sgtl_status_t;

/*! @brief sgtl configure definition. */
typedef struct sgtl_handler
{
    /* I2C revelant definition. */
    i2c_device_t device; /*!< I2C device setting */
    i2c_master_t master; /*!< I2C master setting */
} sgtl_handler_t;

/*******************************************************************************
 * API
 ******************************************************************************/
#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @brief sgtl5000 initialize function.
 *
 * This function would call sgtl_i2c_init(), and in this function, some configurations
 * are fixed. The second parameter is NULL to sgtl5000 in this version. If users want
 * to change the settings, they have to use sgtl_write_reg() or sgtl_modify_reg()
 * to set the register value of sgtl5000.
 * @param handler Sgtl5000 handler structure.
 * @param codec_config sgtl5000 configuration structure. This parameter now is NULL.
 */
sgtl_status_t sgtl_init(sgtl_handler_t *handler, void *codec_config);

/*!
 * @brief Initialize the I2C module in sgtl.
 *
 * Sgtl now uses i2c to write/read the registers in it.
 * @param handler Sgtl5000 handler structure.
 */
sgtl_status_t sgtl_i2c_init(sgtl_handler_t *handler);

/*!
 * @brief Deinit the sgtl5000 codec. Mainly used to close the I2C controller.
 * @param handler Sgtl5000 handler structure pointer.
 */
sgtl_status_t sgtl_deinit(sgtl_handler_t *handler);

/*!
 * @brief Configure the data format of audio data.
 *
 * This function would configure the registers about the sample rate, bit depths.
 * @param handler Sgtl5000 handler structure pointer.
 * @param mclk Master clock frequency of I2S.
 * @param sample_rate Sample rate of audio file running in sgtl5000. Sgtl5000 now
 * supports 8k, 11.025k, 12k, 16k, 22.05k, 24k, 32k, 44.1k, 48k and 96k sample rate.
 * @param bits Bit depth of audio file (Sgtl5000 only supports 16bit, 20bit, 24bit
 * and 32 bit in HW).
 */
sgtl_status_t sgtl_configure_data_format(sgtl_handler_t *handler, uint32_t mclk, uint32_t sample_rate, uint8_t bits);
 
/*!
 * @brief Write register to sgtl using I2C.
 * @param handler Sgtl5000 handler structure.
 * @param reg The register address in sgtl.
 * @param val Value needs to write into the register.
 */
sgtl_status_t sgtl_write_reg(sgtl_handler_t *handler, uint16_t reg, uint16_t val);

/*!
 * @brief Read register from sgtl using I2C.
 * @param handler Sgtl5000 handler structure.
 * @param reg The register address in sgtl.
 * @param val Value written to.
 */
sgtl_status_t sgtl_read_reg(sgtl_handler_t * handler, uint16_t reg, uint16_t *val);

/*!
 * @brief Modify some bits in the register using I2C.
 * @param handler Sgtl5000 handler structure.
 * @param reg The register address in sgtl.
 * @param mask The mask code for the bits want to write. The bit you want to write should be 0.
 * @param val Value needs to write into the register.
 */
sgtl_status_t sgtl_modify_reg(sgtl_handler_t * handler, uint16_t reg,  uint16_t mask, uint16_t val);

#if defined(__cplusplus)
}
#endif

/*! @} */

#endif/* __FSL_SGTL_5000_DRIVER_H__ */

/*******************************************************************************
 * API
 ******************************************************************************/

