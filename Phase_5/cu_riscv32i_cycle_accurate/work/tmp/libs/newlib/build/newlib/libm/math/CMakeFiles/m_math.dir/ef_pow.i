# 1 "/tools/toolchain/newlib/newlib/libm/math/ef_pow.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 325 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "/tools/toolchain/newlib/newlib/libm/math/ef_pow.c" 2
# 16 "/tools/toolchain/newlib/newlib/libm/math/ef_pow.c"
# 1 "/tools/toolchain/newlib/newlib/libm/math/../common/fdlibm.h" 1
# 15 "/tools/toolchain/newlib/newlib/libm/math/../common/fdlibm.h"
# 1 "/tools/toolchain/newlib/newlib/libc/include/math.h" 1 3




# 1 "/tools/toolchain/newlib/newlib/libc/include/sys/reent.h" 1 3
# 13 "/tools/toolchain/newlib/newlib/libc/include/sys/reent.h" 3
# 1 "/tools/toolchain/newlib/newlib/libc/include/_ansi.h" 1 3
# 18 "/tools/toolchain/newlib/newlib/libc/include/_ansi.h" 3
# 1 "/tools/toolchain/newlib/newlib/libc/machine/codasip/newlib.h" 1 3
# 19 "/tools/toolchain/newlib/newlib/libc/include/_ansi.h" 2 3
# 1 "/tools/toolchain/newlib/newlib/libc/include/sys/config.h" 1 3



# 1 "/tools/toolchain/newlib/newlib/libc/include/machine/ieeefp.h" 1 3
# 5 "/tools/toolchain/newlib/newlib/libc/include/sys/config.h" 2 3
# 1 "/tools/toolchain/newlib/newlib/libc/include/sys/features.h" 1 3
# 28 "/tools/toolchain/newlib/newlib/libc/include/sys/features.h" 3
# 1 "/tools/toolchain/newlib/newlib/libc/include/_newlib_version.h" 1 3
# 29 "/tools/toolchain/newlib/newlib/libc/include/sys/features.h" 2 3
# 6 "/tools/toolchain/newlib/newlib/libc/include/sys/config.h" 2 3
# 20 "/tools/toolchain/newlib/newlib/libc/include/_ansi.h" 2 3
# 14 "/tools/toolchain/newlib/newlib/libc/include/sys/reent.h" 2 3
# 1 "/home/project/cu_riscv32i_cycle_accurate/work/ia/sdk/lib/clang/9.0.1/include/stddef.h" 1 3
# 35 "/home/project/cu_riscv32i_cycle_accurate/work/ia/sdk/lib/clang/9.0.1/include/stddef.h" 3
typedef int ptrdiff_t;
# 46 "/home/project/cu_riscv32i_cycle_accurate/work/ia/sdk/lib/clang/9.0.1/include/stddef.h" 3
typedef unsigned int size_t;
# 74 "/home/project/cu_riscv32i_cycle_accurate/work/ia/sdk/lib/clang/9.0.1/include/stddef.h" 3
typedef int wchar_t;
# 102 "/home/project/cu_riscv32i_cycle_accurate/work/ia/sdk/lib/clang/9.0.1/include/stddef.h" 3
# 1 "/home/project/cu_riscv32i_cycle_accurate/work/ia/sdk/lib/clang/9.0.1/include/__stddef_max_align_t.h" 1 3
# 19 "/home/project/cu_riscv32i_cycle_accurate/work/ia/sdk/lib/clang/9.0.1/include/__stddef_max_align_t.h" 3
typedef struct {
  long long __clang_max_align_nonce1
      __attribute__((__aligned__(__alignof__(long long))));
  long double __clang_max_align_nonce2
      __attribute__((__aligned__(__alignof__(long double))));
} max_align_t;
# 103 "/home/project/cu_riscv32i_cycle_accurate/work/ia/sdk/lib/clang/9.0.1/include/stddef.h" 2 3
# 15 "/tools/toolchain/newlib/newlib/libc/include/sys/reent.h" 2 3
# 1 "/tools/toolchain/newlib/newlib/libc/include/sys/_types.h" 1 3
# 24 "/tools/toolchain/newlib/newlib/libc/include/sys/_types.h" 3
# 1 "/home/project/cu_riscv32i_cycle_accurate/work/ia/sdk/lib/clang/9.0.1/include/stddef.h" 1 3
# 116 "/home/project/cu_riscv32i_cycle_accurate/work/ia/sdk/lib/clang/9.0.1/include/stddef.h" 3
typedef unsigned int wint_t;
# 25 "/tools/toolchain/newlib/newlib/libc/include/sys/_types.h" 2 3


# 1 "/tools/toolchain/newlib/newlib/libc/include/machine/_types.h" 1 3






# 1 "/tools/toolchain/newlib/newlib/libc/include/machine/_default_types.h" 1 3
# 41 "/tools/toolchain/newlib/newlib/libc/include/machine/_default_types.h" 3
typedef signed char __int8_t;

typedef unsigned char __uint8_t;
# 55 "/tools/toolchain/newlib/newlib/libc/include/machine/_default_types.h" 3
typedef short __int16_t;

typedef unsigned short __uint16_t;
# 77 "/tools/toolchain/newlib/newlib/libc/include/machine/_default_types.h" 3
typedef int __int32_t;

typedef unsigned int __uint32_t;
# 103 "/tools/toolchain/newlib/newlib/libc/include/machine/_default_types.h" 3
typedef long long int __int64_t;

typedef long long unsigned int __uint64_t;
# 134 "/tools/toolchain/newlib/newlib/libc/include/machine/_default_types.h" 3
typedef signed char __int_least8_t;

typedef unsigned char __uint_least8_t;
# 160 "/tools/toolchain/newlib/newlib/libc/include/machine/_default_types.h" 3
typedef short __int_least16_t;

typedef unsigned short __uint_least16_t;
# 182 "/tools/toolchain/newlib/newlib/libc/include/machine/_default_types.h" 3
typedef int __int_least32_t;

typedef unsigned int __uint_least32_t;
# 200 "/tools/toolchain/newlib/newlib/libc/include/machine/_default_types.h" 3
typedef long long int __int_least64_t;

typedef long long unsigned int __uint_least64_t;
# 214 "/tools/toolchain/newlib/newlib/libc/include/machine/_default_types.h" 3
typedef long long int __intmax_t;







typedef long long unsigned int __uintmax_t;







typedef int __intptr_t;

typedef unsigned int __uintptr_t;
# 8 "/tools/toolchain/newlib/newlib/libc/include/machine/_types.h" 2 3
# 28 "/tools/toolchain/newlib/newlib/libc/include/sys/_types.h" 2 3


typedef long __blkcnt_t;



typedef long __blksize_t;



typedef __uint64_t __fsblkcnt_t;



typedef __uint32_t __fsfilcnt_t;



typedef long _off_t;





typedef int __pid_t;



typedef short __dev_t;



typedef unsigned short __uid_t;


typedef unsigned short __gid_t;



typedef __uint32_t __id_t;







typedef unsigned short __ino_t;
# 90 "/tools/toolchain/newlib/newlib/libc/include/sys/_types.h" 3
typedef __uint32_t __mode_t;





__extension__ typedef long long _off64_t;





typedef _off_t __off_t;


typedef _off64_t __loff_t;


typedef long __key_t;







typedef long _fpos_t;
# 131 "/tools/toolchain/newlib/newlib/libc/include/sys/_types.h" 3
typedef unsigned int __size_t;
# 147 "/tools/toolchain/newlib/newlib/libc/include/sys/_types.h" 3
typedef signed int _ssize_t;
# 158 "/tools/toolchain/newlib/newlib/libc/include/sys/_types.h" 3
typedef _ssize_t __ssize_t;



typedef struct
{
  int __count;
  union
  {
    wint_t __wch;
    unsigned char __wchb[4];
  } __value;
} _mbstate_t;




typedef void *_iconv_t;






typedef unsigned long __clock_t;






typedef __int_least64_t __time_t;





typedef unsigned long __clockid_t;


typedef unsigned long __timer_t;


typedef __uint8_t __sa_family_t;



typedef __uint32_t __socklen_t;


typedef int __nl_item;
typedef unsigned short __nlink_t;
typedef long __suseconds_t;
typedef unsigned long __useconds_t;







typedef __builtin_va_list __va_list;
# 16 "/tools/toolchain/newlib/newlib/libc/include/sys/reent.h" 2 3






typedef unsigned long __ULong;
# 34 "/tools/toolchain/newlib/newlib/libc/include/sys/reent.h" 3
# 1 "/tools/toolchain/newlib/newlib/libc/include/sys/lock.h" 1 3
# 11 "/tools/toolchain/newlib/newlib/libc/include/sys/lock.h" 3
typedef int _LOCK_T;
typedef int _LOCK_RECURSIVE_T;
# 35 "/tools/toolchain/newlib/newlib/libc/include/sys/reent.h" 2 3
typedef _LOCK_RECURSIVE_T _flock_t;







struct _reent;

struct __locale_t;






struct _Bigint
{
  struct _Bigint *_next;
  int _k, _maxwds, _sign, _wds;
  __ULong _x[1];
};


struct __tm
{
  int __tm_sec;
  int __tm_min;
  int __tm_hour;
  int __tm_mday;
  int __tm_mon;
  int __tm_year;
  int __tm_wday;
  int __tm_yday;
  int __tm_isdst;
};







struct _on_exit_args {
 void * _fnargs[32];
 void * _dso_handle[32];

 __ULong _fntypes;


 __ULong _is_cxa;
};
# 98 "/tools/toolchain/newlib/newlib/libc/include/sys/reent.h" 3
struct _atexit {
 struct _atexit *_next;
 int _ind;

 void (*_fns[32])(void);
        struct _on_exit_args _on_exit_args;
};
# 122 "/tools/toolchain/newlib/newlib/libc/include/sys/reent.h" 3
struct __sbuf {
 unsigned char *_base;
 int _size;
};
# 186 "/tools/toolchain/newlib/newlib/libc/include/sys/reent.h" 3
struct __sFILE {
  unsigned char *_p;
  int _r;
  int _w;
  short _flags;
  short _file;
  struct __sbuf _bf;
  int _lbfsize;






  void * _cookie;

  int (*_read) (struct _reent *, void *,
        char *, int);
  int (*_write) (struct _reent *, void *,
         const char *,
         int);
  _fpos_t (*_seek) (struct _reent *, void *, _fpos_t, int);
  int (*_close) (struct _reent *, void *);


  struct __sbuf _ub;
  unsigned char *_up;
  int _ur;


  unsigned char _ubuf[3];
  unsigned char _nbuf[1];


  struct __sbuf _lb;


  int _blksize;
  _off_t _offset;


  struct _reent *_data;



  _flock_t _lock;

  _mbstate_t _mbstate;
  int _flags2;
};
# 292 "/tools/toolchain/newlib/newlib/libc/include/sys/reent.h" 3
typedef struct __sFILE __FILE;



struct _glue
{
  struct _glue *_next;
  int _niobs;
  __FILE *_iobs;
};
# 324 "/tools/toolchain/newlib/newlib/libc/include/sys/reent.h" 3
struct _rand48 {
  unsigned short _seed[3];
  unsigned short _mult[3];
  unsigned short _add;




};
# 613 "/tools/toolchain/newlib/newlib/libc/include/sys/reent.h" 3
struct _reent
{
  int _errno;




  __FILE *_stdin, *_stdout, *_stderr;

  int _inc;
  char _emergency[25];


  int _unspecified_locale_info;
  struct __locale_t *_locale;

  int __sdidinit;

  void (*__cleanup) (struct _reent *);


  struct _Bigint *_result;
  int _result_k;
  struct _Bigint *_p5s;
  struct _Bigint **_freelist;


  int _cvtlen;
  char *_cvtbuf;

  union
    {
      struct
        {
          unsigned int _unused_rand;
          char * _strtok_last;
          char _asctime_buf[26];
          struct __tm _localtime_buf;
          int _gamma_signgam;
          __extension__ unsigned long long _rand_next;
          struct _rand48 _r48;
          _mbstate_t _mblen_state;
          _mbstate_t _mbtowc_state;
          _mbstate_t _wctomb_state;
          char _l64a_buf[8];
          char _signal_buf[24];
          int _getdate_err;
          _mbstate_t _mbrlen_state;
          _mbstate_t _mbrtowc_state;
          _mbstate_t _mbsrtowcs_state;
          _mbstate_t _wcrtomb_state;
          _mbstate_t _wcsrtombs_state;
   int _h_errno;
        } _reent;



      struct
        {

          unsigned char * _nextf[30];
          unsigned int _nmalloc[30];
        } _unused;
    } _new;



  struct _atexit *_atexit;
  struct _atexit _atexit0;



  void (**(_sig_func))(int);




  struct _glue __sglue;

  __FILE __sf[3];

};
# 819 "/tools/toolchain/newlib/newlib/libc/include/sys/reent.h" 3
extern struct _reent *_impure_ptr ;
extern struct _reent *const _global_impure_ptr ;

void _reclaim_reent (struct _reent *);
# 6 "/tools/toolchain/newlib/newlib/libc/include/math.h" 2 3
# 1 "/tools/toolchain/newlib/newlib/libc/include/sys/cdefs.h" 1 3
# 47 "/tools/toolchain/newlib/newlib/libc/include/sys/cdefs.h" 3
# 1 "/home/project/cu_riscv32i_cycle_accurate/work/ia/sdk/lib/clang/9.0.1/include/stddef.h" 1 3
# 48 "/tools/toolchain/newlib/newlib/libc/include/sys/cdefs.h" 2 3
# 7 "/tools/toolchain/newlib/newlib/libc/include/math.h" 2 3
# 1 "/tools/toolchain/newlib/newlib/libc/include/machine/ieeefp.h" 1 3
# 8 "/tools/toolchain/newlib/newlib/libc/include/math.h" 2 3
# 86 "/tools/toolchain/newlib/newlib/libc/include/math.h" 3
extern double atan (double);
extern double cos (double);
extern double sin (double);
extern double tan (double);
extern double tanh (double);
extern double frexp (double, int *);
extern double modf (double, double *);
extern double ceil (double);
extern double fabs (double);
extern double floor (double);






extern double acos (double);
extern double asin (double);
extern double atan2 (double, double);
extern double cosh (double);
extern double sinh (double);
extern double exp (double);
extern double ldexp (double, int);
extern double log (double);
extern double log10 (double);
extern double pow (double, double);
extern double sqrt (double);
extern double fmod (double, double);




extern int finite (double);
extern int finitef (float);
extern int finitel (long double);
extern int isinff (float);
extern int isnanf (float);





extern int isinf (double);




extern int isnan (double);
# 150 "/tools/toolchain/newlib/newlib/libc/include/math.h" 3
    typedef float float_t;
    typedef double double_t;
# 204 "/tools/toolchain/newlib/newlib/libc/include/math.h" 3
extern int __isinff (float);
extern int __isinfd (double);
extern int __isnanf (float);
extern int __isnand (double);
extern int __fpclassifyf (float);
extern int __fpclassifyd (double);
extern int __signbitf (float);
extern int __signbitd (double);
# 311 "/tools/toolchain/newlib/newlib/libc/include/math.h" 3
extern double infinity (void);
extern double nan (const char *);
extern double copysign (double, double);
extern double logb (double);
extern int ilogb (double);

extern double asinh (double);
extern double cbrt (double);
extern double nextafter (double, double);
extern double rint (double);
extern double scalbn (double, int);

extern double exp2 (double);
extern double scalbln (double, long int);
extern double tgamma (double);
extern double nearbyint (double);
extern long int lrint (double);
extern long long int llrint (double);
extern double round (double);
extern long int lround (double);
extern long long int llround (double);
extern double trunc (double);
extern double remquo (double, double, int *);
extern double fdim (double, double);
extern double fmax (double, double);
extern double fmin (double, double);
extern double fma (double, double, double);


extern double log1p (double);
extern double expm1 (double);



extern double acosh (double);
extern double atanh (double);
extern double remainder (double, double);
extern double gamma (double);
extern double lgamma (double);
extern double erf (double);
extern double erfc (double);
extern double log2 (double);





extern double hypot (double, double);






extern float atanf (float);
extern float cosf (float);
extern float sinf (float);
extern float tanf (float);
extern float tanhf (float);
extern float frexpf (float, int *);
extern float modff (float, float *);
extern float ceilf (float);
extern float fabsf (float);
extern float floorf (float);


extern float acosf (float);
extern float asinf (float);
extern float atan2f (float, float);
extern float coshf (float);
extern float sinhf (float);
extern float expf (float);
extern float ldexpf (float, int);
extern float logf (float);
extern float log10f (float);
extern float powf (float, float);
extern float sqrtf (float);
extern float fmodf (float, float);




extern float exp2f (float);
extern float scalblnf (float, long int);
extern float tgammaf (float);
extern float nearbyintf (float);
extern long int lrintf (float);
extern long long int llrintf (float);
extern float roundf (float);
extern long int lroundf (float);
extern long long int llroundf (float);
extern float truncf (float);
extern float remquof (float, float, int *);
extern float fdimf (float, float);
extern float fmaxf (float, float);
extern float fminf (float, float);
extern float fmaf (float, float, float);

extern float infinityf (void);
extern float nanf (const char *);
extern float copysignf (float, float);
extern float logbf (float);
extern int ilogbf (float);

extern float asinhf (float);
extern float cbrtf (float);
extern float nextafterf (float, float);
extern float rintf (float);
extern float scalbnf (float, int);
extern float log1pf (float);
extern float expm1f (float);


extern float acoshf (float);
extern float atanhf (float);
extern float remainderf (float, float);
extern float gammaf (float);
extern float lgammaf (float);
extern float erff (float);
extern float erfcf (float);
extern float log2f (float);
extern float hypotf (float, float);
# 443 "/tools/toolchain/newlib/newlib/libc/include/math.h" 3
extern long double atanl (long double);
extern long double cosl (long double);
extern long double sinl (long double);
extern long double tanl (long double);
extern long double tanhl (long double);
extern long double frexpl (long double, int *);
extern long double modfl (long double, long double *);
extern long double ceill (long double);
extern long double fabsl (long double);
extern long double floorl (long double);
extern long double log1pl (long double);
extern long double expm1l (long double);




