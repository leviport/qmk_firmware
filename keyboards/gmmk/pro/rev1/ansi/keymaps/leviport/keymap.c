/* Copyright 2021 Glorious, LLC <salman@pcgamingrace.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    // The FN key by default maps to a momentary toggle to layer 1 to provide access to the RESET key (to put the board into bootloader mode). Without
    // this mapping, you have to open the case to hit the button on the bottom of the PCB (near the USB cable attachment) while plugging in the USB
    // cable to get the board into bootloader mode - definitely not fun when you're working on your QMK builds. Remove this and put it back to KC_RGUI
    // if that's your preference.
    //
    // To put the keyboard in bootloader mode, use FN+backslash. If you accidentally put it into bootloader, you can just unplug the USB cable and
    // it'll be back to normal when you plug it back in.
    //
    // This keyboard defaults to 6KRO instead of NKRO for compatibility reasons (some KVMs and BIOSes are incompatible with NKRO).
    // Since this is, among other things, a "gaming" keyboard, a key combination to enable NKRO on the fly is provided for convenience.
    // Press Fn+N to toggle between 6KRO and NKRO. This setting is persisted to the EEPROM and thus persists between restarts.

    /* Layer 0, Dvorak
        ESC      F1       F2       F3       F4       F5       F6       F7       F8       F9       F10      F11      F12	     Del            Rotary(Mute)
        ~        1        2        3        4        5        6        7        8        9        0        [        ]	     BackSpc           Home
        Tab        "        ,        .        P        Y        F        G        C        R        L        ?        =        \               PgUp
        LCTL         A        O        E        U        I        D        H        T        N        S        -              Enter            PgDn
        LSFT              ;        Q        J        K        X        B        M        W        V        Z                 Sh_R     Up       End
        MO(2)    LALT     LGUI                                SPACE                               RCTL     MENU     MO(2)    Left     Down     Right
    */
    [0] = LAYOUT(
        KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,        KC_DEL,     KC_MUTE,
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_LBRC, KC_RBRC,     KC_BSPC,      KC_HOME,
        KC_TAB,    KC_QUOT, KC_COMM, KC_DOT,  KC_P,    KC_Y,    KC_F,    KC_G,    KC_C,    KC_R,    KC_L,    KC_SLSH, KC_EQL,    KC_BSLS,      KC_PGUP,
        KC_LCTL,     KC_A,    KC_O,    KC_E,    KC_U,    KC_I,    KC_D,    KC_H,    KC_T,    KC_N,    KC_S,    KC_MINS,          KC_ENT,       KC_PGDN,
        KC_LSFT,          KC_SCLN, KC_Q,    KC_J,    KC_K,    KC_X,    KC_B,    KC_M,    KC_W,    KC_V,    KC_Z,         KC_RSFT,     KC_UP,   KC_END,
        MO(2),   KC_LALT, KC_LGUI,                            KC_SPC,                             KC_RCTL, KC_MENU, MO(2),   KC_LEFT, KC_DOWN, KC_RGHT
    ),

    /* Layer 1, QWERTY
        ESC      F1       F2       F3       F4       F5       F6       F7       F8       F9       F10      F11      F12	     Del           Rotary(Mute)
        ~        1        2        3        4        5        6        7        8        9        0         -       (=)	     BackSpc           Del
        Tab        Q        W        E        R        T        Y        U        I        O        P        [        ]        \               PgUp
        LCTL         A        S        D        F        G        H        J        K        L        ;        "              Enter            PgDn
        LSFT              Z        X        C        V        B        N        M        ,        .        ?                 Sh_R     Up       End
        MO(2)     LALT    LGUI                                SPACE                               RCTL     MENU     MO(2)    Left     Down     Right
    */
    [1] = LAYOUT(
        KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,        KC_DEL,     KC_MUTE,
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,      KC_BSPC,      KC_DEL,
        KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,   KC_BSLS,      KC_PGUP,
        KC_LCTL,     KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,       KC_PGDN,
        KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,      KC_RSFT,     KC_UP,   KC_END,
        MO(2),   KC_LALT, KC_LGUI,                            KC_SPC,                             KC_RCTL, KC_MENU, MO(2),   KC_LEFT, KC_DOWN, KC_RGHT
    ),

    /* Layer 2, misc
       ESC      F1       F2       F3       F4       F5       F6       F7       F8       F9       F10      F11      F12	     Prt           Rotary(Mute)
       ~        1        2        3        4        5        6        7        8        9        0         -       (=)	     BackSpc          Del
       Tab        Q        W        E        R        T        Y        U        I        O        P        [        ]        \               PgUp
       Caps         A        S        D        F        G        H        J        K        L        ;        "              Enter            PgDn
       Sh_L              Z        X        C        V        B        N        M        ,        .        ?                 Sh_R     Up       End
       Ct_L     Win_L    Alt_L                               SPACE                               Alt_R    FN       Ct_R     Left     Down     Right
    */
    [2] = LAYOUT(
        _______, TO(0),   TO(1),   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_PSCR,          KC_MPLY,
        _______, RGB_TOG, RGB_VAI, RGB_VAD, RGB_HUI, _______, _______, _______, _______, _______, _______, _______, _______, _______,          KC_MNXT,
        _______,   KC_HOME, KC_UP,   KC_END,  KC_PGUP, _______, _______, _______, _______, _______, _______, _______, _______, QK_BOOT,        KC_MPRV,
        _______,     KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, _______, _______, _______, _______, _______, _______, _______,          _______,      _______,
        _______,          _______, RGB_HUI, _______, _______, _______, NK_TOGG, _______, _______, _______, _______,      _______,     RGB_MOD, KC_MPLY,
        _______, _______, _______,                            _______,                            _______, _______, _______, RGB_SPD, RGB_RMOD, RGB_SPI
    ),

    [3] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,        _______,
        _______,     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,      _______,
        _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______,
        _______, _______, _______,                            _______,                            _______, _______, _______, _______, _______, _______
    ),

};
// clang-format on

#ifdef ENCODER_ENABLE
bool encoder_update_user(uint8_t index, bool clockwise) {
    if (clockwise) {
      tap_code(KC_VOLU);
    } else {
      tap_code(KC_VOLD);
    }
    return true;
}
#endif // ENCODER_ENABLE
