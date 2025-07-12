#pragma once

#include QMK_KEYBOARD_H
 
// Represents the four states a oneshot key can be in
typedef enum {
    os_unqueued,
    os_held,
    os_queued
} oneshot_state;

typedef struct mod_state
{
    oneshot_state state;
    uint16_t timer;
} mod_state;

// Custom oneshot mod implementation that doesn't rely on timers. If a mod is
// used while it is held it will be unregistered on keyup as normal, otherwise
// it will be queued and only released after the next non-mod keyup.
void update_oneshot(
    mod_state *state,
    uint16_t mod,
    uint16_t trigger,
    uint16_t keycode,
    keyrecord_t *record,
    bool deactivate_mods
);

bool is_oneshot_ignore_key(uint16_t keycode);