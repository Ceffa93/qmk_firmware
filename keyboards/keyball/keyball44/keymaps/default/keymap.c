#include QMK_KEYBOARD_H

#include "features/achordion.h"
#include "quantum.h"

#define OLED_ENABLE 1 // already defined in .mk, but added here to help syntax highlighting

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
#define Ins__________ KC_INS
#define Katakana_____ LALT(KC_CAPS_LOCK)
#define LessThan_____ S(KC_COMM)
#define Dash_________ KC_MINS
#define Modulo_______ S(KC_5)
#define MouseLeft____ KC_BTN1
#define MouseRight___ KC_BTN2
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
    ToHiragana___ = SAFE_RANGE,
    ToRomaji_____,
    ToNumberLayer,
    ToNavLayer___
}; 

enum 
{
    eLayerAlpha,
    eLayerSymbol,
    eLayerNumbers,
    eLayerNav,
    eCount,
};

// Home-row mods
#define AlphaT_S_____ MT(MOD_LSFT, AlphaT_______)
#define AlphaN_S_____ MT(MOD_LSFT, AlphaN_______)
#define AlphaS_C_____ MT(MOD_LCTL, AlphaS_______)
#define AlphaE_C_____ MT(MOD_LCTL, AlphaE_______)
#define AlphaR_A_____ MT(MOD_LALT, AlphaR_______)
#define AlphaI_A_____ MT(MOD_LALT, AlphaI_______)
#define AlphaA_G_____ MT(MOD_LGUI, AlphaA_______)
#define AlphaO_G_____ MT(MOD_LGUI, AlphaO_______)
#define Num4_S_______ MT(MOD_LSFT, Num4_________)
#define Num5_C_______ MT(MOD_LCTL, Num5_________)
#define Num6_A_______ MT(MOD_LALT, Num6_________)
#define Enter_A______ MT(MOD_LALT, Enter________)
#define Esc___G______ MT(MOD_LGUI, Esc__________)

#define LayerNav_____ LT(eLayerNav, Del__________)
#define LayerSymbol__ LT(eLayerSymbol, Space________)
#define LayerNumbers_ LT(eLayerNumbers, Esc__________)
#define ShiftEnter___ MT(MOD_BIT_LSHIFT, Enter________) 
#define AltBack______ MT(MOD_BIT_LALT, Backspace____) 
#define ControlSpace_ MT(MOD_BIT_LCTRL, Space________) 

