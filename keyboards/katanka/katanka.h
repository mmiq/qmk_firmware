#ifndef KATANKA_H
#define KATANKA_H

#include "quantum.h"

#define LAYOUT_ortho_3x10( \
	K50, K51, K52, K53, K54, K04, K03, K02, K01, K00, \
	K40, K41, K42, K43, K44, K14, K13, K12, K11, K10, \
	K30, K31, K32, K33, K34, K24, K23, K22, K21, K20, \
	KLAST \
) { \
	{ K00,   K01,   K02,   K03,		K04,	KC_NO	}, \
	{ K10,   K11,   K12,   K13,		K14,	KC_NO	}, \
	{ K20,   K21,   K22,   K23,		K24,	KLAST	}, \
	{ K30,   K31,   K32,   K33,		K34,	KC_NO	}, \
	{ K40,   K41,   K42,   K43,		K44,	KC_NO	}, \
	{ K50,   K51,   K52,   K53,		K54,	KC_NO	}  \
}



#endif
