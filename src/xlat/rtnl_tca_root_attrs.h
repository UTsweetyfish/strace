/* Generated by ./src/xlat/gen.sh from ./src/xlat/rtnl_tca_root_attrs.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(TCA_ROOT_UNSPEC) || (defined(HAVE_DECL_TCA_ROOT_UNSPEC) && HAVE_DECL_TCA_ROOT_UNSPEC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCA_ROOT_UNSPEC) == (0), "TCA_ROOT_UNSPEC != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCA_ROOT_UNSPEC 0
#endif
#if defined(TCA_ROOT_TAB) || (defined(HAVE_DECL_TCA_ROOT_TAB) && HAVE_DECL_TCA_ROOT_TAB)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCA_ROOT_TAB) == (1), "TCA_ROOT_TAB != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCA_ROOT_TAB 1
#endif
#if defined(TCA_ROOT_FLAGS) || (defined(HAVE_DECL_TCA_ROOT_FLAGS) && HAVE_DECL_TCA_ROOT_FLAGS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCA_ROOT_FLAGS) == (2), "TCA_ROOT_FLAGS != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCA_ROOT_FLAGS 2
#endif
#if defined(TCA_ROOT_COUNT) || (defined(HAVE_DECL_TCA_ROOT_COUNT) && HAVE_DECL_TCA_ROOT_COUNT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCA_ROOT_COUNT) == (3), "TCA_ROOT_COUNT != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCA_ROOT_COUNT 3
#endif
#if defined(TCA_ROOT_TIME_DELTA) || (defined(HAVE_DECL_TCA_ROOT_TIME_DELTA) && HAVE_DECL_TCA_ROOT_TIME_DELTA)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCA_ROOT_TIME_DELTA) == (4), "TCA_ROOT_TIME_DELTA != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCA_ROOT_TIME_DELTA 4
#endif
#if defined(TCA_ROOT_EXT_WARN_MSG) || (defined(HAVE_DECL_TCA_ROOT_EXT_WARN_MSG) && HAVE_DECL_TCA_ROOT_EXT_WARN_MSG)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((TCA_ROOT_EXT_WARN_MSG) == (5), "TCA_ROOT_EXT_WARN_MSG != 5");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define TCA_ROOT_EXT_WARN_MSG 5
#endif
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat rtnl_tca_root_attrs in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data rtnl_tca_root_attrs_xdata[] = {
 [TCA_ROOT_UNSPEC] = XLAT(TCA_ROOT_UNSPEC),
 #define XLAT_VAL_0 ((unsigned) (TCA_ROOT_UNSPEC))
 #define XLAT_STR_0 STRINGIFY(TCA_ROOT_UNSPEC)
 [TCA_ROOT_TAB] = XLAT(TCA_ROOT_TAB),
 #define XLAT_VAL_1 ((unsigned) (TCA_ROOT_TAB))
 #define XLAT_STR_1 STRINGIFY(TCA_ROOT_TAB)
 [TCA_ROOT_FLAGS] = XLAT(TCA_ROOT_FLAGS),
 #define XLAT_VAL_2 ((unsigned) (TCA_ROOT_FLAGS))
 #define XLAT_STR_2 STRINGIFY(TCA_ROOT_FLAGS)
 [TCA_ROOT_COUNT] = XLAT(TCA_ROOT_COUNT),
 #define XLAT_VAL_3 ((unsigned) (TCA_ROOT_COUNT))
 #define XLAT_STR_3 STRINGIFY(TCA_ROOT_COUNT)
 [TCA_ROOT_TIME_DELTA] = XLAT(TCA_ROOT_TIME_DELTA),
 #define XLAT_VAL_4 ((unsigned) (TCA_ROOT_TIME_DELTA))
 #define XLAT_STR_4 STRINGIFY(TCA_ROOT_TIME_DELTA)
 [TCA_ROOT_EXT_WARN_MSG] = XLAT(TCA_ROOT_EXT_WARN_MSG),
 #define XLAT_VAL_5 ((unsigned) (TCA_ROOT_EXT_WARN_MSG))
 #define XLAT_STR_5 STRINGIFY(TCA_ROOT_EXT_WARN_MSG)
};
static
const struct xlat rtnl_tca_root_attrs[1] = { {
 .data = rtnl_tca_root_attrs_xdata,
 .size = ARRAY_SIZE(rtnl_tca_root_attrs_xdata),
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