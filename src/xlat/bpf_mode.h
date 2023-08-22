/* Generated by ./src/xlat/gen.sh from ./src/xlat/bpf_mode.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(BPF_IMM) || (defined(HAVE_DECL_BPF_IMM) && HAVE_DECL_BPF_IMM)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_IMM) == (0x00), "BPF_IMM != 0x00");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_IMM 0x00
#endif
#if defined(BPF_ABS) || (defined(HAVE_DECL_BPF_ABS) && HAVE_DECL_BPF_ABS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_ABS) == (0x20), "BPF_ABS != 0x20");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_ABS 0x20
#endif
#if defined(BPF_IND) || (defined(HAVE_DECL_BPF_IND) && HAVE_DECL_BPF_IND)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_IND) == (0x40), "BPF_IND != 0x40");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_IND 0x40
#endif
#if defined(BPF_MEM) || (defined(HAVE_DECL_BPF_MEM) && HAVE_DECL_BPF_MEM)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_MEM) == (0x60), "BPF_MEM != 0x60");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_MEM 0x60
#endif
#if defined(BPF_LEN) || (defined(HAVE_DECL_BPF_LEN) && HAVE_DECL_BPF_LEN)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_LEN) == (0x80), "BPF_LEN != 0x80");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_LEN 0x80
#endif
#if defined(BPF_MSH) || (defined(HAVE_DECL_BPF_MSH) && HAVE_DECL_BPF_MSH)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_MSH) == (0xa0), "BPF_MSH != 0xa0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_MSH 0xa0
#endif
#if defined(BPF_XADD) || (defined(HAVE_DECL_BPF_XADD) && HAVE_DECL_BPF_XADD)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_XADD) == (0xc0), "BPF_XADD != 0xc0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_XADD 0xc0
#endif
#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat bpf_mode in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data bpf_mode_xdata[] = {
 XLAT(BPF_IMM),
 #define XLAT_VAL_0 ((unsigned) (BPF_IMM))
 #define XLAT_STR_0 STRINGIFY(BPF_IMM)
 XLAT(BPF_ABS),
 #define XLAT_VAL_1 ((unsigned) (BPF_ABS))
 #define XLAT_STR_1 STRINGIFY(BPF_ABS)
 XLAT(BPF_IND),
 #define XLAT_VAL_2 ((unsigned) (BPF_IND))
 #define XLAT_STR_2 STRINGIFY(BPF_IND)
 XLAT(BPF_MEM),
 #define XLAT_VAL_3 ((unsigned) (BPF_MEM))
 #define XLAT_STR_3 STRINGIFY(BPF_MEM)
 XLAT(BPF_LEN),
 #define XLAT_VAL_4 ((unsigned) (BPF_LEN))
 #define XLAT_STR_4 STRINGIFY(BPF_LEN)
 XLAT(BPF_MSH),
 #define XLAT_VAL_5 ((unsigned) (BPF_MSH))
 #define XLAT_STR_5 STRINGIFY(BPF_MSH)
 XLAT(BPF_XADD),
 #define XLAT_VAL_6 ((unsigned) (BPF_XADD))
 #define XLAT_STR_6 STRINGIFY(BPF_XADD)
};
static
const struct xlat bpf_mode[1] = { {
 .data = bpf_mode_xdata,
 .size = ARRAY_SIZE(bpf_mode_xdata),
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
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */