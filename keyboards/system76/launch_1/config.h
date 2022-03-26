<<<<<<< HEAD
#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x3384
#define PRODUCT_ID      0x0001
#define DEVICE_VER      0x0001
#define MANUFACTURER    System76
#define PRODUCT         Launch Configurable Keyboard (launch_1)
#define DESCRIPTION     Launch Configurable Keyboard (launch_1)

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 14

/* key matrix pins */
=======
/*
 *  Copyright (C) 2021  System76
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#pragma once

#include "config_common.h"

// USB device descriptor parameter
#define VENDOR_ID    0x3384
#define PRODUCT_ID   0x0001
#define DEVICE_VER   0x0001
#define MANUFACTURER System76
#define PRODUCT      Launch Configurable Keyboard (launch_1)

// Key matrix size
#define MATRIX_ROWS 6
#define MATRIX_COLS 14

/*
 * Key matrix pins
 * ROWS: AVR pins used for rows, top to bottom
 * COLS: AVR pins used for columns, left to right
 */
>>>>>>> 084df6a288503709ddde2bfa0d64e1677fe32b29
#define MATRIX_ROW_PINS { F0, F1, F4, F5, F6, F7 }
#define MATRIX_COL_PINS { D7, C7, C6, B6, B5, B4, D6, D4, E6, D5, D3, D2, B7, B0 }
#define UNUSED_PINS

<<<<<<< HEAD
/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

// NKRO must be used
#define FORCE_NKRO

#if RGBLIGHT_ENABLE
    #define RGB_DI_PIN E2
    #define RGBLED_NUM 84
    #define RGBLIGHT_ANIMATIONS
    // Limit brightness to support USB-A at 0.5A
    //TODO: do this dynamically based on power source
    #define RGBLIGHT_LIMIT_VAL 176
#endif

#if RGB_MATRIX_ENABLE
    #define RGB_DI_PIN E2
    #define DRIVER_LED_TOTAL 84
    #define RGB_MATRIX_KEYPRESSES // reacts to keypresses
    //#define RGB_MATRIX_KEYRELEASES // reacts to keyreleases (instead of keypresses)
    //#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
    #define RGB_DISABLE_TIMEOUT 0 // number of milliseconds to wait until rgb automatically turns off
    #define RGB_DISABLE_AFTER_TIMEOUT 0 // OBSOLETE: number of ticks to wait until disabling effects
    #define RGB_DISABLE_WHEN_USB_SUSPENDED true // turn off effects when suspended
    #define RGB_MATRIX_MAXIMUM_BRIGHTNESS 176 // limits maximum brightness of LEDs to 200 out of 255. If not defined maximum brightness is set to 255
    #define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_RAINBOW_MOVING_CHEVRON // Sets the default mode, if none has been set
    #define RGB_MATRIX_STARTUP_HUE 142 // 200 degrees
    #define RGB_MATRIX_STARTUP_SAT 255
    #define RGB_MATRIX_STARTUP_VAL RGB_MATRIX_MAXIMUM_BRIGHTNESS
    #define RGB_MATRIX_STARTUP_SPD 127
    #define RGB_MATRIX_DISABLE_KEYCODES // disables control of rgb matrix by keycodes (must use code functions to control the feature)
#endif

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

// EEPROM {
#define EEPROM_SIZE 1024

// TODO: refactor with new user EEPROM code (coming soon)
=======
/*
 * Diode Direction
 * COL2ROW = COL => Anode (+), ROW => Cathode (-)
 * ROW2COL = ROW => Anode (+), COL => Cathode (-)
 */
#define DIODE_DIRECTION COL2ROW

// Set 0 if debouncing isn't needed
#define DEBOUNCE 5

#ifdef RGB_MATRIX_ENABLE
#    define RGB_DI_PIN E2
#    define DRIVER_LED_TOTAL 84
#    define RGB_MATRIX_KEYPRESSES                                      // Reacts to keypresses
// #    define RGB_MATRIX_KEYRELEASES                                     // Reacts to keyreleases (instead of keypresses)
// #    define RGB_MATRIX_FRAMEBUFFER_EFFECTS                             // Enables framebuffer effects
#    define RGB_DISABLE_TIMEOUT 0                                      // Number of milliseconds to wait until RGB automatically turns off
#    define RGB_DISABLE_AFTER_TIMEOUT 0                                // OBSOLETE: Number of ticks to wait until disabling effects
#    define RGB_DISABLE_WHEN_USB_SUSPENDED                             // Turns off effects when suspended
// Limit brightness to support USB-A at 0.5 A
// TODO: Do this dynamically based on power source
#    define RGB_MATRIX_MAXIMUM_BRIGHTNESS 176                          // Limits maximum brightness of LEDs to 176 out of 255. If not defined, maximum brightness is set to 255
#    define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_RAINBOW_MOVING_CHEVRON  // Sets the default mode, if none has been set
#    define RGB_MATRIX_STARTUP_HUE 142                                 // Sets the default hue value, if none has been set
#    define RGB_MATRIX_STARTUP_SAT 255                                 // Sets the default saturation value, if none has been set
#    define RGB_MATRIX_STARTUP_VAL RGB_MATRIX_MAXIMUM_BRIGHTNESS       // Sets the default brightness value, if none has been set
#    define RGB_MATRIX_STARTUP_SPD 127                                 // Sets the default animation speed, if none has been set
#    define RGB_MATRIX_DISABLE_KEYCODES                                // Disables control of rgb matrix by keycodes (must use code functions to control the feature)

