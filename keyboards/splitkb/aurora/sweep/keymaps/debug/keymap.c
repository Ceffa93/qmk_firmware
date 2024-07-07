#include QMK_KEYBOARD_H

enum layers {
    _DEFAULT = 0,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_DEFAULT] = LAYOUT(
        KC_A, KC_B, KC_C, KC_D, KC_E,     S(KC_E), S(KC_D), S(KC_C), S(KC_B), S(KC_A),
        KC_F, KC_G, KC_H, KC_I, KC_J,     S(KC_J), S(KC_I), S(KC_H), S(KC_G), S(KC_F),
        KC_K, KC_L, KC_M, KC_N, KC_O,     S(KC_O), S(KC_N), S(KC_M), S(KC_L), S(KC_K),
                          KC_P, KC_Q,     S(KC_Q), S(KC_P)
    )
};
