dnl Generated by ./xlat/gen.sh from ./xlat/v4l2_buf_types.in; do not edit.
AC_DEFUN([st_CHECK_ENUMS_v4l2_buf_types],[
AC_CHECK_DECLS(m4_normalize([
V4L2_BUF_TYPE_VIDEO_CAPTURE,
V4L2_BUF_TYPE_VIDEO_OUTPUT,
V4L2_BUF_TYPE_VIDEO_OVERLAY,
V4L2_BUF_TYPE_VBI_CAPTURE,
V4L2_BUF_TYPE_VBI_OUTPUT,
V4L2_BUF_TYPE_SLICED_VBI_CAPTURE,
V4L2_BUF_TYPE_SLICED_VBI_OUTPUT,
V4L2_BUF_TYPE_VIDEO_OUTPUT_OVERLAY,
V4L2_BUF_TYPE_VIDEO_CAPTURE_MPLANE,
V4L2_BUF_TYPE_VIDEO_OUTPUT_MPLANE,
V4L2_BUF_TYPE_SDR_CAPTURE,
V4L2_BUF_TYPE_SDR_OUTPUT,
V4L2_BUF_TYPE_META_CAPTURE,
V4L2_BUF_TYPE_META_OUTPUT
]),,, [
#include <sys/time.h>
#include <linux/ioctl.h>
#include <linux/types.h>
#include <linux/videodev2.h>
])])])