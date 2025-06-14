// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum custom_layers {
    _DVORAK,
    _LOWER,
    _QWERTY,
};

// #define RGB_BACKLIGHT_EFFECT 6
#define RGB_MATRIX_SOLID_COLOR 1

#define LOWER MO(_LOWER)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_DVORAK] = LAYOUT(
       KC_GRAVE, S(KC_1), KC_LBRC, S(KC_LBRC), S(KC_9), KC_EQL , KC_VOLU,         KC_VOLD, KC_BSLS, S(KC_0), S(KC_RBRC), KC_RBRC, S(KC_SCLN), KC_MINS ,
        KC_TAB , KC_QUOT, KC_COMM, KC_DOT    , KC_P   , KC_Y   , KC_MUTE,         KC_MPLY, KC_F   , KC_G   , KC_C      , KC_R   , KC_L      , KC_SLSH ,
        KC_ESC , KC_A   , KC_O   , KC_E      , KC_U   , KC_I   , KC_MPRV,         KC_MNXT, KC_D   , KC_H   , KC_T      , KC_N   , KC_S      , KC_BSLS ,
        KC_LSFT, KC_SCLN, KC_Q   , KC_J      , KC_K   , KC_X   ,                           KC_B   , KC_M   , KC_W      , KC_V   , KC_Z      , KC_RSFT,
        LOWER  , KC_LEFT, KC_RGHT, KC_BSPC   , KC_LALT, LOWER  , KC_RCMD,         KC_RCTL, LOWER  , KC_ENT , KC_SPC    , KC_UP  , KC_DOWN   , LOWER 
    ),
    [_LOWER] = LAYOUT(
        KC_F1  , KC_F2  , KC_F3  , KC_F4   , KC_F5  , KC_F6  , QK_BOOT,        _______, KC_F7  , KC_F8  , KC_F9  , KC_F10    , KC_F11 , KC_F12 ,
        _______, KC_1   , KC_2   , KC_3    , KC_4   , KC_5   , _______,        _______, KC_6   , KC_7   , KC_8   , KC_9      , KC_0   , KC_MINUS,
        KC_GRAVE, S(KC_1), S(KC_2), S(KC_3), S(KC_4), S(KC_5), _______,        _______, S(KC_6), S(KC_7), S(KC_8), S(KC_COMM), KC_SCLN, S(KC_SCLN),
        _______, XXXXXXX, XXXXXXX, XXXXXXX , XXXXXXX, XXXXXXX,                         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX   , XXXXXXX, _______,
        _______, _______, _______,  _______, _______, _______, _______,        _______, _______, _______, _______,  _______  , _______, _______ 
    ),
    [_QWERTY] = LAYOUT(
        KC_GRAVE, KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , KC_VOLU,         KC_VOLD, KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_MINS,
        KC_TAB  , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , KC_MUTE,         KC_MPLY, KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_BSLS,
        KC_ESC  , KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , KC_MPRV,         KC_MNXT, KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT,
        KC_LSFT , KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   ,                           KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_RSFT,
        XXXXXXX, KC_LEFT, KC_RGHT, KC_BSPC , KC_LALT, LOWER  , KC_RCMD,         KC_RCTL, LOWER  , KC_ENT , KC_SPC , KC_UP  , KC_DOWN, XXXXXXX 
    ),
};
