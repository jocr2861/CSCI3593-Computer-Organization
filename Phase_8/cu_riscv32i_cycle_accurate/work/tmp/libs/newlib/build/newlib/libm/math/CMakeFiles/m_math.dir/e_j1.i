# 1 "/tools/toolchain/newlib/newlib/libm/math/e_j1.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 325 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "/tools/toolchain/newlib/newlib/libm/math/e_j1.c" 2
# 59 "/tools/toolchain/newlib/newlib/libm/math/e_j1.c"
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
# 60 "/tools/toolchain/newlib/newlib/libm/math/e_j1.c" 2




static double pone(double), qone(double);





static const double



huge = 1e300,
one = 1.0,
invsqrtpi= 5.64189583547756279280e-01,
tpi = 6.36619772367581382433e-01,

r00 = -6.25000000000000000000e-02,
r01 = 1.40705666955189706048e-03,
r02 = -1.59955631084035597520e-05,
r03 = 4.96727999609584448412e-08,
s01 = 1.91537599538363460805e-02,
s02 = 1.85946785588630915560e-04,
s03 = 1.17718464042623683263e-06,
s04 = 5.04636257076217042715e-09,
s05 = 1.23542274426137913908e-11;


static const double zero = 0.0;





 double __ieee754_j1(double x)




{
 double z, s,c,ss,cc,r,u,v,y;
 __int32_t hx,ix;

 do { ieee_double_shape_type gh_u; gh_u.value = (x); (hx) = gh_u.parts.msw; } while (0);
 ix = hx&0x7fffffff;
 if(ix>=0x7ff00000) return one/x;
 y = fabs(x);
 if(ix >= 0x40000000) {
  s = sin(y);
  c = cos(y);
  ss = -s-c;
  cc = s-c;
  if(ix<0x7fe00000) {
      z = cos(y+y);
      if ((s*c)>zero) cc = z/ss;
      else ss = z/cc;
  }




  if(ix>0x48000000) z = (invsqrtpi*cc)/__ieee754_sqrt(y);
  else {
      u = pone(y); v = qone(y);
      z = invsqrtpi*(u*cc-v*ss)/__ieee754_sqrt(y);
  }
  if(hx<0) return -z;
  else return z;
 }
 if(ix<0x3e400000) {
     if(huge+x>one) return 0.5*x;
 }
 z = x*x;
 r = z*(r00+z*(r01+z*(r02+z*r03)));
 s = one+z*(s01+z*(s02+z*(s03+z*(s04+z*s05))));
 r *= x;
 return(x*0.5+r/s);
}


static const double U0[5] = {



 -1.96057090646238940668e-01,
  5.04438716639811282616e-02,
 -1.91256895875763547298e-03,
  2.35252600561610495928e-05,
 -9.19099158039878874504e-08,
};

static const double V0[5] = {



  1.99167318236649903973e-02,
  2.02552581025135171496e-04,
  1.35608801097516229404e-06,
  6.22741452364621501295e-09,
  1.66559246207992079114e-11,
};


 double __ieee754_y1(double x)




{
 double z, s,c,ss,cc,u,v;
 __int32_t hx,ix,lx;

 do { ieee_double_shape_type ew_u; ew_u.value = (x); (hx) = ew_u.parts.msw; (lx) = ew_u.parts.lsw; } while (0);
        ix = 0x7fffffff&hx;

 if(ix>=0x7ff00000) return one/(x+x*x);
        if((ix|lx)==0) return -one/zero;
        if(hx<0) return zero/zero;
        if(ix >= 0x40000000) {
                s = sin(x);
                c = cos(x);
                ss = -s-c;
                cc = s-c;
                if(ix<0x7fe00000) {
                    z = cos(x+x);
                    if ((s*c)>zero) cc = z/ss;
                    else ss = z/cc;
                }
# 201 "/tools/toolchain/newlib/newlib/libm/math/e_j1.c"
                if(ix>0x48000000) z = (invsqrtpi*ss)/__ieee754_sqrt(x);
                else {
                    u = pone(x); v = qone(x);
                    z = invsqrtpi*(u*ss+v*cc)/__ieee754_sqrt(x);
                }
                return z;
        }
        if(ix<=0x3c900000) {
            return(-tpi/x);
        }
        z = x*x;
        u = U0[0]+z*(U0[1]+z*(U0[2]+z*(U0[3]+z*U0[4])));
        v = one+z*(V0[0]+z*(V0[1]+z*(V0[2]+z*(V0[3]+z*V0[4]))));
        return(x*(u/v) + tpi*(__ieee754_j1(x)*__ieee754_log(x)-one/x));
}
# 228 "/tools/toolchain/newlib/newlib/libm/math/e_j1.c"
static const double pr8[6] = {



  0.00000000000000000000e+00,
  1.17187499999988647970e-01,
  1.32394806593073575129e+01,
  4.12051854307378562225e+02,
  3.87474538913960532227e+03,
  7.91447954031891731574e+03,
};

static const double ps8[5] = {



  1.14207370375678408436e+02,
  3.65093083420853463394e+03,
  3.69562060269033463555e+04,
  9.76027935934950801311e+04,
  3.08042720627888811578e+04,
};


static const double pr5[6] = {



  1.31990519556243522749e-11,
  1.17187493190614097638e-01,
  6.80275127868432871736e+00,
  1.08308182990189109773e+02,
  5.17636139533199752805e+02,
  5.28715201363337541807e+02,
};

static const double ps5[5] = {



  5.92805987221131331921e+01,
  9.91401418733614377743e+02,
  5.35326695291487976647e+03,
  7.84469031749551231769e+03,
  1.50404688810361062679e+03,
};


static const double pr3[6] = {



  3.02503916137373618024e-09,
  1.17186865567253592491e-01,
  3.93297750033315640650e+00,
  3.51194035591636932736e+01,
  9.10550110750781271918e+01,
  4.85590685197364919645e+01,
};

static const double ps3[5] = {



  3.47913095001251519989e+01,
  3.36762458747825746741e+02,
  1.04687139975775130551e+03,
  8.90811346398256432622e+02,
  1.03787932439639277504e+02,
};


static const double pr2[6] = {



  1.07710830106873743082e-07,
  1.17176219462683348094e-01,
  2.36851496667608785174e+00,
  1.22426109148261232917e+01,
  1.76939711271687727390e+01,
  5.07352312588818499250e+00,
};

static const double ps2[5] = {



  2.14364859363821409488e+01,
  1.25290227168402751090e+02,
  2.32276469057162813669e+02,
  1.17679373287147100768e+02,
  8.36463893371618283368e+00,
};


 static double pone(double x)




{

 const double *p,*q;



 double z,r,s;
        __int32_t ix;
 do { ieee_double_shape_type gh_u; gh_u.value = (x); (ix) = gh_u.parts.msw; } while (0);
 ix &= 0x7fffffff;
 if (ix>=0x41b00000) {return one;}
 else if(ix>=0x40200000){p = pr8; q= ps8;}
        else if(ix>=0x40122E8B){p = pr5; q= ps5;}
        else if(ix>=0x4006DB6D){p = pr3; q= ps3;}
        else {p = pr2; q= ps2;}
        z = one/(x*x);
        r = p[0]+z*(p[1]+z*(p[2]+z*(p[3]+z*(p[4]+z*p[5]))));
        s = one+z*(q[0]+z*(q[1]+z*(q[2]+z*(q[3]+z*q[4]))));
        return one+ r/s;
}
# 362 "/tools/toolchain/newlib/newlib/libm/math/e_j1.c"
static const double qr8[6] = {



  0.00000000000000000000e+00,
 -1.02539062499992714161e-01,
 -1.62717534544589987888e+01,
 -7.59601722513950107896e+02,
 -1.18498066702429587167e+04,
 -4.84385124285750353010e+04,
};

static const double qs8[6] = {



  1.61395369700722909556e+02,
  7.82538599923348465381e+03,
  1.33875336287249578163e+05,
  7.19657723683240939863e+05,
  6.66601232617776375264e+05,
 -2.94490264303834643215e+05,
};


static const double qr5[6] = {



 -2.08979931141764104297e-11,
 -1.02539050241375426231e-01,
 -8.05644828123936029840e+00,
 -1.83669607474888380239e+02,
 -1.37319376065508163265e+03,
 -2.61244440453215656817e+03,
};

static const double qs5[6] = {



  8.12765501384335777857e+01,
  1.99179873460485964642e+03,
  1.74684851924908907677e+04,
  4.98514270910352279316e+04,
  2.79480751638918118260e+04,
 -4.71918354795128470869e+03,
};


static const double qr3[6] = {



 -5.07831226461766561369e-09,
 -1.02537829820837089745e-01,
 -4.61011581139473403113e+00,
 -5.78472216562783643212e+01,
 -2.28244540737631695038e+02,
 -2.19210128478909325622e+02,
};

static const double qs3[6] = {



  4.76651550323729509273e+01,
  6.73865112676699709482e+02,
  3.38015286679526343505e+03,
  5.54772909720722782367e+03,
  1.90311919338810798763e+03,
 -1.35201191444307340817e+02,
};


static const double qr2[6] = {



 -1.78381727510958865572e-07,
 -1.02517042607985553460e-01,
 -2.75220568278187460720e+00,
 -1.96636162643703720221e+01,
 -4.23253133372830490089e+01,
 -2.13719211703704061733e+01,
};

static const double qs2[6] = {



  2.95333629060523854548e+01,
  2.52981549982190529136e+02,
  7.57502834868645436472e+02,
  7.39393205320467245656e+02,
  1.55949003336666123687e+02,
 -4.95949898822628210127e+00,
};


 static double qone(double x)




{

 const double *p,*q;



 double s,r,z;
 __int32_t ix;
 do { ieee_double_shape_type gh_u; gh_u.value = (x); (ix) = gh_u.parts.msw; } while (0);
 ix &= 0x7fffffff;
 if (ix>=0x41b00000) {return .375/x;}
 else if(ix>=0x40200000){p = qr8; q= qs8;}
 else if(ix>=0x40122E8B){p = qr5; q= qs5;}
 else if(ix>=0x4006DB6D){p = qr3; q= qs3;}
      else {p = qr2; q= qs2;}
 z = one/(x*x);
 r = p[0]+z*(p[1]+z*(p[2]+z*(p[3]+z*(p[4]+z*p[5]))));
 s = one+z*(q[0]+z*(q[1]+z*(q[2]+z*(q[3]+z*(q[4]+z*q[5])))));
 return (.375 + r/s)/x;
}
