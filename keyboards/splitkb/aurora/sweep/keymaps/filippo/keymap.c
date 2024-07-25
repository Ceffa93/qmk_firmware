#include QMK_KEYBOARD_H

#include "features/achordion.h"


#define _____________ KC_NO

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
#define CapsLock_____ KC_CAPS_LOCK
#define Comma________ KC_COMM
#define ControlL_____ KC_LCTL
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
#define Dash_________ KC_MINS
#define Modulo_______ S(KC_5)
#define Not__________ S(KC_GRV)
#define Or___________ S(KC_BSLS)
#define PageDown_____ KC_PGDN
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

#define ToHiragana___ KC_F6
#define ToKatakana_HW KC_F8
#define ToKatakana_FW KC_F6
#define ToRomaji_HW__ KC_F9
#define ToRomaji_FW__ KC_F10

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
#define Save_A_______ MT(MOD_LALT, Save_________)
#define Copy_C_______ MT(MOD_LCTL, Copy_________)


#define Backspace_S__ MT(MOD_LSFT, Backspace____)
#define Space_C______ MT(MOD_LCTL, Space________)
#define Enter_A______ MT(MOD_LALT, Enter________)

enum 
{
  TD_COMMA_SEMICOL,
  TD_DOT_COLUMN,
  TD_QUOT_DQUOT,
  TD_DASH_SLASH,
  TD_PARENT_LR,
  TD_BRACKET_LR,
  TD_CURLY_LR,
  TD_LT_GT,
  TD_SLASH_MODULO,
  TD_TILDE_DOLLAR,
  TD_XOR_BACKTICK,
  TD_SHARP_AT,
  TD_QUEST_EXCLAM,
  TD_UNDER_BSLASH,
};

#define TdCommaSemic_ TD(TD_COMMA_SEMICOL)
#define TdDotColumn__ TD(TD_DOT_COLUMN)
#define TdQuotDquot__ TD(TD_QUOT_DQUOT)
#define TdDashSlash__ TD(TD_DASH_SLASH)
#define TdParenLR____ TD(TD_PARENT_LR)
#define TdBrackLR____ TD(TD_BRACKET_LR)
#define TdCurlyLR____ TD(TD_CURLY_LR)
#define TdLtGt_______ TD(TD_LT_GT)
#define TdSlashModulo TD(TD_SLASH_MODULO)
#define TdTildeDollar TD(TD_TILDE_DOLLAR)
#define TdXorBacktick TD(TD_XOR_BACKTICK)
#define TdSharpAt____ TD(TD_SHARP_AT)
#define TdQuestExclam TD(TD_QUEST_EXCLAM)
#define TdUnderBslash TD(TD_UNDER_BSLASH)


enum 
{
    eLayerAlpha,
    eLayerAlphaJP,
    eLayerSymbol,
    eLayerSymbolJP,
    eLayerFuncs,
    eLayerOneHand,
    eMagicLayer,
    eCount,
};

#define LayerAlpha___ TO(eLayerAlpha)
#define LayerAlphaJP_ TO(eLayerAlphaJP)
#define LayerSymbol__ TO(eLayerSymbol)
#define LayerSymbolJP TO(eLayerSymbolJP)
#define LayerFuncs___ TO(eLayerFuncs)
#define LayerOneHand_ TO(eLayerOneHand)
#define MagicLayer___ LT(MO(eMagicLayer),LayerAlpha___) 



