// Copyright 2023 Danny Nguyen (@nooges)
// SPDX-License-Identifier: GPL-2.0-or-later

#include "keycodes.h"
#include "modifiers.h"
#include QMK_KEYBOARD_H

#define _DVORAK 0
#define _GAME 1
#define _LOWER 2
#define _NAV 3
#define _COLMAKDH 4

#define COPY  C(KC_C)
#define PASTE C(KC_V)
#define UNDO  C(KC_Z)
#define REDO  C(KC_Y)

#define TO_COL TO(_COLMAKDH)

// Home row mods for DVORAK
#define LG_A LGUI_T(KC_A)
#define LA_O LALT_T(KC_O)
#define LS_E LSFT_T(KC_E)
#define LC_U LCTL_T(KC_U)

#define RG_S RGUI_T(KC_S)
#define RA_N RALT_T(KC_N)
#define RS_T RSFT_T(KC_T)
#define RC_H RCTL_T(KC_H)

// Home row mods for second layer nums
#define LG_1 LGUI_T(KC_1)
#define LA_2 LALT_T(KC_2)
#define LS_3 LSFT_T(KC_3)
#define LC_4 LCTL_T(KC_4)

#define RC_7 RCTL_T(KC_7)
#define RS_8 RSFT_T(KC_8)
#define RA_9 RALT_T(KC_9)
#define RG_0 RGUI_T(KC_0)

// Left-hand home row mods for colmakdh
#define GUI_A LGUI_T(KC_A)
#define ALT_R LALT_T(KC_R)
#define SFT_S LSFT_T(KC_S)
#define HCTL_T LCTL_T(KC_T)

// Right-hand home row mods for colmakdh
#define CTL_N RCTL_T(KC_N)
#define SFT_E RSFT_T(KC_E)
#define ALT_I LALT_T(KC_I)
#define GUI_O RGUI_T(KC_O)

enum custom_keycodes {
  DVORAK = SAFE_RANGE,
  LOWER,
  NAV,
  GAME,
  COLMAKDH
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_DVORAK] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                             ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_PSCR, KC_F1,   KC_F2,    KC_F3,   KC_F4,  KC_F5,                                 KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_TRNS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                             ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_ESC, KC_QUOT, KC_COMM,  KC_DOT,   KC_P,   KC_Y,                                  KC_F,    KC_G,    KC_C,     KC_R,    KC_L,  KC_SLSH,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                             ├────────┼────────┼────────┼────────┼────────┼────────┤
      KC_TAB,   LG_A,    LA_O,    LS_E,   LC_U,    KC_I,                                  KC_D,    RC_H,    RS_T,    RA_N,     RG_S,  KC_BSPC,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐           ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS, KC_SCLN,  KC_Q,     KC_J,   KC_K,    KC_X,   KC_HOME,              KC_END,   KC_B,    KC_M,    KC_W,    KC_V,    KC_Z,  KC_DEL,
  //└────────┴────────┴────────┴───┬────┴───┬────┴──────┬─┴──────┬─┘           └───┬────┴───┬────┴───────┬┴──────┬─┴────────┴────────┴────────┘
                                    KC_LGUI, MO(_LOWER), KC_SPC,                    SC_SENT,   MO(_NAV),   KC_DEL
                                 //└────────┴───────────┴────────┘                 └─────────┴────────────┴───────┘
  ),

  [_GAME] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────────┐
     QK_GESC,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,  TO(_DVORAK),
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────────┤
     KC_TAB,    KC_Q,    KC_R,    KC_W,    KC_E,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,   KC_TRNS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────────┤
     KC_LSFT,   KC_F,    KC_A,    KC_S,    KC_D,    KC_I,                             KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────────┤
     KC_LCTL,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,  KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────────┘
                                    KC_TRNS,MO(_LOWER), KC_TRNS,                 KC_TRNS, MO(_NAV), KC_TRNS
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_LOWER] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     QK_BOOT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,TO(_GAME),
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_GRV, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_LBRC, KC_RBRC, KC_TRNS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS,   LG_1,    LA_2,    LS_3,    LC_4,    KC_5,                               KC_6,    RC_7,   RS_8,     RA_9,    RG_0,  KC_MINS,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_EQL,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴─────┬──┴────┬───┴────────┴────────┴────────┘
                                    KC_TRNS, KC_TRNS, KC_TRNS,                   KC_RSFT, KC_TRNS,   KC_TRNS
                                // └────────┴────────┴────────┘                 └────────┴──────────┴───────┘
  ),

  [_NAV] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
      TO_COL, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_TOG,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, QK_BOOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS, KC_TRNS, KC_WH_D,  KC_UP,  KC_WH_U, KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  SC_SENT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     RGB_MOD, KC_TRNS, KC_MPRV, KC_MPLY, KC_MNXT, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS, KC_TRNS, KC_TRNS
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),


  [_COLMAKDH] = LAYOUT(
   //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬───────────┐
      KC_TRNS,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,  KC_MINS,  KC_EQL, TO(_DVORAK),
   //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼───────────┤
      KC_TRNS,   KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,                               KC_J,    KC_L,    KC_U,    KC_Y,  KC_SCLN,  KC_TRNS,
   //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼───────────┤
      KC_BSPC,  GUI_A,   ALT_R,   SFT_S,   HCTL_T,   KC_G,                               KC_M,    CTL_N,  SFT_E,   ALT_I,   GUI_O,    KC_QUOT,
   //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼───────────┤
      KC_TRNS,   KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,  KC_TRNS,          KC_TRNS,   KC_K,    KC_H,  KC_COMM,  KC_DOT, KC_SLSH,  KC_TRNS,
   //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴───────────┘
                                     KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS, KC_TRNS, KC_TRNS
                                 // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case DVORAK:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_DVORAK);
      }
      return false;
      break;
    case LOWER:
      if (record->event.pressed) {
        layer_on(_LOWER);
        update_tri_layer(_LOWER, _NAV, _GAME);
      } else {
        layer_off(_LOWER);
        update_tri_layer(_LOWER, _NAV, _GAME);
      }
      return false;
      break;
    case NAV:
      if (record->event.pressed) {
        layer_on(_NAV);
        update_tri_layer(_LOWER, _NAV, _GAME);
      } else {
        layer_off(_NAV);
        update_tri_layer(_LOWER, _NAV, _GAME);
      }
      return false;
      break;
    case GAME:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_GAME);
      }
      return false;
      break;
    case COLMAKDH:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_COLMAKDH);
      }
      return false;
      break;
  }
  return true;
}
