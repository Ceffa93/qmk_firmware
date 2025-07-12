#include QMK_KEYBOARD_H

#include "features/oneshot.h"
#include "quantum.h"

#define xxxxxxxxxxxxx KC_NO
#define _____________ KC_TRANSPARENT

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
#define AltR_________ KC_RALT
#define App__________ KC_APP
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
#define CapsLock_____ KC_CAPS_LOCK
#define Comma________ KC_COMM
#define ControlL_____ KC_LCTL
#define ControlR_____ KC_RCTL
#define Copy_________ C(KC_C)
#define CurlyBrackL__ S(KC_LBRC)
#define CurlyBrackR__ S(KC_RBRC)
#define Cut__________ C(KC_X)
#define Del__________ KC_DEL
#define Dollar_______ S(KC_4)
#define Dot__________ KC_DOT
#define DoubQuote____ S(KC_QUOT)
#define Enter________ KC_ENT
#define End__________ KC_END
#define Equal________ KC_EQL
#define Esc__________ KC_ESC
#define ExclamMark___ S(KC_1)
#define Find_________ C(KC_F)
#define FindShifted__ C(S(KC_F))
#define GreaterThan__ S(KC_DOT)
#define GuiL_________ KC_LGUI
#define GuiR_________ KC_RGUI
#define Hiragana_____ C(KC_CAPS_LOCK)
#define Home_________ KC_HOME
#define Katakana_____ LALT(KC_CAPS_LOCK)
#define LessThan_____ S(KC_COMM)
#define Dash_________ KC_MINS
#define Modulo_______ S(KC_5)
#define Not__________ S(KC_GRV)
#define Or___________ S(KC_BSLS)
#define PageDown_____ KC_PGDN
#define PageUp_______ KC_PGUP
#define ParentL______ S(KC_9)
#define ParentR______ S(KC_0)
#define Paste________ C(KC_V)
#define Pause________ KC_PAUSE
#define Plus_________ S(KC_EQL)
#define PrintScreen__ KC_PRINT_SCREEN
#define QuestMark____ S(KC_SLSH)
#define Redo_________ C(KC_Y)
#define Romaji_______ LALT(KC_GRV)
#define SemiColumn___ KC_SCLN
#define Save_________ C(KC_S)
#define Sharp________ S(KC_3)
#define ShiftL_______ KC_LSFT
#define ShiftR_______ KC_RSFT
#define ShiftTab_____ S(KC_TAB)
#define SinQuote_____ KC_QUOT
#define Slash________ KC_SLSH
#define Space________ KC_SPC
#define SqareBrackL__ KC_LBRC
#define SqareBrackR__ KC_RBRC
#define Tab__________ KC_TAB
#define ShiftedTab___ S(KC_TAB)
#define Translate____ C(KC_F9)
#define UnderScore___ S(KC_MINS)
#define Undo_________ C(KC_Z)
#define Xor__________ S(KC_6)

enum CustomKeycodes {
    ShiftL_OS____ = SAFE_RANGE,
    ControlL_OS__,
    AltL_OS______,
    GuiL_OS______,
    Reset________,
    ToHiragana___,
}; 

enum 
{
    eLayerAlpha,
    eLayerSymbol,
    eLayerOneHand,
    eMagicLayer,
    eCount,
};

#define LayerMagic___ LT(eMagicLayer, Reset________)
#define LayerSymbol__ LT(eLayerSymbol, Space________)
#define LayerOneHand_ LT(eLayerOneHand, Backspace____)
#define ShiftEnter___ MT(MOD_BIT_LSHIFT, Enter________) 
#define AltBack______ MT(MOD_BIT_LALT, Backspace____) 
#define ControlSpace_ MT(MOD_BIT_LCTRL, Space________) 

