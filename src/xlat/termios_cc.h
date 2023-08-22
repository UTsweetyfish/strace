/* Generated by ./src/xlat/gen.sh from ./src/xlat/termios_cc.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat termios_cc in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data termios_cc_xdata[] = {
#if defined(VINTR) || (defined(HAVE_DECL_VINTR) && HAVE_DECL_VINTR)
  XLAT(VINTR),
 #define XLAT_VAL_0 ((unsigned) (VINTR))
 #define XLAT_STR_0 STRINGIFY(VINTR)
#endif
#if defined(VQUIT) || (defined(HAVE_DECL_VQUIT) && HAVE_DECL_VQUIT)
  XLAT(VQUIT),
 #define XLAT_VAL_1 ((unsigned) (VQUIT))
 #define XLAT_STR_1 STRINGIFY(VQUIT)
#endif
#if defined(VERASE) || (defined(HAVE_DECL_VERASE) && HAVE_DECL_VERASE)
  XLAT(VERASE),
 #define XLAT_VAL_2 ((unsigned) (VERASE))
 #define XLAT_STR_2 STRINGIFY(VERASE)
#endif
#if defined(VKILL) || (defined(HAVE_DECL_VKILL) && HAVE_DECL_VKILL)
  XLAT(VKILL),
 #define XLAT_VAL_3 ((unsigned) (VKILL))
 #define XLAT_STR_3 STRINGIFY(VKILL)
#endif
#if defined(VEOL2) || (defined(HAVE_DECL_VEOL2) && HAVE_DECL_VEOL2)
  XLAT(VEOL2),
 #define XLAT_VAL_4 ((unsigned) (VEOL2))
 #define XLAT_STR_4 STRINGIFY(VEOL2)
#endif
#if defined(VSWTC) || (defined(HAVE_DECL_VSWTC) && HAVE_DECL_VSWTC)
  XLAT(VSWTC),
 #define XLAT_VAL_5 ((unsigned) (VSWTC))
 #define XLAT_STR_5 STRINGIFY(VSWTC)
#endif
#if defined(VSTART) || (defined(HAVE_DECL_VSTART) && HAVE_DECL_VSTART)
  XLAT(VSTART),
 #define XLAT_VAL_6 ((unsigned) (VSTART))
 #define XLAT_STR_6 STRINGIFY(VSTART)
#endif
#if defined(VSTOP) || (defined(HAVE_DECL_VSTOP) && HAVE_DECL_VSTOP)
  XLAT(VSTOP),
 #define XLAT_VAL_7 ((unsigned) (VSTOP))
 #define XLAT_STR_7 STRINGIFY(VSTOP)
#endif
#if defined(VSUSP) || (defined(HAVE_DECL_VSUSP) && HAVE_DECL_VSUSP)
  XLAT(VSUSP),
 #define XLAT_VAL_8 ((unsigned) (VSUSP))
 #define XLAT_STR_8 STRINGIFY(VSUSP)
#endif
#if defined(VDSUSP) || (defined(HAVE_DECL_VDSUSP) && HAVE_DECL_VDSUSP)
  XLAT(VDSUSP),
 #define XLAT_VAL_9 ((unsigned) (VDSUSP))
 #define XLAT_STR_9 STRINGIFY(VDSUSP)
#endif
#if defined(VREPRINT) || (defined(HAVE_DECL_VREPRINT) && HAVE_DECL_VREPRINT)
  XLAT(VREPRINT),
 #define XLAT_VAL_10 ((unsigned) (VREPRINT))
 #define XLAT_STR_10 STRINGIFY(VREPRINT)
#endif
#if defined(VDISCARD) || (defined(HAVE_DECL_VDISCARD) && HAVE_DECL_VDISCARD)
  XLAT(VDISCARD),
 #define XLAT_VAL_11 ((unsigned) (VDISCARD))
 #define XLAT_STR_11 STRINGIFY(VDISCARD)
#endif
#if defined(VWERASE) || (defined(HAVE_DECL_VWERASE) && HAVE_DECL_VWERASE)
  XLAT(VWERASE),
 #define XLAT_VAL_12 ((unsigned) (VWERASE))
 #define XLAT_STR_12 STRINGIFY(VWERASE)
#endif
#if defined(VLNEXT) || (defined(HAVE_DECL_VLNEXT) && HAVE_DECL_VLNEXT)
  XLAT(VLNEXT),
 #define XLAT_VAL_13 ((unsigned) (VLNEXT))
 #define XLAT_STR_13 STRINGIFY(VLNEXT)
#endif
#if defined(VMIN) || (defined(HAVE_DECL_VMIN) && HAVE_DECL_VMIN)
  XLAT(VMIN),
 #define XLAT_VAL_14 ((unsigned) (VMIN))
 #define XLAT_STR_14 STRINGIFY(VMIN)
#endif
#if defined(VTIME) || (defined(HAVE_DECL_VTIME) && HAVE_DECL_VTIME)
  XLAT(VTIME),
 #define XLAT_VAL_15 ((unsigned) (VTIME))
 #define XLAT_STR_15 STRINGIFY(VTIME)
#endif
#if defined(VEOF) || (defined(HAVE_DECL_VEOF) && HAVE_DECL_VEOF)
  XLAT(VEOF),
 #define XLAT_VAL_16 ((unsigned) (VEOF))
 #define XLAT_STR_16 STRINGIFY(VEOF)
#endif
#if defined(VEOL) || (defined(HAVE_DECL_VEOL) && HAVE_DECL_VEOL)
  XLAT(VEOL),
 #define XLAT_VAL_17 ((unsigned) (VEOL))
 #define XLAT_STR_17 STRINGIFY(VEOL)
#endif
};
static
const struct xlat termios_cc[1] = { {
 .data = termios_cc_xdata,
 .size = ARRAY_SIZE(termios_cc_xdata),
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
#  ifdef XLAT_VAL_6
  | XLAT_VAL_6
#  endif
#  ifdef XLAT_VAL_7
  | XLAT_VAL_7
#  endif
#  ifdef XLAT_VAL_8
  | XLAT_VAL_8
#  endif
#  ifdef XLAT_VAL_9
  | XLAT_VAL_9
#  endif
#  ifdef XLAT_VAL_10
  | XLAT_VAL_10
#  endif
#  ifdef XLAT_VAL_11
  | XLAT_VAL_11
#  endif
#  ifdef XLAT_VAL_12
  | XLAT_VAL_12
#  endif
#  ifdef XLAT_VAL_13
  | XLAT_VAL_13
#  endif
#  ifdef XLAT_VAL_14
  | XLAT_VAL_14
#  endif
#  ifdef XLAT_VAL_15
  | XLAT_VAL_15
#  endif
#  ifdef XLAT_VAL_16
  | XLAT_VAL_16
#  endif
#  ifdef XLAT_VAL_17
  | XLAT_VAL_17
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
#  ifdef XLAT_STR_6
  + sizeof(XLAT_STR_6)
#  endif
#  ifdef XLAT_STR_7
  + sizeof(XLAT_STR_7)
#  endif
#  ifdef XLAT_STR_8
  + sizeof(XLAT_STR_8)
#  endif
#  ifdef XLAT_STR_9
  + sizeof(XLAT_STR_9)
#  endif
#  ifdef XLAT_STR_10
  + sizeof(XLAT_STR_10)
#  endif
#  ifdef XLAT_STR_11
  + sizeof(XLAT_STR_11)
#  endif
#  ifdef XLAT_STR_12
  + sizeof(XLAT_STR_12)
#  endif
#  ifdef XLAT_STR_13
  + sizeof(XLAT_STR_13)
#  endif
#  ifdef XLAT_STR_14
  + sizeof(XLAT_STR_14)
#  endif
#  ifdef XLAT_STR_15
  + sizeof(XLAT_STR_15)
#  endif
#  ifdef XLAT_STR_16
  + sizeof(XLAT_STR_16)
#  endif
#  ifdef XLAT_STR_17
  + sizeof(XLAT_STR_17)
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
#  undef XLAT_STR_6
#  undef XLAT_VAL_6
#  undef XLAT_STR_7
#  undef XLAT_VAL_7
#  undef XLAT_STR_8
#  undef XLAT_VAL_8
#  undef XLAT_STR_9
#  undef XLAT_VAL_9
#  undef XLAT_STR_10
#  undef XLAT_VAL_10
#  undef XLAT_STR_11
#  undef XLAT_VAL_11
#  undef XLAT_STR_12
#  undef XLAT_VAL_12
#  undef XLAT_STR_13
#  undef XLAT_VAL_13
#  undef XLAT_STR_14
#  undef XLAT_VAL_14
#  undef XLAT_STR_15
#  undef XLAT_VAL_15
#  undef XLAT_STR_16
#  undef XLAT_VAL_16
#  undef XLAT_STR_17
#  undef XLAT_VAL_17
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */