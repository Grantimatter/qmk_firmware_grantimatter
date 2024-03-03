// Copyright 2023 Danny Nguyen (@nooges)
// SPDX-License-Identifier: GPL-2.0-or-later

#include "keycodes.h"
#include "modifiers.h"
#include QMK_KEYBOARD_H

#define _COLMAKDH 0
#define _MEDIA 1
#define _NAV 2
#define _MOUSE 3
#define _SYM 4
#define _NUM 5
#define _FUN 6
#define _GAME 7

#define COPY  C(KC_C)
#define PASTE C(KC_V)
#define UNDO  C(KC_Z)
#define REDO  C(KC_Y)

#define TO_COL TO(_COLMAKDH)

// Home row mods for second layer nums
#define LGUI_1 LGUI_T(KC_1)
#define LALT_2 LALT_T(KC_2)
#define LSFT_3 LSFT_T(KC_3)
#define LCTL_4 LCTL_T(KC_4)

#define RCTL_7 RCTL_T(KC_7)
#define RSFT_8 RSFT_T(KC_8)
#define RALT_9 LALT_T(KC_9)
#define RGUI_0 RGUI_T(KC_0)

// Left-hand home row mods for colmakdh
#define GUI_A LGUI_T(KC_A)
#define ALT_R LALT_T(KC_R)
#define CTL_S LCTL_T(KC_S)
#define HSFT_T LSFT_T(KC_T)

// Right-hand home row mods for colmakdh
#define SFT_N RSFT_T(KC_N)
#define CTL_E RCTL_T(KC_E)
#define ALT_I LALT_T(KC_I)
#define GUI_O RGUI_T(KC_O)

// Tap Dances
// enum {
//     TD_I_HOME,
//     TD_D_END,
// };

enum custom_keycodes {
  COLMAKDH = SAFE_RANGE,
  MEDIA,
  NAV,
  MOUSE,
  SYM,
  NUM,
  FUN,
  GAME
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_COLMAKDH] = LAYOUT(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,    KC_TRNS,                            KC_TRNS,   KC_J,    KC_L,    KC_U,    KC_Y,    KC_QUOT,
    GUI_A,   ALT_R,   CTL_S,   HSFT_T,  KC_G,    KC_TRNS,                            KC_TRNS,   KC_M,    SFT_N,   CTL_E,   ALT_I,   GUI_O,
    KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,    KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS,   KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH,
           LT(_MEDIA,KC_ESC), LT(_NAV,KC_SPC),  LT(_MOUSE,KC_TAB),                   LT(_SYM,KC_ENT),  LT(_NUM,KC_BSPC), LT(_FUN,KC_DEL)
  ),

  [_MEDIA] = LAYOUT(
    QK_BOOT, KC_TRNS, DF(_GAME), DF(_COLMAKDH), KC_TRNS, KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS,       KC_TRNS, KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS,       KC_TRNS, KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                         KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS, KC_TRNS, KC_TRNS
  ),

  [_NAV] = LAYOUT(
    QK_BOOT, KC_TRNS, DF(_GAME), DF(_COLMAKDH), KC_TRNS, KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS,       KC_TRNS, KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS,       KC_TRNS, KC_TRNS,                            KC_TRNS, CW_TOGG, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,
    KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                            KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS, KC_TRNS, KC_TRNS
  ),

  [_MOUSE] = LAYOUT(
    QK_BOOT, KC_TRNS, DF(_GAME), DF(_COLMAKDH), KC_TRNS, KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS,       KC_TRNS, KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS,       KC_TRNS, KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                         KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS, KC_TRNS, KC_TRNS
  ),

  [_SYM] = LAYOUT(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS, KC_TRNS, DF(_COLMAKDH), DF(_GAME), KC_TRNS, QK_BOOT,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS,   KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS,   KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS,   KC_TRNS, KC_TRNS,
                                    KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS, KC_TRNS, KC_TRNS
  ),

  [_NUM] = LAYOUT(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS, KC_TRNS, DF(_COLMAKDH), DF(_GAME), KC_TRNS, QK_BOOT,
    KC_LBRC, KC_7,    KC_8,    KC_9,    KC_RBRC, KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS,   KC_TRNS, KC_TRNS,
    KC_SCLN, KC_4,    KC_5,    KC_6,    KC_EQL,  KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS,   KC_TRNS, KC_TRNS,
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_BSLS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS,   KC_TRNS, KC_TRNS,
                                        KC_DOT, KC_0, KC_MINS,                   KC_TRNS, KC_TRNS, KC_TRNS
  ),

  [_FUN] = LAYOUT(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS, KC_TRNS, DF(_COLMAKDH), DF(_GAME), KC_TRNS, QK_BOOT,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS,   KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS,   KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS,   KC_TRNS, KC_TRNS,
                                    KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS, KC_TRNS, KC_TRNS
  ),

  [_GAME] = LAYOUT(
    KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TAB,    KC_Q,    KC_R,    KC_W,    KC_E,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_TRNS,
    KC_LSFT,   KC_F,    KC_A,    KC_S,    KC_D,    KC_I,                               KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_LCTL,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,  KC_TRNS,            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                    KC_LSFT, KC_SPACE, MO(_NUM),                   KC_TRNS, MO(_NAV), KC_TRNS
  ),
};

// bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//   switch (keycode) {
//     case NUM:
//       if (record->event.pressed) {
//         layer_on(_NUM);
//         update_tri_layer(_NUM, _NAV, _GAME);
//       } else {
//         layer_off(_NUM);
//         update_tri_layer(_NUM, _NAV, _GAME);
//       }
//       return false;
//       break;
//     case NAV:
//       if (record->event.pressed) {
//         layer_on(_NAV);
//         update_tri_layer(_NUM, _NAV, _GAME);
//       } else {
//         layer_off(_NAV);
//         update_tri_layer(_NUM, _NAV, _GAME);
//       }
//       return false;
//       break;
//     case GAME:
//       if (record->event.pressed) {
//         set_single_persistent_default_layer(_GAME);
//       }
//       return false;
//       break;
//     case COLMAKDH:
//       if (record->event.pressed) {
//         set_single_persistent_default_layer(_COLMAKDH);
//       }
//       return false;
//       break;
//   }
//   return true;
// }
