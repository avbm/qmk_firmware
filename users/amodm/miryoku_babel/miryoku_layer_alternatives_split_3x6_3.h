// Copyright 2024 Amod Mulay
// https://github.com/avbm/qmk_firmware
// based on ideas from https://github.com/manna-harbour/miryoku
// generated -*- buffer-read-only: t -*-
// target: qmk

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once


#define MIRYOKU_ALTERNATIVES_BASE_COLEMAKDH_3x6_3 \
KC_TAB,           KC_Q,              KC_W,              KC_F,              KC_P,              KC_B,              KC_J,              KC_L,              KC_U,              KC_Y,              KC_QUOT,              KC_MINS,\
KC_ESC,           LGUI_T(KC_A),      LALT_T(KC_R),      LCTL_T(KC_S),      LSFT_T(KC_T),      KC_G,              KC_M,              RSFT_T(KC_N),      RCTL_T(KC_E),      RALT_T(KC_I),      RGUI_T(KC_O),         KC_RCTL,\
KC_LSFT,          LT(U_BUTTON,KC_Z), ALGR_T(KC_X),      KC_C,              KC_D,              KC_V,              KC_K,              KC_H,              KC_COMM,           ALGR_T(KC_DOT),    LT(U_BUTTON,KC_SLSH), KC_RSFT,\
U_NP,             U_NP,              U_NP,              LT(U_MEDIA,KC_ESC),LT(U_NAV,KC_SPC),  LT(U_MOUSE,KC_TAB),LT(U_SYM,KC_ENT),  LT(U_NUM,KC_BSPC), LT(U_FUN,KC_DEL),  U_NP,              U_NP,                 U_NP

#define MIRYOKU_ALTERNATIVES_BASE_ENGRAMMER_3x6_3 \
KC_TAB,           KC_B,              KC_Y,              KC_O,              KC_U,              KC_QUOT,           KC_SCLN,           KC_L,              KC_D,              KC_W,              KC_V,              KC_Z,\
KC_ESC,           LGUI_T(KC_C),      LALT_T(KC_I),      LCTL_T(KC_E),      LSFT_T(KC_A),      KC_COMM,           KC_DOT,            RSFT_T(KC_H),      RCTL_T(KC_T),      RALT_T(KC_S),      RGUI_T(KC_N),      KC_Q,\
KC_LSFT,          LT(U_BUTTON,KC_G), ALGR_T(KC_X),      KC_J,              KC_K,              KC_MINS,           KC_SLSH,           KC_R,              KC_M,              ALGR_T(KC_F),      LT(U_BUTTON,KC_P), KC_RCTL,\
U_NP,             U_NP,              U_NP,              LT(U_MEDIA,KC_ESC),LT(U_NAV,KC_SPC),  LT(U_MOUSE,KC_TAB),LT(U_SYM,KC_ENT),  LT(U_NUM,KC_BSPC), LT(U_FUN,KC_DEL),  U_NP,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_GRAPHITE_3x6_3 \
KC_TAB,           KC_B,              KC_L,              KC_D,              KC_W,              KC_Z,              KC_QUOT,           KC_F,              KC_O,              KC_U,              KC_J,                 KC_MINS,\
KC_ESC,           LGUI_T(KC_N),      LALT_T(KC_R),      LCTL_T(KC_T),      LSFT_T(KC_S),      KC_G,              KC_Y,              RSFT_T(KC_H),      RCTL_T(KC_A),      RALT_T(KC_E),      RGUI_T(KC_I),         KC_RCTL,\
KC_LSFT,          LT(U_BUTTON,KC_Q), ALGR_T(KC_X),      KC_M,              KC_C,              KC_V,              KC_K,              KC_P,              KC_DOT,            ALGR_T(KC_MINS),   LT(U_BUTTON,KC_SLSH), KC_RSFT,\
U_NP,             U_NP,              U_NP,              LT(U_MEDIA,KC_ESC),LT(U_NAV,KC_SPC),  LT(U_MOUSE,KC_TAB),LT(U_SYM,KC_ENT),  LT(U_NUM,KC_BSPC), LT(U_FUN,KC_DEL),  U_NP,              U_NP,                 U_NP

