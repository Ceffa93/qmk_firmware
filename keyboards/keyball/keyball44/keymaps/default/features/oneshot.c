#include "oneshot.h"

void update_oneshot(
    mod_state *state,
    uint16_t mod,
    uint16_t trigger,
    uint16_t keycode,
    keyrecord_t *record,
    bool deactivate_mods
) {
    if (keycode == trigger) {
        if (record->event.pressed) {
            if (state->state == os_unqueued) {
                register_code(mod);
            }
            state->state = os_held;
            state->timer = timer_read();
        } else {
            if (timer_elapsed(state->timer)>300) {
                tap_code16(KC_F18);
                unregister_code(mod);
                state->state = os_unqueued;
            } else {
                state->state = os_queued;
            }
        }
    } else {
        if (record->event.pressed) {
            if (deactivate_mods && state->state == os_queued) {
                state->state = os_unqueued;
                tap_code16(KC_F18);
                unregister_code(mod);
            }
        } else {
            if (!is_oneshot_ignore_key(keycode)) {
                if (state->state == os_queued) {
                    state->state = os_unqueued;
                    unregister_code(mod);
                }
            }
        }
    }
}
