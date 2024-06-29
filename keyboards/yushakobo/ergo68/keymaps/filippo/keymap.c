// #define TAPPING_TERM 1
// #define QUICK_TAP_TERM 1
// #define IGNORE_MOD_TAP_INTERRUPT
// #define TAPPING_FORCE_HOLD
// #define HOLD_ON_OTHER_KEY_PRESS_PER_KEY 
// #define PERMISSIVE_HOLD
// #define RETRO_TAPPING

#include QMK_KEYBOARD_H

#define MOD_T MT(MOD_LSFT, KC_T)
#define MOD_S MT(MOD_LCTL, KC_S)
#define MOD_R MT(MOD_LALT, KC_R)
#define MOD_A MT(MOD_LGUI, KC_A)

#define MOD_N MT(MOD_RSFT, KC_N)
#define MOD_E MT(MOD_RCTL, KC_E)
#define MOD_I MT(MOD_RALT, KC_I)
#define MOD_O MT(MOD_RGUI, KC_O)

#define MOD_9 MT(MOD_LSFT, KC_9)
#define MOD_8 MT(MOD_LCTL, KC_8)
#define MOD_7 MT(MOD_LALT, KC_7)
#define MOD_6 MT(MOD_LGUI, KC_6)

#define LT1_EN LT(MO(1), KC_ENT)
#define LT2_DEL LT(MO(2), KC_DEL)
#define LT3_BS LT(MO(3), KC_BSPC)

enum Layers {
    BaseLayer,
    NumberNavigationLayer,
    SymbolLayer,
    MiscellaneousLayer, 
};

const uint16_t PROGMEM keymaps[4][MATRIX_ROWS][MATRIX_COLS] = {
    [BaseLayer] = LAYOUT(
        KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,                              KC_NO,      KC_NO,     KC_NO,       KC_NO,      KC_NO,      KC_NO,
        KC_NO,      KC_Q,       KC_W,       KC_F,       KC_P,       KC_B,       KC_NO,      KC_NO,      KC_J,       KC_L,      KC_U,        KC_Y,       KC_TAB,     KC_NO,
        KC_NO,      MOD_A,      MOD_R,      MOD_S,      MOD_T,      KC_G,       KC_NO,      KC_NO,      KC_M,       MOD_N,     MOD_E,       MOD_I,      MOD_O,      KC_NO,
        KC_NO,      KC_Z,       KC_X,       KC_C,       KC_D,       KC_V,       KC_NO,      KC_NO,      KC_K,       KC_H,      KC_COMM,     KC_DOT,     KC_ESC,     KC_NO,
        KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      LT3_BS,     LT2_DEL,    LT1_EN,     KC_SPC,     KC_NO,     KC_NO,       KC_NO,      KC_NO,      KC_NO
    ),
    [NumberNavigationLayer] = LAYOUT(
        KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,                              KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
        KC_NO,      KC_1,       KC_2,       KC_3,       KC_4,       KC_5,       KC_NO,      KC_NO,      KC_PGUP,    KC_HOME,    KC_UP,      KC_END,     KC_NO,      KC_NO,
        KC_NO,      MOD_6,      MOD_7,      MOD_8,      MOD_9,      KC_0,       KC_NO,      KC_NO,      KC_PGDN,    KC_LEFT,    KC_DOWN,    KC_RIGHT,   KC_NO,      KC_NO,
        KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      S(KC_CAPS), KC_TRNS,    KC_TRNS,    KC_NO,      KC_NO,
        KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_TRNS,    KC_TRNS,    KC_NO,      KC_NO,      KC_TRNS,    KC_TRNS,    KC_NO,      KC_NO,      KC_NO,      KC_NO
    ),
    [SymbolLayer] = LAYOUT(
        KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,                              KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
        KC_NO,      KC_GRV,     KC_QUOT,    S(KC_QUOT), S(KC_SLSH), S(KC_1),    KC_NO,      KC_NO,      KC_LBRC,    S(KC_COMM), S(KC_SCLN), S(KC_DOT),  KC_RBRC,    KC_NO,
        KC_NO,      S(KC_5),    KC_SLSH,    S(KC_8),    KC_MINS,    S(KC_EQL),  KC_NO,      KC_NO,      S(KC_LBRC), S(KC_9),    KC_SCLN,    S(KC_0),    S(KC_RBRC), KC_NO,
        KC_NO,      S(KC_4),    KC_BSLS,    KC_EQL,     S(KC_MINS), S(KC_3),    KC_NO,      KC_NO,      S(KC_6),    S(KC_7),    S(KC_BSLS), S(KC_GRV),  S(KC_2),    KC_NO,
        KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_TRNS,    KC_TRNS,    KC_NO,      KC_NO,      KC_TRNS,    KC_TRNS,    KC_NO,      KC_NO,      KC_NO,      KC_NO
    ),
    [MiscellaneousLayer] = LAYOUT(
        KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,                              KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
        KC_NO,      KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,      KC_NO,      KC_NO,      KC_PSCR,    KC_NO,      KC_NO,      KC_NO,      QK_BOOT,    KC_NO,
        KC_NO,      KC_F6,      KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_NO,      KC_NO,      KC_NO,      RGB_TOG,    RGB_VAI,    RGB_HUI,    RGB_SAI,    KC_NO,
        KC_NO,      KC_F10,     KC_F11,     KC_F12,     KC_F13,     KC_F14,     KC_NO,      KC_NO,      KC_NO,      RGB_MOD,    RGB_VAD,    RGB_HUD,    RGB_SAD,    KC_NO,
        KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_TRNS,    KC_TRNS,    KC_NO,      KC_NO,      KC_TRNS,    KC_TRNS,    KC_NO,      KC_NO,      KC_NO,      KC_NO
    )
};

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    // caps lock cyan
    if (host_keyboard_led_state().caps_lock) {
        RGB_MATRIX_INDICATOR_SET_COLOR(0, 0, 0, 128);
    } else {
        RGB_MATRIX_INDICATOR_SET_COLOR(0, 0, 0, 0);
    }
    // num lock cyan
    if (host_keyboard_led_state().num_lock) {
        RGB_MATRIX_INDICATOR_SET_COLOR(1, 0, 0, 128);
    } else {
        RGB_MATRIX_INDICATOR_SET_COLOR(1, 0, 0, 0);
    }

    // scroll lock cyan
    if (host_keyboard_led_state().scroll_lock) {
        RGB_MATRIX_INDICATOR_SET_COLOR(2, 0, 0, 128);
    } else {
        RGB_MATRIX_INDICATOR_SET_COLOR(2, 0, 0, 0);
    }

    // layer state
    switch (get_highest_layer(layer_state)) {
        case 1:
            RGB_MATRIX_INDICATOR_SET_COLOR(37, 0, 0, 128);
            break;
        case 2:
            RGB_MATRIX_INDICATOR_SET_COLOR(38, 0, 0, 128);
            break;
        case 3:
            RGB_MATRIX_INDICATOR_SET_COLOR(39, 0, 0, 128);
            break;
    }
    return false;
}
