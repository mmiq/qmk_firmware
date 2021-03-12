#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

enum custom_keycodes {
	CHLANG = SAFE_RANGE,
	HK_SALT,
	BACK
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
	case CHLANG:
	if (record->event.pressed) {
	  SEND_STRING(SS_LCTRL(SS_TAP(X_LSHIFT)));
	  _delay_ms(10);
	  SEND_STRING(SS_LALT(SS_TAP(X_LSHIFT)));
	  _delay_ms(10);
	}
	return false;
	break;
    case HK_SALT:
      if (record->event.pressed) {
        SEND_STRING("SystemError");
        //SEND_STRING("SystemError");
      } else {
        // when keycode QMKBEST is released
      }
      break;
  case BACK:
      if (record->event.pressed) {
        // when keycode QMKBEST is pressed
        SEND_STRING("404");
      } else {
        // when keycode QMKBEST is released
      }
      break;

  }
  return true;
};

#define _______ KC_TRNS
#define XXXXXXX KC_NO

#define F1_SLSH LT(1, KC_SLSH)
#define F1_GRV LT(1, KC_GRV)
#define F1_ENT LT(1, KC_ENT)
#define F1_TAB LT(1, KC_TAB)
#define F1_GRV LT(1, KC_GRV)
#define F1_BSPC LT(1, KC_BSPC)
#define F2_BSPC LT(2, KC_BSPC)
#define F2_ENT LT(2, KC_ENT)
#define F1_ENT LT(1, KC_ENT)
#define F2_DEL LT(2, KC_DEL) 
#define F1_DEL LT(1, KC_DEL) 
#define F2_ESC LT(2, KC_ESC)
#define F1_ESC LT(1, KC_ESC)
#define F2_TAB LT(2, KC_TAB)

#define CL_TAB LCTL_T(KC_TAB)
#define CL_MINS LCTL_T(KC_MINS)
#define CR_TAB RCTL_T(KC_TAB)
#define CL_BSPC LCTL_T(KC_BSPC)
#define CL_ENT LCTL_T(KC_ENT)
#define CL_ESC LCTL_T(KC_ESC)
#define CR_QUOT RCTL_T(KC_QUOT)
#define CL_QUOT LCTL_T(KC_QUOT)
#define CR_ENT RCTL_T(KC_ENT)
#define CR_DEL RCTL_T(KC_DEL)

#define AL_APP LALT_T(KC_APP)
#define AL_ENT LALT_T(KC_ENT)
#define AL_ESC LALT_T(KC_ESC)
#define AL_BSLS LALT_T(KC_BSLS)
#define AL_TAB LALT_T(KC_TAB)
#define AL_GRV LALT_T(KC_GRV)
#define AL_PDOT LALT_T(KC_PDOT)
#define AL_INS LALT_T(KC_INS)
#define AL_DEL LALT_T(KC_DEL)
#define AL_PSLS LALT_T(KC_PSLS)
#define AL_BSPC LALT_T(KC_BSPC)
#define AL_RBRC LALT_T(KC_RBRC)
#define AR_DEL RALT_T(KC_DEL)
#define AR_APP RALT_T(KC_APP)
#define AR_INS RALT_T(KC_INS)
#define AR_BSLS RALT_T(KC_BSLS)
#define AR_PSLS RALT_T(KC_PSLS)
#define AR_BSPC RALT_T(KC_BSPC)
#define AR_RBRC RALT_T(KC_RBRC)

#define GL_APP LGUI_T(KC_APP)
#define GR_APP RGUI_T(KC_APP)
#define GL_ESC LGUI_T(KC_ESC)
#define GL_BSPC LGUI_T(KC_BSPC)
#define GR_BSPC RGUI_T(KC_BSPC)
#define GL_GRV LGUI_T(KC_GRV)
#define GR_RBRC RGUI_T(KC_RBRC)
#define GR_LBRC RGUI_T(KC_LBRC)
#define GL_RBRC LGUI_T(KC_RBRC)
#define GL_LBRC LGUI_T(KC_LBRC)
#define GR_DEL RGUI_T(KC_DEL)
#define GR_MINS RGUI_T(KC_MINS)
#define GL_PDOT LGUI_T(KC_PDOT)
#define GR_BSLS RGUI_T(KC_BSLS)

#define OT_LSFT OSM(MOD_LSFT)
#define OT_RSFT OSM(MOD_RSFT)
#define SL_SPC LSFT_T(KC_SPC)
#define SL_SPC LSFT_T(KC_SPC)
#define SR_SPC RSFT_T(KC_SPC)
#define SR_CAPS RSFT_T(KC_CAPS)
#define SL_CAPS LSFT_T(KC_CAPS)
#define SR_ENT RSFT_T(KC_ENT)
#define SR_BSPC RSFT_T(KC_BSPC)
#define SL_NLCK LSFT_T(KC_NLCK)

