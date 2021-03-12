#define MOUSEKEY_DELAY             100
#define MOUSEKEY_INTERVAL          50
#define MOUSEKEY_TIME_TO_MAX       0
#define MOUSEKEY_MAX_SPEED         5

#ifdef RGBLIGHT_ENABLE
	#define RGBLIGHT_SPLIT
	#undef RGBLED_NUM
	#define RGBLED_NUM 7
	//#define RGBLIGHT_SPLIT 7
	#define RGBW
	#define	RGBLIGHT_ANIMATIONS
	#define RGBLIGHT_SLEEP
	#define RGBLIGHT_USE_TIMER
	#define RGBLIGHT_EFFECT_CHRISTMAS_STEP 2
 	#define RGBLIGHT_EFFECT_CHRISTMAS_INTERVAL 800
#endif

#ifdef AUDIO_ENABLE
	#define NO_MUSIC_MODE
#endif

#define MOD_TAP_INTERRUPT
#define PERMISSIVE_HOLD
#define TAPPING_FORCE_HOLD
#define TAPPING_TERM 130


#include "../../config.h"

//#define MASTER_RIGHT
#define MASTER_LEFT
#define USE_I2C