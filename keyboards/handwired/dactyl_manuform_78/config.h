// Copyright 2024 leviport (@leviport)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/* key matrix size */
#define MATRIX_ROWS 12 //6 per hand
#define MATRIX_COLS 6

/* key matrix pins */
#define MATRIX_ROW_PINS
#define MATRIX_COL_PINS
#define MATRIX_ROW_PINS_RIGHT
#define MATRIX_COL_PINS_RIGHT

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* primary hand pin (high is left by default) */
#define SPLIT_HAND_PIN { GP25 }

/* split full duplex serial setup stuff */
#define MASTER_LEFT
#define SPLIT_TRANSPORT_MIRROR
#define SPLIT_POINTING_ENABLE
#define SPLIT_LAYER_STATE_ENABLE
#define SPLIT_MODS_ENABLE
#define SPLIT_HAPTIC_ENABLE
#define SERIAL_PIO_USE_PIO1
#define SERIAL_USART_FULL_DUPLEX    // Enable full duplex operation mode.
#define SERIAL_USART_TX_PIN GP0     // USART TX pin
#define SERIAL_USART_RX_PIN GP1     // USART RX pin

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