const uint16_t PROGMEM keymaps[eCount][MATRIX_ROWS][MATRIX_COLS] = 
{
    [eLayerAlpha] = LAYOUT(
        AlphaQ_______, AlphaW_______, AlphaF_______, AlphaP_______, AlphaB_______, AlphaJ_______, AlphaL_______, AlphaU_______, AlphaY_______, TdQuotDquot__,    
        AlphaA_G_____, AlphaR_A_____, AlphaS_C_____, AlphaT_S_____, AlphaG_______, AlphaM_______, AlphaN_S_____, AlphaE_C_____, AlphaI_A_____, AlphaO_G_____,    
        AlphaZ_______, AlphaX_______, AlphaC_______, AlphaD_______, AlphaV_______, AlphaK_______, AlphaH_______, TdCommaSemic_, TdDotColumn__, TdDashSlash__,    
                                                     Backspace_S__, MagicLayer___, Space_C______, Enter_A______ 
    ),
    [eLayerAlphaJP] = LAYOUT(
        AlphaQ_______, AlphaW_______, AlphaF_______, AlphaP_______, AlphaB_______, AlphaJ_______, AlphaL_______, AlphaU_______, AlphaY_______, ArrowDown____,    
        AlphaA_G_____, AlphaR_A_____, AlphaS_C_____, AlphaT_S_____, AlphaG_______, AlphaM_______, AlphaN_S_____, AlphaE_C_____, AlphaI_A_____, AlphaO_G_____,   
        AlphaZ_______, AlphaX_______, AlphaC_______, AlphaD_______, AlphaV_______, AlphaK_______, AlphaH_______, TdCommaSemic_, TdDotColumn__, TdDashSlash__,    
                                                     Backspace_S__, MagicLayer___, Space_C______, Enter_A______ 
    ),
    [eLayerSymbol] = LAYOUT(
        Asterisk_____, TdSlashModulo, Dash_________, Equal________, Plus_________, TdTildeDollar, TdBrackLR____, TdLtGt_______, TdSharpAt____, TdQuotDquot__,    
        Num3_G_______, Num2_A_______, Num1_C_______, Num0_________, Num4_________, And__________, TdParenLR____, TdCurlyLR____, TdQuestExclam, TdUnderBslash,    
        Num8_________, Num7_________, Num6_________, Num5_________, Num9_________, TdXorBacktick, Or___________, TdCommaSemic_, TdDotColumn__, TdDashSlash__,    
                                                     Backspace_S__, MagicLayer___, Space_C______, Enter_A______
    ),
    [eLayerSymbolJP] = LAYOUT(
        Asterisk_____, TdSlashModulo, Dash_________, Equal________, Plus_________, TdTildeDollar, TdBrackLR____, TdLtGt_______, TdSharpAt____, TdQuotDquot__,    
        Num3_G_______, Num2_A_______, Num1_C_______, Num0_________, Num4_________, And__________, TdParenLR____, TdCurlyLR____, TdQuestExclam, TdUnderBslash,    
        Num8_________, Num7_________, Num6_________, Num5_________, Num9_________, TdXorBacktick, Or___________, TdCommaSemic_, TdDotColumn__, TdDashSlash__,    
                                                     Backspace_S__, MagicLayer___, Space_C______, Enter_A______
    ),
    [eLayerFuncs] = LAYOUT(
        CapsLock_____, PrintScreen__, Translate____, F11__________, F12__________, _____________, _____________, _____________, _____________, _____________,     
        F3_G_________, F2_A_________, F1_C_________, F10__________, F4___________, _____________, ShiftL_______, ControlL_____, AltL_________, GuiL_________, 
        F8___________, F7___________, F6___________, F5___________, F9___________, _____________, _____________, _____________, _____________, _____________,  
                                                     Backspace_S__, MagicLayer___, Space_C______, Enter_A______ 
    ),
    [eLayerOneHand] = LAYOUT(
        Space________, Del__________, Backspace____, Undo_________, Redo_________, PageUp_______, Home_________, ArrowUp______, End__________, _____________,       
        GuiL_________, Save_A_______, Copy_C_______, Paste________, Tab__________, PageDown_____, ArrowLeft____, ArrowDown____, ArrowRight___, _____________,   
        Enter________, _____________, Cut__________, Find_________, ShiftedTab___, ToRomaji_HW__, ToKatakana_FW, ToHiragana___, ToRomaji_FW__, ToKatakana_HW,
                                                     Backspace_S__, MagicLayer___, Space_C______, Enter_A______
    ), 
    [eMagicLayer] = LAYOUT(
        Space________, Del__________, Backspace____, _____________, Esc__________, Boot_________, _____________, _____________, _____________, _____________,       
        _____________, LayerFuncs___, LayerSymbol__, LayerOneHand_, Tab__________, _____________, ShiftL_______, ControlL_____, AltL_________, GuiL_________,   
        Enter________, _____________, LayerSymbolJP, LayerAlphaJP_, ShiftedTab___, _____________, _____________, _____________, _____________, _____________,
                                                     _____________, _____________, _____________, _____________
    ), 
};

