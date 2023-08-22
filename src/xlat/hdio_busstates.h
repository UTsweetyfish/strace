/* Generated by ./src/xlat/gen.sh from ./src/xlat/hdio_busstates.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat hdio_busstates in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data hdio_busstates_xdata[] = {
 [BUSSTATE_OFF] = XLAT(BUSSTATE_OFF),
 #define XLAT_VAL_0 ((unsigned) (BUSSTATE_OFF))
 #define XLAT_STR_0 STRINGIFY(BUSSTATE_OFF)
 [BUSSTATE_ON] = XLAT(BUSSTATE_ON),
 #define XLAT_VAL_1 ((unsigned) (BUSSTATE_ON))
 #define XLAT_STR_1 STRINGIFY(BUSSTATE_ON)
 [BUSSTATE_TRISTATE] = XLAT(BUSSTATE_TRISTATE),
 #define XLAT_VAL_2 ((unsigned) (BUSSTATE_TRISTATE))
 #define XLAT_STR_2 STRINGIFY(BUSSTATE_TRISTATE)
};
static
const struct xlat hdio_busstates[1] = { {
 .data = hdio_busstates_xdata,
 .size = ARRAY_SIZE(hdio_busstates_xdata),
 .type = XT_INDEXED,
 .flags_mask = 0
#  ifdef XLAT_VAL_0
  | XLAT_VAL_0
#  endif
#  ifdef XLAT_VAL_1
  | XLAT_VAL_1
#  endif
#  ifdef XLAT_VAL_2
  | XLAT_VAL_2
#  endif
  ,
 .flags_strsz = 0
#  ifdef XLAT_STR_0
  + sizeof(XLAT_STR_0)
#  endif
#  ifdef XLAT_STR_1
  + sizeof(XLAT_STR_1)
#  endif
#  ifdef XLAT_STR_2
  + sizeof(XLAT_STR_2)
#  endif
  ,
} };
DIAG_POP_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE

#  undef XLAT_STR_0
#  undef XLAT_VAL_0
#  undef XLAT_STR_1
#  undef XLAT_VAL_1
#  undef XLAT_STR_2
#  undef XLAT_VAL_2
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */