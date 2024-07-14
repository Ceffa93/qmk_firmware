#include QMK_KEYBOARD_H

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

#define AlphaA_______ KC_A
#define AlphaB_______ KC_B
#define AlphaC_______ KC_C
#define AlphaD_______ KC_D
#define AlphaE_______ KC_E
#define AlphaF_______ KC_F
#define AlphaG_______ KC_G
#define AlphaH_______ KC_H
#define AlphaI_______ KC_I
#define AlphaJ_______ KC_J
#define AlphaK_______ KC_K
#define AlphaL_______ KC_L
#define AlphaM_______ KC_M
#define AlphaN_______ KC_N
#define AlphaO_______ KC_O
#define AlphaP_______ KC_P
#define AlphaQ_______ KC_Q
#define AlphaR_______ KC_R
#define AlphaS_______ KC_S
#define AlphaT_______ KC_T
#define AlphaU_______ KC_U
#define AlphaV_______ KC_V
#define AlphaW_______ KC_W
#define AlphaX_______ KC_X
#define AlphaY_______ KC_Y
#define AlphaZ_______ KC_Z

#define Num0_________ KC_0
#define Num1_________ KC_1
#define Num2_________ KC_2
#define Num3_________ KC_3
#define Num4_________ KC_4
#define Num5_________ KC_5
#define Num6_________ KC_6
#define Num7_________ KC_7
#define Num8_________ KC_8
#define Num9_________ KC_9

#define F1___________ KC_F1
#define F2___________ KC_F2
#define F3___________ KC_F3
#define F4___________ KC_F4
#define F5___________ KC_F5
#define F6___________ KC_F6
#define F7___________ KC_F7
#define F8___________ KC_F8
#define F9___________ KC_F9
#define F10__________ KC_F10
#define F11__________ KC_F11
#define F12__________ KC_F12

#define And__________ S(KC_7)
#define ArrowDown____ KC_DOWN
#define ArrowLeft____ KC_LEFT
#define ArrowRight___ KC_RIGHT
#define ArrowUp______ KC_UP
#define At___________ S(KC_2)
#define Asterisk_____ S(KC_8)
#define Backslash____ KC_BSLS
#define Backspace____ KC_BSPC
#define BackTick_____ KC_GRV
#define Column_______ S(KC_SCLN)
#define Comma________ KC_COMM
#define CurlyBrackL__ S(KC_LBRC)
#define CurlyBrackR__ S(KC_RBRC)
#define Del__________ KC_DEL
#define Dollar_______ S(KC_4)
#define Dot__________ KC_DOT
#define DoubQuote____ S(KC_QUOT)
#define Enter________ KC_ENT
#define End__________ KC_END
#define Equal________ KC_EQL
#define ExclamMark___ S(KC_1)
#define GreaterThan__ S(KC_DOT)
#define Kana_________ KC_F7
#define Kanji________ S(KC_CAPS)
#define Home_________ KC_HOME
#define LessThan_____ S(KC_COMM)
#define Minus________ KC_MINS
#define Modulo_______ S(KC_5)
#define Noop_________ KC_NO
#define Not__________ S(KC_GRV)
#define Or___________ S(KC_BSLS)
#define PageDown_____ KC_PGDN
#define PageUp_______ KC_PGUP
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

#define Del_M1_______ LT(MO(1), Del__________)
#define Enter_M2_____ LT(MO(2), Enter________)
#define Backspace_M3_ LT(MO(3), Backspace____)
#define Space_M4_____ LT(MO(4), Space________)


const uint16_t PROGMEM keymaps[5][MATRIX_ROWS][MATRIX_COLS] = 
{
    [0] = LAYOUT(
        AlphaQ_______, AlphaW_______, AlphaF_______, AlphaP_______, AlphaB_______, AlphaJ_______, AlphaL_______, AlphaU_______, AlphaY_______, Noop_________,    
        AlphaA_______, AlphaR_______, AlphaS_______, AlphaT_______, AlphaG_______, AlphaM_______, AlphaN_______, AlphaE_______, AlphaI_______, AlphaO_______,    
        AlphaZ_______, AlphaX_______, AlphaC_______, AlphaD_______, AlphaV_______, AlphaK_______, AlphaH_______, Dot__________, Comma________, Noop_________,    
                                                     Del_M1_______, Backspace_M3_, Space_M4_____, MO(2)
    ),
    [1] = LAYOUT(
        Asterisk_____, Slash________, Equal________, Minus________, Plus_________, Backslash____, ParenthesisR_, SqareBrackR__, CurlyBrackR__, GreaterThan__,    
        DoubQuote____, SinQuote_____, Column_______, SemiColumn___, Modulo_______, Sharp________, ParenthesisL_, SqareBrackL__, CurlyBrackL__, LessThan_____,    
        BackTick_____, ExclamMark___, QuestMark____, UnderScore___, At___________, Dollar_______, Or___________, And__________, Xor__________, Not__________,    
                                                     Del__________, Backspace____, Space________, Noop_________
    ),
    [2] = LAYOUT(
        Asterisk_____, Slash________, Equal________, Minus________, Plus_________, Noop_________, Noop_________, Noop_________, Noop_________, Noop_________,     
        Num6_________, Num4_________, Num2_________, Num0_________, Num8_________, Kanji________, ArrowLeft____, ArrowUp______, ArrowDown____, ArrowRight___,  
        Num7_________, Num5_________, Num3_________, Num1_________, Num9_________, Kana_________, Home_________, End__________, PageUp_______, PageDown_____,
                                                     Del__________, Backspace____, Space________, Noop_________
    ),
    [3] = LAYOUT(
        KC_NO,      KC_NO,      KC_NO,      KC_F11,     KC_F12,             KC_NO,      QK_BOOT,    KC_PSCR,    KC_NO,      KC_NO,      
        MOD_F6,     MOD_F4,     MOD_F2,     MOD_F10,    KC_F8,              KC_NO,      KC_LSFT,    KC_LCTL,    KC_LALT,    KC_NO,      
        KC_F7,      KC_F5,      KC_F3,      KC_F1,      KC_F9,              KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      
                                            KC_NO,      KC_NO,              KC_NO,      KC_NO
    ),
    [4] = LAYOUT(
        Noop_________, Noop_________, F12__________, F11__________, Noop_________,             KC_NO,      QK_BOOT,    KC_PSCR,    KC_NO,      KC_NO,      
        F6___________, F4___________, F2___________, F10__________, F8___________,              KC_NO,      KC_LSFT,    KC_LCTL,    KC_LALT,    KC_NO,      
        F7___________, F5___________, F3___________, F1___________, F9___________,              KC_NO,      KC_NO,      KC_NO,      KC_NO,      KC_NO,      
                                                     Del__________, Backspace____, Space________, Noop_________
    )
};

void matrix_scan_user(void) 
{
    achordion_task();
}

// Function that decides whether a hold should be disabled, depending on input-output key
bool achordion_chord(uint16_t tap_hold_keycode, keyrecord_t* tap_hold_record, uint16_t other_keycode, keyrecord_t* other_record) 
{
    if (tap_hold_keycode == Del_M1_______) return true;
    if (tap_hold_keycode == Enter_M2_____) return true;
    if (tap_hold_keycode == Backspace_M3_) return true;
    if (tap_hold_keycode == Space_M4_____) return true;
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