/* Generated by ./xlat/gen.sh from ./xlat/sysctl_net.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"


#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat sysctl_net in mpers mode

# else

static const struct xlat_data sysctl_net_xdata[] = {
 XLAT(NET_CORE),
 #define XLAT_VAL_0 ((unsigned) (NET_CORE))
 #define XLAT_STR_0 STRINGIFY(NET_CORE)
 XLAT(NET_ETHER),
 #define XLAT_VAL_1 ((unsigned) (NET_ETHER))
 #define XLAT_STR_1 STRINGIFY(NET_ETHER)
 XLAT(NET_802),
 #define XLAT_VAL_2 ((unsigned) (NET_802))
 #define XLAT_STR_2 STRINGIFY(NET_802)
 XLAT(NET_UNIX),
 #define XLAT_VAL_3 ((unsigned) (NET_UNIX))
 #define XLAT_STR_3 STRINGIFY(NET_UNIX)
 XLAT(NET_IPV4),
 #define XLAT_VAL_4 ((unsigned) (NET_IPV4))
 #define XLAT_STR_4 STRINGIFY(NET_IPV4)
 XLAT(NET_IPX),
 #define XLAT_VAL_5 ((unsigned) (NET_IPX))
 #define XLAT_STR_5 STRINGIFY(NET_IPX)
 XLAT(NET_ATALK),
 #define XLAT_VAL_6 ((unsigned) (NET_ATALK))
 #define XLAT_STR_6 STRINGIFY(NET_ATALK)
 XLAT(NET_NETROM),
 #define XLAT_VAL_7 ((unsigned) (NET_NETROM))
 #define XLAT_STR_7 STRINGIFY(NET_NETROM)
 XLAT(NET_AX25),
 #define XLAT_VAL_8 ((unsigned) (NET_AX25))
 #define XLAT_STR_8 STRINGIFY(NET_AX25)
 XLAT(NET_BRIDGE),
 #define XLAT_VAL_9 ((unsigned) (NET_BRIDGE))
 #define XLAT_STR_9 STRINGIFY(NET_BRIDGE)
 XLAT(NET_ROSE),
 #define XLAT_VAL_10 ((unsigned) (NET_ROSE))
 #define XLAT_STR_10 STRINGIFY(NET_ROSE)
 XLAT(NET_IPV6),
 #define XLAT_VAL_11 ((unsigned) (NET_IPV6))
 #define XLAT_STR_11 STRINGIFY(NET_IPV6)
 XLAT(NET_X25),
 #define XLAT_VAL_12 ((unsigned) (NET_X25))
 #define XLAT_STR_12 STRINGIFY(NET_X25)
 XLAT(NET_TR),
 #define XLAT_VAL_13 ((unsigned) (NET_TR))
 #define XLAT_STR_13 STRINGIFY(NET_TR)
 XLAT(NET_DECNET),
 #define XLAT_VAL_14 ((unsigned) (NET_DECNET))
 #define XLAT_STR_14 STRINGIFY(NET_DECNET)
 XLAT(NET_ECONET),
 #define XLAT_VAL_15 ((unsigned) (NET_ECONET))
 #define XLAT_STR_15 STRINGIFY(NET_ECONET)
 XLAT(NET_SCTP),
 #define XLAT_VAL_16 ((unsigned) (NET_SCTP))
 #define XLAT_STR_16 STRINGIFY(NET_SCTP)
#if defined(NET_LLC) || (defined(HAVE_DECL_NET_LLC) && HAVE_DECL_NET_LLC)
  XLAT(NET_LLC),
 #define XLAT_VAL_17 ((unsigned) (NET_LLC))
 #define XLAT_STR_17 STRINGIFY(NET_LLC)
#endif
#if defined(NET_NETFILTER) || (defined(HAVE_DECL_NET_NETFILTER) && HAVE_DECL_NET_NETFILTER)
  XLAT(NET_NETFILTER),
 #define XLAT_VAL_18 ((unsigned) (NET_NETFILTER))
 #define XLAT_STR_18 STRINGIFY(NET_NETFILTER)
#endif
#if defined(NET_DCCP) || (defined(HAVE_DECL_NET_DCCP) && HAVE_DECL_NET_DCCP)
  XLAT(NET_DCCP),
 #define XLAT_VAL_19 ((unsigned) (NET_DCCP))
 #define XLAT_STR_19 STRINGIFY(NET_DCCP)
#endif
#if defined(NET_IRDA) || (defined(HAVE_DECL_NET_IRDA) && HAVE_DECL_NET_IRDA)
  XLAT(NET_IRDA),
 #define XLAT_VAL_20 ((unsigned) (NET_IRDA))
 #define XLAT_STR_20 STRINGIFY(NET_IRDA)
#endif
};
static
const struct xlat sysctl_net[1] = { {
 .data = sysctl_net_xdata,
 .size = ARRAY_SIZE(sysctl_net_xdata),
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
  ,
} };

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
# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */