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

#define F1_BSPC	LT(1, KC_BSPC)
#define F1_DEL	LT(1, KC_DEL) 
#define F1_ENT	LT(1, KC_ENT)
#define F1_ENT	LT(1, KC_ENT)
#define F1_ESC	LT(1, KC_ESC)
#define F1_GRV	LT(1, KC_GRV)
#define F1_GRV	LT(1, KC_GRV)
#define F1_SLSH	LT(1, KC_SLSH)
#define F1_TAB	LT(1, KC_TAB)
#define F2_BSPC LT(2, KC_BSPC)
#define F2_DEL	LT(2, KC_DEL) 
#define F2_ENT	LT(2, KC_ENT)
#define F2_ESC	LT(2, KC_ESC)
#define F2_TAB	LT(2, KC_TAB)
#define KC_FN1	MO(1)
#define KC_FN2	MO(2)

#define CL_BSPC	LCTL_T(KC_BSPC)
#define CL_ENT	LCTL_T(KC_ENT)
#define CL_ESC	LCTL_T(KC_ESC)
#define CL_MINS	LCTL_T(KC_MINS)
#define CL_QUOT	LCTL_T(KC_QUOT)
#define CL_TAB	LCTL_T(KC_TAB)
#define CR_DEL	RCTL_T(KC_DEL)
#define CR_ENT	RCTL_T(KC_ENT)
#define CR_QUOT	RCTL_T(KC_QUOT)
#define CR_TAB	RCTL_T(KC_TAB)

#define AL_APP	LALT_T(KC_APP)
#define AL_ENT	LALT_T(KC_ENT)
#define AL_ESC	LALT_T(KC_ESC)
#define AL_BSLS	LALT_T(KC_BSLS)
#define AL_TAB	LALT_T(KC_TAB)
#define AL_GRV	LALT_T(KC_GRV)
#define AL_PDOT	LALT_T(KC_PDOT)
#define AL_INS	LALT_T(KC_INS)
#define AL_DEL	LALT_T(KC_DEL)
#define AL_PSLS	LALT_T(KC_PSLS)
#define AL_BSPC	LALT_T(KC_BSPC)
#define AL_RBRC	LALT_T(KC_RBRC)
#define AR_DEL	RALT_T(KC_DEL)
#define AR_APP	RALT_T(KC_APP)
#define AR_INS	RALT_T(KC_INS)
#define AR_BSLS	RALT_T(KC_BSLS)
#define AR_PSLS	RALT_T(KC_PSLS)
#define AR_BSPC	RALT_T(KC_BSPC)
#define AR_RBRC	RALT_T(KC_RBRC)

#define SL_CAPS LSFT_T(KC_CAPS)
#define SL_NLCK LSFT_T(KC_NLCK)
#define SL_SPC LSFT_T(KC_SPC)
#define SL_SPC LSFT_T(KC_SPC)
#define SR_BSPC RSFT_T(KC_BSPC)
#define SR_CAPS RSFT_T(KC_CAPS)
#define SR_ENT RSFT_T(KC_ENT)
#define SR_SPC RSFT_T(KC_SPC)

#define GL_APP	LGUI_T(KC_APP)
#define GL_MENU	LGUI_T(KC_MENU)
#define GL_BSPC	LGUI_T(KC_BSPC)
#define GL_ESC	LGUI_T(KC_ESC)
#define GL_GRV	LGUI_T(KC_GRV)
#define GL_LBRC	LGUI_T(KC_LBRC)
#define GL_PDOT	LGUI_T(KC_PDOT)
#define GL_RBRC	LGUI_T(KC_RBRC)
#define GR_APP	RGUI_T(KC_APP)
#define GR_BSLS	RGUI_T(KC_BSLS)
#define GR_BSPC	RGUI_T(KC_BSPC)
#define GR_DEL	RGUI_T(KC_DEL)
#define GR_LBRC	RGUI_T(KC_LBRC)
#define GR_MINS	RGUI_T(KC_MINS)
#define GR_RBRC	RGUI_T(KC_RBRC)

#define OT_LSFT OSM(MOD_LSFT)
#define OT_RSFT OSM(MOD_RSFT)
#define OT_LCTL OSM(MOD_LCTL)
#define OT_RCTL OSM(MOD_RCTL)
#define OT_LALT OSM(MOD_LALT)
#define OT_RALT OSM(MOD_RALT)
#define OT_LGUI OSM(MOD_LGUI)
#define OT_FN1 OSL(1)
#define KC_FN1 MO(1)

#define HK_BWRD LCTL(KC_BSPC)
#define HK_LANG LGUI(KC_SPC)
#define HK_CUT LCTL(KC_X)
#define HK_COPY LCTL(KC_C)
#define HK_PAST LCTL(KC_V)
#define HK_SPC LCTL(LSFT(KC_SPC))
#define HK_MINS LCTL(LSFT(KC_MINS))
#define HK_RUN LCTL(KC_GRV)