#define MIRYOKU_ALTERNATIVES_BASE_HALMAK_3x6_3 \
KC_TAB,           KC_W,              KC_L,              KC_R,              KC_B,              KC_Z,              KC_QUOT,           KC_Q,              KC_U,              KC_D,              KC_J,              KC_MINS,\
KC_ESC,           LGUI_T(KC_S),      LALT_T(KC_H),      LCTL_T(KC_N),      LSFT_T(KC_T),      KC_COMM,           KC_DOT,            RSFT_T(KC_A),      RCTL_T(KC_E),      RALT_T(KC_O),      RGUI_T(KC_I),      KC_RCTL,\
KC_LSFT,          LT(U_BUTTON,KC_F), ALGR_T(KC_M),      KC_V,              KC_C,              KC_SLSH,           KC_G,              KC_P,              KC_X,              ALGR_T(KC_K),      LT(U_BUTTON,KC_Y), KC_RSFT,\
U_NP,             U_NP,              U_NP,              LT(U_MEDIA,KC_ESC),LT(U_NAV,KC_SPC),  LT(U_MOUSE,KC_TAB),LT(U_SYM,KC_ENT),  LT(U_NUM,KC_BSPC), LT(U_FUN,KC_DEL),  U_NP,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BASE_QWERTY_3x6_3 \
KC_TAB,           KC_Q,              KC_W,              KC_E,              KC_R,              KC_T,              KC_Y,              KC_U,              KC_I,              KC_O,              KC_P,                 KC_MINS,\
KC_ESC,           LGUI_T(KC_A),      LALT_T(KC_S),      LCTL_T(KC_D),      LSFT_T(KC_F),      KC_G,              KC_H,              RSFT_T(KC_J),      RCTL_T(KC_K),      RALT_T(KC_L),      RGUI_T(KC_QUOT),      KC_RCTL,\
KC_LSFT,          LT(U_BUTTON,KC_Z), ALGR_T(KC_X),      KC_C,              KC_V,              KC_B,              KC_N,              KC_M,              KC_COMM,           ALGR_T(KC_DOT),    LT(U_BUTTON,KC_SLSH), KC_RSFT,\
U_NP,             U_NP,              U_NP,              LT(U_MEDIA,KC_ESC),LT(U_NAV,KC_SPC),  LT(U_MOUSE,KC_TAB),LT(U_SYM,KC_ENT),  LT(U_NUM,KC_BSPC), LT(U_FUN,KC_DEL),  U_NP,              U_NP,                 U_NP

#define MIRYOKU_ALTERNATIVES_TAP_COLEMAKDH_3x6_3 \
TD(U_TD_U_BASE),  KC_Q,              KC_W,              KC_F,              KC_P,              KC_B,              KC_J,              KC_L,              KC_U,              KC_Y,              KC_QUOT,           KC_MINS,\
KC_ESC,           KC_A,              KC_R,              KC_S,              KC_T,              KC_G,              KC_M,              KC_N,              KC_E,              KC_I,              KC_O,              KC_RCTL,\
KC_LSFT,          KC_Z,              KC_X,              KC_C,              KC_D,              KC_V,              KC_K,              KC_H,              KC_COMM,           KC_DOT,            KC_SLSH,           KC_RSFT,\
U_NP,             U_NP,              U_NP,              KC_ESC,            KC_SPC,            KC_TAB,            KC_ENT,            KC_BSPC,           KC_DEL,            U_NP,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_HALMAK_3x6_3 \
TD(U_TD_U_BASE),  KC_W,              KC_L,              KC_R,              KC_B,              KC_Z,              KC_QUOT,           KC_Q,              KC_U,              KC_D,              KC_J,              KC_MINS,\
KC_ESC,           KC_S,              KC_H,              KC_N,              KC_T,              KC_COMM,           KC_DOT,            KC_A,              KC_E,              KC_O,              KC_I,              KC_RCTL,\
KC_LSFT,          KC_F,              KC_M,              KC_V,              KC_C,              KC_SLSH,           KC_G,              KC_P,              KC_X,              KC_K,              KC_Y,              KC_RSFT,\
U_NP,             U_NP,              U_NP,              KC_ESC,            KC_SPC,            KC_TAB,            KC_ENT,            KC_BSPC,           KC_DEL,            U_NP,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_TAP_QWERTY_3x6_3 \
TD(U_TD_U_BASE),  KC_Q,              KC_W,              KC_E,              KC_R,              KC_T,              KC_Y,              KC_U,              KC_I,              KC_O,              KC_P,              KC_MINS,\
KC_ESC,           KC_A,              KC_S,              KC_D,              KC_F,              KC_G,              KC_H,              KC_J,              KC_K,              KC_L,              KC_QUOT,           KC_RCTL,\
KC_LSFT,          KC_Z,              KC_X,              KC_C,              KC_V,              KC_B,              KC_N,              KC_M,              KC_COMM,           KC_DOT,            KC_SLSH,           KC_RSFT,\
U_NP,             U_NP,              U_NP,              KC_ESC,            KC_SPC,            KC_TAB,            KC_ENT,            KC_BSPC,           KC_DEL,            U_NP,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_NAV_3x6_3 \
KC_TAB,           TD(U_TD_BOOT),     TD(U_TD_U_TAP),    TD(U_TD_U_EXTRA),  TD(U_TD_U_BASE),   U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             KC_MINS,\
KC_ESC,           KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           U_NA,              CW_TOGG,           KC_LEFT,           KC_DOWN,           KC_UP,             KC_RGHT,           KC_RCTL,\
KC_LSFT,          U_NA,              KC_ALGR,           TD(U_TD_U_NUM),    TD(U_TD_U_NAV),    U_NA,              KC_INS,            KC_HOME,           KC_PGDN,           KC_PGUP,           KC_END,            KC_RSFT,\
U_NP,             U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC_ENT,            KC_BSPC,           KC_DEL,            U_NP,              U_NP,               U_NP