const uint16_t PROGMEM keymaps[eCount][MATRIX_ROWS][MATRIX_COLS] =  
{
    [eLayerAlpha] = LAYOUT(
        AlphaQ_______, AlphaW_______, AlphaF_______, AlphaP_______, AlphaB_______, AlphaJ_______, AlphaL_______, AlphaU_______, AlphaY_______, SinQuote_____,    
        AlphaA_______, AlphaR_______, AlphaS_______, AlphaT_______, AlphaG_______, AlphaM_______, AlphaN_______, AlphaE_______, AlphaI_______, AlphaO_______,    
        AlphaZ_______, AlphaX_______, AlphaC_______, AlphaD_______, AlphaV_______, AlphaK_______, AlphaH_______, Comma________, Dot__________, Dash_________,    
                                                     LayerOneHand_, LayerMagic___, LayerSymbol__, ShiftEnter___ 
    ),
    [eLayerSymbol] = LAYOUT(
        Backslash____, Slash________, Plus_________, Equal________, Modulo_______, Not__________, SqareBrackL__, SqareBrackR__, LessThan_____, GreaterThan__,    
        Or___________, UnderScore___, Column_______, SemiColumn___, Asterisk_____, Xor__________, ParentL______, ParentR______, CurlyBrackL__, CurlyBrackR__,    
        And__________, At___________, DoubQuote____, QuestMark____, ExclamMark___, BackTick_____, Sharp________, Comma________, Dot__________, Dollar_______,    
                                                     AltBack______, ControlSpace_, xxxxxxxxxxxxx, xxxxxxxxxxxxx 
    ),
    [eLayerOneHand] = LAYOUT(
        Num0_________, Num1_________, Num2_________, Num3_________, Num4_________, Num5_________, Num6_________, Num7_________, Num8_________, Num9_________,       
        Undo_________, Cut__________, Copy_________, Paste________, Redo_________, F1___________, F2___________, F3___________, PrintScreen__, CapsLock_____,
        F12__________, F11__________, F10__________, F5___________, F4___________, F6___________, F7___________, F8___________, F9___________, Pause________, 
                                                     xxxxxxxxxxxxx, xxxxxxxxxxxxx, ControlSpace_, ShiftEnter___ 
    ), 
    [eMagicLayer] = LAYOUT(
        GuiL_OS______, AltL_OS______, ControlL_OS__, ShiftL_OS____, GuiL_________, PageUp_______, Home_________, ArrowUp______, End__________, ToHiragana___,       
        Esc__________, Enter________, Backspace____, Del__________, Tab__________, PageDown_____, ArrowLeft____, ArrowDown____, ArrowRight___, xxxxxxxxxxxxx,   
        Space________, Translate____, xxxxxxxxxxxxx, ControlR_____, ShiftedTab___, App__________, xxxxxxxxxxxxx, xxxxxxxxxxxxx, xxxxxxxxxxxxx, Boot_________,
                                                     xxxxxxxxxxxxx, xxxxxxxxxxxxx, ControlSpace_, ShiftEnter___
    ), 
};

void to_romaji(void)
{
    tap_code16(Hiragana_____);
    tap_code16(Romaji_______);
}

void to_hiragana(void)
{
    tap_code16(Hiragana_____);
}

// We disable Tap action of retrotapping always. 
// We cannot disable retrotapping altoghether as it is required for mods neutralization
bool get_retro_tapping(uint16_t keycode, keyrecord_t *record) 
{
    return false;
}


bool is_oneshot_ignore_key(uint16_t keycode) 
{
    switch (keycode) 
    {
    case ShiftL_OS____:
    case ShiftL_______:
    case ControlL_OS__:
    case ControlL_____:
    case AltL_OS______:
    case AltL_________:
    case GuiL_OS______:
    case GuiL_________:
    case ShiftR_______:
    case ControlR_____:
    case AltR_________:
    case GuiR_________:
    case LayerMagic___:
    case LayerSymbol__:
    case ShiftEnter___:
    case AltBack______:
    case ControlSpace_:
        return true;
    default:
        return false;
    }
}  

mod_state os_shft_state = {os_unqueued, 0};
mod_state os_ctrl_state = {os_unqueued, 0};
mod_state os_alt_state = {os_unqueued, 0};
mod_state os_gui_state = {os_unqueued, 0};

bool process_record_user(uint16_t keycode, keyrecord_t *record) 
{
    bool deactivate_mods = false;

    if (record->event.pressed && keycode == LayerMagic___ && record->tap.count)
    {
        deactivate_mods = true;
    } 

    update_oneshot(&os_shft_state, ShiftL_______, ShiftL_OS____, keycode, record, deactivate_mods);
    update_oneshot(&os_ctrl_state, ControlL_____, ControlL_OS__, keycode, record, deactivate_mods);
    update_oneshot(&os_alt_state, AltL_________, AltL_OS______, keycode, record, deactivate_mods);
    update_oneshot(&os_gui_state, GuiL_________, GuiL_OS______, keycode, record, deactivate_mods);

    if (deactivate_mods) 
    { 
        to_romaji();
        return false;
    }

    if (record->event.pressed)
    {
        switch(keycode)
        {
            case ToHiragana___: to_hiragana(); return false; 
        }
    } 

    return true;
};

// In case of tap hold, this keys aggressively select hold action even if release of the tap happens earlier than the second key.
// This is not recommended for keys that are rolled, but for thumb modifiers it is no issue, and makes them activate more reliably.
bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LayerMagic___:
        case LayerSymbol__:
        case LayerOneHand_:
        case ShiftEnter___:
        case AltBack______:
        case ControlSpace_:
            return true;
        default:
            return false;
    }
}
