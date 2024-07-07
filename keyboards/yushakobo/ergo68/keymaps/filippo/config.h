#pragma once
// Hold following a tap on a mod key activates holds:
#define QUICK_TAP_TERM 0 

// When releasing a long-pressed modifier without pressing other keys, tap action invoked:
#define RETRO_TAPPING 

 // Some modifiers have associated a release action by OS/app (e.g. GUI opens win menu, ALT open app menu).
 // Retrotapping does not prevent this to be triggered, as the tap action is added after the release action. 
 // So we define which modifiers we wish to neutralize when retrotappint happens:
#define MODS_TO_NEUTRALIZE { MOD_BIT(KC_LGUI), MOD_BIT(KC_LALT) } 

// Neutralization is done by passing a special key between the press and release event. 
// We pick KC_F18 as it is not used for anything else:
#define DUMMY_MOD_NEUTRALIZER_KEYCODE KC_F18 