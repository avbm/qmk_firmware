#include QMK_KEYBOARD_H


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_split_3x5_3(KC_MINS, KC_Y, KC_O, KC_U, KC_Q, KC_Z, KC_L, KC_D, KC_W, KC_UNDS, LGUI_T(KC_C), LALT_T(KC_I), LSFT_T(KC_E), LCTL_T(KC_A), KC_G, KC_P, RCTL_T(KC_H), RSFT_T(KC_T), RALT_T(KC_S), RGUI_T(KC_N), KC_BSPC, KC_X, KC_J, KC_K, KC_B, KC_V, KC_R, KC_M, KC_F, KC_TAB, KC_LSFT, KC_SPC, MO(2), MO(4), KC_ENT, KC_RCTL),
	[1] = LAYOUT_split_3x5_3(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, LGUI_T(KC_C), LALT_T(KC_I), LSFT_T(KC_E), LCTL_T(KC_A), KC_TRNS, KC_TRNS, RCTL_T(KC_H), RSFT_T(KC_T), RALT_T(KC_S), RGUI_T(KC_N), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_RCTL),
	[2] = LAYOUT_split_3x5_3(KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_PMNS, KC_ESC, KC_GRV, KC_QUOT, KC_COMM, KC_DOT, KC_DQUO, KC_HASH, KC_DLR, KC_AT, KC_BSPC, KC_NO, KC_NO, KC_QUES, KC_SPC, KC_ENT, KC_EXLM, KC_ENT, KC_NO, KC_TAB, KC_NO, KC_NO, KC_TRNS, MO(6), MO(3), MO(3)),
	[3] = LAYOUT_split_3x5_3(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, LGUI_T(KC_PMNS), LALT_T(KC_ESC), LSFT_T(KC_GRV), LCTL_T(KC_QUOT), KC_TRNS, KC_TRNS, RCTL_T(KC_DQUO), RSFT_T(KC_HASH), RALT_T(KC_DLR), RGUI_T(KC_AT), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[4] = LAYOUT_split_3x5_3(KC_PIPE, KC_EQL, KC_TILD, KC_PLUS, KC_LT, KC_GT, KC_CIRC, KC_AMPR, KC_PERC, KC_ASTR, KC_BSLS, KC_LBRC, KC_LCBR, KC_LPRN, KC_SCLN, KC_COLN, KC_RPRN, KC_RCBR, KC_RBRC, KC_SLSH, KC_BSPC, KC_NO, KC_DOWN, KC_UP, KC_SPC, KC_ENT, KC_LEFT, KC_RGHT, KC_DOT, KC_TAB, MO(5), MO(5), MO(6), KC_NO, KC_NO, KC_TRNS),
	[5] = LAYOUT_split_3x5_3(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, LGUI_T(KC_BSLS), LALT_T(KC_LBRC), LSFT_T(KC_LCBR), LCTL_T(KC_LPRN), KC_TRNS, KC_TRNS, RCTL_T(KC_RPRN), RSFT_T(KC_RCBR), RALT_T(KC_RBRC), RGUI_T(KC_SLSH), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[6] = LAYOUT_split_3x5_3(KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_LNG1, KC_ESC, KC_MPRV, KC_MRWD, KC_MSTP, KC_MPLY, KC_MFFD, KC_MNXT, KC_CAPS, KC_LNG2, KC_F11, KC_NO, KC_PGDN, KC_PGUP, KC_VOLD, KC_VOLU, KC_HOME, KC_END, KC_NO, KC_F12, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)