extern long double acosl (long double);
extern long double asinl (long double);
extern long double atan2l (long double, long double);
extern long double coshl (long double);
extern long double sinhl (long double);
extern long double expl (long double);
extern long double ldexpl (long double, int);
extern long double logl (long double);
extern long double log10l (long double);
extern long double powl (long double, long double);
extern long double sqrtl (long double);
extern long double fmodl (long double, long double);
extern long double hypotl (long double, long double);


extern long double copysignl (long double, long double);
extern long double nanl (const char *);
extern int ilogbl (long double);
extern long double asinhl (long double);
extern long double cbrtl (long double);
extern long double nextafterl (long double, long double);
extern float nexttowardf (float, long double);
extern double nexttoward (double, long double);
extern long double nexttowardl (long double, long double);
extern long double logbl (long double);
extern long double log2l (long double);
extern long double rintl (long double);
extern long double scalbnl (long double, int);
extern long double exp2l (long double);
extern long double scalblnl (long double, long);
extern long double tgammal (long double);
extern long double nearbyintl (long double);
extern long int lrintl (long double);
extern long long int llrintl (long double);
extern long double roundl (long double);
extern long lroundl (long double);
extern long long int llroundl (long double);
extern long double truncl (long double);
extern long double remquol (long double, long double, int *);
extern long double fdiml (long double, long double);
extern long double fmaxl (long double, long double);
extern long double fminl (long double, long double);
extern long double fmal (long double, long double, long double);

extern long double acoshl (long double);
extern long double atanhl (long double);
extern long double remainderl (long double, long double);
extern long double lgammal (long double);
extern long double erfl (long double);
extern long double erfcl (long double);
# 524 "/tools/toolchain/newlib/newlib/libc/include/math.h" 3
extern double drem (double, double);
extern float dremf (float, float);



extern double gamma_r (double, int *);
extern double lgamma_r (double, int *);
extern float gammaf_r (float, int *);
extern float lgammaf_r (float, int *);



extern double y0 (double);
extern double y1 (double);
extern double yn (int, double);
extern double j0 (double);
extern double j1 (double);
extern double jn (int, double);



extern float y0f (float);
extern float y1f (float);
extern float ynf (int, float);
extern float j0f (float);
extern float j1f (float);
extern float jnf (int, float);
# 586 "/tools/toolchain/newlib/newlib/libc/include/math.h" 3
extern int *__signgam (void);
# 16 "/tools/toolchain/newlib/newlib/libm/math/../common/fdlibm.h" 2
# 1 "/tools/toolchain/newlib/newlib/libc/include/sys/types.h" 1 3
# 28 "/tools/toolchain/newlib/newlib/libc/include/sys/types.h" 3
typedef __uint8_t u_int8_t;


typedef __uint16_t u_int16_t;


typedef __uint32_t u_int32_t;


typedef __uint64_t u_int64_t;

typedef __intptr_t register_t;







# 1 "/tools/toolchain/newlib/newlib/libc/include/sys/_stdint.h" 1 3
# 20 "/tools/toolchain/newlib/newlib/libc/include/sys/_stdint.h" 3
typedef __int8_t int8_t ;



typedef __uint8_t uint8_t ;







typedef __int16_t int16_t ;



typedef __uint16_t uint16_t ;







typedef __int32_t int32_t ;



typedef __uint32_t uint32_t ;







typedef __int64_t int64_t ;



typedef __uint64_t uint64_t ;






typedef __intmax_t intmax_t;




typedef __uintmax_t uintmax_t;




typedef __intptr_t intptr_t;




typedef __uintptr_t uintptr_t;
# 47 "/tools/toolchain/newlib/newlib/libc/include/sys/types.h" 2 3


# 1 "/tools/toolchain/newlib/newlib/libc/include/machine/endian.h" 1 3





# 1 "/tools/toolchain/newlib/newlib/libc/include/machine/_endian.h" 1 3
# 7 "/tools/toolchain/newlib/newlib/libc/include/machine/endian.h" 2 3
# 50 "/tools/toolchain/newlib/newlib/libc/include/sys/types.h" 2 3
# 1 "/tools/toolchain/newlib/newlib/libc/include/sys/select.h" 1 3
# 14 "/tools/toolchain/newlib/newlib/libc/include/sys/select.h" 3
# 1 "/tools/toolchain/newlib/newlib/libc/include/sys/_sigset.h" 1 3
# 41 "/tools/toolchain/newlib/newlib/libc/include/sys/_sigset.h" 3
typedef unsigned long __sigset_t;
# 15 "/tools/toolchain/newlib/newlib/libc/include/sys/select.h" 2 3
# 1 "/tools/toolchain/newlib/newlib/libc/include/sys/_timeval.h" 1 3
# 37 "/tools/toolchain/newlib/newlib/libc/include/sys/_timeval.h" 3
typedef __suseconds_t suseconds_t;




typedef __int_least64_t time_t;
# 54 "/tools/toolchain/newlib/newlib/libc/include/sys/_timeval.h" 3
struct timeval {
 time_t tv_sec;
 suseconds_t tv_usec;
};
# 16 "/tools/toolchain/newlib/newlib/libc/include/sys/select.h" 2 3
# 1 "/tools/toolchain/newlib/newlib/libc/include/sys/timespec.h" 1 3
# 38 "/tools/toolchain/newlib/newlib/libc/include/sys/timespec.h" 3
# 1 "/tools/toolchain/newlib/newlib/libc/include/sys/_timespec.h" 1 3
# 47 "/tools/toolchain/newlib/newlib/libc/include/sys/_timespec.h" 3
struct timespec {
 time_t tv_sec;
 long tv_nsec;
};
# 39 "/tools/toolchain/newlib/newlib/libc/include/sys/timespec.h" 2 3
# 58 "/tools/toolchain/newlib/newlib/libc/include/sys/timespec.h" 3
struct itimerspec {
 struct timespec it_interval;
 struct timespec it_value;
};
# 17 "/tools/toolchain/newlib/newlib/libc/include/sys/select.h" 2 3



typedef __sigset_t sigset_t;
# 34 "/tools/toolchain/newlib/newlib/libc/include/sys/select.h" 3
typedef unsigned long __fd_mask;

typedef __fd_mask fd_mask;
# 48 "/tools/toolchain/newlib/newlib/libc/include/sys/select.h" 3
typedef struct fd_set {
 __fd_mask __fds_bits[(((64) + ((((int)sizeof(__fd_mask) * 8)) - 1)) / (((int)sizeof(__fd_mask) * 8)))];
} fd_set;
# 76 "/tools/toolchain/newlib/newlib/libc/include/sys/select.h" 3
int select (int __n, fd_set *__readfds, fd_set *__writefds, fd_set *__exceptfds, struct timeval *__timeout);


int pselect (int __n, fd_set *__readfds, fd_set *__writefds, fd_set *__exceptfds, const struct timespec *__timeout, const sigset_t *__set);
# 51 "/tools/toolchain/newlib/newlib/libc/include/sys/types.h" 2 3




typedef __uint32_t in_addr_t;




typedef __uint16_t in_port_t;



typedef __uintptr_t u_register_t;






typedef unsigned char u_char;



typedef unsigned short u_short;



typedef unsigned int u_int;



typedef unsigned long u_long;







typedef unsigned short ushort;
typedef unsigned int uint;
typedef unsigned long ulong;



typedef __blkcnt_t blkcnt_t;




typedef __blksize_t blksize_t;




typedef unsigned long clock_t;
# 119 "/tools/toolchain/newlib/newlib/libc/include/sys/types.h" 3
typedef long daddr_t;



typedef char * caddr_t;




typedef __fsblkcnt_t fsblkcnt_t;
typedef __fsfilcnt_t fsfilcnt_t;




typedef __id_t id_t;




typedef __ino_t ino_t;
# 157 "/tools/toolchain/newlib/newlib/libc/include/sys/types.h" 3
typedef __off_t off_t;



typedef __dev_t dev_t;



typedef __uid_t uid_t;



typedef __gid_t gid_t;




typedef __pid_t pid_t;




typedef __key_t key_t;




typedef _ssize_t ssize_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __clockid_t clockid_t;





typedef __timer_t timer_t;





typedef __useconds_t useconds_t;
# 220 "/tools/toolchain/newlib/newlib/libc/include/sys/types.h" 3
typedef __int64_t sbintime_t;



# 1 "/tools/toolchain/newlib/newlib/libc/include/sys/_pthreadtypes.h" 1 3
# 23 "/tools/toolchain/newlib/newlib/libc/include/sys/_pthreadtypes.h" 3
# 1 "/tools/toolchain/newlib/newlib/libc/include/sys/sched.h" 1 3
# 48 "/tools/toolchain/newlib/newlib/libc/include/sys/sched.h" 3
struct sched_param {
  int sched_priority;
# 61 "/tools/toolchain/newlib/newlib/libc/include/sys/sched.h" 3
};
# 24 "/tools/toolchain/newlib/newlib/libc/include/sys/_pthreadtypes.h" 2 3








typedef __uint32_t pthread_t;
# 61 "/tools/toolchain/newlib/newlib/libc/include/sys/_pthreadtypes.h" 3
typedef struct {
  int is_initialized;
  void *stackaddr;
  int stacksize;
  int contentionscope;
  int inheritsched;
  int schedpolicy;
  struct sched_param schedparam;





  int detachstate;
} pthread_attr_t;
# 154 "/tools/toolchain/newlib/newlib/libc/include/sys/_pthreadtypes.h" 3
typedef __uint32_t pthread_mutex_t;

typedef struct {
  int is_initialized;
# 168 "/tools/toolchain/newlib/newlib/libc/include/sys/_pthreadtypes.h" 3
  int recursive;
} pthread_mutexattr_t;






typedef __uint32_t pthread_cond_t;



typedef struct {
  int is_initialized;
  clock_t clock;



} pthread_condattr_t;



typedef __uint32_t pthread_key_t;

typedef struct {
  int is_initialized;
  int init_executed;
} pthread_once_t;
# 224 "/tools/toolchain/newlib/newlib/libc/include/sys/types.h" 2 3
# 1 "/tools/toolchain/newlib/newlib/libc/include/machine/types.h" 1 3
# 225 "/tools/toolchain/newlib/newlib/libc/include/sys/types.h" 2 3
# 17 "/tools/toolchain/newlib/newlib/libm/math/../common/fdlibm.h" 2
# 1 "/tools/toolchain/newlib/newlib/libc/include/machine/ieeefp.h" 1 3
# 18 "/tools/toolchain/newlib/newlib/libm/math/../common/fdlibm.h" 2
# 1 "/tools/toolchain/newlib/newlib/libm/math/../common/math_config.h" 1
# 33 "/tools/toolchain/newlib/newlib/libm/math/../common/math_config.h"
# 1 "/tools/toolchain/newlib/newlib/libc/include/stdint.h" 1 3
# 13 "/tools/toolchain/newlib/newlib/libc/include/stdint.h" 3
# 1 "/tools/toolchain/newlib/newlib/libc/include/sys/_intsup.h" 1 3
# 14 "/tools/toolchain/newlib/newlib/libc/include/stdint.h" 2 3







typedef __int_least8_t int_least8_t;
typedef __uint_least8_t uint_least8_t;




typedef __int_least16_t int_least16_t;
typedef __uint_least16_t uint_least16_t;




typedef __int_least32_t int_least32_t;
typedef __uint_least32_t uint_least32_t;




typedef __int_least64_t int_least64_t;
typedef __uint_least64_t uint_least64_t;
# 51 "/tools/toolchain/newlib/newlib/libc/include/stdint.h" 3
  typedef signed char int_fast8_t;
  typedef unsigned char uint_fast8_t;
# 61 "/tools/toolchain/newlib/newlib/libc/include/stdint.h" 3
  typedef short int_fast16_t;
  typedef unsigned short uint_fast16_t;
# 71 "/tools/toolchain/newlib/newlib/libc/include/stdint.h" 3
  typedef int int_fast32_t;
  typedef unsigned int uint_fast32_t;
# 81 "/tools/toolchain/newlib/newlib/libc/include/stdint.h" 3
  typedef long long int int_fast64_t;
  typedef long long unsigned int uint_fast64_t;