#    define ENABLE_RGB_MATRIX_CYCLE_ALL
#    define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#    define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
#    define ENABLE_RGB_MATRIX_CYCLE_OUT_IN
#    define ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
#    define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
#    define ENABLE_RGB_MATRIX_CYCLE_PINWHEEL
#    define ENABLE_RGB_MATRIX_CYCLE_SPIRAL
#    define ENABLE_RGB_MATRIX_RAINDROPS
#    define ENABLE_RGB_MATRIX_SPLASH
#    define ENABLE_RGB_MATRIX_MULTISPLASH
#endif  // RGB_MATRIX_ENABLE

// Mechanical locking support; use KC_LCAP, KC_LNUM, or KC_LSCR instead in keymap
#define LOCKING_SUPPORT_ENABLE

// Locking resynchronize hack
#define LOCKING_RESYNC_ENABLE

// I2C {
#define F_SCL 100000UL // Run I2C bus at 100 kHz
#define I2C_START_RETRY_COUNT 20
#define I2C_TIMEOUT 100 // milliseconds
// } I2C

// EEPROM {
#define EEPROM_SIZE 1024
// TODO: Refactor with new user EEPROM code (coming soon)
>>>>>>> 084df6a288503709ddde2bfa0d64e1677fe32b29
#define EEPROM_MAGIC 0x76EC
#define EEPROM_MAGIC_ADDR 64
// Bump this every time we change what we store
// This will automatically reset the EEPROM with defaults
// and avoid loading invalid data from the EEPROM
#define EEPROM_VERSION 0x02
#define EEPROM_VERSION_ADDR (EEPROM_MAGIC_ADDR + 2)
// } EEPROM

<<<<<<< HEAD
// Dynamic keyboard support {
#define DYNAMIC_KEYMAP_LAYER_COUNT 4
// Dynamic keymap starts after EEPROM version
#define DYNAMIC_KEYMAP_EEPROM_ADDR (EEPROM_VERSION_ADDR + 1)
#define DYNAMIC_KEYMAP_EEPROM_SIZE (DYNAMIC_KEYMAP_LAYER_COUNT * MATRIX_ROWS * MATRIX_COLS * 2)
// Dynamic macro starts after dynamic keymaps, it is disabled
#define DYNAMIC_KEYMAP_MACRO_EEPROM_ADDR (DYNAMIC_KEYMAP_EEPROM_ADDR + DYNAMIC_KEYMAP_EEPROM_SIZE)
#define DYNAMIC_KEYMAP_MACRO_EEPROM_SIZE 0
#define DYNAMIC_KEYMAP_MACRO_COUNT 0
// } Dynamic keyboard support
=======
// Dynamic keymap {
#define DYNAMIC_KEYMAP_LAYER_COUNT 4
#define DYNAMIC_KEYMAP_MACRO_COUNT 0
// Dynamic keymap starts after EEPROM version
#define DYNAMIC_KEYMAP_EEPROM_ADDR (EEPROM_VERSION_ADDR + 1)
// Dynamic macro starts after dynamic keymaps, it is disabled
#define DYNAMIC_KEYMAP_MACRO_EEPROM_ADDR (DYNAMIC_KEYMAP_EEPROM_ADDR + (DYNAMIC_KEYMAP_LAYER_COUNT * MATRIX_ROWS * MATRIX_COLS * 2))
#define DYNAMIC_KEYMAP_MACRO_EEPROM_SIZE 0
// } Dynamic keymap
>>>>>>> 084df6a288503709ddde2bfa0d64e1677fe32b29

// System76 EC {
#define SYSTEM76_EC_EEPROM_ADDR (DYNAMIC_KEYMAP_MACRO_EEPROM_ADDR + DYNAMIC_KEYMAP_MACRO_EEPROM_SIZE)
#define SYSTEM76_EC_EEPROM_SIZE (EEPROM_SIZE - SYSTEM76_EC_EEPROM_ADDR)
// } System76 EC
<<<<<<< HEAD

#endif // CONFIG_H
=======
>>>>>>> 084df6a288503709ddde2bfa0d64e1677fe32b29
