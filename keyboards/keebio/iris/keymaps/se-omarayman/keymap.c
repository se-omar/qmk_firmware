// Copyright 2023 Danny Nguyen (@nooges)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#define _DVORAK 0
#define _LOWER 1
#define _RAISE 2
#define _ADJUST 3

enum custom_keycodes {
  DVORAK = SAFE_RANGE,
  LOWER,
  RAISE,
  ADJUST,
  NUM_1,
  NUM_2,
  NUM_3,
  NUM_4,
  NUM_5,
  NUM_6,
  NUM_7,
  NUM_8,
  NUM_9,
  NUM_0,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  // [_DVORAK] = LAYOUT(
  // //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
  //    S(KC_1), S(KC_5), KC_LBRC, S(KC_LBRC),S(KC_9),S(KC_8),                           KC_EQL,  S(KC_0), S(KC_RBRC),KC_RBRC,S(KC_7),KC_BSLS,
  // //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
  //    KC_TAB,  KC_SCLN, KC_COMM, KC_DOT,  KC_P,     KC_Y,                               KC_F,    KC_G,    KC_C,    KC_R,    KC_L,    KC_SLSH,
  // //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
  //    KC_BSPC, KC_A,    KC_O,    KC_E,    KC_U,    KC_I,                               KC_D,    KC_H,    KC_T,     KC_N,    KC_S,    SC_SENT,
  // //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
  //    KC_LSFT, KC_QUOT,    KC_Q,    KC_J,    KC_K,    KC_X,    KC_ESC,        KC_LALT,  KC_B,   KC_M,    KC_W,     KC_V,    KC_Z,   KC_MINS,
  // //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
  //                                   MO(1), KC_LGUI,   KC_RCTL,                    KC_RCTL,  KC_SPC,   MO(1)
  //                               // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  // ),

  [_DVORAK] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     S(KC_1),  NUM_7,   NUM_5,   NUM_3,   NUM_1,   NUM_9,                              NUM_0,   NUM_2,   NUM_4,   NUM_6,   NUM_8,  KC_BSLS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  KC_SCLN, KC_COMM, KC_DOT,  KC_P,     KC_Y,                               KC_F,    KC_G,    KC_C,    KC_R,    KC_L,    KC_SLSH,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_BSPC, KC_A,    KC_O,    KC_E,    KC_U,    KC_I,                               KC_D,    KC_H,    KC_T,     KC_N,    KC_S,    SC_SENT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT, KC_QUOT,    KC_Q,    KC_J,    KC_K,    KC_X,    KC_ESC,        KC_LALT,  KC_B,   KC_M,    KC_W,     KC_V,    KC_Z,   KC_MINS,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    MO(1), KC_LGUI,   KC_RCTL,                    KC_RCTL,  KC_SPC,   MO(1)
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_LOWER] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     S(KC_3), KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                            KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_VOLD, KC_VOLU, KC_MUTE, KC_MPLY, KC_MPRV, KC_MNXT,                            KC_PSCR, RGB_TOG, _______, S(KC_6), KC_RGHT, KC_TRNS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_PGUP,  S(KC_1), S(KC_2), KC_GRV, S(KC_GRV),S(KC_4),                           S(KC_6), KC_LEFT, S(KC_4), KC_BSLS, KC_RGHT, KC_BRIU,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_PGDN, KC_TRNS, KC_TRNS, KC_DOWN, KC_UP, S(KC_LBRC), KC_LPRN,          KC_RPRN, KC_RCBR, KC_P1,   KC_P2,   KC_P3,   KC_MINS, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, KC_DEL,                    KC_DEL,  _______, KC_P0
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_RAISE] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_F12,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                              KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     RGB_TOG, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                            KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     RGB_MOD, KC_MPRV, KC_MNXT, KC_VOLU, KC_PGUP, KC_UNDS,                            KC_EQL,  KC_HOME, RGB_HUI, RGB_SAI, RGB_VAI, KC_BSLS,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_MUTE, KC_MSTP, KC_MPLY, KC_VOLD, KC_PGDN, KC_MINS, KC_LPRN,          _______, KC_PLUS, KC_END,  RGB_HUD, RGB_SAD, RGB_VAD, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_ADJUST] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  static uint8_t shift_mask;
  switch (keycode) {
    case NUM_1:
      if (record->event.pressed) {
        shift_mask = get_mods() & MOD_MASK_SHIFT;
        if (shift_mask) {
            del_mods(MOD_MASK_SHIFT);
            tap_code(KC_1); // Outputs '1' when Shift is held
            set_mods(shift_mask);
        } else {
            tap_code16(S(KC_9)); // Outputs original key function
        }
      }
      return false;

    case NUM_2:
      if (record->event.pressed) {
          shift_mask = get_mods() & MOD_MASK_SHIFT;
          if (shift_mask) {
              del_mods(MOD_MASK_SHIFT);
              tap_code(KC_2); // Outputs '1' when Shift is held
              set_mods(shift_mask);
          } else {
              tap_code16(S(KC_0)); // Outputs original key function
          }
      }
      return false;

    case NUM_3:
      if (record->event.pressed) {
          shift_mask = get_mods() & MOD_MASK_SHIFT;
          if (shift_mask) {
              del_mods(MOD_MASK_SHIFT);
              tap_code(KC_3); // Outputs '1' when Shift is held
              set_mods(shift_mask);
          } else {
              tap_code16(S(KC_LBRC)); // Outputs original key function
          }
      }
      return false;

    case NUM_4:
      if (record->event.pressed) {
          shift_mask = get_mods() & MOD_MASK_SHIFT;
          if (shift_mask) {
              del_mods(MOD_MASK_SHIFT);
              tap_code(KC_4); // Outputs '1' when Shift is held
              set_mods(shift_mask);
          } else {
              tap_code16(S(KC_RBRC)); // Outputs original key function
          }
      }
      return false;

    case NUM_5:
      if (record->event.pressed) {
          shift_mask = get_mods() & MOD_MASK_SHIFT;
          if (shift_mask) {
              del_mods(MOD_MASK_SHIFT);
              tap_code(KC_5); // Outputs '1' when Shift is held
              set_mods(shift_mask);
          } else {
              tap_code16(KC_LBRC); // Outputs original key function
          }
      }
      return false;

    case NUM_6:
      if (record->event.pressed) {
          shift_mask = get_mods() & MOD_MASK_SHIFT;
          if (shift_mask) {
              del_mods(MOD_MASK_SHIFT);
              tap_code(KC_6); // Outputs '1' when Shift is held
              set_mods(shift_mask);
          } else {
              tap_code16(KC_RBRC); // Outputs original key function
          }
      }
      return false;

    case NUM_7:
      if (record->event.pressed) {
          shift_mask = get_mods() & MOD_MASK_SHIFT;
          if (shift_mask) {
              del_mods(MOD_MASK_SHIFT);
              tap_code(KC_7); // Outputs '1' when Shift is held
              set_mods(shift_mask);
          } else {
              tap_code16(S(KC_5)); // Outputs original key function
          }
      }
      return false;

    case NUM_8:
      if (record->event.pressed) {
          shift_mask = get_mods() & MOD_MASK_SHIFT;
          if (shift_mask) {
              del_mods(MOD_MASK_SHIFT);
              tap_code(KC_8); // Outputs '1' when Shift is held
              set_mods(shift_mask);
          } else {
              tap_code16(S(KC_7)); // Outputs original key function
          }
      }
      return false;

    case NUM_9:
      if (record->event.pressed) {
          shift_mask = get_mods() & MOD_MASK_SHIFT;
          if (shift_mask) {
              del_mods(MOD_MASK_SHIFT);
              tap_code(KC_9); // Outputs '1' when Shift is held
              set_mods(shift_mask);
          } else {
              tap_code16(S(KC_8)); // Outputs original key function
          }
      }
      return false;

    case NUM_0:
      if (record->event.pressed) {
          shift_mask = get_mods() & MOD_MASK_SHIFT;
          if (shift_mask) {
              del_mods(MOD_MASK_SHIFT);
              tap_code(KC_0); // Outputs '1' when Shift is held
              set_mods(shift_mask);
          } else {
              tap_code16(KC_EQL); // Outputs original key function
          }
      }
      return false;

    case DVORAK:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_DVORAK);
      }
      return false;
      break;
    case LOWER:
      if (record->event.pressed) {
        layer_on(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case RAISE:
      if (record->event.pressed) {
        layer_on(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case ADJUST:
      if (record->event.pressed) {
        layer_on(_ADJUST);
      } else {
        layer_off(_ADJUST);
      }
      return false;
      break;
  }
  return true;
}
