#pragma once

#include QMK_KEYBOARD_H

#include "miryoku_babel/miryoku_layer_selection_3x6_3.h"

#ifdefined (KEYBOARD_crkbd)

#define MIRYOKU_MAPPING( \
K00,  K01,  K02,  K03,  K04,  K05,          K06,  K07,  K08,  K09,  K010,  K011,\
K10,  K11,  K12,  K13,  K14,  K15,          K16,  K17,  K18,  K19,  K110,  K111,\
K20,  K21,  K22,  K23,  K24,  K25,          K26,  K27,  K28,  K29,  K210,  K211,\
N30,  N31,  N32,  K33,  K34,  K35,          K36,  K37,  K38,  N39,  N310,  N311
) \
LAYOUT_split_3x6_3( \
K00,  K01,  K02,  K03,  K04,  K05,          K06,  K07,  K08,  K09,  K010,  K011, \
K10,  K11,  K12,  K13,  K14,  K15,          K16,  K17,  K18,  K19,  K110,  K111, \
K20,  K21,  K22,  K23,  K24,  K25,          K26,  K27,  K28,  K29,  K210,  K211, \
                  K33,  K34,  K35,          K36,  K37,  K38
)


#endif
