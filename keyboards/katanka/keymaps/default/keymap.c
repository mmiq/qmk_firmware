#include QMK_KEYBOARD_H

#define _______ KC_TRNS

enum custom_keycodes {
	CHLANG
};

#define COPY LCTL(KC_C)
#define PASTE LCTL(KC_V)

#define F1_Q LT(1, KC_Q)
#define F2_V LT(2, KC_V)
#define F3_B LT(3, KC_B)
#define F4_N LT(4, KC_N)
#define F5_M LT(5, KC_M)

#define CL_Z LCTL_T(KC_Z)
#define CL_PSLS LCTL_T(KC_PSLS)
#define CR_SLSH RCTL_T(KC_SLSH)
#define CR_F12 RCTL_T(KC_F12)
#define CR_RBRC RCTL_T(KC_RBRC)
#define CR_PDOT RCTL_T(KC_PDOT)
#define CR_DEL RCTL_T(KC_DEL)


#define AL_X LALT_T(KC_X)
#define AL_PAST LALT_T(KC_PAST)
#define AR_DOT RALT_T(KC_DOT)
#define AR_F11 RALT_T(KC_F11)
#define AR_INS RALT_T(KC_INS)


#define GL_C LGUI_T(KC_C)
#define GL_PMNS LGUI_T(KC_PMNS)
#define GR_COMM RGUI_T(KC_COMM)
#define GR_F10 RGUI_T(KC_F10)

#define SL_SPS LSFT_T(KC_SPC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[0] = LAYOUT_ortho_3x10(
	F1_Q,	KC_W,	KC_E,	KC_R,	KC_T,	KC_Y,	KC_U,	KC_I,	KC_O,	KC_P,
	KC_A,	KC_S,	KC_D,	KC_F,	KC_G,	KC_H,	KC_J,	KC_K,	KC_L,	KC_SCLN,
	CL_Z,	AL_X,	GL_C,	F2_V,	F3_B, 	F4_N,	F5_M,	GR_COMM,AR_DOT,	CR_SLSH,
										SL_SPS
  ),
[1] = LAYOUT_ortho_3x10(
	_______,KC_KP_1,KC_KP_2,KC_KP_3,KC_KP_4,KC_NLCK,KC_F1,	KC_F2,	KC_F3,	KC_F4,
	RESET,	KC_KP_5,KC_KP_6,KC_KP_7,KC_KP_8,KC_SLCK,KC_F5,	KC_F6,	KC_F7,	KC_F8,
	KC_LCTL,KC_LALT,KC_LGUI,KC_KP_9,KC_KP_0,KC_CAPS,KC_F9,	GR_F10,	AR_F11,	CR_F12,
										CHLANG
  ),

[2] = LAYOUT_ortho_3x10(
	KC_EXLM,KC_AT,	KC_HASH,KC_DLR,	KC_PERC,KC_UNDS,KC_GRV,	KC_LCBR,KC_MINS,KC_LBRC,
	KC_CIRC,KC_AMPR,KC_ASTR,KC_LPRN,KC_RPRN,KC_PLUS,KC_TILD,KC_DQUO,KC_EQL,	KC_QUOT,
	KC_LCTL,KC_LALT,KC_LGUI,_______,KC_BSLS,KC_PIPE,_______,KC_RCBR,KC_RALT,CR_RBRC,
										KC_LSFT
  ),

[3] = LAYOUT_ortho_3x10(
	KC_1,	KC_2,	KC_3,	KC_4,	KC_5,	KC_MINS,KC_PPLS,KC_PAST,KC_PSCR,KC_BSPC,
	KC_6,	KC_7,	KC_8,	KC_9,	KC_0,	KC_EQL,	KC_PMNS,KC_PSLS,KC_PAUS,KC_PENT,
	CL_PSLS,AL_PAST,GL_PMNS,KC_PPLS,_______,KC_BSLS,KC_APP,	KC_RGUI,AR_INS,	CR_PDOT,
										_______
  ),
[4] = LAYOUT_ortho_3x10(
	KC_ESC,	_______,KC_MS_U,KC_BTN3,KC_WH_U,KC_PGUP,KC_HOME,KC_UP,	KC_END,	KC_BSPC,
	KC_TAB,	KC_MS_L,KC_MS_D,KC_MS_R,KC_WH_D,KC_PGDN,KC_LEFT,KC_DOWN,KC_RGHT,KC_ENT,
	KC_LCTL,KC_LALT,KC_LGUI,KC_BTN1,KC_BTN2,_______,COPY,	PASTE,	KC_INS,	CR_DEL,
										_______
  ),

[5] = LAYOUT_ortho_3x10(
	KC_EXLM,KC_AT,	KC_HASH,KC_DLR,	KC_PERC,KC_UNDS,KC_GRV,	KC_LCBR,KC_MINS,KC_LBRC,
	KC_CIRC,KC_AMPR,KC_ASTR,KC_LPRN,KC_RPRN,KC_PLUS,KC_TILD,KC_DQUO,KC_EQL,	KC_QUOT,
	KC_LCTL,KC_LALT,KC_LGUI,_______,KC_BSLS,KC_PIPE,_______,KC_RCBR,KC_RALT,KC_RBRC,
										KC_RSFT
  ),

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
  keyevent_t event = record->event;
	(void)event;

  switch (id) {

  }
  return MACRO_NONE;
}

/*uint32_t layer_state_set_user(uint32_t state) {
  return update_tri_layer_state(state, 1, 2, 3);
}*/

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
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
	};
		return true;
};
