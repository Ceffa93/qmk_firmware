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
#define AltTab_______ A(KC_TAB)
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
#define ControlTab___ C(KC_TAB)
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
#define Hiragana_____ C(KC_CAPS_LOCK)
#define Home_________ KC_HOME
#define Katakana_____ LALT(KC_CAPS_LOCK)
#define LessThan_____ S(KC_COMM)
#define Minus________ KC_MINS
#define Modulo_______ S(KC_5)
#define Noop_________ KC_NO
#define Not__________ S(KC_GRV)
#define Or___________ S(KC_BSLS)
#define PageDown_____ KC_PGDN
#define Trns_________ KC_TRNS
#define PageUp_______ KC_PGUP
#define ParentL______ S(KC_9)
#define ParentR______ S(KC_0)
#define Paste________ C(KC_V)
#define Plus_________ S(KC_EQL)
#define PrintScreen__ KC_PRINT_SCREEN
#define QuestMark____ S(KC_SLSH)
#define Redo_________ C(KC_Y)
#define Romaji_______ LALT(KC_GRV)
#define SemiColumn___ KC_SCLN
#define Save_________ C(KC_S)
#define Sharp________ S(KC_3)
#define ShiftL_______ KC_LSFT
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

#define AlphaT_S_____ MT(MOD_LSFT, AlphaT_______)
#define AlphaS_C_____ MT(MOD_LCTL, AlphaS_______)
#define AlphaR_A_____ MT(MOD_LALT, AlphaR_______)
#define AlphaA_G_____ MT(MOD_LGUI, AlphaA_______)
#define AlphaN_S_____ MT(MOD_LSFT, AlphaN_______)
#define AlphaE_C_____ MT(MOD_LCTL, AlphaE_______)
#define AlphaI_A_____ MT(MOD_LALT, AlphaI_______)
#define AlphaO_G_____ MT(MOD_LGUI, AlphaO_______)

#define Num0_S_______ MT(MOD_LSFT, Num0_________)
#define Num1_C_______ MT(MOD_LCTL, Num1_________)
#define Num2_A_______ MT(MOD_LALT, Num2_________)
#define Num3_G_______ MT(MOD_LGUI, Num3_________)
#define F10_S________ MT(MOD_LSFT, F10__________)
#define F1_C_________ MT(MOD_LCTL, F1___________)
#define F2_A_________ MT(MOD_LALT, F2___________)
#define F3_G_________ MT(MOD_LGUI, F3___________)
#define Find_A_______ MT(MOD_LALT, Find_________)
#define Copy_C_______ MT(MOD_LCTL, Copy_________)


#define Space_C______ MT(MOD_LCTL, Space________)
#define Enter_S______ MT(MOD_LSFT, Enter________)



enum {
    eLayerAlpha,
    eLayerAlphaJP,
    eLayerSymbol,
    eLayerSymbolJP,
    eLayerNumber,
    eLayerNumberJP,
    eLayerFuncs,
    eLayerOneHand,
    eMagicLayer,
    eCount
};

#define LayerAlpha___ TO(eLayerAlpha)
#define LayerAlphaJP_ TO(eLayerAlphaJP)
#define LayerSymbol__ TO(eLayerSymbol)
#define LayerSymbolJP TO(eLayerSymbolJP)
#define LayerNumber__ TO(eLayerNumber)
#define LayerNumberJP TO(eLayerNumberJP)
#define LayerFuncs___ TO(eLayerFuncs)
#define LayerOneHand_ TO(eLayerOneHand)
#define MagicLayer___ LT(MO(eMagicLayer),LayerAlpha___) 


const uint16_t PROGMEM keymaps[eCount][MATRIX_ROWS][MATRIX_COLS] = 
{
    [eLayerAlpha] = LAYOUT(
        AlphaQ_______, AlphaW_______, AlphaF_______, AlphaP_______, AlphaB_______, AlphaJ_______, AlphaL_______, AlphaU_______, AlphaY_______, SinQuote_____,    
        AlphaA_G_____, AlphaR_A_____, AlphaS_C_____, AlphaT_S_____, AlphaG_______, AlphaM_______, AlphaN_S_____, AlphaE_C_____, AlphaI_A_____, AlphaO_G_____,    
        AlphaZ_______, AlphaX_______, AlphaC_______, AlphaD_______, AlphaV_______, AlphaK_______, AlphaH_______, Comma________, Dot__________, DoubQuote____,    
                                                     Enter_S______, MagicLayer___, Space_C______, Backspace____ 
    ),
    [eLayerAlphaJP] = LAYOUT(
        Trns_________, Trns_________, Trns_________, Trns_________, Trns_________, Trns_________, Trns_________, Trns_________, Trns_________, ArrowDown____,    
        Trns_________, Trns_________, Trns_________, Trns_________, Trns_________, Trns_________, Trns_________, Trns_________, Trns_________, Trns_________,    
        Trns_________, Trns_________, Trns_________, Trns_________, Trns_________, Trns_________, Trns_________, Trns_________, Trns_________, Minus________,    
                                                     Trns_________, Trns_________, Trns_________, Trns_________ 
    ),
    [eLayerSymbol] = LAYOUT(
        Asterisk_____, Slash________, Equal________, Minus________, Plus_________, At___________, SqareBrackL__, SqareBrackR__, LessThan_____, GreaterThan__,    
        Backslash____, UnderScore___, Column_______, SemiColumn___, Modulo_______, Sharp________, ParentL______, ParentR______, CurlyBrackL__, CurlyBrackR__,    
        BackTick_____, Not__________, And__________, Or___________, Xor__________, ExclamMark___, QuestMark____, Comma________, Dot__________, Dollar_______,    
                                                     Trns_________, Trns_________, Trns_________, Trns_________
    ),
    [eLayerSymbolJP] = LAYOUT(
        Trns_________, Trns_________, Trns_________, Trns_________, Trns_________, Trns_________, Trns_________, Trns_________, Trns_________, Trns_________,    
        Trns_________, Trns_________, Trns_________, Trns_________, Trns_________, Trns_________, Trns_________, Trns_________, Trns_________, Trns_________,    
        Trns_________, Trns_________, Trns_________, Trns_________, Trns_________, Trns_________, Trns_________, Trns_________, Trns_________, Trns_________,    
                                                     Trns_________, Trns_________, Trns_________, Trns_________
    ),
    [eLayerNumber] = LAYOUT(
        Backspace____, Del__________, Space________, Tab__________, Esc__________, Noop_________, Noop_________, Noop_________, Noop_________, Noop_________,     
        Num3_G_______, Num2_A_______, Num1_C_______, Num0_________, Num4_________, Noop_________, ShiftL_______, ControlL_____, AltL_________, GuiL_________, 
        Num8_________, Num7_________, Num6_________, Num5_________, Num9_________, Noop_________, Noop_________, Noop_________, Noop_________, Noop_________,  
                                                     Trns_________, Trns_________, Trns_________, Trns_________
    ),
    [eLayerNumberJP] = LAYOUT(
        Trns_________, Trns_________, Trns_________, Trns_________, Trns_________, Trns_________, Trns_________, Trns_________, Trns_________, Trns_________,    
        Trns_________, Trns_________, Trns_________, Trns_________, Trns_________, Trns_________, Trns_________, Trns_________, Trns_________, Trns_________,    
        Trns_________, Trns_________, Trns_________, Trns_________, Trns_________, Trns_________, Trns_________, Trns_________, Trns_________, Trns_________,    
                                                     Trns_________, Trns_________, Trns_________, Trns_________
    ),
    [eLayerFuncs] = LAYOUT(
        CapsLock_____, PrintScreen__, Translate____, F11__________, F12__________, Noop_________, Noop_________, Noop_________, Noop_________, Noop_________,     
        F3_G_________, F2_A_________, F1_C_________, F10__________, F4___________, Noop_________, ShiftL_______, ControlL_____, AltL_________, GuiL_________, 
        F8___________, F7___________, F6___________, F5___________, F9___________, Noop_________, Noop_________, Noop_________, Noop_________, Noop_________,  
                                                     Trns_________, Trns_________, Trns_________, Trns_________ 
    ),
    [eLayerOneHand] = LAYOUT(
        Backspace____, Del__________, Space________, Tab__________, Esc__________, PageUp_______, Home_________, ArrowUp______, End__________, Noop_________,       
        GuiL_________, Find_A_______, Copy_C_______, Paste________, AltTab_______, PageDown_____, ArrowLeft____, ArrowDown____, ArrowRight___, Noop_________,   
        Redo_________, Undo_________, Cut__________, Save_________, ControlTab___, Noop_________, Noop_________, Noop_________, Noop_________, Noop_________,
                                                     Trns_________, Trns_________, Trns_________, Trns_________
    ), 
    [eMagicLayer] = LAYOUT(
        Noop_________, Noop_________, Noop_________, Noop_________, Boot_________, Noop_________, Noop_________, Noop_________, Noop_________, Noop_________,       
        LayerFuncs___, LayerNumber__, LayerSymbol__, LayerOneHand_, Noop_________, Noop_________, LayerAlphaJP_, LayerSymbolJP, LayerNumberJP, Noop_________,   
        Noop_________, Noop_________, Noop_________, Noop_________, Noop_________, Noop_________, Noop_________, Noop_________, Noop_________, Noop_________,
                                                     Noop_________, Noop_________, Noop_________, Noop_________
    ), 
};

// // In JP mode, replace down arrow with up arrow when shift is enabled
// const key_override_t jp_arrow_override = ko_make_with_layers_negmods_and_options(MOD_MASK_SHIFT, ArrowDown____, ArrowUp______, eLayerAlphaJP, MOD_MASK_CA, ko_option_no_reregister_trigger);

// const key_override_t **key_overrides = (const key_override_t *[])
// {
// 	&jp_arrow_override,
// 	NULL
// };

void matrix_scan_user(void) 
{
    achordion_task();
}

// Function that decides whether a hold should be disabled, depending on input-output key
bool achordion_chord(uint16_t tap_hold_keycode, keyrecord_t* tap_hold_record, uint16_t other_keycode, keyrecord_t* other_record) 
{
    if (tap_hold_keycode == Space_C______) return true;
    if (tap_hold_keycode == MagicLayer___) return true;
    if (tap_hold_keycode == Enter_S______) return true;
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

void setLayer(uint8_t layer)
{
    tap_code16(Hiragana_____);
    tap_code16(Romaji_______);
    layer_move(layer);
}

void setLayerJP(uint8_t layer)
{
    tap_code16(Hiragana_____);
    layer_move(layer);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) 
{
    if (!process_achordion(keycode, record)) return false;  

    if (record->tap.count && record->event.pressed)
    {
        switch(keycode)
        {
            // Tapping magic layer resets to main alpha layer
            case MagicLayer___: setLayer(eLayerAlpha); return false;  

            // Set input language for every level
            case LayerAlpha___: setLayer(eLayerAlpha); return false;  
            case LayerAlphaJP_: setLayerJP(eLayerAlphaJP); return false;  
            case LayerSymbol__: setLayer(eLayerSymbol); return false;  
            case LayerSymbolJP: setLayerJP(eLayerSymbolJP); return false;  
            case LayerNumber__: setLayer(eLayerNumber); return false;  
            case LayerNumberJP: setLayerJP(eLayerNumberJP); return false;  
            case LayerFuncs___: setLayer(eLayerFuncs); return false;  
            case LayerOneHand_: setLayer(eLayerOneHand); return false;  
            
            // MT only supports basic keycodes for tap action, and this is limiting.
            // For example, we cannot have a hold-tap key on a parenthesis, as parenthesis is S(9).
            // We manually patch those cases to have the intended behavior:
            case Copy_C_______: tap_code16(Copy_________); return false;
            case Find_A_______: tap_code16(Find_________); return false;
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

// In case of tap hold, this keys aggressively select hold action even if release of the tap happens earlier than the second key.
// This is not recommended for keys that are rolled, but for thumb modifiers it is no issue, and makes them activate more reliably.
bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case Space_C______:
        case Enter_S______:
        case MagicLayer___:
            return true;
        default:
            return false;
    }
}