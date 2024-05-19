/* 
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#include QMK_KEYBOARD_H

// Layer shorthand
#define _DV 0
#define _QW 1
#define _FN 2

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
  QMKBEST = SAFE_RANGE,
  QMKURL
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* DVORAK
 * .-----------------------------------------------------------------------------------------------------------------------------------------------.
 * |        | QWERTY |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |PlyPause| MPrev  | MNext  |        |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        | F1     | F2     | F3     | F4     | F5     | F6     |        |        | F7     | F8     | F9     | F10    | F11    | F12    |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |  `~    | 1      | 2      | 3      | 4      | 5      | [      | PSCR   | ]      | ]      | 6      | 7      | 8      | 9      | 0      | =      |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | TAB    | '      | ,      | .      | P      | Y      | ESC    | \      | ENT    | ENT    | F      | G      | C      | R      | L      | /      |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------+--------|
 * |  LCTL  | A      | O      | E      | U      | I      | HOME   | UNDO   | PG UP  | PG UP  | D      | H      | T      | N      | S      | -      |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------+--------+--------|
 * | LSHIFT | ;      | Q      | J      | K      | X      | END    | UP     | PG DN  | PG DN  | B      | M      | W      | V      | Z      | RSHIFT |
 * |--------+--------+--------+--------+--------+-----------------+--------+--------+--------+--------+-----------------+--------+--------+--------|
 * | LCTL   | LGUI   | Z      | LALT   | DEL    | SPACE  | LEFT   | DOWN   | RGHT   | RGHT   |MO(_FN) | BSPC   | DEL    | RALT   | RGUI   | RCTRL  |
 * '-----------------------------------------------*------------------------------------*----------------------------------------------------------'
 */

  [_DV] = LAYOUT( /* DVORAK */
  KC_NO,   TO(_QW), KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_VOLD, KC_VOLU, KC_MUTE, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  KC_MPLY, KC_MPRV, KC_MNXT, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  KC_NO,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_NO,   KC_NO,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_NO,
  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_LBRC, KC_PSCR, KC_RBRC, KC_RBRC, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_EQL,
  KC_TAB,  KC_QUOT, KC_COMM, KC_DOT,  KC_P,    KC_Y,    KC_ESC,  KC_BSLS, KC_ENT,  KC_ENT,  KC_F,    KC_G,    KC_C,    KC_R,    KC_L,    KC_SLSH,
  KC_LCTL, KC_A,    KC_O,    KC_E,    KC_U,    KC_I,    KC_HOME, KC_UNDO, KC_PGUP, KC_PGUP, KC_D,    KC_H,    KC_T,    KC_N,    KC_S,    KC_MINS,
  KC_LSFT, KC_SCLN, KC_Q,    KC_J,    KC_K,    KC_X,    KC_END,  KC_UP,   KC_PGDN, KC_PGDN, KC_B,    KC_M,    KC_W,    KC_V,    KC_Z,    KC_RSFT,
  KC_LCTL, KC_LGUI, KC_Z,    KC_LALT, KC_DEL,  KC_SPC,  KC_LEFT, KC_DOWN, KC_RGHT, KC_RGHT, MO(_FN), KC_BSPC, KC_DEL,  KC_RALT, KC_RGUI, KC_RCTL
  ),
/* QWERTY
 * .-----------------------------------------------------------------------------------------------------------------------------------------------.
 * | DVORAK |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |PlyPause| MPrev  | MNext  |        |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        | F1     | F2     | F3     | F4     | F5     | F6     |        |        | F7     | F8     | F9     | F10    | F11    | F12    |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |  `~    | 1      | 2      | 3      | 4      | 5      | [      | PSCR   | ]      | ]      | 6      | 7      | 8      | 9      | 0      | =      |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | TAB    | Q      | W      | E      | R      | T      | ESC    | \      | ENT    | ENT    | Y      | U      | I      | O      | P      | /      |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------+--------|
 * | LCTL   | A      | S      | D      | F      | G      | HOME   | UNDO   | PG UP  | PG UP  | H      | J      | K      | L      | ;      | -      |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------+--------+--------|
 * | LSHIFT | Z      | X      | C      | V      | B      | END    | UP     | PG DN  | PG DN  | N      | M      | ,      | .      | '      | RSHIFT |
 * |--------+--------+--------+--------+--------+-----------------+--------+--------+--------+--------+-----------------+--------+--------+--------|
 * | LCTL   | LGUI   | Z      | LALT   | DEL    | SPACE  | LEFT   | DOWN   | RGHT   | RGHT   |MO(_FN) | BSPC   | DEL    | RALT   | RGUI   | RCTRL  |
 * '-----------------------------------------------*------------------------------------*-------------------------------------------------+--------'
 */
  [_QW] = LAYOUT( /* QWERTY  */
  TO(_DV), KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_VOLD, KC_VOLU, KC_MUTE, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  KC_MPLY, KC_MPRV, KC_MNXT, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  KC_NO,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_NO,   KC_NO,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_NO,
  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_LBRC, KC_PSCR, KC_RBRC, KC_RBRC, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_EQL,
  KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_ESC,  KC_BSLS, KC_ENT,  KC_ENT,  KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_SLSH,
  KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_HOME, KC_UNDO, KC_PGUP, KC_PGUP, KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_MINS,
  KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_END,  KC_UP,   KC_PGDN, KC_PGDN, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_QUOT, KC_RSFT,
  KC_LCTL, KC_LGUI, KC_Z,    KC_LALT, KC_DEL,  KC_SPC,  KC_LEFT, KC_DOWN, KC_RGHT, KC_RGHT, MO(_FN), KC_BSPC, KC_DEL,  KC_RALT, KC_RGUI, KC_RCTL
  ),
  /* FUNCTION LAYER
 * .-----------------------------------------------------------------------------------------------------------------------------------------------.
 * |        |        |        |        |        |        | VolDn  | VolUp  | VolMute|        |        |        |        |        |        | QK_BOOT  |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |PlyPause| MPrev  | MNext  |        |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        | HOME   | UP     | END    |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        | LEFT   | DOWN   | RIGHT  |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+-----------------+--------+--------+--------+--------+-----------------+--------+--------+--------|
 * |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
 * '-----------------------------------------------*-----------------------------------------------------------------------------------------------'
 */
  [_FN] = LAYOUT( /* FUNCTION LAYER */
  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_VOLD, KC_VOLU, KC_MUTE, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   QK_BOOT,
  KC_MPLY, KC_MPRV, KC_MNXT, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_HOME, KC_UP,   KC_END,  KC_NO,   KC_NO,
  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_LEFT, KC_DOWN, KC_RGHT, KC_NO,   KC_NO,
  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
  )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    /* case QMKBEST: */
    /*   if (record->event.pressed) { */
    /*     // when keycode QMKBEST is pressed */
    /*     SEND_STRING("QMK is the best thing ever!"); */
    /*   } else { */
    /*     // when keycode QMKBEST is released */
    /*   } */
    /*   break; */
    /* case QMKURL: */
    /*   if (record->event.pressed) { */
    /*     // when keycode QMKURL is pressed */
    /*     SEND_STRING("https://qmk.fm/" SS_TAP(X_ENTER)); */
    /*   } else { */
    /*     // when keycode QMKURL is released */
    /*   } */
    /*   break; */
  }
  return true;
}

void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

void led_set_user(uint8_t usb_led) {

}
