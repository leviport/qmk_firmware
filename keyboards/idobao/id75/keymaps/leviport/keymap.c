#include QMK_KEYBOARD_H

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
  QMKBEST = SAFE_RANGE,
  QMKURL
};

enum layer_names {
    _DV,
    _QW,
    _FN,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* DVORAK
 * .--------------------------------------------------------------------------------------------------------------------------------------.
 * | `~     | 1      | 2      | 3      | 4      | 5      | [ {    | PSCR   | ] }    | 6      | 7      | 8      | 9      | 0      | = +    |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
 * | TAB    | '"     | ,<     | .>     | P      | Y      | ESC    | \ |    | ENTER  | F      | G      | C      | R      | L      | / ?    |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------|
 * | LCTRL  | A      | O      | E      | U      | I      | HOME   | TERM   | PGUP   | D      | H      | T      | N      | S      | - _    |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------+--------|
 * | LSHIFT | ;:     | Q      | J      | K      | X      | END    | UP     | PGDN   | B      | M      | W      | V      | Z      | RSHIFT |
 * |--------+--------+--------+--------+--------+-----------------+--------+--------+--------+--------+-----------------+--------+--------|
 * | _FN    | UNDO   | DEL    | LALT   | LGUI   | SPACE  | LEFT   | DOWN   | RIGHT  | _FN    | BSPC   | RALT   | MENU   | RGUI   | RCTRL  |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */
 [_DV] = LAYOUT_ortho_5x15(
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_LBRC, KC_PSCR, KC_RBRC, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_EQL,
    KC_TAB,  KC_QUOT, KC_COMM, KC_DOT,  KC_P,    KC_Y,    KC_ESC,  KC_BSLS, KC_ENT,  KC_F,    KC_G,    KC_C,    KC_R,    KC_L,    KC_SLSH,
    KC_LCTL, KC_A,    KC_O,    KC_E,    KC_U,    KC_I,    KC_HOME, G(KC_T), KC_PGUP, KC_D,    KC_H,    KC_T,    KC_N,    KC_S,    KC_MINS,
    KC_LSFT, KC_SCLN, KC_Q,    KC_J,    KC_K,    KC_X,    KC_END,  KC_UP,   KC_PGDN, KC_B,    KC_M,    KC_W,    KC_V,    KC_Z,    KC_RSFT,
    MO(_FN), C(KC_Z), KC_DEL,  KC_LALT, KC_LGUI, KC_SPC,  KC_LEFT, KC_DOWN, KC_RGHT, MO(_FN), KC_BSPC, KC_RALT, KC_MENU, KC_RGUI, KC_RCTL
  ),

/* QWERTY
 * .--------------------------------------------------------------------------------------------------------------------------------------.
 * | `~     | 1      | 2      | 3      | 4      | 5      | [{     | PSCR   | ]}     | 6      | 7      | 8      | 9      | 0      | -_     |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
 * | TAB    | Q      | W      | E      | R      | T      | ESC    | \|     | ENT    | Y      | U      | I      | O      | P      | =+     |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------|
 * | LCTRL  | A      | S      | D      | F      | G      | HOME   | TERM   | PGUP   | H      | J      | K      | L      | ;:     | '"     |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------+--------|
 * | LSHIFT | Z      | X      | C      | V      | B      | END    | UP     | PGDN   | N      | M      | ,<     | .>     | /?     | RSHIFT |
 * |--------+--------+--------+--------+--------+-----------------+--------+--------+--------+--------+-----------------+--------+--------|
 * | _FN    | UNDO   | DEL    | LALT   | LGUI   | SPACE  | LEFT   | DOWN   | RIGHT  | _FN    | BSPC   | RALT   | MENU   | RGUI   | RCTRL  |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */
 [_QW] = LAYOUT_ortho_5x15(
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_LBRC, KC_PSCR, KC_RBRC, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_ESC,  KC_BSLS, KC_ENT,  KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_EQL,
    KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_HOME, G(KC_T), KC_PGUP, KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_END,  KC_UP,   KC_PGDN, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
    MO(_FN), C(KC_Z), KC_DEL,  KC_LALT, KC_LGUI, KC_SPC,  KC_LEFT, KC_DOWN, KC_RGHT, MO(_FN), KC_BSPC, KC_RALT, KC_MENU, KC_RGUI, KC_RCTL
  ),

/* FUNCTION
 * .--------------------------------------------------------------------------------------------------------------------------------------.
 * | F1     | F2     | F3     | F4     | F5     | F6     | NUMLK  | P/     | P*     | F7     | F8     | F9     | F10    | F11    | F12    |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
 * |        | HOME   | UP     | END    | PGUP   |        | P7     | P8     | P9     | PGUP   | HOME   | UP     | END    | RGB_TOG| PSCR   |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------|
 * |        | LEFT   | DOWN   | RIGHT  | PGDN   | MUTE   | P4     | P5     | P6     | PGDN   | LEFT   | DOWN   | RIGHT  | RGB_VAI| CAPS   |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------+--------|
 * |        |PlayPaus| Prev   | Next   | VOL DN | VOL UP | P1     | P2     | P3     | P-     |        |        |        | RGB_MOD| RGB_HUI|
 * |--------+--------+--------+--------+--------+-----------------+--------+--------+--------+--------+-----------------+--------+--------|
 * |        |        |        |        |        |        | P0     | P.     | PENT   | P+     |        | QWERTY | DVORAK |        |        |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */
 [_FN] = LAYOUT_ortho_5x15(
    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_NUM,  KC_PSLS, KC_PAST, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
    KC_TRNS, KC_HOME, KC_UP,   KC_END,  KC_PGUP, KC_TRNS, KC_P7,   KC_P8,   KC_P9,   KC_PGUP, KC_HOME, KC_UP,   KC_END,  RGB_TOG, KC_PSCR,
    KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, KC_MUTE, KC_P4,   KC_P5,   KC_P6,   KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, RGB_VAI, KC_CAPS,
    KC_TRNS, KC_MPLY, KC_MPRV, KC_MNXT, KC_VOLD, KC_VOLU, KC_P1,   KC_P2,   KC_P3,   KC_PMNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_MOD, RGB_HUI,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P0,   KC_PDOT, KC_PENT, KC_PPLS, KC_TRNS, TO(_QW), TO(_DV), KC_TRNS, KC_TRNS
  ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QMKBEST:
      if (record->event.pressed) {
        // when keycode QMKBEST is pressed
        SEND_STRING("QMK is the best thing ever!");
      } else {
        // when keycode QMKBEST is released
      }
      break;
    case QMKURL:
      if (record->event.pressed) {
        // when keycode QMKURL is pressed
        SEND_STRING("https://qmk.fm/" SS_TAP(X_ENTER));
      } else {
        // when keycode QMKURL is released
      }
      break;
  }
  return true;
}
