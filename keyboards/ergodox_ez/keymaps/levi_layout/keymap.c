#include QMK_KEYBOARD_H
#include "version.h"

#define DV 0 // default Dvorak layer
#define QW 1 // symbols
#define FN 2 // media keys

enum custom_keycodes {
  EPRM = SAFE_RANGE,
  VRSN,
  RGB_SLD
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Keymap 0: Basic Dvorak layer
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |   `~   |   1  |   2  |   3  |   4  |   5  |  [   |           |   ]  |   6  |   7  |   8  |   9  |   0  |   =    |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * | Tab    |   '  |   ,  |   .  |   P  |   Y  | +QW  |           |  Tab |   F  |   G  |   C  |   R  |   L  |   /    |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * | LCtl   |   A  |   O  |   E  |   U  |   I  |------|           |------|   D  |   H  |   T  |   N  |   S  |   -    |
 * |--------+------+------+------+------+------| Esc  |           | Enter|------+------+------+------+------+--------|
 * | LSft   |   ;  |   Q  |   J  |   K  |   X  |      |           |      |   B  |   M  |   W  |   V  |   Z  | RSft   |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   | LCtl | LSup |   Z  | LAlt |  ~FN |                                       | ~FN  | RAlt |   \  | RSup | RCtl |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        | Home | End  |       | PgUp | ESC  |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      | Enter|       | PgDn |      |      |
 *                                 | Space| Bspc |------|       |------| Bspc | ~FN  |
 *                                 |      |      | Del  |       | Del  |      |      |
 *                                 `--------------------'       `--------------------'
 */
[DV] = LAYOUT_ergodox(
  // left hand
  KC_GRV,          KC_1,        KC_2,          KC_3,    KC_4,    KC_5,    KC_LBRC,
  KC_TAB,          KC_QUOT,     KC_COMM,       KC_DOT,  KC_P,    KC_Y,    TG(QW),
  KC_LCTL,         KC_A,        KC_O,          KC_E,    KC_U,    KC_I,
  KC_LSFT,         KC_SCLN,     KC_Q,          KC_J,    KC_K,    KC_X,    KC_ESC,
  KC_LCTL,         KC_LGUI,     KC_Z,          KC_LALT, MO(FN),
                                                                 KC_HOME, KC_END,
                                                                          KC_ENT,
                                                         KC_SPC, KC_BSPC, KC_DEL,
  // right hand
  KC_RBRC,      KC_6,    KC_7,    KC_8,    KC_9,        KC_0,        KC_EQL,
  KC_TAB,       KC_F,    KC_G,    KC_C,    KC_R,        KC_L,        KC_SLSH,
                KC_D,    KC_H,    KC_T,    KC_N,        KC_S,        KC_MINS,
  KC_ENT,       KC_B,    KC_M,    KC_W,    KC_V,        KC_Z,        KC_RSFT,
                         MO(FN),  KC_RALT, KC_BSLS,     KC_RGUI,     KC_RCTL,
  KC_PGUP, KC_ESC,
  KC_PGDN,
  KC_DEL,  KC_BSPC, MO(FN)
),
/* Keymap 1: QWERTY Layer
 *
 * ,---------------------------------------------------.           ,--------------------------------------------------.
 * |         |   1  |   2  |   3  |   4  |   5  |  [   |           |  ]   |   6  |   7  |   8  |   9  |   0  |    -   |
 * |---------+------+------+------+------+------+------|           |------+------+------+------+------+------+--------|
 * |         |   Q  |   W  |   E  |   R  |   T  | +DV  |           | Tab  |   Y  |   U  |   I  |   O  |   P  |    =   |
 * |---------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |         |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |   ;  |    '   |
 * |---------+------+------+------+------+------| Esc  |           | Enter|------+------+------+------+------+--------|
 * |         |   Z  |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |   .  |   /  |        |
 * `---------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |       |      |   Z  |      | ~FN  |                                       | ~FN  |      |   \  |      |      |
 *   `-----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        | Home | End  |       | PgUp | ESC  |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      | Enter|       | PgDn |      |      |
 *                                 | Space| Bspc |------|       |------| Bspc | ~FN  |
 *                                 |      |      | Del  |       | Del  |      |      |
 *                                 `--------------------'       `--------------------'
 */
[QW] = LAYOUT_ergodox(
  // left hand
  KC_TRNS,  KC_1 ,   KC_2,    KC_3,    KC_4,    KC_5,    KC_LBRC,
  KC_TRNS,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    TG(QW),
  KC_TRNS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,
  KC_TRNS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_ESC,
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                               KC_HOME, KC_END,
                                                        KC_ENT,
                                       KC_SPC, KC_BSPC, KC_DEL,
  // right hand
  KC_RBRC, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
  KC_TAB,  KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_EQL,
           KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  KC_ENT,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                    MO(FN),  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
  KC_PGUP, KC_ESC,
  KC_PGDN,
  KC_DEL,  KC_BSPC, MO(FN)
),
/* Keymap 2: Arrows, function keys, media keys, etc.
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |        |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |           |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |        |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |        | Home |  Up  | End  | PgUp | VolUp|      |           |      | PgUp | Home |  Up  | End  |      |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        | Left | Down | Right| PgDn | VolDn|------|           |------| PgDn | Left | Down | Right|      |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      |      |      |      | Mute |      |           |      |      |      | Pause| Prev | Next |        |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |      |      |      |      |                                       |      |      |      |      |      |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      |      |       |      |      |      |
 *                                 |      |      |------|       |------|      |      |
 *                                 |      |      |      |       |      |      |      |
 *                                 `--------------------'       `--------------------'
 */
[FN] = LAYOUT_ergodox(
  // left hand
  KC_TRNS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,
  KC_TRNS, KC_HOME, KC_UP,   KC_END,  KC_PGUP, KC_VOLU, KC_TRNS,
  KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, KC_VOLD,
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MUTE, KC_TRNS,
  KC_TRNS, KC_TRNS, KC_TRNS, KC_BTN1, KC_BTN2,
                                               KC_TRNS, KC_TRNS,
                                                        KC_TRNS,
                                      KC_TRNS, KC_TRNS, KC_TRNS,
  // right hand
  KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_TRNS,
  KC_TRNS, KC_PGUP, KC_HOME, KC_UP,   KC_END,  KC_TRNS, KC_TRNS,
           KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS, KC_TRNS,
  KC_TRNS, KC_TRNS, KC_TRNS, KC_MPLY, KC_MPRV, KC_MNXT, KC_TRNS,
                    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
  KC_TRNS, KC_TRNS,
  KC_TRNS,
  KC_TRNS, KC_TRNS, KC_TRNS
),
};