# 34 "/tools/toolchain/newlib/newlib/libm/math/../common/math_config.h" 2
# 122 "/tools/toolchain/newlib/newlib/libm/math/../common/math_config.h"
static inline uint32_t
asuint (float f)
{
  union
  {
    float f;
    uint32_t i;
  } u = {f};
  return u.i;
}

static inline float
asfloat (uint32_t i)
{
  union
  {
    uint32_t i;
    float f;
  } u = {i};
  return u.f;
}

static inline uint64_t
asuint64 (double f)
{
  union
  {
    double f;
    uint64_t i;
  } u = {f};
  return u.i;
}

static inline double
asdouble (uint64_t i)
{
  union
  {
    uint64_t i;
    double f;
  } u = {i};
  return u.f;
}




static inline int
issignalingf_inline (float x)
{
  uint32_t ix = asuint (x);
  if (!1)
    return (ix & 0x7fc00000) == 0x7fc00000;
  return 2 * (ix ^ 0x00400000) > 0xFF800000u;
}

static inline int
issignaling_inline (double x)
{
  uint64_t ix = asuint64 (x);
  if (!1)
    return (ix & 0x7ff8000000000000) == 0x7ff8000000000000;
  return 2 * (ix ^ 0x0008000000000000) > 2 * 0x7ff8000000000000ULL;
}
# 213 "/tools/toolchain/newlib/newlib/libm/math/../common/math_config.h"
static inline float
opt_barrier_float (float x)
{
  volatile float y = x;
  return y;
}
static inline double
opt_barrier_double (double x)
{
  volatile double y = x;
  return y;
}
#pragma GCC diagnostic ignored "-Wunused-variable"
static inline void
force_eval_float (float x)
{
  volatile float y = x;
}
static inline void
force_eval_double (double x)
{
  volatile double y = x;
}







static inline float
eval_as_float (float x)
{
  return x;
}
static inline double
eval_as_double (double x)
{
  return x;
}
# 275 "/tools/toolchain/newlib/newlib/libm/math/../common/math_config.h"
__attribute__ ((__visibility__ ("hidden"))) float __math_oflowf (uint32_t);

__attribute__ ((__visibility__ ("hidden"))) float __math_uflowf (uint32_t);

__attribute__ ((__visibility__ ("hidden"))) float __math_may_uflowf (uint32_t);

__attribute__ ((__visibility__ ("hidden"))) float __math_divzerof (uint32_t);

__attribute__ ((__visibility__ ("hidden"))) double __math_oflow (uint32_t);

__attribute__ ((__visibility__ ("hidden"))) double __math_uflow (uint32_t);

__attribute__ ((__visibility__ ("hidden"))) double __math_may_uflow (uint32_t);

__attribute__ ((__visibility__ ("hidden"))) double __math_divzero (uint32_t);




__attribute__ ((__visibility__ ("hidden"))) float __math_invalidf (float);

__attribute__ ((__visibility__ ("hidden"))) double __math_invalid (double);




__attribute__ ((__visibility__ ("hidden"))) double __math_check_oflow (double);

__attribute__ ((__visibility__ ("hidden"))) double __math_check_uflow (double);


static inline double
check_oflow (double x)
{
  return 1 ? __math_check_oflow (x) : x;
}


static inline double
check_uflow (double x)
{
  return 1 ? __math_check_uflow (x) : x;
}




extern const struct exp2f_data
{
  uint64_t tab[1 << 5];
  double shift_scaled;
  double poly[3];
  double shift;
  double invln2_scaled;
  double poly_scaled[3];
} __exp2f_data __attribute__ ((__visibility__ ("hidden")));



extern const struct logf_data
{
  struct
  {
    double invc, logc;
  } tab[1 << 4];
  double ln2;
  double poly[4 - 1];
} __logf_data __attribute__ ((__visibility__ ("hidden")));



extern const struct log2f_data
{
  struct
  {
    double invc, logc;
  } tab[1 << 4];
  double poly[4];
} __log2f_data __attribute__ ((__visibility__ ("hidden")));
# 363 "/tools/toolchain/newlib/newlib/libm/math/../common/math_config.h"
extern const struct powf_log2_data
{
  struct
  {
    double invc, logc;
  } tab[1 << 4];
  double poly[5];
} __powf_log2_data __attribute__ ((__visibility__ ("hidden")));
# 382 "/tools/toolchain/newlib/newlib/libm/math/../common/math_config.h"
extern const struct exp_data
{
  double invln2N;
  double shift;
  double negln2hiN;
  double negln2loN;
  double poly[4];
  double exp2_shift;
  double exp2_poly[5];
  uint64_t tab[2*(1 << 7)];
} __exp_data __attribute__ ((__visibility__ ("hidden")));




extern const struct log_data
{
  double ln2hi;
  double ln2lo;
  double poly[6 - 1];
  double poly1[12 - 1];
  struct {double invc, logc;} tab[1 << 7];

  struct {double chi, clo;} tab2[1 << 7];

} __log_data __attribute__ ((__visibility__ ("hidden")));




extern const struct log2_data
{
  double invln2hi;
  double invln2lo;
  double poly[7 - 1];
  double poly1[11 - 1];
  struct {double invc, logc;} tab[1 << 6];

  struct {double chi, clo;} tab2[1 << 6];

} __log2_data __attribute__ ((__visibility__ ("hidden")));



extern const struct pow_log_data
{
  double ln2hi;
  double ln2lo;
  double poly[8 - 1];

  struct {double invc, pad, logc, logctail;} tab[1 << 7];
} __pow_log_data __attribute__ ((__visibility__ ("hidden")));
# 19 "/tools/toolchain/newlib/newlib/libm/math/../common/fdlibm.h" 2
# 143 "/tools/toolchain/newlib/newlib/libm/math/../common/fdlibm.h"
extern double scalb (double, double);

extern double significand (double);

extern long double __ieee754_hypotl (long double, long double);


extern double __ieee754_sqrt (double);
extern double __ieee754_acos (double);
extern double __ieee754_acosh (double);
extern double __ieee754_log (double);
extern double __ieee754_atanh (double);
extern double __ieee754_asin (double);
extern double __ieee754_atan2 (double,double);
extern double __ieee754_exp (double);
extern double __ieee754_cosh (double);
extern double __ieee754_fmod (double,double);
extern double __ieee754_pow (double,double);
extern double __ieee754_lgamma_r (double,int *);
extern double __ieee754_gamma_r (double,int *);
extern double __ieee754_tgamma (double);
extern double __ieee754_log10 (double);
extern double __ieee754_sinh (double);
extern double __ieee754_hypot (double,double);
extern double __ieee754_j0 (double);
extern double __ieee754_j1 (double);
extern double __ieee754_y0 (double);
extern double __ieee754_y1 (double);
extern double __ieee754_jn (int,double);
extern double __ieee754_yn (int,double);
extern double __ieee754_remainder (double,double);
extern __int32_t __ieee754_rem_pio2 (double,double*);



extern double __ieee754_scalb (double,double);



extern double __kernel_standard (double,double,int);
extern double __kernel_sin (double,double,int);
extern double __kernel_cos (double,double);
extern double __kernel_tan (double,double,int);
extern int __kernel_rem_pio2 (double*,double*,int,int,int,const __int32_t*);





extern float scalbf (float, float);

extern float significandf (float);


extern float __ieee754_sqrtf (float);
extern float __ieee754_acosf (float);
extern float __ieee754_acoshf (float);
extern float __ieee754_logf (float);
extern float __ieee754_atanhf (float);
extern float __ieee754_asinf (float);
extern float __ieee754_atan2f (float,float);
extern float __ieee754_expf (float);
extern float __ieee754_coshf (float);
extern float __ieee754_fmodf (float,float);
extern float __ieee754_powf (float,float);
extern float __ieee754_lgammaf_r (float,int *);
extern float __ieee754_gammaf_r (float,int *);
extern float __ieee754_tgammaf (float);
extern float __ieee754_log10f (float);
extern float __ieee754_sinhf (float);
extern float __ieee754_hypotf (float,float);
extern float __ieee754_j0f (float);
extern float __ieee754_j1f (float);
extern float __ieee754_y0f (float);
extern float __ieee754_y1f (float);
extern float __ieee754_jnf (int,float);
extern float __ieee754_ynf (int,float);
extern float __ieee754_remainderf (float,float);
extern __int32_t __ieee754_rem_pio2f (float,float*);



extern float __ieee754_scalbf (float,float);
# 243 "/tools/toolchain/newlib/newlib/libm/math/../common/fdlibm.h"
extern float __kernel_sinf (float,float,int);
extern float __kernel_cosf (float,float);
extern float __kernel_tanf (float,float,int);
extern int __kernel_rem_pio2f (float*,float*,int,int,int,const __int32_t*);
# 284 "/tools/toolchain/newlib/newlib/libm/math/../common/fdlibm.h"
typedef union
{
  double value;
  struct
  {
    __uint32_t lsw;
    __uint32_t msw;
  } parts;
} ieee_double_shape_type;
# 357 "/tools/toolchain/newlib/newlib/libm/math/../common/fdlibm.h"
typedef union
{
  float value;
  __uint32_t word;
} ieee_float_shape_type;
# 17 "/tools/toolchain/newlib/newlib/libm/math/ef_pow.c" 2








static const float



bp[] = {1.0, 1.5,},
dp_h[] = { 0.0, 5.84960938e-01,},
dp_l[] = { 0.0, 1.56322085e-06,},
zero = 0.0,
one = 1.0,
two = 2.0,
two24 = 16777216.0,

L1 = 6.0000002384e-01,
L2 = 4.2857143283e-01,
L3 = 3.3333334327e-01,
L4 = 2.7272811532e-01,
L5 = 2.3066075146e-01,
L6 = 2.0697501302e-01,
P1 = 1.6666667163e-01,
P2 = -2.7777778450e-03,
P3 = 6.6137559770e-05,
P4 = -1.6533901999e-06,
P5 = 4.1381369442e-08,
lg2 = 6.9314718246e-01,
lg2_h = 6.93145752e-01,
lg2_l = 1.42860654e-06,
ovt = 4.2995665694e-08,
cp = 9.6179670095e-01,
cp_h = 9.6179199219e-01,
cp_l = 4.7017383622e-06,
ivln2 = 1.4426950216e+00,
ivln2_h = 1.4426879883e+00,
ivln2_l = 7.0526075433e-06;


 float __ieee754_powf(float x, float y)




