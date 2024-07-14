#include QMK_KEYBOARD_H

const uint16_t PROGMEM MO3_COMBO[] = {MO(1), MO(2), COMBO_END};
combo_t key_combos[] = 
{
    COMBO(MO3_COMBO, MO(3))
};

#include "features/achordion.h"

#define MOD_T MT(MOD_LSFT, KC_T)
#define MOD_S MT(MOD_LCTL, KC_S)
#define MOD_R MT(MOD_LALT, KC_R)
#define MOD_A MT(MOD_LGUI, KC_A)

#define MOD_N MT(MOD_LSFT, KC_N)
#define MOD_E MT(MOD_LCTL, KC_E)
#define MOD_I MT(MOD_LALT, KC_I)
#define MOD_O MT(MOD_LGUI, KC_O)

#define MOD_0 MT(MOD_LSFT, KC_0)
#define MOD_2 MT(MOD_LCTL, KC_2)
#define MOD_4 MT(MOD_LALT, KC_4)
#define MOD_6 MT(MOD_LGUI, KC_6)

#define MOD_F10 MT(MOD_LSFT, KC_F10)
#define MOD_F2 MT(MOD_LCTL, KC_F2)
#define MOD_F4 MT(MOD_LALT, KC_F4)
#define MOD_F6 MT(MOD_LGUI, KC_F6)

enum Layers {
    BaseLayer,
    SymbolLayer,
    NumberNavigationLayer,
    MiscellaneousLayer, 
};

const uint16_t PROGMEM keymaps[4][MATRIX_ROWS][MATRIX_COLS] = 
{
    [BaseLayer] = LAYOUT(
        KC_Q,       KC_W,       KC_F,       KC_P,       KC_B,               KC_J,       KC_L,      KC_U,        KC_Y,       KC_ENT,
        MOD_A,      MOD_R,      MOD_S,      MOD_T,      KC_G,               KC_M,       MOD_N,     MOD_E,       MOD_I,      MOD_O, 
        KC_Z,       KC_X,       KC_C,       KC_D,       KC_V,               KC_K,       KC_H,      KC_COMM,     KC_DOT,     KC_TAB,
                                            MO(1),      KC_BSPC,            KC_SPC,     MO(2)
    ),
    [SymbolLayer] = LAYOUT(
        KC_GRV,     KC_QUOT,    S(KC_QUOT), S(KC_SLSH), S(KC_1),            KC_LBRC,    S(KC_COMM), S(KC_SCLN), S(KC_DOT),  KC_RBRC,    
        S(KC_5),    KC_SLSH,    S(KC_8),    KC_MINS,    S(KC_EQL),          S(KC_LBRC), S(KC_9),    KC_SCLN,    S(KC_0),    S(KC_RBRC), 
        S(KC_4),    KC_BSLS,    KC_EQL,     S(KC_MINS), S(KC_3),            S(KC_6),    S(KC_7),    S(KC_BSLS), S(KC_GRV),  S(KC_2),    
                                            KC_NO,      KC_BSPC,            KC_SPC,     KC_NO
    ),
    [NumberNavigationLayer] = LAYOUT(
        KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,              KC_PGUP,    KC_HOME,    KC_UP,      KC_END,     KC_ESC,     
        MOD_6,      MOD_4,      MOD_2,      MOD_0,      KC_8,               KC_PGDN,    KC_LEFT,    KC_DOWN,    KC_RIGHT,   KC_NO,      
        KC_7,       KC_5,       KC_3,       KC_1,       KC_9,               KC_F7,      S(KC_CAPS), KC_TRNS,    KC_TRNS,    KC_LGUI,    
                                            KC_NO,      KC_BSPC,            KC_SPC,     KC_NO   
    ),
    [MiscellaneousLayer] = LAYOUT(
        KC_NO,      KC_NO,      KC_NO,      KC_F11,     KC_F12,             KC_NO,      QK_BOOT,    KC_PSCR,    KC_NO,      KC_NO,      
        MOD_F6,     MOD_F4,     MOD_F2,     MOD_F10,    KC_F8,              KC_NO,      KC_LSFT,    KC_LCTL,    KC_LALT,    KC_NO,      
        KC_F7,      KC_F5,      KC_F3,      KC_F1,      KC_F9,              KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      
                                            KC_NO,      KC_NO,              KC_NO,      KC_NO
    )
};

void matrix_scan_user(void) 
{
    achordion_task();
}

// Function that decides whether a hold should be disabled, depending on input-output key
bool achordion_chord(uint16_t tap_hold_keycode, keyrecord_t* tap_hold_record, uint16_t other_keycode, keyrecord_t* other_record) 
{
  // Disable hold action if both keys are in the same hand.
  return achordion_opposite_hands(tap_hold_record, other_record);
}

uint16_t achordion_timeout(uint16_t tap_hold_keycode)
{
  return 800;
}

bool get_retro_tapping(uint16_t keycode, keyrecord_t *record) 
{
  if (keycode == KC_LALT) return true;
  if (keycode == KC_LGUI) return true;
  return false;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) 
{
    if (!process_achordion(keycode, record)) return false;
    return true;
};