const uint16_t PROGMEM keymaps[eCount][MATRIX_ROWS][MATRIX_COLS] =  
{
    [eLayerAlpha] = LAYOUT(
        xxxxxxxxxxxxx, AlphaQ_______, AlphaW_______, AlphaF_______, AlphaP_______, AlphaB_______,       AlphaJ_______, AlphaL_______, AlphaU_______, AlphaY_______, SinQuote_____, xxxxxxxxxxxxx,
        xxxxxxxxxxxxx, AlphaA_G_____, AlphaR_A_____, AlphaS_C_____, AlphaT_S_____, AlphaG_______,       AlphaM_______, AlphaN_S_____, AlphaE_C_____, AlphaI_A_____, AlphaO_G_____, xxxxxxxxxxxxx,
        xxxxxxxxxxxxx, AlphaZ_______, AlphaX_______, AlphaC_______, AlphaD_______, AlphaV_______,       AlphaK_______, AlphaH_______, Comma________, Dot__________, Dash_________, xxxxxxxxxxxxx,
                       xxxxxxxxxxxxx, xxxxxxxxxxxxx, Backspace____, ToNavLayer___, ToNumberLayer,       LayerSymbol__, ShiftEnter___, xxxxxxxxxxxxx 
    ),
    [eLayerSymbol] = LAYOUT(
        xxxxxxxxxxxxx, Backslash____, Slash________, Plus_________, Equal________, Modulo_______,       Not__________, SqareBrackL__, SqareBrackR__, LessThan_____, GreaterThan__, xxxxxxxxxxxxx,
        xxxxxxxxxxxxx, Or___________, UnderScore___, Column_______, SemiColumn___, Asterisk_____,       Xor__________, ParentL______, ParentR______, CurlyBrackL__, CurlyBrackR__, xxxxxxxxxxxxx,
        xxxxxxxxxxxxx, And__________, At___________, DoubQuote____, QuestMark____, ExclamMark___,       BackTick_____, Sharp________, Comma________, Dot__________, Dollar_______, xxxxxxxxxxxxx,
                       xxxxxxxxxxxxx, xxxxxxxxxxxxx, Backspace____, Del__________, Esc__________,       Space________, Enter________, xxxxxxxxxxxxx 
    ),
    [eLayerNav] = LAYOUT(
        xxxxxxxxxxxxx, CapsLock_____, Translate____, ToHiragana___, ToRomaji_____, xxxxxxxxxxxxx,       PageUp_______, Home_________, ArrowUp______, End__________, xxxxxxxxxxxxx, xxxxxxxxxxxxx,
        xxxxxxxxxxxxx, GuiL_________, AltL_________, ControlL_____, ShiftL_______, Tab__________,       PageDown_____, ArrowLeft____, ArrowDown____, ArrowRight___, Tab__________, xxxxxxxxxxxxx,
        xxxxxxxxxxxxx, xxxxxxxxxxxxx, xxxxxxxxxxxxx, ControlR_____, xxxxxxxxxxxxx, ShiftedTab___,       MouseRight___, MouseLeft____, xxxxxxxxxxxxx, Boot_________, ShiftedTab___, xxxxxxxxxxxxx,
                       xxxxxxxxxxxxx, xxxxxxxxxxxxx, Backspace____, Del__________, Esc__________,                      Space________, Enter________, xxxxxxxxxxxxx
    ),
    [eLayerNumbers] = LAYOUT(
        xxxxxxxxxxxxx, Ins__________, F10__________, F11__________, F12__________, F1___________,       xxxxxxxxxxxxx, Num1_________, Num2_________, Num3_________, CapsLock_____, xxxxxxxxxxxxx,
        xxxxxxxxxxxxx, Pause________, F4___________, F5___________, F6___________, F2___________,       Num0_________, Num4_S_______, Num5_C_______, Num6_A_______, GuiL_________, xxxxxxxxxxxxx,
        xxxxxxxxxxxxx, PrintScreen__, F7___________, F8___________, F9___________, F3___________,       xxxxxxxxxxxxx, Num7_________, Num8_________, Num9_________, App__________, xxxxxxxxxxxxx,
                       xxxxxxxxxxxxx, xxxxxxxxxxxxx, Backspace____, Del__________, Esc__________,       Space________, Enter________, xxxxxxxxxxxxx 
    )
};

// clang-format on

struct three_action_button
{
    uint16_t hold_start_time;
    bool waiting_for_hold;
    uint16_t keycode;
    uint16_t layer;
    uint16_t action;
    void (*long_action_start)(void);
    void (*long_action_end)(void);
};

static struct three_action_button bNumberButton;
static struct three_action_button bNavButton;
#define kThreeActionButtonCount 2
static struct three_action_button* bThreeActionButtons[kThreeActionButtonCount]; 

void activate_scrollwheel(void)
{
    keyball_set_scroll_mode(true);
}
void deactivate_scrollwheel(void)
{
    keyball_set_scroll_mode(false);
}
void speedup_pointer(void)
{
    keyball_set_speed_mul(2);
}
void speeddown_pointer(void)
{
    keyball_set_speed_mul(1);
}

void init_three_action_button(struct three_action_button* button, uint16_t keycode, uint16_t layer, uint16_t action, void (*long_action_start)(void), void (*long_action_end)(void))
{
    button->hold_start_time = 0;
    button->waiting_for_hold = false;
    button->keycode = keycode;
    button->layer = layer;
    button->action = action;
    button->long_action_start = long_action_start;
    button->long_action_end = long_action_end;
}

void keyboard_post_init_user(void)
{
    keyball_set_cpi(2);
    keyball_set_scrollsnap_mode(KEYBALL_SCROLLSNAP_MODE_FREE);

    bThreeActionButtons[0] = &bNumberButton;
    bThreeActionButtons[1] = &bNavButton;

    init_three_action_button(&bNumberButton, ToNumberLayer, eLayerNumbers, Esc__________, activate_scrollwheel, deactivate_scrollwheel);
    init_three_action_button(&bNavButton, ToNavLayer___, eLayerNav, Del__________, speeddown_pointer, speedup_pointer);
}