void matrix_scan_user(void) 
{
    achordion_task();
}

// Function that decides whether a hold should be disabled, depending on input-output key
bool achordion_chord(uint16_t tap_hold_keycode, keyrecord_t* tap_hold_record, uint16_t other_keycode, keyrecord_t* other_record) 
{
    if (layer_state_is(eLayerOneHand)) return true;
    if (layer_state_is(eLayerFuncs)) return true;
    if (tap_hold_keycode == MagicLayer___) return true;
    if (tap_hold_keycode == Backspace_S__) return true;
    if (tap_hold_keycode == Space_C______) return true;
    if (tap_hold_keycode == Enter_A______) return true;
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

    // In JP mode, replace down arrow with up arrow when shift is enabled
    if (layer_state_is(eLayerAlphaJP) && keycode == ArrowDown____)
    {
        uint8_t mod_state = get_mods();
        static bool key_registered;
        if (record->event.pressed)
        {
            if (mod_state & MOD_MASK_SHIFT) 
            {
                del_mods(MOD_MASK_SHIFT);
                register_code(ArrowUp______);
                key_registered = true;
                set_mods(mod_state);
                return false;
            }
        } 
        else if (key_registered) 
        {
            unregister_code(ArrowUp______);
            key_registered = false;
            return false;
        }
    }

    if (record->event.pressed)
    {
        switch(keycode)
        {
            // Set input language for every level
            case LayerAlpha___: setLayer(eLayerAlpha); return false;  
            case LayerAlphaJP_: setLayerJP(eLayerAlphaJP); return false;  
            case LayerSymbol__: setLayer(eLayerSymbol); return false;  
            case LayerSymbolJP: setLayerJP(eLayerSymbolJP); return false;  
            case LayerFuncs___: setLayer(eLayerFuncs); return false;  
            case LayerOneHand_: setLayer(eLayerOneHand); return false;  
        }
    }    

    if (record->tap.count && record->event.pressed)
    {
        switch(keycode)
        {
            // Tapping magic layer resets to main alpha layer
            case MagicLayer___: setLayer(eLayerAlpha); return false;  

            // MT only supports basic keycodes for tap action, and this is limiting.
            // For example, we cannot have a hold-tap key on a parenthesis, as parenthesis is S(9).
            // We manually patch those cases to have the intended behavior:
            case Copy_C_______: tap_code16(Copy_________); return false;
            case Save_A_______: tap_code16(Save_________); return false;
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
        case Backspace_S__:
        case Space_C______:
        case Enter_A______:
        case MagicLayer___:
            return true;
        default:
            return false;
    }
}

static const int tdDelay = 50; // Necessary to avoid clogging the input queue of the device, and having unreliable input

// N taps followed by 0-1 hold
void multi_tap_single_hold_td(tap_dance_state_t *state, uint16_t tap_code, uint16_t hold_code)
{
    for (int t = 0; t < state->count - 1; t++) tap_code16_delay(tap_code, tdDelay);
    tap_code16_delay(!state->interrupted && state->pressed ? hold_code : tap_code, tdDelay);
}

// 0-N taps or 0-N holds
void multi_tap_multi_hold_td(tap_dance_state_t *state, uint16_t tap_code, uint16_t hold_code)
{
    for (int t = 0; t < state->count; t++) tap_code16_delay(!state->interrupted && state->pressed ? hold_code : tap_code, tdDelay);
}


void comma_semicolumn_td(tap_dance_state_t *state, void *user_data) { multi_tap_single_hold_td(state, Comma________, SemiColumn___); }
void dot_column_td(tap_dance_state_t *state, void *user_data) { multi_tap_multi_hold_td(state, Dot__________, Column_______); }
void quot_dquot_td(tap_dance_state_t *state, void *user_data) { multi_tap_single_hold_td(state, SinQuote_____, DoubQuote____); }
void dash_slash_td(tap_dance_state_t *state, void *user_data) { multi_tap_single_hold_td(state, Dash_________, Slash________); }
void parent_lr_td(tap_dance_state_t *state, void *user_data) { multi_tap_single_hold_td(state, ParentL______, ParentR______); }
void bracket_lr_td(tap_dance_state_t *state, void *user_data) { multi_tap_single_hold_td(state, SqareBrackL__, SqareBrackR__); }
void curly_lr_td(tap_dance_state_t *state, void *user_data) { multi_tap_single_hold_td(state, CurlyBrackL__, CurlyBrackR__); }
void lt_gt_td(tap_dance_state_t *state, void *user_data) { multi_tap_single_hold_td(state, LessThan_____, GreaterThan__); }
void lt_slash_modulo(tap_dance_state_t *state, void *user_data) { multi_tap_single_hold_td(state, Slash________, Modulo_______); }
void lt_tilde_dollar(tap_dance_state_t *state, void *user_data) { multi_tap_single_hold_td(state, TdTildeDollar, Dollar_______); }
void lt_xor_backtick(tap_dance_state_t *state, void *user_data) { multi_tap_single_hold_td(state, Xor__________, BackTick_____); }
void lt_sharp_at(tap_dance_state_t *state, void *user_data) { multi_tap_single_hold_td(state, Sharp________, At___________); }
void lt_quest_exclaim(tap_dance_state_t *state, void *user_data) { multi_tap_single_hold_td(state, QuestMark____, ExclamMark___); }
void lt_underscore_backslash(tap_dance_state_t *state, void *user_data) { multi_tap_single_hold_td(state, UnderScore___, Backslash____); }

tap_dance_action_t tap_dance_actions[] = 
{
    [TD_COMMA_SEMICOL] = ACTION_TAP_DANCE_FN(comma_semicolumn_td),
    [TD_DOT_COLUMN] = ACTION_TAP_DANCE_FN(dot_column_td),
    [TD_QUOT_DQUOT] = ACTION_TAP_DANCE_FN(quot_dquot_td),
    [TD_DASH_SLASH] = ACTION_TAP_DANCE_FN(dash_slash_td),
    [TD_PARENT_LR] = ACTION_TAP_DANCE_FN(parent_lr_td),
    [TD_BRACKET_LR] = ACTION_TAP_DANCE_FN(bracket_lr_td),
    [TD_CURLY_LR] = ACTION_TAP_DANCE_FN(curly_lr_td),
    [TD_LT_GT] = ACTION_TAP_DANCE_FN(lt_gt_td),
    [TD_SLASH_MODULO] = ACTION_TAP_DANCE_FN(lt_slash_modulo),
    [TD_TILDE_DOLLAR] = ACTION_TAP_DANCE_FN(lt_tilde_dollar),
    [TD_XOR_BACKTICK] = ACTION_TAP_DANCE_FN(lt_xor_backtick),
    [TD_SHARP_AT] = ACTION_TAP_DANCE_FN(lt_sharp_at),
    [TD_QUEST_EXCLAM] = ACTION_TAP_DANCE_FN(lt_quest_exclaim),
    [TD_UNDER_BSLASH] = ACTION_TAP_DANCE_FN(lt_underscore_backslash),
};

