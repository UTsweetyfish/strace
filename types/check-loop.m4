dnl Generated by ./types/gen.sh from ./types/loop.h; do not edit.
AC_DEFUN([st_CHECK_TYPES_LOOP],[
AC_CHECK_HEADERS([linux/loop.h],[

AC_CHECK_TYPES([struct loop_config],
[AC_CHECK_MEMBERS([struct loop_config.__reserved],,,[AC_INCLUDES_DEFAULT
#include <linux/ioctl.h>
#include <linux/loop.h>])],,[AC_INCLUDES_DEFAULT
#include <linux/ioctl.h>
#include <linux/loop.h>])
],[],[AC_INCLUDES_DEFAULT
#include <linux/ioctl.h>])])