dnl Generated by ./xlat/gen.sh from ./xlat/v4l2_fields.in; do not edit.
AC_DEFUN([st_CHECK_ENUMS_v4l2_fields],[
AC_CHECK_DECLS(m4_normalize([
V4L2_FIELD_ANY,
V4L2_FIELD_NONE,
V4L2_FIELD_TOP,
V4L2_FIELD_BOTTOM,
V4L2_FIELD_INTERLACED,
V4L2_FIELD_SEQ_TB,
V4L2_FIELD_SEQ_BT,
V4L2_FIELD_ALTERNATE,
V4L2_FIELD_INTERLACED_TB,
V4L2_FIELD_INTERLACED_BT
]),,, [
#include <sys/time.h>
#include <linux/ioctl.h>
#include <linux/types.h>
#include <linux/videodev2.h>
])])])