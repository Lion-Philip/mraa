/*
 * Author: Nascs <nascs@vamrs.com>
 * Copyright (c) 2019 Vamrs Corporation.
 *
 * SPDX-License-Identifier: MIT
 */

#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include "mraa_internal.h"

#define MRAA_RADXA_CM3_GPIO_COUNT 27
#define MRAA_RADXA_CM3_I2C_COUNT  2
#define MRAA_RADXA_CM3_SPI_COUNT  2
#define MRAA_RADXA_CM3_UART_COUNT 1
#define MRAA_RADXA_CM3_PWM_COUNT  5
#define MRAA_RADXA_CM3_AIO_COUNT  1
#define MRAA_RADXA_CM3_PIN_COUNT  40

mraa_board_t *
        mraa_radxa_cm3();

#ifdef __cplusplus
}
#endif
