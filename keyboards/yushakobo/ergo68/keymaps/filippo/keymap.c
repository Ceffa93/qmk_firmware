#include QMK_KEYBOARD_H

#include "features/achordion.h"

#define MOD_T MT(MOD_LSFT, KC_T)
#define MOD_S MT(MOD_LCTL, KC_S)
#define MOD_R MT(MOD_LALT, KC_R)
#define MOD_A MT(MOD_LGUI, KC_A)

#define MOD_N MT(MOD_RSFT, KC_N)
#define MOD_E MT(MOD_RCTL, KC_E)
#define MOD_I MT(MOD_RALT, KC_I)
#define MOD_O MT(MOD_RGUI, KC_O)

#define MOD_0 MT(MOD_LSFT, KC_4)
#define MOD_2 MT(MOD_LCTL, KC_3)
#define MOD_4 MT(MOD_LALT, KC_2)
#define MOD_6 MT(MOD_LGUI, KC_1)

#define MOD_F10 MT(MOD_LSFT, KC_F4)
#define MOD_F2 MT(MOD_LCTL, KC_F3)
#define MOD_F4 MT(MOD_LALT, KC_F2)
#define MOD_F6 MT(MOD_LGUI, KC_F1)

#define LT3_TAB LT(MO(3), KC_TAB)

const uint16_t PROGMEM MO3_COMBO[] = {MO(1), MO(2), COMBO_END};
combo_t key_combos[] = 
{
    COMBO(MO3_COMBO, MO(3))
};

enum Layers {
    BaseLayer,
    SymbolLayer,
    NumberNavigationLayer,
    MiscellaneousLayer, 
};

const uint16_t PROGMEM keymaps[4][MATRIX_ROWS][MATRIX_COLS] = 
{
    [BaseLayer] = LAYOUT(
        KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,                              KC_NO,      KC_NO,     KC_NO,       KC_NO,      KC_NO,      KC_NO,
        KC_NO,      KC_Q,       KC_W,       KC_F,       KC_P,       KC_B,       KC_NO,      KC_NO,      KC_J,       KC_L,      KC_U,        KC_Y,       KC_ENT,     KC_NO,
        KC_NO,      MOD_A,      MOD_R,      MOD_S,      MOD_T,      KC_G,       KC_NO,      KC_NO,      KC_M,       MOD_N,     MOD_E,       MOD_I,      MOD_O,      KC_NO,
        KC_NO,      KC_Z,       KC_X,       KC_C,       KC_D,       KC_V,       KC_NO,      KC_NO,      KC_K,       KC_H,      KC_COMM,     KC_DOT,     KC_TAB,     KC_NO,
        KC_NO,      KC_NO,      KC_NO,      KC_NO,      MO(1),      KC_BSPC,    KC_NO,      KC_NO,      KC_SPC,     MO(2),     KC_NO,       KC_NO,      KC_NO,      KC_NO
    ),
    [SymbolLayer] = LAYOUT(
        KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,                              KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
        KC_NO,      KC_GRV,     KC_QUOT,    S(KC_QUOT), S(KC_SLSH), S(KC_1),    KC_NO,      KC_NO,      KC_LBRC,    S(KC_COMM), S(KC_SCLN), S(KC_DOT),  KC_RBRC,    KC_NO,
        KC_NO,      S(KC_5),    KC_SLSH,    S(KC_8),    KC_MINS,    S(KC_EQL),  KC_NO,      KC_NO,      S(KC_LBRC), S(KC_9),    KC_SCLN,    S(KC_0),    S(KC_RBRC), KC_NO,
        KC_NO,      S(KC_4),    KC_BSLS,    KC_EQL,     S(KC_MINS), S(KC_3),    KC_NO,      KC_NO,      S(KC_6),    S(KC_7),    S(KC_BSLS), S(KC_GRV),  S(KC_2),    KC_NO,
        KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_BSPC,    KC_NO,      KC_NO,      KC_SPC,     KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO
    ),
    [NumberNavigationLayer] = LAYOUT(
        KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,                              KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
        KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_PGUP,    KC_HOME,    KC_UP,      KC_END,     KC_ESC,     KC_NO,
        KC_NO,      MOD_6,      MOD_4,      MOD_2,      MOD_0,      KC_8,       KC_NO,      KC_NO,      KC_PGDN,    KC_LEFT,    KC_DOWN,    KC_RIGHT,   KC_NO,      KC_NO,
        KC_NO,      KC_7,       KC_5,       KC_3,       KC_1,       KC_9,       KC_NO,      KC_NO,      KC_F7,      S(KC_CAPS), KC_TRNS,    KC_TRNS,    KC_LGUI,    KC_NO,
        KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_BSPC,    KC_NO,      KC_NO,      KC_SPC,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO
    ),
    [MiscellaneousLayer] = LAYOUT(
        KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,                              KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,
        KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      QK_BOOT,    KC_PSCR,    KC_NO,      KC_NO,      KC_NO,
        KC_NO,      MOD_F6,     MOD_F4,     MOD_F2,     MOD_F10,    KC_F8,      KC_NO,      KC_NO,      KC_NO,      KC_LSFT,    KC_LCTL,    KC_LALT,    KC_NO,      KC_NO,
        KC_NO,      KC_F7,      KC_F5,      KC_F3,      KC_F1,      KC_F9,      KC_NO,      KC_NO,      KC_NO,      RGB_TOG,    RGB_VAI,    KC_NO,      KC_NO,      KC_NO,
        KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_F11,     KC_F12,     KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO
    )
};

void matrix_scan_user(void) 
{
    achordion_task();
}

// Function that decides whether a hold should be disabled, depending on input-output key
bool achordion_chord(uint16_t tap_hold_keycode, keyrecord_t* tap_hold_record, uint16_t other_keycode, keyrecord_t* other_record) 
{
  // Allow hold action if the row is different - I don't think I risk rolling vertically.
  //if (other_record->event.key.row != tap_hold_record->event.key.row) return true;

  // Allow hold action if the column is not adjacent - I don't think I risk rolling activation with 3 keys.
  //if (abs(other_record->event.key.col - tap_hold_record->event.key.col) >= 2) return true;

  // Otherwise, disable hold action if both keys are in the same hand.
  return achordion_opposite_hands(tap_hold_record, other_record);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) 
{
    if (!process_achordion(keycode, record)) return false;

    uint8_t mod_state = get_mods();
    switch (keycode) {
    
    case KC_SPC: // Shift + Space = Enter
        static bool entkey_registered;
        if (record->event.pressed) 
        {
            if (mod_state & MOD_MASK_SHIFT) 
            {
                del_mods(MOD_MASK_SHIFT);
                register_code(KC_ENT);
                entkey_registered = true;
                set_mods(mod_state);
                return false;
            }
        } 
        else 
        { 
            if (entkey_registered) 
            {
                unregister_code(KC_ENT);
                entkey_registered = false;
                return false;
            }
        }
        return true;

    case KC_BSPC: // Shift + Backspace = Del
        static bool delkey_registered;
        if (record->event.pressed) 
        {
            if (mod_state & MOD_MASK_SHIFT) 
            {
                del_mods(MOD_MASK_SHIFT);
                register_code(KC_DEL);
                delkey_registered = true;
                set_mods(mod_state);
                return false;
            }
        } 
        else 
        { 
            if (delkey_registered)
            {
                unregister_code(KC_DEL);
                delkey_registered = false;
                return false;
            }
        }
        return true;
    }
    return true;
};

layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
        case BaseLayer:
            rgblight_sethsv(0, 255, rgblight_get_val());
            break;
        case NumberNavigationLayer:
            rgblight_sethsv(26, 255, rgblight_get_val());
            break;
        case SymbolLayer:
            rgblight_sethsv(226, 255, rgblight_get_val());
            break;
        case MiscellaneousLayer:
            rgblight_sethsv(0, 0, rgblight_get_val());
            break;
    }
  return state;
}