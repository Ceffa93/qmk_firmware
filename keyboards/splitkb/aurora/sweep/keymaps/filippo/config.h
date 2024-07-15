#pragma once
// Hold following a tap on a mod key activates holds:
#define QUICK_TAP_TERM 0 

// Time before a key is considere held:
#define TAPPING_TERM 175

// Immediately activate holds if another key is pressed after
#define PERMISSIVE_HOLD



// When releasing a long-pressed modifier without pressing other keys:
// - First do Hold release action
// - Then add Tap action
#define RETRO_TAPPING 

// It is possible to disable the tap action of RETRO_TAPPING on a per-key level with this flag and get_retro_tapping() function.
// If get_retro_tapping() always returns false, the behavior is identical of having RETRO_TAPPING disabled,
// but both flags are still required because they enable mods neutralization with MODS_TO_NEUTRALIZE.
#define RETRO_TAPPING_PER_KEY

 // Some modifiers have associated a release action by OS/app (e.g. GUI opens win menu, ALT open app menu).
 // We don't want it to avoid triggering those while typing alphas.
 // Retrotapping does not prevent the Hold release action to be triggered.
 // We can manually neutralize the Hold release action of mods with this flag.
 // Note that this flag does not work if RETRO_TAPPING is disabled, which is very confusing as it should not be related.
#define MODS_TO_NEUTRALIZE { MOD_BIT(KC_LGUI), MOD_BIT(KC_LALT) } 

// Neutralization is done by passing a special key between the Hold press and Hold release event. 
// We pick KC_F18 as it is not used for anything else:
#define DUMMY_MOD_NEUTRALIZER_KEYCODE KC_RIGHT_CTRL 