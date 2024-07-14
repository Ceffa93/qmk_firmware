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

#define And__________ S(KC_7)
#define At___________ S(KC_2)
#define Asterisk_____ S(KC_8)
#define Backslash____ KC_BSLS
#define Backspace____ KC_BSPC
#define BackTick_____ KC_GRV
#define Column_______ S(KC_SCLN)
#define CurlyBrackL__ S(KC_LBRC)
#define CurlyBrackR__ S(KC_RBRC)
#define Dollar_______ S(KC_4)
#define DoubQuote____ S(KC_QUOT)
#define Equal________ KC_EQL
#define ExclamMark___ S(KC_1)
#define GreaterThan__ S(KC_DOT)
#define LessThan_____ S(KC_COMM)
#define Minus________ KC_MINS
#define Modulo_______ S(KC_5)
#define Noop_________ KC_NO
#define Not__________ S(KC_GRV)
#define Or___________ S(KC_BSLS)
#define ParenthesisL_ S(KC_9)
#define ParenthesisR_ S(KC_0)
#define Plus_________ S(KC_EQL)
#define QuestMark____ S(KC_SLSH)
#define SemiColumn___ KC_SCLN
#define Sharp________ S(KC_3)
#define SinQuote_____ KC_QUOT
#define Slash________ KC_SLSH
#define Space________ KC_SPC
#define SqareBrackL__ KC_LBRC
#define SqareBrackR__ KC_RBRC
#define UnderScore___ S(KC_MINS)
#define Xor__________ S(KC_6)


enum Layers {
    BaseLayer,
    SymbolLayer,
    NumberNavigationLayer,
    FNumberLayer, 
    SingleHandLayer, 
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
        Asterisk_____, Slash________, Equal________, Minus________, Plus_________, Backslash____, ParenthesisR_, SqareBrackR__, CurlyBrackR__, GreaterThan__,    
        DoubQuote____, SinQuote_____, Column_______, SemiColumn___, Modulo_______, Sharp________, ParenthesisL_, SqareBrackL__, CurlyBrackL__, LessThan_____,    
        BackTick_____, ExclamMark___, QuestMark____, UnderScore___, At___________, Dollar_______, Or___________, And__________, Xor__________, Not__________,    
                                                     Noop_________, Backspace____, Space________, Noop_________
    ),
    [NumberNavigationLayer] = LAYOUT(
        KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,              KC_PGUP,    KC_HOME,    KC_UP,      KC_END,     KC_ESC,     
        MOD_6,      MOD_4,      MOD_2,      MOD_0,      KC_8,               KC_PGDN,    KC_LEFT,    KC_DOWN,    KC_RIGHT,   KC_NO,      
        KC_7,       KC_5,       KC_3,       KC_1,       KC_9,               KC_F7,      S(KC_CAPS), KC_TRNS,    KC_TRNS,    KC_LGUI,    
                                            KC_NO,      KC_BSPC,            KC_SPC,     KC_NO   
    ),
    [FNumberLayer] = LAYOUT(
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
    return achordion_opposite_hands(tap_hold_record, other_record);
}

uint16_t achordion_timeout(uint16_t tap_hold_keycode)
{
    return 800;
}

// We disable Tap action of retrotapping always. 
// We cannot disable retrotapping altoghether as it is required for mods neutralization
bool get_retro_tapping(uint16_t keycode, keyrecord_t *record) 
{
    return false; 
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) 
{
    if (!process_achordion(keycode, record)) return false;
    return true;
};

// Achordion has a long timeout in which it waits for a tap-key to be pressed, so it can take a decision.
// When using a mouse this is an issue, because combinations like Ctrl+Click do not trigger accordion function, 
// and Ctrl is considered held only after the timeout is expired (QMK timeout + Accordion timeout).
// The following function specifies modifiers that immediately triggered (after QMK timeout only).
// If a tap occurs, the held action is either released or nulled according to neutralization rules.  
bool achordion_eager_mod(uint8_t mod) {
    switch (mod) 
    {
        case MOD_LSFT:
        case MOD_LCTL:
        case MOD_LALT:
            return true;
        default:
            return false;
    }
}