#define MIRYOKU_ALTERNATIVES_MOUSE_3x6_3 \
KC_TAB,           TD(U_TD_BOOT),     TD(U_TD_U_TAP),    TD(U_TD_U_EXTRA),  TD(U_TD_U_BASE),   U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             KC_MINS,\
KC_ESC,           KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           U_NA,              U_NU,              KC_MS_L,           KC_MS_D,           KC_MS_U,           KC_MS_R,           KC_RCTL,\
KC_LSFT,          U_NA,              KC_ALGR,           TD(U_TD_U_SYM),    TD(U_TD_U_MOUSE),  U_NA,              U_NU,              KC_WH_L,           KC_WH_D,           KC_WH_U,           KC_WH_R,           KC_RSFT,\
U_NP,             U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC_BTN2,           KC_BTN1,           KC_BTN3,           U_NP,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_MEDIA_3x6_3 \
KC_TAB,           TD(U_TD_BOOT),     TD(U_TD_U_TAP),    TD(U_TD_U_EXTRA),  TD(U_TD_U_BASE),   U_NA,              DT_PRNT,           RGB_MOD,           KC_BRID,           KC_BRIU,           RGB_VAI,           KC_MINS,\
KC_ESC,           KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           U_NA,              DT_UP,              KC_MPRV,           KC_VOLD,           KC_VOLU,           KC_MNXT,           KC_RCTL,\
KC_LSFT,          U_NA,              KC_ALGR,           TD(U_TD_U_FUN),    TD(U_TD_U_MEDIA),  U_NA,              DT_DOWN,           U_NU,              U_NU,              U_NU,              U_NU,              KC_RSFT,\
U_NP,             U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC_MSTP,           KC_MPLY,           KC_MUTE,           U_NP,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_NUM_3x6_3 \
KC_TAB,           KC_LBRC,           KC_7,              KC_8,              KC_9,              KC_RBRC,           U_NA,              TD(U_TD_U_BASE),   TD(U_TD_U_EXTRA),  TD(U_TD_U_TAP),    TD(U_TD_BOOT),     KC_MINS,\
KC_ESC,           KC_SCLN,           KC_4,              KC_5,              KC_6,              KC_EQL,            U_NA,              KC_RSFT,           KC_LCTL,           KC_LALT,           KC_LGUI,           KC_RCTL,\
KC_LSFT,          KC_GRV,            KC_1,              KC_2,              KC_3,              KC_BSLS,           U_NA,              TD(U_TD_U_NUM),    TD(U_TD_U_NAV),    KC_ALGR,           U_NA,              KC_RSFT,\
U_NP,             U_NP,              U_NP,              KC_DOT,            KC_0,              KC_MINS,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_SYM_3x6_3 \
KC_TAB,           KC_LCBR,           KC_AMPR,           KC_ASTR,           KC_LPRN,           KC_RCBR,           U_NA,              TD(U_TD_U_BASE),   TD(U_TD_U_EXTRA),  TD(U_TD_U_TAP),    TD(U_TD_BOOT),     KC_MINS,\
KC_ESC,           KC_COLN,           KC_DLR,            KC_PERC,           KC_CIRC,           KC_PLUS,           U_NA,              KC_RSFT,           KC_LCTL,           KC_LALT,           KC_LGUI,           KC_RCTL,\
KC_LSFT,          KC_TILD,           KC_EXLM,           KC_AT,             KC_HASH,           KC_PIPE,           U_NA,              TD(U_TD_U_SYM),    TD(U_TD_U_MOUSE),  KC_ALGR,           U_NA,              KC_RSFT,\
U_NP,             U_NP,              U_NP,              KC_LPRN,           KC_RPRN,           KC_UNDS,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_FUN_3x6_3 \
KC_TAB,           KC_F12,            KC_F7,             KC_F8,             KC_F9,             KC_PSCR,           U_NA,              TD(U_TD_U_BASE),   TD(U_TD_U_EXTRA),  TD(U_TD_U_TAP),    TD(U_TD_BOOT),     KC_MINS,\
KC_ESC,           KC_F11,            KC_F4,             KC_F5,             KC_F6,             KC_SCRL,           U_NA,              KC_RSFT,           KC_LCTL,           KC_LALT,           KC_LGUI,           KC_RCTL,\
KC_LSFT,          KC_F10,            KC_F1,             KC_F2,             KC_F3,             KC_PAUS,           U_NA,              TD(U_TD_U_FUN),    TD(U_TD_U_MEDIA),  KC_ALGR,           U_NA,              KC_RSFT,\
U_NP,             U_NP,              U_NP,              KC_APP,            KC_SPC,            KC_TAB,            U_NA,              U_NA,              U_NA,              U_NP,              U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BUTTON_3x6_3 \
KC_TAB,           U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,            KC_MINS,\
KC_ESC,           KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           U_NU,              U_NU,              KC_RSFT,           KC_LCTL,           KC_LALT,           KC_LGUI,          KC_RCTL,\
KC_LSFT,          U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,            KC_RSFT,\
U_NP,             U_NP,              U_NP,              KC_BTN3,           KC_BTN1,           KC_BTN2,           KC_BTN2,           KC_BTN1,           KC_BTN3,           U_NP,              U_NP,             U_NP