void to_hiragana(void)
{
    tap_code16(Hiragana_____);
}

void to_romaji(void)
{
    to_hiragana();
    tap_code16(Romaji_______);
}


// We disable Tap action of retrotapping always. 
// We cannot disable retrotapping altoghether as it is required for mods neutralization
bool get_retro_tapping(uint16_t keycode, keyrecord_t *record) 
{
    return false;
}

void activate_hold_on_three_action_button(struct three_action_button* button)
{
    if (button->waiting_for_hold)
    {
        layer_on(button->layer);
        button->waiting_for_hold = false;
    }
}
void activate_hold_on_three_action_button_when_timer_elapsed(struct three_action_button* button)
{
    if (timer_elapsed(button->hold_start_time) > TAPPING_TERM)
    {
        activate_hold_on_three_action_button(button);
    }
}

void process_three_action_button_record(keyrecord_t *record, struct three_action_button* button)
{
    if (record->event.pressed)
    {
        button->hold_start_time = timer_read();
        button->waiting_for_hold = true;
        button->long_action_start();
    }
    else
    {
        if (button->waiting_for_hold)
        {
            tap_code(button->action);
        }
        button->waiting_for_hold = false;
        button->long_action_end();
        layer_off(button->layer);
    }
}

void matrix_scan_user()
{
    achordion_task();

    for (int i = 0; i < kThreeActionButtonCount; i++)
    {
        activate_hold_on_three_action_button_when_timer_elapsed(bThreeActionButtons[i]);
    }
}

bool should_immediately_hold(uint16_t keycode) {
    switch (keycode) {
        case ToNumberLayer:
            return false;
        default:
            return true;
    }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) 
{      
    if (record->event.pressed)
    {
        switch(keycode)
        {
            case ToHiragana___: to_hiragana(); return false; 
            case ToRomaji_____: to_romaji(); return false; 
        }
    }

    if (keycode == ToNumberLayer)
    {
        process_three_action_button_record(record, &bNumberButton);
        return false;
    }
    if (keycode == ToNavLayer___)
    {
        process_three_action_button_record(record, &bNavButton);
        return false;
    }
    
    for (int i = 0; i < kThreeActionButtonCount; i++)
    { 
        struct three_action_button* button = bThreeActionButtons[i];
        if (keycode == button->keycode)
        {
            process_three_action_button_record(record, button);
            return false;
        }
    }

    for (int i = 0; i < kThreeActionButtonCount; i++)
    {
        activate_hold_on_three_action_button( bThreeActionButtons[i]);
    }

    if (!process_achordion(keycode, record)) return false;

    return true;
};

// In case of tap hold, this keys aggressively select hold action even if release of the tap happens earlier than the second key.
// This is not recommended for keys that are rolled, but for thumb modifiers it is no issue, and makes them activate more reliably.
bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LayerNav_____:
        case LayerSymbol__:
        case LayerNumbers_:
        case ShiftEnter___:
        case AltBack______:
        case ControlSpace_:
            return true;
        default:
            return false;
    }
}

bool is_same_home_row(keyrecord_t* a, keyrecord_t* b)
{
    keypos_t pos_a = a->event.key;
    keypos_t pos_b = b->event.key;
    bool same_side = (pos_a.row < MATRIX_ROWS / 2) == (pos_b.row < MATRIX_ROWS / 2);
    bool same_row = pos_a.row == pos_b.row;
    if (same_side && same_row) return false;
    return true;
}

// Function that decides whether a hold should be disabled, depending on input-output key
bool achordion_chord(uint16_t tap_hold_keycode, keyrecord_t* tap_hold_record, uint16_t other_keycode, keyrecord_t* other_record) 
{
    if (tap_hold_keycode == LayerNav_____) return true;
    if (tap_hold_keycode == LayerSymbol__) return true;
    if (tap_hold_keycode == LayerNumbers_) return true;

    return is_same_home_row(tap_hold_record, other_record);
}

uint16_t achordion_timeout(uint16_t tap_hold_keycode)
{
    return 800;
}

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


#ifdef OLED_ENABLE

#    include "lib/oledkit/oledkit.h"

void oledkit_render_info_user(void) {
    keyball_oled_render_keyinfo();
    keyball_oled_render_ballinfo();
    keyball_oled_render_layerinfo();
}
#endif