#ifdef AUDIO_ENABLE
	#define HAU_ON AU_ON
	#define HAU_OFF AU_OFF
	#define HCK_UP CK_UP
	#define HCK_RST CK_RST
	#define HCK_DWN CK_DOWN
	#define HCK_ON CK_ON
	#define HCK_OFF CK_OFF
#endif

#ifdef FAUXCLICKY_ENABLE
	#define HAU_ON FC_ON
	#define HAU_OFF FC_OFF
	#define HCK_UP FC_ON
	#define HCK_RST FC_TOG
	#define HCK_DWN FC_OFF
	#define HCK_ON FC_ON
	#define HCK_OFF FC_OFF
#endif

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT(\
	KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   XXXXXXX,	XXXXXXX,KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   \
	KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   XXXXXXX,	XXXXXXX,KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,\
	KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   XXXXXXX,	XXXXXXX,KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,\
	XXXXXXX,XXXXXXX,XXXXXXX,KC_LCTL,KC_SPC, KC_LALT,	KC_FN2, OT_LSFT,KC_FN1, XXXXXXX,XXXXXXX,XXXXXXX
),

[1] = LAYOUT(\
	KC_ESC, KC_1,   KC_2,   KC_3,   KC_EQL, XXXXXXX,	XXXXXXX,KC_PGUP,KC_HOME,KC_UP,  KC_END, KC_BSPC,\
	KC_TAB, KC_4,   KC_5,   KC_6,   KC_MINS,XXXXXXX,	XXXXXXX,KC_PGDN,KC_LEFT,KC_DOWN,KC_RGHT,KC_ENT, \
	SR_CAPS,KC_7,   KC_8,   KC_9,   KC_0,   XXXXXXX,	XXXXXXX,OT_RALT,OT_LGUI,CHLANG, KC_INS, KC_DEL, \
	XXXXXXX,XXXXXXX,XXXXXXX,_______,_______,_______,	_______,_______,_______,XXXXXXX,XXXXXXX,XXXXXXX
),

[2] = LAYOUT(\
	KC_PSCR,KC_F1,  KC_F2,  KC_F3,  KC_F12, XXXXXXX,	XXXXXXX,KC_WH_U,KC_BTN1,KC_MS_U,KC_BTN2,KC_LBRC,\
	OT_LALT,KC_F4,  KC_F5,  KC_F6,  KC_F11, XXXXXXX,	XXXXXXX,KC_WH_D,KC_MS_L,KC_MS_D,KC_MS_R,KC_QUOT,\
	KC_SLCK,KC_F7,  KC_F8,  KC_F9,  KC_F10, XXXXXXX,	XXXXXXX,KC_GRV, KC_APP, KC_BTN3,KC_BSLS,KC_RBRC,\
	XXXXXXX,XXXXXXX,XXXXXXX,_______,_______,_______,	_______,_______,_______,XXXXXXX,XXXXXXX,XXXXXXX
),

[3] = LAYOUT(\
	KC_PAUS,KC_EXLM,KC_AT,  KC_HASH,KC_PLUS,XXXXXXX,	XXXXXXX,RGB_TOG,RGB_HUI,RGB_SAI,RGB_VAI,KC_LCBR,\
	OT_RCTL,KC_DLR, KC_PERC,KC_CIRC,KC_UNDS,XXXXXXX,	XXXXXXX,RESET,  KC_VOLU,KC_MUTE,KC_VOLD,KC_DQUO,\
	KC_NLCK,KC_AMPR,KC_ASTR,KC_LPRN,KC_RPRN,XXXXXXX,	XXXXXXX,KC_TILD,KC_DOT, HK_SALT,KC_PIPE,KC_RCBR,\
	XXXXXXX,XXXXXXX,XXXXXXX,_______,RGB_MOD,_______,	_______,_______,_______,XXXXXXX,XXXXXXX,XXXXXXX
)

};

uint32_t layer_state_set_user(uint32_t state) {
  return update_tri_layer_state(state, 1, 2, 3);
}

#define MODS_SHIFT_MASK  (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT))
#define MODS_CTRL_MASK  (MOD_BIT(KC_LCTL) | MOD_BIT(KC_RCTRL))
#define MODS_ALT_MASK  (MOD_BIT(KC_LALT) | MOD_BIT(KC_RALT))

void matrix_scan_user(void) {
	// caps_indicator
	uint8_t modifiders = get_mods();
	uint8_t led_usb_state = host_keyboard_leds();
	uint8_t one_shot = get_oneshot_mods();

	if ((modifiders & MODS_SHIFT_MASK) && (led_usb_state & (1<<USB_LED_CAPS_LOCK)))
	{ rgblight_sethsv(rgblight_get_hue(), 255, rgblight_get_val()); }
	else if (modifiders & MODS_SHIFT_MASK || led_usb_state & (1<<USB_LED_CAPS_LOCK) || one_shot & MODS_SHIFT_MASK)
	{ rgblight_sethsv(rgblight_get_hue(), 0, rgblight_get_val()); }
	else
	{ rgblight_sethsv(rgblight_get_hue(), 255, rgblight_get_val()); }
}
