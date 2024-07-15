#include QMK_KEYBOARD_H

#include "features/achordion.h"

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

#define AltL_________ KC_LALT
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
#define Boot_________ QK_BOOT
#define Column_______ S(KC_SCLN)
#define Comma________ KC_COMM
#define ControlL_____ KC_LCTL
#define Copy_________ LCTL(KC_C)
#define CurlyBrackL__ S(KC_LBRC)
#define CurlyBrackR__ S(KC_RBRC)
#define Cut__________ LCTL(KC_X)
#define Del__________ KC_DEL
#define Dollar_______ S(KC_4)
#define Dot__________ KC_DOT
#define DoubQuote____ S(KC_QUOT)
#define Enter________ KC_ENT
#define End__________ KC_END
#define Equal________ KC_EQL
#define Esc__________ KC_ESC
#define ExclamMark___ S(KC_1)
#define Find_________ LCTL(KC_F)
#define GreaterThan__ S(KC_DOT)
#define GuiL_________ KC_LGUI
#define Hiragana_____ LCTL(KC_CAPS_LOCK)
#define Home_________ KC_HOME
#define Katakana_____ LALT(KC_CAPS_LOCK)
#define LessThan_____ S(KC_COMM)
#define Minus________ KC_MINS
#define Modulo_______ S(KC_5)
#define Noop_________ KC_NO
#define Not__________ S(KC_GRV)
#define Or___________ S(KC_BSLS)
#define PageDown_____ KC_PGDN
#define PageUp_______ KC_PGUP
#define ParentL______ S(KC_9)
#define ParentR______ S(KC_0)
#define Paste________ LCTL(KC_V)
#define Plus_________ S(KC_EQL)
#define PrintScreen__ KC_PRINT_SCREEN
#define QuestMark____ S(KC_SLSH)
#define Redo_________ LCTL(KC_Y)
#define Romaji_______ LALT(KC_GRV)
#define SemiColumn___ KC_SCLN
#define Sharp________ S(KC_3)
#define ShiftL_______ KC_LSFT
#define SinQuote_____ KC_QUOT
#define Slash________ KC_SLSH
#define Space________ KC_SPC
#define SqareBrackL__ KC_LBRC
#define SqareBrackR__ KC_RBRC
#define Tab__________ KC_TAB
#define Translate____ LCTL(KC_F9)
#define UnderScore___ S(KC_MINS)
#define Undo_________ LCTL(KC_Z)
#define Xor__________ S(KC_6)

#define AlphaT_S_____ MT(MOD_LSFT, AlphaT_______)
#define AlphaS_C_____ MT(MOD_LCTL, AlphaS_______)
#define AlphaR_A_____ MT(MOD_LALT, AlphaR_______)
#define AlphaA_G_____ MT(MOD_LGUI, AlphaA_______)
#define AlphaN_S_____ MT(MOD_LSFT, AlphaN_______)
#define AlphaE_C_____ MT(MOD_LCTL, AlphaE_______)
#define AlphaI_A_____ MT(MOD_LALT, AlphaI_______)
#define AlphaO_G_____ MT(MOD_LGUI, AlphaO_______)

#define Num0_S_______ MT(MOD_LSFT, Num0_________)
#define Num2_C_______ MT(MOD_LCTL, Num2_________)
#define Num4_A_______ MT(MOD_LALT, Num4_________)
#define Num6_G_______ MT(MOD_LGUI, Num6_________)
#define F10_S________ MT(MOD_LSFT, F10__________)
#define F2_C_________ MT(MOD_LCTL, F2___________)
#define F4_A_________ MT(MOD_LALT, F4___________)
#define F6_G_________ MT(MOD_LGUI, F6___________)

#define Del_M1_______ LT(MO(1), Del__________)
#define Enter_M2_____ LT(MO(2), Enter________)
#define Backspace_M3_ LT(MO(3), Backspace____)

const uint16_t PROGMEM keymaps[4][MATRIX_ROWS][MATRIX_COLS] = 
{
    [0] = LAYOUT(
        AlphaQ_______, AlphaW_______, AlphaF_______, AlphaP_______, AlphaB_______, AlphaJ_______, AlphaL_______, AlphaU_______, AlphaY_______, SinQuote_____,    
        AlphaA_G_____, AlphaR_A_____, AlphaS_C_____, AlphaT_S_____, AlphaG_______, AlphaM_______, AlphaN_S_____, AlphaE_C_____, AlphaI_A_____, AlphaO_G_____,    
        AlphaZ_______, AlphaX_______, AlphaC_______, AlphaD_______, AlphaV_______, AlphaK_______, AlphaH_______, Dot__________, Comma________, DoubQuote____,    
                                                     Del_M1_______, Backspace_M3_, S(Space________), Enter_M2_____
    ),
    [1] = LAYOUT(
        Asterisk_____, Slash________, Equal________, Minus________, Plus_________, Noop_________, Boot_________, PrintScreen__, Noop_________, Noop_________,     
        Num6_G_______, Num4_A_______, Num2_C_______, Num0_S_______, Num8_________, Noop_________, F10_S________, F2_C_________, F4_A_________, F6_G_________, 
        Num7_________, Num5_________, Num3_________, Num1_________, Num9_________, Noop_________, Noop_________, Noop_________, Noop_________, Noop_________,  
                                                     Del__________, Backspace____, Space________, Enter________
    ),
    [2] = LAYOUT(
        Asterisk_____, Slash________, Equal________, Minus________, Plus_________, And__________, ParentR______, SqareBrackR__, CurlyBrackR__, GreaterThan__,    
        Backslash____, Column_______, SemiColumn___, UnderScore___, Modulo_______, Or___________, ParentL______, SqareBrackL__, CurlyBrackL__, LessThan_____,    
        BackTick_____, ExclamMark___, QuestMark____, Sharp________, At___________, Not__________, Xor__________, Dot__________, Comma________, Dollar_______,    
                                                     Del__________, Backspace____, Space________, Enter________
    ),
    [3] = LAYOUT(
        Translate____, Find_________, Enter________, Space________, Esc__________, PageUp_______, Home_________, ArrowUp______, End__________, Noop_________,       
        GuiL_________, AltL_________, ControlL_____, ShiftL_______, Tab__________, PageDown_____, ArrowLeft____, ArrowDown____, ArrowRight___, Noop_________,   
        Cut__________, Copy_________, Paste________, Undo_________, Redo_________, Katakana_____, Romaji_______, Hiragana_____, Noop_________, Noop_________,
                                                     Del__________, Backspace____, Space________, Enter________
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

    // There is no key to set romaji, only toggle.
    // We simulate set romaji behavior by first setting hiragana, and then toggling.
    if (keycode == Romaji_______)
    {
        if (record->event.pressed)
        {
            tap_code16(Hiragana_____);
            tap_code16(Romaji_______);
            return false;
        } 
    }

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