// #define TAPPING_TERM 1
// #define QUICK_TAP_TERM 1
// #define IGNORE_MOD_TAP_INTERRUPT
// #define TAPPING_FORCE_HOLD
// #define HOLD_ON_OTHER_KEY_PRESS_PER_KEY 
// #define PERMISSIVE_HOLD
// #define RETRO_TAPPING

#include QMK_KEYBOARD_H

#define MOD_LS MT(MOD_LSFT, KC_T)
#define MOD_LC MT(MOD_LCTL, KC_S)
#define MOD_LA MT(MOD_LALT, KC_R)
#define MOD_LG MT(MOD_LGUI, KC_A)

#define MOD_RS MT(MOD_RSFT, KC_N)
#define MOD_RC MT(MOD_RCTL, KC_E)
#define MOD_RA MT(MOD_RALT, KC_I)
#define MOD_RG MT(MOD_RGUI, KC_O)

const uint16_t PROGMEM keymaps[3][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_ESC,     KC_1,       KC_2,       KC_3,       KC_4,       KC_5,                               KC_6,       KC_7,      KC_8,        KC_9,       KC_0,       S(KC_CAPS),
        KC_TAB,     KC_Q,       KC_W,       KC_F,       KC_P,       KC_B,       KC_MINS,    KC_EQL,     KC_J,       KC_L,      KC_U,        KC_Y,       KC_SCLN,    KC_NO,
        KC_NO,      MOD_LG,     MOD_LA,     MOD_LC,     MOD_LS,     KC_G,       KC_LBRC,    KC_RBRC,    KC_M,       MOD_RS,    MOD_RC,      MOD_RA,     MOD_RG,     KC_GRV,
        KC_LSFT,    KC_Z,       KC_X,       KC_C,       KC_D,       KC_V,       KC_QUOT,    KC_BSLS,    KC_K,       KC_H,      KC_COMM,     KC_DOT,     KC_SLSH,    KC_NO,
        KC_LCTL,    KC_NO,      KC_NO,      KC_NO,      KC_DEL,     KC_BSPC,    MO(1),      KC_ENT,     KC_SPC,     MO(2),     KC_SPC,      KC_NO,      KC_NO,      QK_BOOT
    ),
    [1] = LAYOUT(
        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                            KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_PGUP,    KC_HOME,    KC_UP,      KC_END,     KC_TRNS,    C(KC_F9),
        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_PGDN,    KC_LEFT,    KC_DOWN,    KC_RIGHT,   KC_TRNS,    KC_PSCR,
        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS
    ),
    [2] = LAYOUT(
        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                            KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
        KC_TRNS,    KC_TRNS,    KC_1,       KC_2,       KC_3,       KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
        KC_TRNS,    KC_TRNS,    KC_4,       KC_5,       KC_6,       KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
        KC_TRNS,    KC_TRNS,    KC_7,       KC_8,       KC_9,       KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,
        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_0,       KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS
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
