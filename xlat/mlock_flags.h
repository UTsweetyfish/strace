/* Generated by ./xlat/gen.sh from ./xlat/mlock_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(MLOCK_ONFAULT) || (defined(HAVE_DECL_MLOCK_ONFAULT) && HAVE_DECL_MLOCK_ONFAULT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MLOCK_ONFAULT) == (1), "MLOCK_ONFAULT != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define MLOCK_ONFAULT 1
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat mlock_flags in mpers mode

# else

static const struct xlat_data mlock_flags_xdata[] = {
 XLAT(MLOCK_ONFAULT),
 #define XLAT_VAL_0 ((unsigned) (MLOCK_ONFAULT))
 #define XLAT_STR_0 STRINGIFY(MLOCK_ONFAULT)
};
static
const struct xlat mlock_flags[1] = { {
 .data = mlock_flags_xdata,
 .size = ARRAY_SIZE(mlock_flags_xdata),
 .type = XT_NORMAL,
 .flags_mask = 0
#  ifdef XLAT_VAL_0
  | XLAT_VAL_0
#  endif
  ,
 .flags_strsz = 0
#  ifdef XLAT_STR_0
  + sizeof(XLAT_STR_0)
#  endif
  ,
} };

#  undef XLAT_STR_0
#  undef XLAT_VAL_0
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */