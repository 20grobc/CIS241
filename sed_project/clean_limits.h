#define _LIBC_LIMITS_H_	1
#define __GLIBC_INTERNAL_STARTING_HEADER_IMPLEMENTATION
#define MB_LEN_MAX	16
#  define _LIMITS_H	1
#  define CHAR_BIT	8
#  define SCHAR_MIN	(-128)
#  define SCHAR_MAX	127
#  define UCHAR_MAX	255
#  define SHRT_MIN	(-32768)
#  define SHRT_MAX	32767
#  define USHRT_MAX	65535
#  define INT_MIN	(-INT_MAX - 1)
#  define INT_MAX	2147483647
#  define UINT_MAX	4294967295U
#  define LONG_MIN	(-LONG_MAX - 1L)
#  define LLONG_MIN	(-LLONG_MAX-1)
#  define LLONG_MAX	__LONG_LONG_MAX__
#  define ULLONG_MAX	(LLONG_MAX * 2ULL + 1)
#  define CHAR_WIDTH 8
#  define SCHAR_WIDTH 8
#  define UCHAR_WIDTH 8
#  define SHRT_WIDTH 16
#  define USHRT_WIDTH 16
#  define INT_WIDTH 32
#  define UINT_WIDTH 32
#  define LONG_WIDTH __WORDSIZE
#  define ULONG_WIDTH __WORDSIZE
#  define LLONG_WIDTH 64
#  define ULLONG_WIDTH 64
