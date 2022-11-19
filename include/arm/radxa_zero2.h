/*
 * Author: Ken <ken@radxa.com>
 * Copyright (c) Radxa Limited.
 *
 * SPDX-License-Identifier: MIT
 */

#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include "mraa_internal.h"

#define MRAA_RADXA_ZERO2_GPIO_COUNT 27
#define MRAA_RADXA_ZERO2_I2C_COUNT  3
#define MRAA_RADXA_ZERO2_SPI_COUNT  1
#define MRAA_RADXA_ZERO2_UART_COUNT 3
#define MRAA_RADXA_ZERO2_PWM_COUNT  4
#define MRAA_RADXA_ZERO2_PIN_COUNT  40

mraa_board_t *
        mraa_radxa_zero2();

#ifdef __cplusplus
}
#endif