#define HK_BWRD LCTL(KC_BSPC)
#define HK_LANG LGUI(KC_SPC)
#define HK_CUT LCTL(KC_X)
#define HK_COPY LCTL(KC_C)
#define HK_PAST LCTL(KC_V)
#define HK_SPC LCTL(LSFT(KC_SPC))
#define HK_MINS LCTL(LSFT(KC_MINS))
#define HK_RUN LCTL(KC_GRV)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_ortho_4x12(																					\
		KC_GRV,	KC_Q,	KC_W,	KC_E,	KC_R,	KC_T,		KC_Y,	KC_U,	KC_I,	KC_O,	KC_P,	KC_LBRC,	\
		CL_MINS,KC_A,	KC_S,	KC_D,	KC_F,	KC_G,		KC_H,	KC_J,	KC_K,	KC_L,	KC_SCLN,CR_QUOT,	\
		KC_LALT,KC_Z,	KC_X,	KC_C,	KC_V,	KC_B,		KC_N,	KC_M,	KC_COMM,KC_DOT,	KC_SLSH,AR_RBRC,	\
		KC_LGUI,CL_ESC,	KC_LALT,F1_TAB,	SL_SPC,	F2_ESC,		F2_ENT, SR_BSPC,F1_DEL,	KC_RALT,CR_ENT,GR_BSLS		\
	),

	[1] = LAYOUT_ortho_4x12(																					\
		HK_SALT,KC_SLSH,KC_1,	KC_2,	KC_3,	KC_EQL,		KC_PGUP,KC_HOME,KC_UP,	KC_END,	KC_ESC,	HK_LANG,	\
		CL_ENT,	KC_TAB,	KC_4,	KC_5,	KC_6,	KC_MINS,	KC_PGDN,KC_LEFT,KC_DOWN,KC_RGHT,KC_ENT,	CR_TAB,		\
		AL_PSLS,KC_PDOT,KC_7,	KC_8,	KC_9,	KC_0,		KC_INS,	KC_BSPC,KC_DEL, KC_SPC,	_______,AR_PSLS,	\
		GL_APP,	_______,_______,_______,_______,_______,	_______,_______,_______,_______,_______,GR_APP
	),

	[2] = LAYOUT_ortho_4x12(																					\
		HK_SALT,KC_SLSH,KC_EXLM,KC_AT,	KC_HASH,KC_PLUS,	KC_PSCR,KC_F1,	KC_F2,	KC_F3,	KC_F12,	HK_LANG,	\
		CL_TAB,	KC_ENT,	KC_DLR,	KC_PERC,KC_CIRC,KC_UNDS,	KC_SLCK,KC_F4,	KC_F5,	KC_F6,	KC_F11,	CR_ENT,		\
		AL_PSLS,KC_PDOT,KC_AMPR,KC_ASTR,KC_LPRN,KC_RPRN,	KC_PAUS,KC_F7,	KC_F8,	KC_F9,	KC_F10,	AR_PSLS,	\
		GL_APP,	_______,_______,_______,_______,_______,	_______,_______,_______,_______,_______,GR_APP
	),

	[3] = LAYOUT_ortho_4x12(																					\
		KC_BSPC,KC_PAST,KC_P1,	KC_P2,	KC_P3,	KC_PPLS,	KC_WH_U,KC_BTN1,KC_MS_U,KC_BTN2,KC_BTN3,RGB_TOG,	\
		CL_TAB,	KC_PSLS,KC_P4,	KC_P5,	KC_P6,	KC_PMNS,	KC_WH_D,KC_MS_L,KC_MS_D,KC_MS_R,KC_BTN1,RGB_MOD,	\
		AL_ENT,	KC_PEQL,KC_P7,	KC_P8,	KC_P9,	KC_P0,		RGB_VAI,RGB_VAD,RGB_HUI,RGB_HUD,RGB_SAI,RGB_SAD,	\
		RESET,	KC_NLCK,_______,_______,SL_NLCK,_______,	_______,SR_CAPS,_______,_______,HK_SALT,RESET
	)

	};

uint32_t layer_state_set_user(uint32_t state) {
  return update_tri_layer_state(state, 1, 2, 3);
}

#define MODS_SHIFT_MASK  (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT))
#define MODS_CTRL_MASK  (MOD_BIT(KC_LCTL) | MOD_BIT(KC_RCTRL))
#define MODS_ALT_MASK  (MOD_BIT(KC_LALT) | MOD_BIT(KC_RALT))