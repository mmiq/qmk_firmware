#include QMK_KEYBOARD_H

#define _______ KC_TRNS

enum custom_keycodes {
	CHLANG = SAFE_RANGE,
	NUM_ON,
	NUM_OFF,
	TEST,
};

#define F1_N LT(1, KC_N)
#define F2_M LT(2, KC_M)

#define LC_Z LCTL(KC_Z)
#define LC_X LCTL(KC_X)
#define LC_C LCTL(KC_C)
#define LC_V LCTL(KC_V)

#define RA_TIRE RALT(KC_MINS)
#define RA_SPC RALT(KC_SPC)

#define CL_A LCTL_T(KC_A)
#define CL_TAB LCTL_T(KC_TAB)
#define CL_BSLS LCTL_T(KC_BSLS)
#define CR_SCLN RCTL_T(KC_SCLN)
#define CR_ENT RCTL_T(KC_ENT)
#define CR_QUOT RCTL_T(KC_QUOT)

#define AL_DOT LALT_T(KC_DOT)
#define AL_APP LALT_T(KC_APP)
#define AL_PAUS LALT_T(KC_PAUS)
#define AL_F7 LALT_T(KC_F7)
#define AL_7 LALT_T(KC_7)

#define GR_DEL RGUI_T(KC_DEL)
#define GR_SLSH RGUI_T(KC_SLSH) //Ru Dot
#define GR_RBRC RGUI_T(KC_RBRC) //Tverdyj znak

#define SL_SPS LSFT_T(KC_SPC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[0] = LAYOUT_ortho_3x10(
	KC_Q,	KC_W,	KC_E,	KC_R,	KC_T,	KC_Y,	KC_U,	KC_I,	KC_O,	KC_P,
	CL_A,	KC_S,	KC_D,	KC_F,	KC_G,	KC_H,	KC_J,	KC_K,	KC_L,	CR_SCLN,
	KC_Z,	KC_X,	KC_C,	KC_V,	KC_B, 	F1_N,	F2_M,	KC_COMM,AL_DOT,	GR_SLSH,
										SL_SPS
  ),

[1] = LAYOUT_ortho_3x10(
	KC_PSCR,KC_F1,	KC_F2,	KC_F3,	KC_F12,	KC_GRV,	KC_MS_U,KC_BTN3,KC_BTN2,KC_LBRC,
	CL_BSLS,KC_F4,	KC_F5,	KC_F6,	KC_F11,	KC_MS_L,KC_MS_D,KC_MS_R,KC_BTN1,CR_QUOT,
	KC_CAPS,KC_F7,	KC_F8,	KC_F9,	KC_F10,	_______,_______,TEST,AL_PAUS,GR_RBRC,
										SL_SPS
  ),

[2] = LAYOUT_ortho_3x10(
	KC_ESC,	KC_1,	KC_2,	KC_3,	KC_EQL,	KC_PGUP,KC_HOME,KC_UP,	KC_END,	KC_BSPC,
	CL_TAB,	KC_4,	KC_5,	KC_6,	KC_MINS,KC_PGDN,KC_LEFT,KC_DOWN,KC_RGHT,CR_ENT,
	CHLANG,	KC_7,	KC_8,	KC_9,	KC_0,	_______,_______,KC_INS,	AL_APP,	GR_DEL,
										SL_SPS
  	),

[3] = LAYOUT_ortho_3x10(
	RA_TIRE,KC_EXLM,KC_AT,	KC_HASH,KC_PLUS,KC_TILD,KC_PPLS,KC_PAST,KC_SLCK,KC_LCBR,
	KC_PIPE,KC_DLR,	KC_PERC,KC_CIRC,KC_UNDS,RGB_TOG,KC_PMNS,KC_PSLS,RGB_MOD,KC_DQUO,
	NUM_ON,	KC_AMPR,KC_ASTR,KC_LPRN,KC_RPRN,_______,_______,RESET, 	KC_RALT,KC_RCBR,
										RA_SPC
  ),

[4] = LAYOUT_ortho_3x10(
  	KC_PAST,KC_1,	KC_2,	KC_3,	KC_EQL,KC_ESC,	KC_PDOT,KC_UP,	KC_SLSH,KC_BSPC,
  	KC_PSLS,KC_4,	KC_5,	KC_6,	KC_MINS,CL_TAB,	KC_LEFT,KC_DOWN,KC_RGHT,CR_ENT,
  	NUM_OFF,AL_7,	KC_8,	KC_9,	KC_0,	LC_Z,	LC_X,	LC_C,	LC_V,	GR_DEL,
  										SL_SPS
    ),
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
  keyevent_t event = record->event;
	(void)event;

  switch (id) {

  }
  return MACRO_NONE;
}

uint32_t layer_state_set_user(uint32_t state) {
	// switch (biton32(state)) {
    // case 1:
    // 	rgblight_sethsv(180, rgblight_get_sat(), rgblight_get_val());
    // 	break;
    // case 2:
    // 	rgblight_sethsv(100, rgblight_get_sat(), rgblight_get_val());
    // 	break;
    // case 4:
    // 	rgblight_sethsv(0, rgblight_get_sat(), rgblight_get_val());
    // 	break;
    // default: //  for any other layers, or the default layer
    // 	rgblight_sethsv(70, rgblight_get_sat(), rgblight_get_val());
    // 	break;
	// }

	return update_tri_layer_state(state, 1, 2, 3);
}

#define MODS_SHIFT_MASK  (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT))
#define MODS_CTRL_MASK  (MOD_BIT(KC_LCTL) | MOD_BIT(KC_RCTRL))
#define MODS_ALT_MASK  (MOD_BIT(KC_LALT) | MOD_BIT(KC_RALT))

bool NUM_STATE = false;

void matrix_scan_user(void) {
	// Индикатор капса
	uint8_t modifiders = get_mods();
	uint8_t led_usb_state = host_keyboard_leds();
	uint8_t one_shot = get_oneshot_mods();

	if ((modifiders & MODS_SHIFT_MASK) && (led_usb_state & (1<<USB_LED_CAPS_LOCK)))
	{ rgblight_sethsv(rgblight_get_hue(), 255, rgblight_get_val()); }
	else if (modifiders & MODS_SHIFT_MASK || led_usb_state & (1<<USB_LED_CAPS_LOCK) || one_shot & MODS_SHIFT_MASK)
	{ rgblight_sethsv(rgblight_get_hue(), 0, rgblight_get_val()); }
	else
	{ rgblight_sethsv(rgblight_get_hue(), 255, rgblight_get_val()); }

	if (led_usb_state & (1<<USB_LED_NUM_LOCK))
	{
		// set_single_persistent_default_layer(4);
		NUM_STATE=true;
		rgblight_sethsv(0, rgblight_get_sat(), rgblight_get_val()); }
	else if (!(led_usb_state & (1<<USB_LED_NUM_LOCK)))
	{
		// set_single_persistent_default_layer(0);
		NUM_STATE=false;
		rgblight_sethsv(70, rgblight_get_sat(), rgblight_get_val()); }
	// else if (led_usb_state & (1<<USB_LED_SCROLL_LOCK))
	// { rgblight_sethsv(200, rgblight_get_sat(), rgblight_get_val()); }
	// else if (!(led_usb_state & (1<<USB_LED_NUM_LOCK)))
	// { rgblight_sethsv(70, rgblight_get_sat(), rgblight_get_val()); }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	switch (keycode) {
		case CHLANG:
		if (record->event.pressed) {
			SEND_STRING(SS_LCTRL(SS_TAP(X_LSHIFT)));
			_delay_ms(10);
			SEND_STRING(SS_LALT(SS_TAP(X_LSHIFT)));
		};
		return false;
		break;

		case TEST:
		if (record->event.pressed) {

		};
		return false;
		break;

		case NUM_ON:
		if (record->event.pressed) {
			if (!NUM_STATE)
			{ SEND_STRING(SS_TAP(X_NUMLOCK));}
			set_single_persistent_default_layer(4);
		};
		return false;
		break;

		case NUM_OFF:
		if (record->event.pressed) {
			if (NUM_STATE)
			{ SEND_STRING(SS_TAP(X_NUMLOCK));}
			set_single_persistent_default_layer(0);
		};
		return false;
		break;
	}
	return true;
};