/* bool process_record_user(uint16_t keycode, keyrecord_t *record) { */

/* }; */

// Runs just one time when the keyboard initializes.
void matrix_init_user(void) {

};

// Runs whenever there is a layer state change.
uint32_t layer_state_set_user(uint32_t state) {
  ergodox_board_led_off();
  ergodox_right_led_1_off();
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();

  uint8_t layer = biton32(state);
  switch (layer) {
      case 0:
        #ifdef RGBLIGHT_COLOR_LAYER_0
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_0);
        #else
        #ifdef RGBLIGHT_ENABLE
          rgblight_init();
        #endif
        #endif
        break;
      case 1:
        ergodox_right_led_1_on();
        #ifdef RGBLIGHT_COLOR_LAYER_1
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_1);
        #endif
        break;
      case 2:
        ergodox_right_led_2_on();
        #ifdef RGBLIGHT_COLOR_LAYER_2
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_2);
        #endif
        break;
      case 3:
        ergodox_right_led_3_on();
        #ifdef RGBLIGHT_COLOR_LAYER_3
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_3);
        #endif
        break;
      case 4:
        ergodox_right_led_1_on();
        ergodox_right_led_2_on();
        #ifdef RGBLIGHT_COLOR_LAYER_4
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_4);
        #endif
        break;
      case 5:
        ergodox_right_led_1_on();
        ergodox_right_led_3_on();
        #ifdef RGBLIGHT_COLOR_LAYER_5
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_5);
        #endif
        break;
      case 6:
        ergodox_right_led_2_on();
        ergodox_right_led_3_on();
        #ifdef RGBLIGHT_COLOR_LAYER_6
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_6);
        #endif
        break;
      case 7:
        ergodox_right_led_1_on();
        ergodox_right_led_2_on();
        ergodox_right_led_3_on();
        #ifdef RGBLIGHT_COLOR_LAYER_7
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_7);
        #endif
        break;
      default:
        break;
    }

  return state;
};
