dnl Generated by ./types/gen.sh from ./types/evdev.h; do not edit.
AC_DEFUN([st_CHECK_TYPES_EVDEV],[
AC_CHECK_HEADERS([linux/input.h],[

AC_CHECK_TYPES([struct input_absinfo],
[AC_CHECK_MEMBERS([struct input_absinfo.resolution],,,[AC_INCLUDES_DEFAULT
#include <linux/input.h>])],,[AC_INCLUDES_DEFAULT
#include <linux/input.h>])

AC_CHECK_TYPES([struct input_keymap_entry],
[AC_CHECK_MEMBERS([struct input_keymap_entry.scancode],,,[AC_INCLUDES_DEFAULT
#include <linux/input.h>])],,[AC_INCLUDES_DEFAULT
#include <linux/input.h>])

AC_CHECK_TYPES([struct input_mask],
[AC_CHECK_MEMBERS([struct input_mask.codes_ptr],,,[AC_INCLUDES_DEFAULT
#include <linux/input.h>])],,[AC_INCLUDES_DEFAULT
#include <linux/input.h>])
],[],[AC_INCLUDES_DEFAULT
])])