{
 float z,ax,z_h,z_l,p_h,p_l;
 float y1,t1,t2,r,s,t,u,v,w;
 __int32_t i,j,k,yisint,n;
 __int32_t hx,hy,ix,iy,is;

 do { ieee_float_shape_type gf_u; gf_u.value = (x); (hx) = gf_u.word; } while (0);
 do { ieee_float_shape_type gf_u; gf_u.value = (y); (hy) = gf_u.word; } while (0);
 ix = hx&0x7fffffff; iy = hy&0x7fffffff;


 if(((iy)==0)) {
     if (issignalingf_inline(x)) return x + y;
     return one;
 }


 if(((ix)>0x7f800000L) ||
    ((iy)>0x7f800000L)) {
     if(hx==0x3f800000 && !issignalingf_inline(y)) return one;
     else return x + y;
 }






 yisint = 0;
 if(hx<0) {
     if(iy>=0x4b800000) yisint = 2;
     else if(iy>=0x3f800000) {
  k = (iy>>23)-0x7f;
  j = iy>>(23-k);
  if((j<<(23-k))==iy) yisint = 2-(j&1);
     }
 }


 if (((iy)==0x7f800000L)) {
     if (ix==0x3f800000)
  return one;
     else if (ix > 0x3f800000)
         return (hy>=0)? y: zero;
     else
         return (hy<0)?-y: zero;
 }
 if(iy==0x3f800000) {
     if(hy<0) return one/x; else return x;
 }
 if(hy==0x40000000) return x*x;
 if(hy==0x3f000000) {
     if(hx>=0)
     return __ieee754_sqrtf(x);
 }

 ax = fabsf(x);

 if(((ix)==0x7f800000L)||((ix)==0)||ix==0x3f800000){
     z = ax;
     if(hy<0) z = one/z;
     if(hx<0) {
  if(((ix-0x3f800000)|yisint)==0) {
      z = (z-z)/(z-z);
  } else if(yisint==1)
      z = -z;
     }
     return z;
 }


 if(((((__uint32_t)hx>>31)-1)|yisint)==0) return (x-x)/(x-x);


 if(iy>0x4d000000) {

     if(ix<0x3f7ffff4) return (hy<0)? __math_oflowf(0):__math_uflowf(0);
     if(ix>0x3f800007) return (hy>0)? __math_oflowf(0):__math_uflowf(0);


     t = ax-1;
     w = (t*t)*((float)0.5-t*((float)0.333333333333-t*(float)0.25));
     u = ivln2_h*t;
     v = t*ivln2_l-w*ivln2;
     t1 = u+v;
     do { ieee_float_shape_type gf_u; gf_u.value = (t1); (is) = gf_u.word; } while (0);
     do { ieee_float_shape_type sf_u; sf_u.word = (is&0xfffff000); (t1) = sf_u.value; } while (0);
     t2 = v-(t1-u);
 } else {
     float s2,s_h,s_l,t_h,t_l;
     n = 0;

     if(((ix)<0x00800000L))
  {ax *= two24; n -= 24; do { ieee_float_shape_type gf_u; gf_u.value = (ax); (ix) = gf_u.word; } while (0); }
     n += ((ix)>>23)-0x7f;
     j = ix&0x007fffff;

     ix = j|0x3f800000;
     if(j<=0x1cc471) k=0;
     else if(j<0x5db3d7) k=1;
     else {k=0;n+=1;ix -= 0x00800000;}
     do { ieee_float_shape_type sf_u; sf_u.word = (ix); (ax) = sf_u.value; } while (0);


     u = ax-bp[k];
     v = one/(ax+bp[k]);
     s = u*v;
     s_h = s;
     do { ieee_float_shape_type gf_u; gf_u.value = (s_h); (is) = gf_u.word; } while (0);
     do { ieee_float_shape_type sf_u; sf_u.word = (is&0xfffff000); (s_h) = sf_u.value; } while (0);

     do { ieee_float_shape_type sf_u; sf_u.word = (((ix>>1)|0x20000000)+0x0040000+(k<<21)); (t_h) = sf_u.value; } while (0);
     t_l = ax - (t_h-bp[k]);
     s_l = v*((u-s_h*t_h)-s_h*t_l);

     s2 = s*s;
     r = s2*s2*(L1+s2*(L2+s2*(L3+s2*(L4+s2*(L5+s2*L6)))));
     r += s_l*(s_h+s);
     s2 = s_h*s_h;
     t_h = (float)3.0+s2+r;
     do { ieee_float_shape_type gf_u; gf_u.value = (t_h); (is) = gf_u.word; } while (0);
     do { ieee_float_shape_type sf_u; sf_u.word = (is&0xfffff000); (t_h) = sf_u.value; } while (0);
     t_l = r-((t_h-(float)3.0)-s2);

     u = s_h*t_h;
     v = s_l*t_h+t_l*s;

     p_h = u+v;
     do { ieee_float_shape_type gf_u; gf_u.value = (p_h); (is) = gf_u.word; } while (0);
     do { ieee_float_shape_type sf_u; sf_u.word = (is&0xfffff000); (p_h) = sf_u.value; } while (0);
     p_l = v-(p_h-u);
     z_h = cp_h*p_h;
     z_l = cp_l*p_h+p_l*cp+dp_l[k];

     t = (float)n;
     t1 = (((z_h+z_l)+dp_h[k])+t);
     do { ieee_float_shape_type gf_u; gf_u.value = (t1); (is) = gf_u.word; } while (0);
     do { ieee_float_shape_type sf_u; sf_u.word = (is&0xfffff000); (t1) = sf_u.value; } while (0);
     t2 = z_l-(((t1-t)-dp_h[k])-z_h);
 }

 s = one;
 if(((((__uint32_t)hx>>31)-1)|(yisint-1))==0)
     s = -one;


 do { ieee_float_shape_type gf_u; gf_u.value = (y); (is) = gf_u.word; } while (0);
 do { ieee_float_shape_type sf_u; sf_u.word = (is&0xfffff000); (y1) = sf_u.value; } while (0);
 p_l = (y-y1)*t1+y*t2;
 p_h = y1*t1;
 z = p_l+p_h;
 do { ieee_float_shape_type gf_u; gf_u.value = (z); (j) = gf_u.word; } while (0);
 i = j&0x7fffffff;
 if (j>0) {
     if (i>0x43000000)
         return __math_oflowf(s<0);
     else if (i==0x43000000)
         if(p_l+ovt>z-p_h) return __math_oflowf(s<0);
        } else {
     if (i>0x43160000)
         return __math_uflowf(s<0);
     else if (i==0x43160000)
  if(p_l<=z-p_h) return __math_uflowf(s<0);
 }



 k = (i>>23)-0x7f;
 n = 0;
 if(i>0x3f000000) {
     n = j+(0x00800000>>(k+1));
     k = ((n&0x7fffffff)>>23)-0x7f;
     do { ieee_float_shape_type sf_u; sf_u.word = (n&~(0x007fffff>>k)); (t) = sf_u.value; } while (0);
     n = ((n&0x007fffff)|0x00800000)>>(23-k);
     if(j<0) n = -n;
     p_h -= t;
 }
 t = p_l+p_h;
 do { ieee_float_shape_type gf_u; gf_u.value = (t); (is) = gf_u.word; } while (0);
 do { ieee_float_shape_type sf_u; sf_u.word = (is&0xfffff000); (t) = sf_u.value; } while (0);
 u = t*lg2_h;
 v = (p_l-(t-p_h))*lg2+t*lg2_l;
 z = u+v;
 w = v-(z-u);
 t = z*z;
 t1 = z - t*(P1+t*(P2+t*(P3+t*(P4+t*P5))));
 r = (z*t1)/(t1-two)-(w+z*w);
 z = one-(r-z);
 do { ieee_float_shape_type gf_u; gf_u.value = (z); (j) = gf_u.word; } while (0);
 j += (n<<23);
 if((j>>23)<=0) z = scalbnf(z,(int)n);
 else do { ieee_float_shape_type sf_u; sf_u.word = (j); (z) = sf_u.value; } while (0);
 return s*z;
}
