/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

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

enum LAYERS {
    _BASE,
    _NAV,
    _NUM,
    _SYM,
    _FUN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
XXXXXXX, LCTL_T(KC_A), LALT_T(KC_S), LGUI_T(KC_D), LSFT_T(KC_F), KC_G,    KC_H, RSFT_T(KC_J), RGUI_T(KC_K), RALT_T(KC_L), RCTL_T(KC_QUOT), XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                    XXXXXXX,   LT(_SYM, KC_SPC),  LT(_NAV, KC_TAB),     LT(_FUN, KC_ENT),   LT(_NUM, KC_BSPC), XXXXXXX
                                      //`--------------------------'  `--------------------------'

  ),

  [_NAV] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, KC_MUTE, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_LCTL, KC_LALT, KC_LGUI, KC_LSFT, XXXXXXX,                      KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, KC_MPLY, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, KC_PGDN, KC_PGUP, XXXXXXX, KC_CAPS, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                       XXXXXXX, XXXXXXX,  _______,     KC_ENT,   KC_BSPC, XXXXXXX
                                      //`--------------------------'  `--------------------------'
  ),

  [_NUM] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, KC_ASTR,   KC_7, KC_8,  KC_9, KC_PPLS,                           XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_CIRC, KC_4, KC_5, KC_6, KC_EQL,                              XXXXXXX, KC_RSFT, KC_RGUI, KC_RALT, KC_RCTL, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_SLSH,KC_1, KC_2, KC_3, KC_MINS,                              XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          XXXXXXX,   KC_ESC,  KC_0,     XXXXXXX, _______, XXXXXXX
                                      //`--------------------------'  `--------------------------'
  ),

  [_SYM] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        XXXXXXX, KC_QUOT, KC_LABK, KC_RABK, KC_DQUO, KC_DOT,                      KC_AMPR, KC_SCLN, KC_LBRC, KC_RBRC, KC_PERC, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
XXXXXXX, LCTL_T(KC_EXLM), LALT_T(KC_MINS), LGUI_T(KC_PLUS), LSFT_T(KC_EQL), KC_HASH,    KC_PIPE, RSFT_T(KC_COLN), RGUI_T(KC_LPRN), RALT_T(KC_RPRN), RCTL_T(KC_QUES), XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_CIRC, KC_SLSH, KC_ASTR, KC_BSLS, KC_UNDS,                      KC_TILD, KC_DLR, KC_LCBR, KC_RCBR, KC_AT, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                         XXXXXXX, _______,  XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX
                                      //`--------------------------'  `--------------------------'
  ),


  [_FUN] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, KC_F12,   KC_F7, KC_F8,  KC_F9, XXXXXXX,                           XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_F11, KC_F4, KC_F5, KC_F6, XXXXXXX,                              XXXXXXX, KC_RSFT, KC_RGUI, KC_RALT, KC_RCTL, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, KC_F10, KC_F1, KC_F2, KC_F3, XXXXXXX,                              XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          XXXXXXX,   XXXXXXX, XXXXXXX,     _______, XXXXXXX, XXXXXXX
                                      //`--------------------------'  `--------------------------'
  )
};

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM =
    LAYOUT_split_3x6_3(
        'L', 'L', 'L', 'L', 'L', 'L',  'R', 'R', 'R', 'R', 'R', 'R',
        'L', 'L', 'L', 'L', 'L', 'L',  'R', 'R', 'R', 'R', 'R', 'R',
        'L', 'L', 'L', 'L', 'L', 'L',  'R', 'R', 'R', 'R', 'R', 'R',
                       '*', '*', '*',  '*', '*', '*'
    );

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LCTL_T(KC_EXLM):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_EXLM);
                return false;        // Return false to ignore further processing of key
            }
            break;
        case LALT_T(KC_MINS):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_MINS);
                return false;        // Return false to ignore further processing of key
            }
            break;
        case LGUI_T(KC_PLUS):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_PLUS);
                return false;        // Return false to ignore further processing of key
            }
            break;
        case LSFT_T(KC_EQL):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_EQL);
                return false;        // Return false to ignore further processing of key
            }
            break;
        case RCTL_T(KC_QUES):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_QUES);
                return false;        // Return false to ignore further processing of key
            }
            break;
        case RALT_T(KC_RPRN):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_RPRN);
                return false;        // Return false to ignore further processing of key
            }
            break;
        case RGUI_T(KC_LPRN):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_LPRN);
                return false;        // Return false to ignore further processing of key
            }
            break;
        case RSFT_T(KC_COLN):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_COLN);
                return false;        // Return false to ignore further processing of key
            }
            break;
    }
    return true;
}

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LSFT_T(KC_F): case RSFT_T(KC_J):
            return TAPPING_TERM - 100;
        default:
            return TAPPING_TERM;
    }
}

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
  [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [1] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [2] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [3] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
};
#endif
