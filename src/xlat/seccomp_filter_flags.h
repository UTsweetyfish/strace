/* Generated by ./src/xlat/gen.sh from ./src/xlat/seccomp_filter_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifndef IN_MPERS

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data seccomp_filter_flags_xdata[] = {
 XLAT(SECCOMP_FILTER_FLAG_TSYNC),
 #define XLAT_VAL_0 ((unsigned) (SECCOMP_FILTER_FLAG_TSYNC))
 #define XLAT_STR_0 STRINGIFY(SECCOMP_FILTER_FLAG_TSYNC)
 XLAT(SECCOMP_FILTER_FLAG_LOG),
 #define XLAT_VAL_1 ((unsigned) (SECCOMP_FILTER_FLAG_LOG))
 #define XLAT_STR_1 STRINGIFY(SECCOMP_FILTER_FLAG_LOG)
 XLAT(SECCOMP_FILTER_FLAG_SPEC_ALLOW),
 #define XLAT_VAL_2 ((unsigned) (SECCOMP_FILTER_FLAG_SPEC_ALLOW))
 #define XLAT_STR_2 STRINGIFY(SECCOMP_FILTER_FLAG_SPEC_ALLOW)
 XLAT(SECCOMP_FILTER_FLAG_NEW_LISTENER),
 #define XLAT_VAL_3 ((unsigned) (SECCOMP_FILTER_FLAG_NEW_LISTENER))
 #define XLAT_STR_3 STRINGIFY(SECCOMP_FILTER_FLAG_NEW_LISTENER)
 XLAT(SECCOMP_FILTER_FLAG_TSYNC_ESRCH),
 #define XLAT_VAL_4 ((unsigned) (SECCOMP_FILTER_FLAG_TSYNC_ESRCH))
 #define XLAT_STR_4 STRINGIFY(SECCOMP_FILTER_FLAG_TSYNC_ESRCH)
 XLAT(SECCOMP_FILTER_FLAG_WAIT_KILLABLE_RECV),
 #define XLAT_VAL_5 ((unsigned) (SECCOMP_FILTER_FLAG_WAIT_KILLABLE_RECV))
 #define XLAT_STR_5 STRINGIFY(SECCOMP_FILTER_FLAG_WAIT_KILLABLE_RECV)
};
const struct xlat seccomp_filter_flags[1] = { {
 .data = seccomp_filter_flags_xdata,
 .size = ARRAY_SIZE(seccomp_filter_flags_xdata),
 .type = XT_NORMAL,
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
#  ifdef XLAT_VAL_3
  | XLAT_VAL_3
#  endif
#  ifdef XLAT_VAL_4
  | XLAT_VAL_4
#  endif
#  ifdef XLAT_VAL_5
  | XLAT_VAL_5
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
#  ifdef XLAT_STR_3
  + sizeof(XLAT_STR_3)
#  endif
#  ifdef XLAT_STR_4
  + sizeof(XLAT_STR_4)
#  endif
#  ifdef XLAT_STR_5
  + sizeof(XLAT_STR_5)
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
#  undef XLAT_STR_3
#  undef XLAT_VAL_3
#  undef XLAT_STR_4
#  undef XLAT_VAL_4
#  undef XLAT_STR_5
#  undef XLAT_VAL_5
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */