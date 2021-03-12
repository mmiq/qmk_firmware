#define MOUSEKEY_DELAY			100
#define MOUSEKEY_INTERVAL		50
#define MOUSEKEY_TIME_TO_MAX	20
#define MOUSEKEY_MAX_SPEED		10
//#define MK_3_SPEED
#define MK_MOMENTARY_ACCEL

#ifdef RGBLIGHT_ENABLE
	#define	RGBLIGHT_SPLIT
	#undef	RGBLED_NUM
	#define	RGBLED_NUM 7
	//#define RGBLIGHT_SPLIT 7
	#define	RGBW
	// #define	RGBLIGHT_ANIMATIONS
	//#define RGBLIGHT_EFFECT_RAINBOW_MOOD
	//#define RGBLIGHT_EFFECT_BREATHING
	//#define RGBLIGHT_SLEEP
	#define	RGBLIGHT_USE_TIMER
	// #define RGBLIGHT_EFFECT_CHRISTMAS_STEP 2
 	// #define RGBLIGHT_EFFECT_CHRISTMAS_INTERVAL 800
#endif

#ifdef AUDIO_ENABLE
	#define NO_MUSIC_MODE
	#define AUDIO_CLICKY
	#define C6_AUDIO
	#define STARTUP_SONG SONG(STARTUP_SOUND)
	#define AUDIO_CLICKY_DELAY_DURATION 2
#endif

// #define MOD_TAP_INTERRUPT
// #define PERMISSIVE_HOLD
// #define TAPPING_FORCE_HOLD
// #define TAPPING_TERM 130


#include "../../config.h"

// #define MASTER_RIGHT
#define MASTER_LEFT
#define USE_I2C
// #define SERIAL