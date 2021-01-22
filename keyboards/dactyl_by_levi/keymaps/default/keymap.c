#include QMK_KEYBOARD_H
#include "version.h"

#define QW 0 // default QWERTY
#define FN 1 // Arrows, function keys, media keys, etc.

enum custom_keycodes {
  EPRM = SAFE_RANGE,
  VRSN,
  RGB_SLD
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Keymap 1: QWERTY layer
 *
 * ,------------------------------------------------.           ,------------------------------------------------.
 * |  `~  |   1  |   2  |   3  |   4  |   5  | KC_NO|           |KC_NO |   6  |   7  |   8  |   9  |   0  |   =  |
 * |------+------+------+------+------+-------------|           |------+------+------+------+------+------+------|
 * |  Tab |   Q  |   W  |   E  |   R  |   T  | KC_NO|           |KC_NO |   Y  |   U  |   I  |   O  |   P  |   -  |
 * |------+------+------+------+------+------|      |           |      |------+------+------+------+------+------|
 * | LCtl |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |   ;  |   '  |
 * |------+------+------+------+------+------| KC_NO|           |KC_NO |------+------+------+------+------+------|
 * | LSft |   Z  |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |   .  |   /  | RSft |
 * |------+------+------+------+------+-------------'           `-------------+------+------+------+------+------|
 * | Esc  |   [  |  ~FN |   ]  |  Del |                                       | Bspc | RAlt |   \  | RSup | RCtl |
 * `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        | LSup | LAlt |       | Tab  | Del  |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      | Esc  |       | Enter|      |      |
 *                                 | Space| LCtl |------|       |------| LSft | ~FN  |
 *                                 |      |      | ~FN  |       | RCtl |      |      |
 *                                 `--------------------'       `--------------------'
 */
[QW] = LAYOUT_ergodox(
  // left hand
  KC_GRV,          KC_1,        KC_2,          KC_3,    KC_4,    KC_5,    KC_NO,
  KC_TAB,          KC_Q,        KC_W,          KC_E,    KC_R,    KC_T,    KC_NO,
  KC_LCTL,         KC_A,        KC_S,          KC_D,    KC_F,    KC_G,
  KC_LSFT,         KC_Z,        KC_X,          KC_C,    KC_V,    KC_B,    KC_NO,
  KC_ESC,          KC_LBRC,    MO(FN),          KC_RBRC, KC_DEL,
                                                                 KC_LGUI, KC_LALT,
                                                                          KC_ESC,
                                                         KC_SPC, KC_LCTL, MO(FN),
  // right hand
  KC_NO,        KC_6,    KC_7,    KC_8,    KC_9,          KC_0,       KC_EQL,
  KC_NO,        KC_Y,    KC_U,    KC_I,    KC_O,          KC_P,       KC_MINS,
                KC_H,    KC_J,    KC_K,    KC_L,          KC_SCLN,    KC_QUOT,
  KC_NO,        KC_N,    KC_M,    KC_COMM, KC_DOT,        KC_SLSH,    KC_RSFT,
                         KC_BSPC, KC_RALT, KC_BSLS,       KC_RGUI,    KC_RCTL,
  KC_TAB,  KC_DEL,
  KC_ENT,
  KC_RCTL, KC_LSFT, MO(FN)
),
/* Keymap 2: Layer with arrows, media keys, function keys, etc
 *
 * ,------------------------------------------------.           ,------------------------------------------------.
 * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  | KC_NO|           |KC_NO |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |
 * |------+------+------+------+------+-------------|           |------+------+------+------+------+------+------|
 * |  Tab | Home |  Up  | End  | PgUp | VolUp| KC_NO|           |KC_NO | PgUp | Home |  Up  |  End |  NO  | PrScr|
 * |------+------+------+------+------+------|      |           |      |------+------+------+------+------+------|
 * | LCtl | Left | Down | Right| PgDn | VolDn|------|           |------| PgDn | LEFT | DOWN | RIGHT|  NO  |  NO  |
 * |------+------+------+------+------+------| KC_NO|           |KC_NO |------+------+------+------+------+------|
 * | LSft |  NO  |  NO  |  NO  |  NO  | Mute |      |           |      |  NO  |  NO  |MPause|MPrev |MNext | RSft |
 * |------+------+------+------+------+-------------'           `-------------+------+------+------+------+------|
 * | Esc  |   [  |   Z  |   ]  |  Del |                                       | Bspc |Dvorak|Qwerty| RSup | RCtl |
 * `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        | LSup | LAlt |       | Tab  | Del  |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      | Esc  |       | Enter|      |      |
 *                                 | Space| LCtl |------|       |------| LSft | ~FN  |
 *                                 |      |      | ~FN  |       | RCtl |      |      |
 *                                 `--------------------'       `--------------------'
 */
[FN] = LAYOUT_ergodox(
  // left hand
  KC_F1,           KC_F2,       KC_F3,         KC_F4,   KC_F5,   KC_F6,   KC_NO,
  KC_TAB,          KC_HOME,     KC_UP,         KC_END,  KC_PGUP, KC_VOLU, KC_NO,
  KC_LCTL,         KC_LEFT,     KC_DOWN,       KC_LEFT, KC_PGDN, KC_VOLD,
  KC_LSFT,         KC_NO,       KC_NO,         KC_NO,   KC_NO,   KC_MUTE, KC_NO,
  KC_ESC,          KC_RBRC,     KC_Z,          KC_RBRC, KC_DEL,
                                                                 KC_LGUI, KC_LALT,
                                                                          KC_ESC,
                                                         KC_SPC, KC_LCTL, MO(FN),
  // right hand
  KC_NO,        KC_F7,   KC_F8,   KC_F9,   KC_F10,        KC_F11,     KC_F12,
  KC_NO,        KC_PGUP, KC_HOME, KC_UP,   KC_END,        KC_NO,      KC_PSCR,
                KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT,       KC_NO,      KC_NO,
  KC_NO,        KC_NO,   KC_NO,   KC_MPLY, KC_MPRV,       KC_MNXT,    KC_RSFT,
                         KC_BSPC, KC_RALT, KC_BSLS,       KC_RGUI,    KC_RCTL,
  KC_TAB,  KC_DEL,
  KC_ENT,
  KC_RCTL, KC_LSFT, MO(FN)
),

};


// Runs just one time when the keyboard initializes.
void matrix_init_user(void) {
#ifdef RGBLIGHT_COLOR_LAYER_0
  rgblight_setrgb(RGBLIGHT_COLOR_LAYER_0);
#endif
};

// Runs whenever there is a layer state change.
uint32_t layer_state_set_user(uint32_t state) {
  ergodox_board_led_off();
  ergodox_right_led_1_off();
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();

  return state;
};
