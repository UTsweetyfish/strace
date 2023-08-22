/* Generated by ./src/xlat/gen.sh from ./src/xlat/pr_fp_mode.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PR_FP_MODE_FR) == ((1 << 0)), "PR_FP_MODE_FR != (1 << 0)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PR_FP_MODE_FRE) == ((1 << 1)), "PR_FP_MODE_FRE != (1 << 1)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat pr_fp_mode in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data pr_fp_mode_xdata[] = {
 XLAT(PR_FP_MODE_FR),
 #define XLAT_VAL_0 ((unsigned) (PR_FP_MODE_FR))
 #define XLAT_STR_0 STRINGIFY(PR_FP_MODE_FR)
 XLAT(PR_FP_MODE_FRE),
 #define XLAT_VAL_1 ((unsigned) (PR_FP_MODE_FRE))
 #define XLAT_STR_1 STRINGIFY(PR_FP_MODE_FRE)
};
static
const struct xlat pr_fp_mode[1] = { {
 .data = pr_fp_mode_xdata,
 .size = ARRAY_SIZE(pr_fp_mode_xdata),
 .type = XT_NORMAL,
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