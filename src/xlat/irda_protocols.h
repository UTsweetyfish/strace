/* Generated by ./src/xlat/gen.sh from ./src/xlat/irda_protocols.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(IRDAPROTO_UNITDATA) || (defined(HAVE_DECL_IRDAPROTO_UNITDATA) && HAVE_DECL_IRDAPROTO_UNITDATA)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IRDAPROTO_UNITDATA) == (0), "IRDAPROTO_UNITDATA != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IRDAPROTO_UNITDATA 0
#endif
#if defined(IRDAPROTO_ULTRA) || (defined(HAVE_DECL_IRDAPROTO_ULTRA) && HAVE_DECL_IRDAPROTO_ULTRA)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((IRDAPROTO_ULTRA) == (1), "IRDAPROTO_ULTRA != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define IRDAPROTO_ULTRA 1
#endif
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat irda_protocols in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data irda_protocols_xdata[] = {
 [IRDAPROTO_UNITDATA] = XLAT(IRDAPROTO_UNITDATA),
 #define XLAT_VAL_0 ((unsigned) (IRDAPROTO_UNITDATA))
 #define XLAT_STR_0 STRINGIFY(IRDAPROTO_UNITDATA)
 [IRDAPROTO_ULTRA] = XLAT(IRDAPROTO_ULTRA),
 #define XLAT_VAL_1 ((unsigned) (IRDAPROTO_ULTRA))
 #define XLAT_STR_1 STRINGIFY(IRDAPROTO_ULTRA)
};
static
const struct xlat irda_protocols[1] = { {
 .data = irda_protocols_xdata,
 .size = ARRAY_SIZE(irda_protocols_xdata),
 .type = XT_INDEXED,
 .flags_mask = 0
#  ifdef XLAT_VAL_0
  | XLAT_VAL_0
#  endif
#  ifdef XLAT_VAL_1
  | XLAT_VAL_1
#  endif
  ,
 .flags_strsz = 0
#  ifdef XLAT_STR_0
  + sizeof(XLAT_STR_0)
#  endif
#  ifdef XLAT_STR_1
  + sizeof(XLAT_STR_1)
#  endif
  ,
} };
DIAG_POP_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE

#  undef XLAT_STR_0
#  undef XLAT_VAL_0
#  undef XLAT_STR_1
#  undef XLAT_VAL_1
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */