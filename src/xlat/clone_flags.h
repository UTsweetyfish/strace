/* Generated by ./src/xlat/gen.sh from ./src/xlat/clone_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#undef XLAT_PREV_VAL

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat clone_flags in mpers mode

# else

DIAG_PUSH_IGNORE_TAUTOLOGICAL_CONSTANT_COMPARE
static const struct xlat_data clone_flags_xdata[] = {
 XLAT(CLONE_VM),
 #define XLAT_VAL_0 ((unsigned) (CLONE_VM))
 #define XLAT_STR_0 STRINGIFY(CLONE_VM)
 XLAT(CLONE_FS),
 #define XLAT_VAL_1 ((unsigned) (CLONE_FS))
 #define XLAT_STR_1 STRINGIFY(CLONE_FS)
 XLAT(CLONE_FILES),
 #define XLAT_VAL_2 ((unsigned) (CLONE_FILES))
 #define XLAT_STR_2 STRINGIFY(CLONE_FILES)
 XLAT(CLONE_SIGHAND),
 #define XLAT_VAL_3 ((unsigned) (CLONE_SIGHAND))
 #define XLAT_STR_3 STRINGIFY(CLONE_SIGHAND)
 XLAT(CLONE_PIDFD),
 #define XLAT_VAL_4 ((unsigned) (CLONE_PIDFD))
 #define XLAT_STR_4 STRINGIFY(CLONE_PIDFD)
 XLAT(CLONE_PTRACE),
 #define XLAT_VAL_5 ((unsigned) (CLONE_PTRACE))
 #define XLAT_STR_5 STRINGIFY(CLONE_PTRACE)
 XLAT(CLONE_VFORK),
 #define XLAT_VAL_6 ((unsigned) (CLONE_VFORK))
 #define XLAT_STR_6 STRINGIFY(CLONE_VFORK)
 XLAT(CLONE_PARENT),
 #define XLAT_VAL_7 ((unsigned) (CLONE_PARENT))
 #define XLAT_STR_7 STRINGIFY(CLONE_PARENT)
 XLAT(CLONE_THREAD),
 #define XLAT_VAL_8 ((unsigned) (CLONE_THREAD))
 #define XLAT_STR_8 STRINGIFY(CLONE_THREAD)
 XLAT(CLONE_NEWNS),
 #define XLAT_VAL_9 ((unsigned) (CLONE_NEWNS))
 #define XLAT_STR_9 STRINGIFY(CLONE_NEWNS)
 XLAT(CLONE_SYSVSEM),
 #define XLAT_VAL_10 ((unsigned) (CLONE_SYSVSEM))
 #define XLAT_STR_10 STRINGIFY(CLONE_SYSVSEM)
 XLAT(CLONE_SETTLS),
 #define XLAT_VAL_11 ((unsigned) (CLONE_SETTLS))
 #define XLAT_STR_11 STRINGIFY(CLONE_SETTLS)
 XLAT(CLONE_PARENT_SETTID),
 #define XLAT_VAL_12 ((unsigned) (CLONE_PARENT_SETTID))
 #define XLAT_STR_12 STRINGIFY(CLONE_PARENT_SETTID)
 XLAT(CLONE_CHILD_CLEARTID),
 #define XLAT_VAL_13 ((unsigned) (CLONE_CHILD_CLEARTID))
 #define XLAT_STR_13 STRINGIFY(CLONE_CHILD_CLEARTID)

 XLAT(CLONE_UNTRACED),
 #define XLAT_VAL_14 ((unsigned) (CLONE_UNTRACED))
 #define XLAT_STR_14 STRINGIFY(CLONE_UNTRACED)
 XLAT(CLONE_CHILD_SETTID),
 #define XLAT_VAL_15 ((unsigned) (CLONE_CHILD_SETTID))
 #define XLAT_STR_15 STRINGIFY(CLONE_CHILD_SETTID)
 XLAT(CLONE_NEWCGROUP),
 #define XLAT_VAL_16 ((unsigned) (CLONE_NEWCGROUP))
 #define XLAT_STR_16 STRINGIFY(CLONE_NEWCGROUP)
 XLAT(CLONE_NEWUTS),
 #define XLAT_VAL_17 ((unsigned) (CLONE_NEWUTS))
 #define XLAT_STR_17 STRINGIFY(CLONE_NEWUTS)
 XLAT(CLONE_NEWIPC),
 #define XLAT_VAL_18 ((unsigned) (CLONE_NEWIPC))
 #define XLAT_STR_18 STRINGIFY(CLONE_NEWIPC)
 XLAT(CLONE_NEWUSER),
 #define XLAT_VAL_19 ((unsigned) (CLONE_NEWUSER))
 #define XLAT_STR_19 STRINGIFY(CLONE_NEWUSER)
 XLAT(CLONE_NEWPID),
 #define XLAT_VAL_20 ((unsigned) (CLONE_NEWPID))
 #define XLAT_STR_20 STRINGIFY(CLONE_NEWPID)
 XLAT(CLONE_NEWNET),
 #define XLAT_VAL_21 ((unsigned) (CLONE_NEWNET))
 #define XLAT_STR_21 STRINGIFY(CLONE_NEWNET)
 XLAT(CLONE_IO),
 #define XLAT_VAL_22 ((unsigned) (CLONE_IO))
 #define XLAT_STR_22 STRINGIFY(CLONE_IO)
};
static
const struct xlat clone_flags[1] = { {
 .data = clone_flags_xdata,
 .size = ARRAY_SIZE(clone_flags_xdata),
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
#  ifdef XLAT_VAL_18
  | XLAT_VAL_18
#  endif
#  ifdef XLAT_VAL_19
  | XLAT_VAL_19
#  endif
#  ifdef XLAT_VAL_20
  | XLAT_VAL_20
#  endif
#  ifdef XLAT_VAL_21
  | XLAT_VAL_21
#  endif
#  ifdef XLAT_VAL_22
  | XLAT_VAL_22
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
#  ifdef XLAT_STR_18
  + sizeof(XLAT_STR_18)
#  endif
#  ifdef XLAT_STR_19
  + sizeof(XLAT_STR_19)
#  endif
#  ifdef XLAT_STR_20
  + sizeof(XLAT_STR_20)
#  endif
#  ifdef XLAT_STR_21
  + sizeof(XLAT_STR_21)
#  endif
#  ifdef XLAT_STR_22
  + sizeof(XLAT_STR_22)
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
#  undef XLAT_STR_18
#  undef XLAT_VAL_18
#  undef XLAT_STR_19
#  undef XLAT_VAL_19
#  undef XLAT_STR_20
#  undef XLAT_VAL_20
#  undef XLAT_STR_21
#  undef XLAT_VAL_21
#  undef XLAT_STR_22
#  undef XLAT_VAL_22
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */