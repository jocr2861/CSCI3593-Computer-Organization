# 1 "/tools/toolchain/newlib/newlib/libc/stdio/vfscanf/svfiscanf.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 325 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "/tools/toolchain/newlib/newlib/libc/stdio/vfscanf/svfiscanf.c" 2
# 28 "/tools/toolchain/newlib/newlib/libc/stdio/vfscanf/svfiscanf.c"
# 1 "/tools/toolchain/newlib/newlib/libc/stdio/vfscanf/../vfscanf.c" 1
# 77 "/tools/toolchain/newlib/newlib/libc/stdio/vfscanf/../vfscanf.c"
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
# 78 "/tools/toolchain/newlib/newlib/libc/stdio/vfscanf/../vfscanf.c" 2
# 1 "/tools/toolchain/newlib/newlib/libc/include/reent.h" 1 3
# 93 "/tools/toolchain/newlib/newlib/libc/include/reent.h" 3
# 1 "/tools/toolchain/newlib/newlib/libc/include/sys/reent.h" 1 3
# 14 "/tools/toolchain/newlib/newlib/libc/include/sys/reent.h" 3
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
# 94 "/tools/toolchain/newlib/newlib/libc/include/reent.h" 2 3




# 1 "/home/project/cu_riscv32i_cycle_accurate/work/ia/sdk/lib/clang/9.0.1/include/stddef.h" 1 3
# 99 "/tools/toolchain/newlib/newlib/libc/include/reent.h" 2 3


struct stat;
struct tms;
struct timeval;
struct timezone;
# 139 "/tools/toolchain/newlib/newlib/libc/include/reent.h" 3
extern int _close_r (struct _reent *, int);
extern int _execve_r (struct _reent *, const char *, char *const *, char *const *);
extern int _fcntl_r (struct _reent *, int, int, int);
extern int _fork_r (struct _reent *);
extern int _fstat_r (struct _reent *, int, struct stat *);
extern int _getpid_r (struct _reent *);
extern int _isatty_r (struct _reent *, int);
extern int _kill_r (struct _reent *, int, int);
extern int _link_r (struct _reent *, const char *, const char *);
extern _off_t _lseek_r (struct _reent *, int, _off_t, int);
extern int _mkdir_r (struct _reent *, const char *, int);
extern int _open_r (struct _reent *, const char *, int, int);
extern _ssize_t _read_r (struct _reent *, int, void *, size_t);
extern int _rename_r (struct _reent *, const char *, const char *);
extern void *_sbrk_r (struct _reent *, ptrdiff_t);
extern int _stat_r (struct _reent *, const char *, struct stat *);
extern unsigned long _times_r (struct _reent *, struct tms *);
extern int _unlink_r (struct _reent *, const char *);
extern int _wait_r (struct _reent *, int *);
extern _ssize_t _write_r (struct _reent *, int, const void *, size_t);


extern int _gettimeofday_r (struct _reent *, struct timeval *__tp, void *__tzp);
# 79 "/tools/toolchain/newlib/newlib/libc/stdio/vfscanf/../vfscanf.c" 2

# 1 "/tools/toolchain/newlib/newlib/libc/include/ctype.h" 1 3




# 1 "/tools/toolchain/newlib/newlib/libc/include/sys/cdefs.h" 1 3
# 47 "/tools/toolchain/newlib/newlib/libc/include/sys/cdefs.h" 3
# 1 "/home/project/cu_riscv32i_cycle_accurate/work/ia/sdk/lib/clang/9.0.1/include/stddef.h" 1 3
# 48 "/tools/toolchain/newlib/newlib/libc/include/sys/cdefs.h" 2 3
# 6 "/tools/toolchain/newlib/newlib/libc/include/ctype.h" 2 3


# 1 "/tools/toolchain/newlib/newlib/libc/include/sys/_locale.h" 1 3








struct __locale_t;
typedef struct __locale_t *locale_t;
# 9 "/tools/toolchain/newlib/newlib/libc/include/ctype.h" 2 3




int isalnum (int __c);
int isalpha (int __c);
int iscntrl (int __c);
int isdigit (int __c);
int isgraph (int __c);
int islower (int __c);
int isprint (int __c);
int ispunct (int __c);
int isspace (int __c);
int isupper (int __c);
int isxdigit (int __c);
int tolower (int __c);
int toupper (int __c);


int isblank (int __c);



int isascii (int __c);
int toascii (int __c);





extern int isalnum_l (int __c, locale_t __l);
extern int isalpha_l (int __c, locale_t __l);
extern int isblank_l (int __c, locale_t __l);
extern int iscntrl_l (int __c, locale_t __l);
extern int isdigit_l (int __c, locale_t __l);
extern int isgraph_l (int __c, locale_t __l);
extern int islower_l (int __c, locale_t __l);
extern int isprint_l (int __c, locale_t __l);
extern int ispunct_l (int __c, locale_t __l);
extern int isspace_l (int __c, locale_t __l);
extern int isupper_l (int __c, locale_t __l);
extern int isxdigit_l(int __c, locale_t __l);
extern int tolower_l (int __c, locale_t __l);
extern int toupper_l (int __c, locale_t __l);



extern int isascii_l (int __c, locale_t __l);
extern int toascii_l (int __c, locale_t __l);
# 85 "/tools/toolchain/newlib/newlib/libc/include/ctype.h" 3
extern const char _ctype_[];

extern const unsigned short _cpptype_[];
# 132 "/tools/toolchain/newlib/newlib/libc/include/ctype.h" 3
static __inline const char *
__locale_ctype_ptr_l(locale_t _l)
{
 (void)_l;
 return _ctype_;
}
# 81 "/tools/toolchain/newlib/newlib/libc/stdio/vfscanf/../vfscanf.c" 2
# 1 "/tools/toolchain/newlib/newlib/libc/include/wctype.h" 1 3







# 1 "/home/project/cu_riscv32i_cycle_accurate/work/ia/sdk/lib/clang/9.0.1/include/stddef.h" 1 3
# 9 "/tools/toolchain/newlib/newlib/libc/include/wctype.h" 2 3
# 22 "/tools/toolchain/newlib/newlib/libc/include/wctype.h" 3
typedef int wctype_t;




typedef int wctrans_t;


int iswalpha (wint_t);
int iswalnum (wint_t);

int iswblank (wint_t);

int iswcntrl (wint_t);
int iswctype (wint_t, wctype_t);
int iswdigit (wint_t);
int iswgraph (wint_t);
int iswlower (wint_t);
int iswprint (wint_t);
int iswpunct (wint_t);
int iswspace (wint_t);
int iswupper (wint_t);
int iswxdigit (wint_t);
wint_t towctrans (wint_t, wctrans_t);
wint_t towupper (wint_t);
wint_t towlower (wint_t);
wctrans_t wctrans (const char *);
wctype_t wctype (const char *);


extern int iswalpha_l (wint_t, locale_t);
extern int iswalnum_l (wint_t, locale_t);
extern int iswblank_l (wint_t, locale_t);
extern int iswcntrl_l (wint_t, locale_t);
extern int iswctype_l (wint_t, wctype_t, locale_t);
extern int iswdigit_l (wint_t, locale_t);
extern int iswgraph_l (wint_t, locale_t);
extern int iswlower_l (wint_t, locale_t);
extern int iswprint_l (wint_t, locale_t);
extern int iswpunct_l (wint_t, locale_t);
extern int iswspace_l (wint_t, locale_t);
extern int iswupper_l (wint_t, locale_t);
extern int iswxdigit_l (wint_t, locale_t);
extern wint_t towctrans_l (wint_t, wctrans_t, locale_t);
extern wint_t towupper_l (wint_t, locale_t);
extern wint_t towlower_l (wint_t, locale_t);
extern wctrans_t wctrans_l (const char *, locale_t);
extern wctype_t wctype_l (const char *, locale_t);
# 82 "/tools/toolchain/newlib/newlib/libc/stdio/vfscanf/../vfscanf.c" 2
# 1 "/tools/toolchain/newlib/newlib/libc/include/stdio.h" 1 3
# 36 "/tools/toolchain/newlib/newlib/libc/include/stdio.h" 3
# 1 "/home/project/cu_riscv32i_cycle_accurate/work/ia/sdk/lib/clang/9.0.1/include/stddef.h" 1 3
# 37 "/tools/toolchain/newlib/newlib/libc/include/stdio.h" 2 3



# 1 "/home/project/cu_riscv32i_cycle_accurate/work/ia/sdk/lib/clang/9.0.1/include/stdarg.h" 1 3
# 14 "/home/project/cu_riscv32i_cycle_accurate/work/ia/sdk/lib/clang/9.0.1/include/stdarg.h" 3
typedef __builtin_va_list va_list;
# 32 "/home/project/cu_riscv32i_cycle_accurate/work/ia/sdk/lib/clang/9.0.1/include/stdarg.h" 3
typedef __builtin_va_list __gnuc_va_list;
# 41 "/tools/toolchain/newlib/newlib/libc/include/stdio.h" 2 3





typedef __gnuc_va_list va_list;
# 61 "/tools/toolchain/newlib/newlib/libc/include/stdio.h" 3
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
# 62 "/tools/toolchain/newlib/newlib/libc/include/stdio.h" 2 3




typedef __FILE FILE;






typedef _fpos_t fpos_t;






# 1 "/tools/toolchain/newlib/newlib/libc/include/sys/stdio.h" 1 3
# 80 "/tools/toolchain/newlib/newlib/libc/include/stdio.h" 2 3
# 181 "/tools/toolchain/newlib/newlib/libc/include/stdio.h" 3
char * ctermid (char *);




FILE * tmpfile (void);
char * tmpnam (char *);

char * tempnam (const char *, const char *) __attribute__((__malloc__)) __attribute__((__warn_unused_result__));

int fclose (FILE *);
int fflush (FILE *);
FILE * freopen (const char *restrict, const char *restrict, FILE *restrict);
void setbuf (FILE *restrict, char *restrict);
int setvbuf (FILE *restrict, char *restrict, int, size_t);
int fprintf (FILE *restrict, const char *restrict, ...)
               __attribute__ ((__format__ (__printf__, 2, 3)));
int fscanf (FILE *restrict, const char *restrict, ...)
               __attribute__ ((__format__ (__scanf__, 2, 3)));
int printf (const char *restrict, ...)
               __attribute__ ((__format__ (__printf__, 1, 2)));
int scanf (const char *restrict, ...)
               __attribute__ ((__format__ (__scanf__, 1, 2)));
int sscanf (const char *restrict, const char *restrict, ...)
               __attribute__ ((__format__ (__scanf__, 2, 3)));
int vfprintf (FILE *restrict, const char *restrict, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 2, 0)));
int vprintf (const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 1, 0)));
int vsprintf (char *restrict, const char *restrict, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 2, 0)));
int fgetc (FILE *);
char * fgets (char *restrict, int, FILE *restrict);
int fputc (int, FILE *);
int fputs (const char *restrict, FILE *restrict);
int getc (FILE *);
int getchar (void);
char * gets (char *);
int putc (int, FILE *);
int putchar (int);
int puts (const char *);
int ungetc (int, FILE *);
size_t fread (void *restrict, size_t _size, size_t _n, FILE *restrict);
size_t fwrite (const void *restrict , size_t _size, size_t _n, FILE *);



int fgetpos (FILE *restrict, fpos_t *restrict);

int fseek (FILE *, long, int);



int fsetpos (FILE *, const fpos_t *);

long ftell ( FILE *);
void rewind (FILE *);
void clearerr (FILE *);
int feof (FILE *);
int ferror (FILE *);
void perror (const char *);

FILE * fopen (const char *restrict _name, const char *restrict _type);
int sprintf (char *restrict, const char *restrict, ...)
               __attribute__ ((__format__ (__printf__, 2, 3)));
int remove (const char *);
int rename (const char *, const char *);
# 257 "/tools/toolchain/newlib/newlib/libc/include/stdio.h" 3
int fseeko (FILE *, off_t, int);
off_t ftello (FILE *);







int snprintf (char *restrict, size_t, const char *restrict, ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));
int vsnprintf (char *restrict, size_t, const char *restrict, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
int vfscanf (FILE *restrict, const char *restrict, __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 2, 0)));
int vscanf (const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 1, 0)));
int vsscanf (const char *restrict, const char *restrict, __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 2, 0)));
# 284 "/tools/toolchain/newlib/newlib/libc/include/stdio.h" 3
int asiprintf (char **, const char *, ...)
               __attribute__ ((__format__ (__printf__, 2, 3)));
char * asniprintf (char *, size_t *, const char *, ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));
char * asnprintf (char *restrict, size_t *restrict, const char *restrict, ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));

int diprintf (int, const char *, ...)
               __attribute__ ((__format__ (__printf__, 2, 3)));

int fiprintf (FILE *, const char *, ...)
               __attribute__ ((__format__ (__printf__, 2, 3)));
int fiscanf (FILE *, const char *, ...)
               __attribute__ ((__format__ (__scanf__, 2, 3)));
int iprintf (const char *, ...)
               __attribute__ ((__format__ (__printf__, 1, 2)));
int iscanf (const char *, ...)
               __attribute__ ((__format__ (__scanf__, 1, 2)));
int siprintf (char *, const char *, ...)
               __attribute__ ((__format__ (__printf__, 2, 3)));
int siscanf (const char *, const char *, ...)
               __attribute__ ((__format__ (__scanf__, 2, 3)));
int sniprintf (char *, size_t, const char *, ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));
int vasiprintf (char **, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 2, 0)));
char * vasniprintf (char *, size_t *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
char * vasnprintf (char *, size_t *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
int vdiprintf (int, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 2, 0)));
int vfiprintf (FILE *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 2, 0)));
int vfiscanf (FILE *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 2, 0)));
int viprintf (const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 1, 0)));
int viscanf (const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 1, 0)));
int vsiprintf (char *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 2, 0)));
int vsiscanf (const char *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 2, 0)));
int vsniprintf (char *, size_t, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
# 339 "/tools/toolchain/newlib/newlib/libc/include/stdio.h" 3
FILE * fdopen (int, const char *);

int fileno (FILE *);


int pclose (FILE *);
FILE * popen (const char *, const char *);



void setbuffer (FILE *, char *, int);
int setlinebuf (FILE *);



int getw (FILE *);
int putw (int, FILE *);


int getc_unlocked (FILE *);
int getchar_unlocked (void);
void flockfile (FILE *);
int ftrylockfile (FILE *);
void funlockfile (FILE *);
int putc_unlocked (int, FILE *);
int putchar_unlocked (int);
# 374 "/tools/toolchain/newlib/newlib/libc/include/stdio.h" 3
int dprintf (int, const char *restrict, ...)
               __attribute__ ((__format__ (__printf__, 2, 3)));

FILE * fmemopen (void *restrict, size_t, const char *restrict);


FILE * open_memstream (char **, size_t *);
int vdprintf (int, const char *restrict, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 2, 0)));



int renameat (int, const char *, int, const char *);
# 396 "/tools/toolchain/newlib/newlib/libc/include/stdio.h" 3
int _asiprintf_r (struct _reent *, char **, const char *, ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));
char * _asniprintf_r (struct _reent *, char *, size_t *, const char *, ...)
               __attribute__ ((__format__ (__printf__, 4, 5)));
char * _asnprintf_r (struct _reent *, char *restrict, size_t *restrict, const char *restrict, ...)
               __attribute__ ((__format__ (__printf__, 4, 5)));
int _asprintf_r (struct _reent *, char **restrict, const char *restrict, ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));
int _diprintf_r (struct _reent *, int, const char *, ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));
int _dprintf_r (struct _reent *, int, const char *restrict, ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));
int _fclose_r (struct _reent *, FILE *);
int _fcloseall_r (struct _reent *);
FILE * _fdopen_r (struct _reent *, int, const char *);
int _fflush_r (struct _reent *, FILE *);
int _fgetc_r (struct _reent *, FILE *);
int _fgetc_unlocked_r (struct _reent *, FILE *);
char * _fgets_r (struct _reent *, char *restrict, int, FILE *restrict);
char * _fgets_unlocked_r (struct _reent *, char *restrict, int, FILE *restrict);




int _fgetpos_r (struct _reent *, FILE *, fpos_t *);
int _fsetpos_r (struct _reent *, FILE *, const fpos_t *);

int _fiprintf_r (struct _reent *, FILE *, const char *, ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));
int _fiscanf_r (struct _reent *, FILE *, const char *, ...)
               __attribute__ ((__format__ (__scanf__, 3, 4)));
FILE * _fmemopen_r (struct _reent *, void *restrict, size_t, const char *restrict);
FILE * _fopen_r (struct _reent *, const char *restrict, const char *restrict);
FILE * _freopen_r (struct _reent *, const char *restrict, const char *restrict, FILE *restrict);
int _fprintf_r (struct _reent *, FILE *restrict, const char *restrict, ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));
int _fpurge_r (struct _reent *, FILE *);
int _fputc_r (struct _reent *, int, FILE *);
int _fputc_unlocked_r (struct _reent *, int, FILE *);
int _fputs_r (struct _reent *, const char *restrict, FILE *restrict);
int _fputs_unlocked_r (struct _reent *, const char *restrict, FILE *restrict);
size_t _fread_r (struct _reent *, void *restrict, size_t _size, size_t _n, FILE *restrict);
size_t _fread_unlocked_r (struct _reent *, void *restrict, size_t _size, size_t _n, FILE *restrict);
int _fscanf_r (struct _reent *, FILE *restrict, const char *restrict, ...)
               __attribute__ ((__format__ (__scanf__, 3, 4)));
int _fseek_r (struct _reent *, FILE *, long, int);
int _fseeko_r (struct _reent *, FILE *, _off_t, int);
long _ftell_r (struct _reent *, FILE *);
_off_t _ftello_r (struct _reent *, FILE *);
void _rewind_r (struct _reent *, FILE *);
size_t _fwrite_r (struct _reent *, const void *restrict, size_t _size, size_t _n, FILE *restrict);
size_t _fwrite_unlocked_r (struct _reent *, const void *restrict, size_t _size, size_t _n, FILE *restrict);
int _getc_r (struct _reent *, FILE *);
int _getc_unlocked_r (struct _reent *, FILE *);
int _getchar_r (struct _reent *);
int _getchar_unlocked_r (struct _reent *);
char * _gets_r (struct _reent *, char *);
int _iprintf_r (struct _reent *, const char *, ...)
               __attribute__ ((__format__ (__printf__, 2, 3)));
int _iscanf_r (struct _reent *, const char *, ...)
               __attribute__ ((__format__ (__scanf__, 2, 3)));
FILE * _open_memstream_r (struct _reent *, char **, size_t *);
void _perror_r (struct _reent *, const char *);
int _printf_r (struct _reent *, const char *restrict, ...)
               __attribute__ ((__format__ (__printf__, 2, 3)));
int _putc_r (struct _reent *, int, FILE *);
int _putc_unlocked_r (struct _reent *, int, FILE *);
int _putchar_unlocked_r (struct _reent *, int);
int _putchar_r (struct _reent *, int);
int _puts_r (struct _reent *, const char *);
int _remove_r (struct _reent *, const char *);
int _rename_r (struct _reent *,
      const char *_old, const char *_new);
int _scanf_r (struct _reent *, const char *restrict, ...)
               __attribute__ ((__format__ (__scanf__, 2, 3)));
int _siprintf_r (struct _reent *, char *, const char *, ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));
int _siscanf_r (struct _reent *, const char *, const char *, ...)
               __attribute__ ((__format__ (__scanf__, 3, 4)));
int _sniprintf_r (struct _reent *, char *, size_t, const char *, ...)
               __attribute__ ((__format__ (__printf__, 4, 5)));
int _snprintf_r (struct _reent *, char *restrict, size_t, const char *restrict, ...)
               __attribute__ ((__format__ (__printf__, 4, 5)));
int _sprintf_r (struct _reent *, char *restrict, const char *restrict, ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));
int _sscanf_r (struct _reent *, const char *restrict, const char *restrict, ...)
               __attribute__ ((__format__ (__scanf__, 3, 4)));
char * _tempnam_r (struct _reent *, const char *, const char *);
FILE * _tmpfile_r (struct _reent *);
char * _tmpnam_r (struct _reent *, char *);
int _ungetc_r (struct _reent *, int, FILE *);
int _vasiprintf_r (struct _reent *, char **, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
char * _vasniprintf_r (struct _reent*, char *, size_t *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 4, 0)));
char * _vasnprintf_r (struct _reent*, char *, size_t *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 4, 0)));
int _vasprintf_r (struct _reent *, char **, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
int _vdiprintf_r (struct _reent *, int, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
int _vdprintf_r (struct _reent *, int, const char *restrict, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
int _vfiprintf_r (struct _reent *, FILE *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
int _vfiscanf_r (struct _reent *, FILE *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 3, 0)));
int _vfprintf_r (struct _reent *, FILE *restrict, const char *restrict, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
int _vfscanf_r (struct _reent *, FILE *restrict, const char *restrict, __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 3, 0)));
int _viprintf_r (struct _reent *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 2, 0)));
int _viscanf_r (struct _reent *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 2, 0)));
int _vprintf_r (struct _reent *, const char *restrict, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 2, 0)));
int _vscanf_r (struct _reent *, const char *restrict, __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 2, 0)));
int _vsiprintf_r (struct _reent *, char *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
int _vsiscanf_r (struct _reent *, const char *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 3, 0)));
int _vsniprintf_r (struct _reent *, char *, size_t, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 4, 0)));
int _vsnprintf_r (struct _reent *, char *restrict, size_t, const char *restrict, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 4, 0)));
int _vsprintf_r (struct _reent *, char *restrict, const char *restrict, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
int _vsscanf_r (struct _reent *, const char *restrict, const char *restrict, __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 3, 0)));



int fpurge (FILE *);
ssize_t __getdelim (char **, size_t *, int, FILE *);
ssize_t __getline (char **, size_t *, FILE *);


void clearerr_unlocked (FILE *);
int feof_unlocked (FILE *);
int ferror_unlocked (FILE *);
int fileno_unlocked (FILE *);
int fflush_unlocked (FILE *);
int fgetc_unlocked (FILE *);
int fputc_unlocked (int, FILE *);
size_t fread_unlocked (void *restrict, size_t _size, size_t _n, FILE *restrict);
size_t fwrite_unlocked (const void *restrict , size_t _size, size_t _n, FILE *);
# 577 "/tools/toolchain/newlib/newlib/libc/include/stdio.h" 3
int __srget_r (struct _reent *, FILE *);
int __swbuf_r (struct _reent *, int, FILE *);
# 601 "/tools/toolchain/newlib/newlib/libc/include/stdio.h" 3
FILE *funopen (const void *__cookie,
  int (*__readfn)(void *__cookie, char *__buf,
    int __n),
  int (*__writefn)(void *__cookie, const char *__buf,
     int __n),
  fpos_t (*__seekfn)(void *__cookie, fpos_t __off, int __whence),
  int (*__closefn)(void *__cookie));
FILE *_funopen_r (struct _reent *, const void *__cookie,
  int (*__readfn)(void *__cookie, char *__buf,
    int __n),
  int (*__writefn)(void *__cookie, const char *__buf,
     int __n),
  fpos_t (*__seekfn)(void *__cookie, fpos_t __off, int __whence),
  int (*__closefn)(void *__cookie));
# 687 "/tools/toolchain/newlib/newlib/libc/include/stdio.h" 3
static __inline__ int __sputc_r(struct _reent *_ptr, int _c, FILE *_p) {




 if (--_p->_w >= 0 || (_p->_w >= _p->_lbfsize && (char)_c != '\n'))
  return (*_p->_p++ = _c);
 else
  return (__swbuf_r(_ptr, _c, _p));
}
# 741 "/tools/toolchain/newlib/newlib/libc/include/stdio.h" 3
static __inline int
_getchar_unlocked(void)
{
 struct _reent *_ptr;

 _ptr = _impure_ptr;
 return ((--(((_ptr)->_stdin))->_r < 0 ? __srget_r(_ptr, ((_ptr)->_stdin)) : (int)(*(((_ptr)->_stdin))->_p++)));
}

static __inline int
_putchar_unlocked(int _c)
{
 struct _reent *_ptr;

 _ptr = _impure_ptr;
 return (__sputc_r(_ptr, _c, ((_ptr)->_stdout)));
}
# 83 "/tools/toolchain/newlib/newlib/libc/stdio/vfscanf/../vfscanf.c" 2
# 1 "/tools/toolchain/newlib/newlib/libc/include/stdlib.h" 1 3
# 10 "/tools/toolchain/newlib/newlib/libc/include/stdlib.h" 3
# 1 "/tools/toolchain/newlib/newlib/libc/include/machine/ieeefp.h" 1 3
# 11 "/tools/toolchain/newlib/newlib/libc/include/stdlib.h" 2 3





# 1 "/home/project/cu_riscv32i_cycle_accurate/work/ia/sdk/lib/clang/9.0.1/include/stddef.h" 1 3
# 17 "/tools/toolchain/newlib/newlib/libc/include/stdlib.h" 2 3



# 1 "/tools/toolchain/newlib/newlib/libc/include/machine/stdlib.h" 1 3
# 21 "/tools/toolchain/newlib/newlib/libc/include/stdlib.h" 2 3

# 1 "/tools/toolchain/newlib/newlib/libc/include/alloca.h" 1 3
# 23 "/tools/toolchain/newlib/newlib/libc/include/stdlib.h" 2 3
# 35 "/tools/toolchain/newlib/newlib/libc/include/stdlib.h" 3
typedef struct
{
  int quot;
  int rem;
} div_t;

typedef struct
{
  long quot;
  long rem;
} ldiv_t;


typedef struct
{
  long long int quot;
  long long int rem;
} lldiv_t;




typedef int (*__compar_fn_t) (const void *, const void *);







int __locale_mb_cur_max (void);



void abort (void) __attribute__ ((__noreturn__));
int abs (int);

__uint32_t arc4random (void);
__uint32_t arc4random_uniform (__uint32_t);
void arc4random_buf (void *, size_t);

int atexit (void (*__func)(void));
double atof (const char *__nptr);

float atoff (const char *__nptr);

int atoi (const char *__nptr);
int _atoi_r (struct _reent *, const char *__nptr);
long atol (const char *__nptr);
long _atol_r (struct _reent *, const char *__nptr);
void * bsearch (const void *__key,
         const void *__base,
         size_t __nmemb,
         size_t __size,
         __compar_fn_t _compar);
void *calloc(size_t, size_t) __attribute__((__malloc__)) __attribute__((__warn_unused_result__))
      __attribute__((__alloc_size__(1, 2))) ;
div_t div (int __numer, int __denom);
void exit (int __status) __attribute__ ((__noreturn__));
void free (void *) ;
char * getenv (const char *__string);
char * _getenv_r (struct _reent *, const char *__string);



char * _findenv (const char *, int *);
char * _findenv_r (struct _reent *, const char *, int *);

extern char *suboptarg;
int getsubopt (char **, char * const *, char **);

long labs (long);
ldiv_t ldiv (long __numer, long __denom);
void *malloc(size_t) __attribute__((__malloc__)) __attribute__((__warn_unused_result__)) __attribute__((__alloc_size__(1))) ;
int mblen (const char *, size_t);
int _mblen_r (struct _reent *, const char *, size_t, _mbstate_t *);
int mbtowc (wchar_t *restrict, const char *restrict, size_t);
int _mbtowc_r (struct _reent *, wchar_t *restrict, const char *restrict, size_t, _mbstate_t *);
int wctomb (char *, wchar_t);
int _wctomb_r (struct _reent *, char *, wchar_t, _mbstate_t *);
size_t mbstowcs (wchar_t *restrict, const char *restrict, size_t);
size_t _mbstowcs_r (struct _reent *, wchar_t *restrict, const char *restrict, size_t, _mbstate_t *);
size_t wcstombs (char *restrict, const wchar_t *restrict, size_t);
size_t _wcstombs_r (struct _reent *, char *restrict, const wchar_t *restrict, size_t, _mbstate_t *);


char * mkdtemp (char *);






int mkstemp (char *);


int mkstemps (char *, int);






char * mktemp (char *);



char * _mkdtemp_r (struct _reent *, char *);
int _mkostemp_r (struct _reent *, char *, int);
int _mkostemps_r (struct _reent *, char *, int, int);
int _mkstemp_r (struct _reent *, char *);
int _mkstemps_r (struct _reent *, char *, int);




char * _mktemp_r (struct _reent *, char *);

void qsort (void *__base, size_t __nmemb, size_t __size, __compar_fn_t _compar);
int rand (void);
void *realloc(void *, size_t) __attribute__((__warn_unused_result__)) __attribute__((__alloc_size__(2))) ;

void *reallocarray(void *, size_t, size_t) __attribute__((__warn_unused_result__)) __attribute__((__alloc_size__(2, 3)));
void *reallocf(void *, size_t) __attribute__((__warn_unused_result__)) __attribute__((__alloc_size__(2)));


char * realpath (const char *restrict path, char *restrict resolved_path);


int rpmatch (const char *response);




void srand (unsigned __seed);
double strtod (const char *restrict __n, char **restrict __end_PTR);
double _strtod_r (struct _reent *,const char *restrict __n, char **restrict __end_PTR);

float strtof (const char *restrict __n, char **restrict __end_PTR);







long strtol (const char *restrict __n, char **restrict __end_PTR, int __base);
long _strtol_r (struct _reent *,const char *restrict __n, char **restrict __end_PTR, int __base);
unsigned long strtoul (const char *restrict __n, char **restrict __end_PTR, int __base);
unsigned long _strtoul_r (struct _reent *,const char *restrict __n, char **restrict __end_PTR, int __base);
# 201 "/tools/toolchain/newlib/newlib/libc/include/stdlib.h" 3
int system (const char *__string);


long a64l (const char *__input);
char * l64a (long __input);
char * _l64a_r (struct _reent *,long __input);


int on_exit (void (*__func)(int, void *),void *__arg);


void _Exit (int __status) __attribute__ ((__noreturn__));


int putenv (char *__string);

int _putenv_r (struct _reent *, char *__string);
void * _reallocf_r (struct _reent *, void *, size_t);

int setenv (const char *__string, const char *__value, int __overwrite);

int _setenv_r (struct _reent *, const char *__string, const char *__value, int __overwrite);
# 234 "/tools/toolchain/newlib/newlib/libc/include/stdlib.h" 3
char * __itoa (int, char *, int);
char * __utoa (unsigned, char *, int);

char * itoa (int, char *, int);
char * utoa (unsigned, char *, int);


int rand_r (unsigned *__seed);



double drand48 (void);
double _drand48_r (struct _reent *);
double erand48 (unsigned short [3]);
double _erand48_r (struct _reent *, unsigned short [3]);
long jrand48 (unsigned short [3]);
long _jrand48_r (struct _reent *, unsigned short [3]);
void lcong48 (unsigned short [7]);
void _lcong48_r (struct _reent *, unsigned short [7]);
long lrand48 (void);
long _lrand48_r (struct _reent *);
long mrand48 (void);
long _mrand48_r (struct _reent *);
long nrand48 (unsigned short [3]);
long _nrand48_r (struct _reent *, unsigned short [3]);
unsigned short *
       seed48 (unsigned short [3]);
unsigned short *
       _seed48_r (struct _reent *, unsigned short [3]);
void srand48 (long);
void _srand48_r (struct _reent *, long);


char * initstate (unsigned, char *, size_t);
long random (void);
char * setstate (char *);
void srandom (unsigned);


long long atoll (const char *__nptr);

long long _atoll_r (struct _reent *, const char *__nptr);

long long llabs (long long);
lldiv_t lldiv (long long __numer, long long __denom);
long long strtoll (const char *restrict __n, char **restrict __end_PTR, int __base);

long long _strtoll_r (struct _reent *, const char *restrict __n, char **restrict __end_PTR, int __base);

unsigned long long strtoull (const char *restrict __n, char **restrict __end_PTR, int __base);

unsigned long long _strtoull_r (struct _reent *, const char *restrict __n, char **restrict __end_PTR, int __base);



void cfree (void *);


int unsetenv (const char *__string);

int _unsetenv_r (struct _reent *, const char *__string);



int posix_memalign (void **, size_t, size_t) __attribute__((__nonnull__ (1)))
     __attribute__((__warn_unused_result__));


char * _dtoa_r (struct _reent *, double, int, int, int *, int*, char**);

void * _malloc_r (struct _reent *, size_t) ;
void * _calloc_r (struct _reent *, size_t, size_t) ;
void _free_r (struct _reent *, void *) ;
void * _realloc_r (struct _reent *, void *, size_t) ;
void _mstats_r (struct _reent *, char *);

int _system_r (struct _reent *, const char *);

void __eprintf (const char *, const char *, unsigned int, const char *);
# 322 "/tools/toolchain/newlib/newlib/libc/include/stdlib.h" 3
void qsort_r (void *__base, size_t __nmemb, size_t __size, void *__thunk, int (*_compar)(void *, const void *, const void *))
             __asm__ ("" "__bsd_qsort_r");
# 332 "/tools/toolchain/newlib/newlib/libc/include/stdlib.h" 3
extern long double _strtold_r (struct _reent *, const char *restrict, char **restrict);

extern long double strtold (const char *restrict, char **restrict);







void * aligned_alloc(size_t, size_t) __attribute__((__malloc__)) __attribute__((__alloc_align__(1)))
     __attribute__((__alloc_size__(2))) __attribute__((__warn_unused_result__));
int at_quick_exit(void (*)(void));
_Noreturn void
 quick_exit(int);
# 84 "/tools/toolchain/newlib/newlib/libc/stdio/vfscanf/../vfscanf.c" 2
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
# 85 "/tools/toolchain/newlib/newlib/libc/stdio/vfscanf/../vfscanf.c" 2
# 1 "/tools/toolchain/newlib/newlib/libc/include/limits.h" 1 3





# 1 "/tools/toolchain/newlib/newlib/libc/include/sys/syslimits.h" 1 3
# 7 "/tools/toolchain/newlib/newlib/libc/include/limits.h" 2 3
# 132 "/tools/toolchain/newlib/newlib/libc/include/limits.h" 3
# 1 "/home/project/cu_riscv32i_cycle_accurate/work/ia/sdk/lib/clang/9.0.1/include/limits.h" 1 3
# 133 "/tools/toolchain/newlib/newlib/libc/include/limits.h" 2 3
# 86 "/tools/toolchain/newlib/newlib/libc/stdio/vfscanf/../vfscanf.c" 2
# 1 "/tools/toolchain/newlib/newlib/libc/include/wchar.h" 1 3
# 12 "/tools/toolchain/newlib/newlib/libc/include/wchar.h" 3
# 1 "/home/project/cu_riscv32i_cycle_accurate/work/ia/sdk/lib/clang/9.0.1/include/stddef.h" 1 3
# 13 "/tools/toolchain/newlib/newlib/libc/include/wchar.h" 2 3
# 85 "/tools/toolchain/newlib/newlib/libc/include/wchar.h" 3
struct tm;



typedef _mbstate_t mbstate_t;


wint_t btowc (int);
int wctob (wint_t);
size_t mbrlen (const char *restrict, size_t, mbstate_t *restrict);
size_t mbrtowc (wchar_t *restrict, const char *restrict, size_t,
      mbstate_t *restrict);
size_t _mbrtowc_r (struct _reent *, wchar_t * , const char * ,
   size_t, mbstate_t *);
int mbsinit (const mbstate_t *);

size_t mbsnrtowcs (wchar_t *restrict, const char **restrict,
    size_t, size_t, mbstate_t *restrict);

size_t _mbsnrtowcs_r (struct _reent *, wchar_t * , const char ** ,
   size_t, size_t, mbstate_t *);
size_t mbsrtowcs (wchar_t *restrict, const char **restrict, size_t,
    mbstate_t *restrict);
size_t _mbsrtowcs_r (struct _reent *, wchar_t * , const char ** , size_t, mbstate_t *);
size_t wcrtomb (char *restrict, wchar_t, mbstate_t *restrict);
size_t _wcrtomb_r (struct _reent *, char * , wchar_t, mbstate_t *);

size_t wcsnrtombs (char *restrict, const wchar_t **restrict,
    size_t, size_t, mbstate_t *restrict);

size_t _wcsnrtombs_r (struct _reent *, char * , const wchar_t ** ,
   size_t, size_t, mbstate_t *);
size_t wcsrtombs (char *restrict, const wchar_t **restrict,
    size_t, mbstate_t *restrict);
size_t _wcsrtombs_r (struct _reent *, char * , const wchar_t ** ,
   size_t, mbstate_t *);

int wcscasecmp (const wchar_t *, const wchar_t *);

wchar_t *wcscat (wchar_t *restrict, const wchar_t *restrict);
wchar_t *wcschr (const wchar_t *, wchar_t);
int wcscmp (const wchar_t *, const wchar_t *);
int wcscoll (const wchar_t *, const wchar_t *);
wchar_t *wcscpy (wchar_t *restrict, const wchar_t *restrict);

wchar_t *wcpcpy (wchar_t *restrict,
     const wchar_t *restrict);
wchar_t *wcsdup (const wchar_t *) __attribute__((__malloc__)) __attribute__((__warn_unused_result__));

wchar_t *_wcsdup_r (struct _reent *, const wchar_t * );
size_t wcscspn (const wchar_t *, const wchar_t *);
size_t wcsftime (wchar_t *restrict, size_t,
    const wchar_t *restrict, const struct tm *restrict);




size_t wcslcat (wchar_t *, const wchar_t *, size_t);
size_t wcslcpy (wchar_t *, const wchar_t *, size_t);
size_t wcslen (const wchar_t *);

int wcsncasecmp (const wchar_t *, const wchar_t *, size_t);

wchar_t *wcsncat (wchar_t *restrict,
     const wchar_t *restrict, size_t);
int wcsncmp (const wchar_t *, const wchar_t *, size_t);
wchar_t *wcsncpy (wchar_t *restrict,
     const wchar_t *restrict, size_t);

wchar_t *wcpncpy (wchar_t *restrict,
     const wchar_t *restrict, size_t);
size_t wcsnlen (const wchar_t *, size_t);

wchar_t *wcspbrk (const wchar_t *, const wchar_t *);
wchar_t *wcsrchr (const wchar_t *, wchar_t);
size_t wcsspn (const wchar_t *, const wchar_t *);
wchar_t *wcsstr (const wchar_t *restrict,
     const wchar_t *restrict);
wchar_t *wcstok (wchar_t *restrict, const wchar_t *restrict,
     wchar_t **restrict);
double wcstod (const wchar_t *restrict, wchar_t **restrict);
double _wcstod_r (struct _reent *, const wchar_t *, wchar_t **);

float wcstof (const wchar_t *restrict, wchar_t **restrict);

float _wcstof_r (struct _reent *, const wchar_t *, wchar_t **);



size_t wcsxfrm (wchar_t *restrict, const wchar_t *restrict,
    size_t);

extern int wcscasecmp_l (const wchar_t *, const wchar_t *, locale_t);
extern int wcsncasecmp_l (const wchar_t *, const wchar_t *, size_t, locale_t);
extern int wcscoll_l (const wchar_t *, const wchar_t *, locale_t);
extern size_t wcsxfrm_l (wchar_t *restrict, const wchar_t *restrict, size_t,
    locale_t);





wchar_t *wmemchr (const wchar_t *, wchar_t, size_t);
int wmemcmp (const wchar_t *, const wchar_t *, size_t);
wchar_t *wmemcpy (wchar_t *restrict, const wchar_t *restrict,
     size_t);
wchar_t *wmemmove (wchar_t *, const wchar_t *, size_t);




wchar_t *wmemset (wchar_t *, wchar_t, size_t);

long wcstol (const wchar_t *restrict, wchar_t **restrict, int);

long long wcstoll (const wchar_t *restrict, wchar_t **restrict,
      int);

unsigned long wcstoul (const wchar_t *restrict, wchar_t **restrict,
       int);

unsigned long long wcstoull (const wchar_t *restrict,
         wchar_t **restrict, int);

long _wcstol_r (struct _reent *, const wchar_t *, wchar_t **, int);
long long _wcstoll_r (struct _reent *, const wchar_t *, wchar_t **, int);
unsigned long _wcstoul_r (struct _reent *, const wchar_t *, wchar_t **, int);
unsigned long long _wcstoull_r (struct _reent *, const wchar_t *, wchar_t **, int);

long double wcstold (const wchar_t *, wchar_t **);
# 230 "/tools/toolchain/newlib/newlib/libc/include/wchar.h" 3
wint_t fgetwc (__FILE *);
wchar_t *fgetws (wchar_t *restrict, int, __FILE *restrict);
wint_t fputwc (wchar_t, __FILE *);
int fputws (const wchar_t *restrict, __FILE *restrict);

int fwide (__FILE *, int);

wint_t getwc (__FILE *);
wint_t getwchar (void);
wint_t putwc (wchar_t, __FILE *);
wint_t putwchar (wchar_t);
wint_t ungetwc (wint_t wc, __FILE *);

wint_t _fgetwc_r (struct _reent *, __FILE *);
wint_t _fgetwc_unlocked_r (struct _reent *, __FILE *);
wchar_t *_fgetws_r (struct _reent *, wchar_t *, int, __FILE *);
wchar_t *_fgetws_unlocked_r (struct _reent *, wchar_t *, int, __FILE *);
wint_t _fputwc_r (struct _reent *, wchar_t, __FILE *);
wint_t _fputwc_unlocked_r (struct _reent *, wchar_t, __FILE *);
int _fputws_r (struct _reent *, const wchar_t *, __FILE *);
int _fputws_unlocked_r (struct _reent *, const wchar_t *, __FILE *);
int _fwide_r (struct _reent *, __FILE *, int);
wint_t _getwc_r (struct _reent *, __FILE *);
wint_t _getwc_unlocked_r (struct _reent *, __FILE *);
wint_t _getwchar_r (struct _reent *);
wint_t _getwchar_unlocked_r (struct _reent *);
wint_t _putwc_r (struct _reent *, wchar_t, __FILE *);
wint_t _putwc_unlocked_r (struct _reent *, wchar_t, __FILE *);
wint_t _putwchar_r (struct _reent *, wchar_t);
wint_t _putwchar_unlocked_r (struct _reent *, wchar_t);
wint_t _ungetwc_r (struct _reent *, wint_t wc, __FILE *);
# 274 "/tools/toolchain/newlib/newlib/libc/include/wchar.h" 3
__FILE *open_wmemstream (wchar_t **, size_t *);

__FILE *_open_wmemstream_r (struct _reent *, wchar_t **, size_t *);
# 287 "/tools/toolchain/newlib/newlib/libc/include/wchar.h" 3
int fwprintf (__FILE *restrict, const wchar_t *restrict, ...);
int swprintf (wchar_t *restrict, size_t,
   const wchar_t *restrict, ...);
int vfwprintf (__FILE *restrict, const wchar_t *restrict,
   __gnuc_va_list);
int vswprintf (wchar_t *restrict, size_t,
   const wchar_t *restrict, __gnuc_va_list);
int vwprintf (const wchar_t *restrict, __gnuc_va_list);
int wprintf (const wchar_t *restrict, ...);


int _fwprintf_r (struct _reent *, __FILE *, const wchar_t *, ...);
int _swprintf_r (struct _reent *, wchar_t *, size_t, const wchar_t *, ...);
int _vfwprintf_r (struct _reent *, __FILE *, const wchar_t *, __gnuc_va_list);
int _vswprintf_r (struct _reent *, wchar_t *, size_t, const wchar_t *, __gnuc_va_list);
int _vwprintf_r (struct _reent *, const wchar_t *, __gnuc_va_list);
int _wprintf_r (struct _reent *, const wchar_t *, ...);


int fwscanf (__FILE *restrict, const wchar_t *restrict, ...);
int swscanf (const wchar_t *restrict,
   const wchar_t *restrict, ...);
int vfwscanf (__FILE *restrict, const wchar_t *restrict,
   __gnuc_va_list);
int vswscanf (const wchar_t *restrict, const wchar_t *restrict,
   __gnuc_va_list);
int vwscanf (const wchar_t *restrict, __gnuc_va_list);
int wscanf (const wchar_t *restrict, ...);


int _fwscanf_r (struct _reent *, __FILE *, const wchar_t *, ...);
int _swscanf_r (struct _reent *, const wchar_t *, const wchar_t *, ...);
int _vfwscanf_r (struct _reent *, __FILE *, const wchar_t *, __gnuc_va_list);
int _vswscanf_r (struct _reent *, const wchar_t *, const wchar_t *, __gnuc_va_list);
int _vwscanf_r (struct _reent *, const wchar_t *, __gnuc_va_list);
int _wscanf_r (struct _reent *, const wchar_t *, ...);
# 87 "/tools/toolchain/newlib/newlib/libc/stdio/vfscanf/../vfscanf.c" 2
# 1 "/tools/toolchain/newlib/newlib/libc/include/string.h" 1 3
# 17 "/tools/toolchain/newlib/newlib/libc/include/string.h" 3
# 1 "/home/project/cu_riscv32i_cycle_accurate/work/ia/sdk/lib/clang/9.0.1/include/stddef.h" 1 3
# 18 "/tools/toolchain/newlib/newlib/libc/include/string.h" 2 3






# 1 "/tools/toolchain/newlib/newlib/libc/include/strings.h" 1 3
# 40 "/tools/toolchain/newlib/newlib/libc/include/strings.h" 3
typedef __size_t size_t;





int bcmp(const void *, const void *, size_t) __attribute__((__pure__));
void bcopy(const void *, void *, size_t);
void bzero(void *, size_t);


void explicit_bzero(void *, size_t);


int ffs(int) __attribute__((__const__));


int ffsl(long) __attribute__((__const__));
int ffsll(long long) __attribute__((__const__));
int fls(int) __attribute__((__const__));
int flsl(long) __attribute__((__const__));
int flsll(long long) __attribute__((__const__));


char *index(const char *, int) __attribute__((__pure__));
char *rindex(const char *, int) __attribute__((__pure__));

int strcasecmp(const char *, const char *) __attribute__((__pure__));
int strncasecmp(const char *, const char *, size_t) __attribute__((__pure__));


int strcasecmp_l (const char *, const char *, locale_t);
int strncasecmp_l (const char *, const char *, size_t, locale_t);
# 25 "/tools/toolchain/newlib/newlib/libc/include/string.h" 2 3




void * memchr (const void *, int, size_t);
int memcmp (const void *, const void *, size_t);
void * memcpy (void *restrict, const void *restrict, size_t);
void * memmove (void *, const void *, size_t);
void * memset (void *, int, size_t);
char *strcat (char *restrict, const char *restrict);
char *strchr (const char *, int);
int strcmp (const char *, const char *);
int strcoll (const char *, const char *);
char *strcpy (char *restrict, const char *restrict);
size_t strcspn (const char *, const char *);
char *strerror (int);
size_t strlen (const char *);
char *strncat (char *restrict, const char *restrict, size_t);
int strncmp (const char *, const char *, size_t);
char *strncpy (char *restrict, const char *restrict, size_t);
char *strpbrk (const char *, const char *);
char *strrchr (const char *, int);
size_t strspn (const char *, const char *);
char *strstr (const char *, const char *);

char *strtok (char *restrict, const char *restrict);

size_t strxfrm (char *restrict, const char *restrict, size_t);


int strcoll_l (const char *, const char *, locale_t);
char *strerror_l (int, locale_t);
size_t strxfrm_l (char *restrict, const char *restrict, size_t, locale_t);


char *strtok_r (char *restrict, const char *restrict, char **restrict);


int timingsafe_bcmp (const void *, const void *, size_t);
int timingsafe_memcmp (const void *, const void *, size_t);


void * memccpy (void *restrict, const void *restrict, int, size_t);
# 76 "/tools/toolchain/newlib/newlib/libc/include/string.h" 3
char *stpcpy (char *restrict, const char *restrict);
char *stpncpy (char *restrict, const char *restrict, size_t);






char *strdup (const char *) __attribute__((__malloc__)) __attribute__((__warn_unused_result__));

char *_strdup_r (struct _reent *, const char *);

char *strndup (const char *, size_t) __attribute__((__malloc__)) __attribute__((__warn_unused_result__));

char *_strndup_r (struct _reent *, const char *, size_t);
# 100 "/tools/toolchain/newlib/newlib/libc/include/string.h" 3
int strerror_r (int, char *, size_t)

             __asm__ ("" "__xpg_strerror_r")

  ;







char * _strerror_r (struct _reent *, int, int, int *);


size_t strlcat (char *, const char *, size_t);
size_t strlcpy (char *, const char *, size_t);


size_t strnlen (const char *, size_t);


char *strsep (char **, const char *);


char *strnstr(const char *, const char *, size_t) __attribute__((__pure__));



char *strlwr (char *);
char *strupr (char *);



char *strsignal (int __signo);
# 175 "/tools/toolchain/newlib/newlib/libc/include/string.h" 3
# 1 "/tools/toolchain/newlib/newlib/libc/include/sys/string.h" 1 3
# 176 "/tools/toolchain/newlib/newlib/libc/include/string.h" 2 3
# 88 "/tools/toolchain/newlib/newlib/libc/stdio/vfscanf/../vfscanf.c" 2

# 1 "/tools/toolchain/newlib/newlib/libc/include/errno.h" 1 3




typedef int error_t;




# 1 "/tools/toolchain/newlib/newlib/libc/include/sys/errno.h" 1 3
# 15 "/tools/toolchain/newlib/newlib/libc/include/sys/errno.h" 3
extern int *__errno (void);




extern const char * const _sys_errlist[];
extern int _sys_nerr;
# 10 "/tools/toolchain/newlib/newlib/libc/include/errno.h" 2 3
# 90 "/tools/toolchain/newlib/newlib/libc/stdio/vfscanf/../vfscanf.c" 2
# 1 "/tools/toolchain/newlib/newlib/libc/stdio/./local.h" 1
# 29 "/tools/toolchain/newlib/newlib/libc/stdio/./local.h"
# 1 "/tools/toolchain/newlib/newlib/libc/include/unistd.h" 1 3



# 1 "/tools/toolchain/newlib/newlib/libc/include/sys/unistd.h" 1 3
# 14 "/tools/toolchain/newlib/newlib/libc/include/sys/unistd.h" 3
# 1 "/home/project/cu_riscv32i_cycle_accurate/work/ia/sdk/lib/clang/9.0.1/include/stddef.h" 1 3
# 15 "/tools/toolchain/newlib/newlib/libc/include/sys/unistd.h" 2 3

extern char **environ;

void _exit (int __status) __attribute__ ((__noreturn__));

int access (const char *__path, int __amode);
unsigned alarm (unsigned __secs);
int chdir (const char *__path);
int chmod (const char *__path, mode_t __mode);

int chown (const char *__path, uid_t __owner, gid_t __group);


int chroot (const char *__path);

int close (int __fildes);

size_t confstr (int __name, char *__buf, size_t __len);
# 44 "/tools/toolchain/newlib/newlib/libc/include/sys/unistd.h" 3
int daemon (int nochdir, int noclose);

int dup (int __fildes);
int dup2 (int __fildes, int __fildes2);
# 56 "/tools/toolchain/newlib/newlib/libc/include/sys/unistd.h" 3
void endusershell (void);




int execl (const char *__path, const char *, ...);
int execle (const char *__path, const char *, ...);
int execlp (const char *__file, const char *, ...);

int execlpe (const char *__file, const char *, ...);

int execv (const char *__path, char * const __argv[]);
int execve (const char *__path, char * const __argv[], char * const __envp[]);
int execvp (const char *__file, char * const __argv[]);




int faccessat (int __dirfd, const char *__path, int __mode, int __flags);


int fchdir (int __fildes);


int fchmod (int __fildes, mode_t __mode);



int fchown (int __fildes, uid_t __owner, gid_t __group);



int fchownat (int __dirfd, const char *__path, uid_t __owner, gid_t __group, int __flags);


int fexecve (int __fd, char * const __argv[], char * const __envp[]);

pid_t fork (void);
long fpathconf (int __fd, int __name);
int fsync (int __fd);

int fdatasync (int __fd);




char * getcwd (char *__buf, size_t __size);

int getdomainname (char *__name, size_t __len);


int getentropy (void *, size_t);


gid_t getegid (void);
uid_t geteuid (void);
gid_t getgid (void);

int getgroups (int __gidsetsize, gid_t __grouplist[]);

long gethostid (void);

char * getlogin (void);




char * getpass (const char *__prompt);
int getpagesize (void);


int getpeereid (int, uid_t *, gid_t *);


pid_t getpgid (pid_t);

pid_t getpgrp (void);
pid_t getpid (void);
pid_t getppid (void);

pid_t getsid (pid_t);


uid_t getuid (void);


char * getusershell (void);


char * getwd (char *__buf);


int iruserok (unsigned long raddr, int superuser, const char *ruser, const char *luser);

int isatty (int __fildes);

int issetugid (void);



int lchown (const char *__path, uid_t __owner, gid_t __group);


int link (const char *__path1, const char *__path2);

int linkat (int __dirfd1, const char *__path1, int __dirfd2, const char *__path2, int __flags);


int nice (int __nice_value);


off_t lseek (int __fildes, off_t __offset, int __whence);






int lockf (int __fd, int __cmd, off_t __len);

long pathconf (const char *__path, int __name);
int pause (void);

int pthread_atfork (void (*)(void), void (*)(void), void (*)(void));

int pipe (int __fildes[2]);




ssize_t pread (int __fd, void *__buf, size_t __nbytes, off_t __offset);
ssize_t pwrite (int __fd, const void *__buf, size_t __nbytes, off_t __offset);

int read (int __fd, void *__buf, size_t __nbyte);

int rresvport (int *__alport);
int revoke (char *__path);

int rmdir (const char *__path);

int ruserok (const char *rhost, int superuser, const char *ruser, const char *luser);


void * sbrk (ptrdiff_t __incr);



int setegid (gid_t __gid);
int seteuid (uid_t __uid);

int setgid (gid_t __gid);


int setgroups (int ngroups, const gid_t *grouplist);


int sethostname (const char *, size_t);

int setpgid (pid_t __pid, pid_t __pgid);

int setpgrp (void);


int setregid (gid_t __rgid, gid_t __egid);
int setreuid (uid_t __ruid, uid_t __euid);

pid_t setsid (void);

int setuid (uid_t __uid);


void setusershell (void);

unsigned sleep (unsigned int __seconds);



long sysconf (int __name);
pid_t tcgetpgrp (int __fildes);
int tcsetpgrp (int __fildes, pid_t __pgrp_id);
char * ttyname (int __fildes);
int ttyname_r (int, char *, size_t);
int unlink (const char *__path);

int usleep (useconds_t __useconds);


int vhangup (void);

int write (int __fd, const void *__buf, size_t __nbyte);






extern char *optarg;
extern int optind, opterr, optopt;
int getopt(int, char * const [], const char *);
extern int optreset;



pid_t vfork (void);
# 283 "/tools/toolchain/newlib/newlib/libc/include/sys/unistd.h" 3
int ftruncate (int __fd, off_t __length);


int truncate (const char *, off_t __length);




int getdtablesize (void);


useconds_t ualarm (useconds_t __useconds, useconds_t __interval);





 int gethostname (char *__name, size_t __len);




int setdtablesize (int);



void sync (void);



ssize_t readlink (const char *restrict __path,
                          char *restrict __buf, size_t __buflen);
int symlink (const char *__name1, const char *__name2);


ssize_t readlinkat (int __dirfd1, const char *restrict __path,
                            char *restrict __buf, size_t __buflen);
int symlinkat (const char *, int, const char *);
int unlinkat (int, const char *, int);
# 5 "/tools/toolchain/newlib/newlib/libc/include/unistd.h" 2 3
# 30 "/tools/toolchain/newlib/newlib/libc/stdio/./local.h" 2
# 143 "/tools/toolchain/newlib/newlib/libc/stdio/./local.h"
extern wint_t __fgetwc (struct _reent *, FILE *);
extern wint_t __fputwc (struct _reent *, wchar_t, FILE *);
extern u_char *__sccl (char *, u_char *fmt);
extern int __svfscanf_r (struct _reent *,FILE *, const char *,va_list);
extern int __ssvfscanf_r (struct _reent *,FILE *, const char *,va_list);
extern int __svfiscanf_r (struct _reent *,FILE *, const char *,va_list);
extern int __ssvfiscanf_r (struct _reent *,FILE *, const char *,va_list);
extern int __svfwscanf_r (struct _reent *,FILE *, const wchar_t *,va_list);
extern int __ssvfwscanf_r (struct _reent *,FILE *, const wchar_t *,va_list);
extern int __svfiwscanf_r (struct _reent *,FILE *, const wchar_t *,va_list);
extern int __ssvfiwscanf_r (struct _reent *,FILE *, const wchar_t *,va_list);
int _svfprintf_r (struct _reent *, FILE *, const char *,
      va_list)
                  __attribute__ ((__format__ (__printf__, 3, 0)));
int _svfiprintf_r (struct _reent *, FILE *, const char *,
      va_list)
                  __attribute__ ((__format__ (__printf__, 3, 0)));
int _svfwprintf_r (struct _reent *, FILE *, const wchar_t *,
      va_list);
int _svfiwprintf_r (struct _reent *, FILE *, const wchar_t *,
      va_list);
extern FILE *__sfp (struct _reent *);
extern int __sflags (struct _reent *,const char*, int*);
extern int __sflush_r (struct _reent *,FILE *);



extern int __srefill_r (struct _reent *,FILE *);
extern int __sread (struct _reent *, void *, char *,
            int);
extern int __seofread (struct _reent *, void *,
        char *,
        int);
extern int __swrite (struct _reent *, void *,
      const char *,
      int);
extern _fpos_t __sseek (struct _reent *, void *, _fpos_t, int);
extern int __sclose (struct _reent *, void *);
extern int __stextmode (int);
extern void __sinit (struct _reent *);
extern void _cleanup_r (struct _reent *);
extern void __smakebuf_r (struct _reent *, FILE *);
extern int __swhatbuf_r (struct _reent *, FILE *, size_t *, int *);
extern int _fwalk (struct _reent *, int (*)(FILE *));
extern int _fwalk_reent (struct _reent *, int (*)(struct _reent *, FILE *));
struct _glue * __sfmoreglue (struct _reent *,int n);
extern int __submore (struct _reent *, FILE *);
# 282 "/tools/toolchain/newlib/newlib/libc/stdio/./local.h"
char *_dcvt (struct _reent *, char *, double, int, int, char, int);
char *_sicvt (char *, short, char);
char *_icvt (char *, int, char);
char *_licvt (char *, long, char);

char *_llicvt (char *, long long, char);
# 300 "/tools/toolchain/newlib/newlib/libc/stdio/./local.h"
void __sfp_lock_acquire (void);
void __sfp_lock_release (void);
void __sinit_lock_acquire (void);
void __sinit_lock_release (void);





typedef enum __attribute__((__packed__)) {
  ZERO,
  DIGIT,
  DOLLAR,
  MODFR,
  SPEC,
  DOT,
  STAR,
  FLAG,
  OTHER,
  MAX_CH_CLASS
} __CH_CLASS;

typedef enum __attribute__((__packed__)) {
  START,
  SFLAG,
  WDIG,
  WIDTH,
  SMOD,
  SDOT,
  VARW,
  VARP,
  PREC,
  VWDIG,
  VPDIG,
  DONE,
  MAX_STATE,
} __STATE;

typedef enum __attribute__((__packed__)) {
  NOOP,
  NUMBER,
  SKIPNUM,
  GETMOD,
  GETARG,
  GETPW,
  GETPWB,
  GETPOS,
  PWPOS,
} __ACTION;

extern const __CH_CLASS __chclass[256];
extern const __STATE __state_table[MAX_STATE][MAX_CH_CLASS];
extern const __ACTION __action_table[MAX_STATE][MAX_CH_CLASS];
# 91 "/tools/toolchain/newlib/newlib/libc/stdio/vfscanf/../vfscanf.c" 2
# 1 "/tools/toolchain/newlib/newlib/libc/stdio/./../stdlib/local.h" 1





char * _gcvt (struct _reent *, double , int , char *, char, int);


# 1 "/tools/toolchain/newlib/newlib/libc/stdio/./../stdlib/../locale/setlocale.h" 1
# 34 "/tools/toolchain/newlib/newlib/libc/stdio/./../stdlib/../locale/setlocale.h"
# 1 "/tools/toolchain/newlib/newlib/libc/include/limits.h" 1 3
# 35 "/tools/toolchain/newlib/newlib/libc/stdio/./../stdlib/../locale/setlocale.h" 2



# 1 "/tools/toolchain/newlib/newlib/libc/include/locale.h" 1 3
# 14 "/tools/toolchain/newlib/newlib/libc/include/locale.h" 3
# 1 "/home/project/cu_riscv32i_cycle_accurate/work/ia/sdk/lib/clang/9.0.1/include/stddef.h" 1 3
# 15 "/tools/toolchain/newlib/newlib/libc/include/locale.h" 2 3
# 42 "/tools/toolchain/newlib/newlib/libc/include/locale.h" 3
struct lconv
{
  char *decimal_point;
  char *thousands_sep;
  char *grouping;
  char *int_curr_symbol;
  char *currency_symbol;
  char *mon_decimal_point;
  char *mon_thousands_sep;
  char *mon_grouping;
  char *positive_sign;
  char *negative_sign;
  char int_frac_digits;
  char frac_digits;
  char p_cs_precedes;
  char p_sep_by_space;
  char n_cs_precedes;
  char n_sep_by_space;
  char p_sign_posn;
  char n_sign_posn;
  char int_n_cs_precedes;
  char int_n_sep_by_space;
  char int_n_sign_posn;
  char int_p_cs_precedes;
  char int_p_sep_by_space;
  char int_p_sign_posn;
};

struct _reent;
char *_setlocale_r (struct _reent *, int, const char *);
struct lconv *_localeconv_r (struct _reent *);

struct __locale_t *_newlocale_r (struct _reent *, int, const char *,
     struct __locale_t *);
void _freelocale_r (struct _reent *, struct __locale_t *);
struct __locale_t *_duplocale_r (struct _reent *, struct __locale_t *);
struct __locale_t *_uselocale_r (struct _reent *, struct __locale_t *);



char *setlocale (int, const char *);
struct lconv *localeconv (void);


locale_t newlocale (int, const char *, locale_t);
void freelocale (locale_t);
locale_t duplocale (locale_t);
locale_t uselocale (locale_t);
# 39 "/tools/toolchain/newlib/newlib/libc/stdio/./../stdlib/../locale/setlocale.h" 2
# 57 "/tools/toolchain/newlib/newlib/libc/stdio/./../stdlib/../locale/setlocale.h"
struct lc_ctype_T
{
  const char *codeset;
  const char *mb_cur_max;




};
extern const struct lc_ctype_T _C_ctype_locale;

struct lc_monetary_T
{
  const char *int_curr_symbol;
  const char *currency_symbol;
  const char *mon_decimal_point;
  const char *mon_thousands_sep;
  const char *mon_grouping;
  const char *positive_sign;
  const char *negative_sign;
  const char *int_frac_digits;
  const char *frac_digits;
  const char *p_cs_precedes;
  const char *p_sep_by_space;
  const char *n_cs_precedes;
  const char *n_sep_by_space;
  const char *p_sign_posn;
  const char *n_sign_posn;
# 100 "/tools/toolchain/newlib/newlib/libc/stdio/./../stdlib/../locale/setlocale.h"
};
extern const struct lc_monetary_T _C_monetary_locale;

struct lc_numeric_T
{
  const char *decimal_point;
  const char *thousands_sep;
  const char *grouping;





};
extern const struct lc_numeric_T _C_numeric_locale;

struct lc_time_T
{
  const char *mon[12];
  const char *month[12];
  const char *wday[7];
  const char *weekday[7];
  const char *X_fmt;
  const char *x_fmt;
  const char *c_fmt;
  const char *am_pm[2];
  const char *date_fmt;
  const char *alt_month[12];
  const char *md_order;
  const char *ampm_fmt;
  const char *era;
  const char *era_d_fmt;
  const char *era_d_t_fmt;
  const char *era_t_fmt;
  const char *alt_digits;
# 153 "/tools/toolchain/newlib/newlib/libc/stdio/./../stdlib/../locale/setlocale.h"
};
extern const struct lc_time_T _C_time_locale;

struct lc_messages_T
{
  const char *yesexpr;
  const char *noexpr;
  const char *yesstr;
  const char *nostr;







};
extern const struct lc_messages_T _C_messages_locale;

struct __lc_cats
{
  const void *ptr;
  char *buf;
};

struct __locale_t
{
  char categories[7][31 + 1];
  int (*wctomb) (struct _reent *, char *, wchar_t,
       mbstate_t *);
  int (*mbtowc) (struct _reent *, wchar_t *,
       const char *, size_t, mbstate_t *);
  int cjk_lang;
  char *ctype_ptr;
  struct lconv lconv;

  char mb_cur_max[2];
  char ctype_codeset[31 + 1];
  char message_codeset[31 + 1];



};






extern struct lconv *__localeconv_l (struct __locale_t *locale);

extern size_t _wcsnrtombs_l (struct _reent *, char *, const wchar_t **,
        size_t, size_t, mbstate_t *, struct __locale_t *);



static __inline__ struct __locale_t *
__get_global_locale ()
{
  extern struct __locale_t __global_locale;
  return &__global_locale;
}


static __inline__ struct __locale_t *
__get_locale_r (struct _reent *r)
{



  return __get_global_locale();

}





static __inline__ struct __locale_t *
__get_current_locale (void)
{



  return __get_global_locale();

}



static __inline__ struct __locale_t *
__get_C_locale (void)
{

  return __get_global_locale ();




}
# 284 "/tools/toolchain/newlib/newlib/libc/stdio/./../stdlib/../locale/setlocale.h"
static __inline__ int
__locale_mb_cur_max_l (struct __locale_t *locale)
{



  return locale->mb_cur_max[0];

}
# 347 "/tools/toolchain/newlib/newlib/libc/stdio/./../stdlib/../locale/setlocale.h"
static __inline__ const struct lc_monetary_T *
__get_monetary_locale (struct __locale_t *locale)
{
  return &_C_monetary_locale;
}

static __inline__ const struct lc_monetary_T *
__get_current_monetary_locale (void)
{
  return &_C_monetary_locale;
}

static __inline__ const struct lc_numeric_T *
__get_numeric_locale (struct __locale_t *locale)
{
  return &_C_numeric_locale;
}

static __inline__ const struct lc_numeric_T *
__get_current_numeric_locale (void)
{
  return &_C_numeric_locale;
}

static __inline__ const struct lc_time_T *
__get_time_locale (struct __locale_t *locale)
{
  return &_C_time_locale;
}

static __inline__ const struct lc_time_T *
__get_current_time_locale (void)
{
  return &_C_time_locale;
}

static __inline__ const struct lc_messages_T *
__get_messages_locale (struct __locale_t *locale)
{
  return &_C_messages_locale;
}

static __inline__ const struct lc_messages_T *
__get_current_messages_locale (void)
{
  return &_C_messages_locale;
}


static __inline__ const char *
__locale_charset (struct __locale_t *locale)
{



  return locale->ctype_codeset;

}

static __inline__ const char *
__current_locale_charset (void)
{



  return __get_current_locale ()->ctype_codeset;

}

static __inline__ const char *
__locale_msgcharset (void)
{



  return (char *) __get_current_locale ()->message_codeset;

}

static __inline__ int
__locale_cjk_lang (void)
{
  return __get_current_locale ()->cjk_lang;
}

int __ctype_load_locale (struct __locale_t *, const char *, void *,
    const char *, int);
int __monetary_load_locale (struct __locale_t *, const char *, void *,
       const char *);
int __numeric_load_locale (struct __locale_t *, const char *, void *,
      const char *);
int __time_load_locale (struct __locale_t *, const char *, void *,
   const char *);
int __messages_load_locale (struct __locale_t *, const char *, void *,
       const char *);
# 9 "/tools/toolchain/newlib/newlib/libc/stdio/./../stdlib/local.h" 2





typedef int wctomb_f (struct _reent *, char *, wchar_t, mbstate_t *);
typedef wctomb_f *wctomb_p;

wctomb_f __ascii_wctomb;
# 34 "/tools/toolchain/newlib/newlib/libc/stdio/./../stdlib/local.h"
typedef int mbtowc_f (struct _reent *, wchar_t *, const char *, size_t,
        mbstate_t *);
typedef mbtowc_f *mbtowc_p;

mbtowc_f __ascii_mbtowc;
# 55 "/tools/toolchain/newlib/newlib/libc/stdio/./../stdlib/local.h"
extern wchar_t __iso_8859_conv[14][0x60];
int __iso_8859_val_index (int);
int __iso_8859_index (const char *);

extern wchar_t __cp_conv[][0x80];
int __cp_val_index (int);
int __cp_index (const char *);
# 92 "/tools/toolchain/newlib/newlib/libc/stdio/vfscanf/../vfscanf.c" 2
# 213 "/tools/toolchain/newlib/newlib/libc/stdio/vfscanf/../vfscanf.c"
typedef unsigned long long u_long_long;
# 262 "/tools/toolchain/newlib/newlib/libc/stdio/vfscanf/../vfscanf.c"
int
_sungetc_r (struct _reent *data,
 int c,
 register FILE *fp)
{
  if (c == (-1))
    return ((-1));


  fp->_flags &= ~0x0020;
  c = (unsigned char) c;






  if (((fp)->_ub._base != ((void*)0)))
    {
      if (fp->_r >= fp->_ub._size && __submore (data, fp))
        {
          return (-1);
        }
      *--fp->_p = c;
      fp->_r++;
      return c;
    }







  if (fp->_bf._base != ((void*)0) && fp->_p > fp->_bf._base && fp->_p[-1] == c)
    {
      fp->_p--;
      fp->_r++;
      return c;
    }






  fp->_ur = fp->_r;
  fp->_up = fp->_p;
  fp->_ub._base = fp->_ubuf;
  fp->_ub._size = sizeof (fp->_ubuf);
  fp->_ubuf[sizeof (fp->_ubuf) - 1] = c;
  fp->_p = &fp->_ubuf[sizeof (fp->_ubuf) - 1];
  fp->_r = 1;
  return c;
}


int
__ssrefill_r (struct _reent * ptr,
       register FILE * fp)
{




  if (((fp)->_ub._base != ((void*)0)))
    {
      { if ((fp)->_ub._base != (fp)->_ubuf) _free_r(ptr, (char *)(fp)->_ub._base); (fp)->_ub._base = ((void*)0); };
      if ((fp->_r = fp->_ur) != 0)
        {
          fp->_p = fp->_up;
   return 0;
        }
    }


  fp->_p = fp->_bf._base;
  fp->_r = 0;
  fp->_flags |= 0x0020;
  return (-1);
}

size_t
_sfread_r (struct _reent * ptr,
       void *buf,
       size_t size,
       size_t count,
       FILE * fp)
{
  register size_t resid;
  register char *p;
  register int r;
  size_t total;

  if ((resid = count * size) == 0)
    return 0;

  total = resid;
  p = buf;

  while (resid > (r = fp->_r))
    {
      (void) memcpy ((void *) p, (void *) fp->_p, (size_t) r);
      fp->_p += r;
      fp->_r = 0;
      p += r;
      resid -= r;
      if (__ssrefill_r (ptr, fp))
        {

          return (total - resid) / size;
        }
    }
  (void) memcpy ((void *) p, (void *) fp->_p, resid);
  fp->_r -= resid;
  fp->_p += resid;
  return count;
}






static inline int
__wctob (struct _reent *rptr, wint_t wc)
{
  mbstate_t mbs;
  unsigned char pmb[1];

  if (wc == ((wint_t)-1))
    return (-1);
  memset (&mbs, '\0', sizeof (mbs));
  return (__get_current_locale ()->wctomb) (rptr, (char *) pmb, wc, &mbs) == 1 ? (int) pmb[0] : 0;
}

int
__ssvfiscanf_r (struct _reent *rptr,
       register FILE *fp,
       char const *fmt0,
       va_list ap)
{
  register unsigned char *fmt = (unsigned char *) fmt0;
  register int c;
  register size_t width;
  register char *p;
  register int n;
  register int flags;
  register char *p0;
  int nassigned;
  int nread;







  int base = 0;
  int nbytes = 1;
  wchar_t wc;
  wchar_t *wcp;
  size_t mbslen = 0;
# 441 "/tools/toolchain/newlib/newlib/libc/stdio/vfscanf/../vfscanf.c"
  struct m_ptrs {
    void ***m_arr;
    uint16_t m_siz;
    uint16_t m_cnt;
  } *m_ptr = ((void*)0);
# 551 "/tools/toolchain/newlib/newlib/libc/stdio/vfscanf/../vfscanf.c"
  unsigned long (*ccfn)(struct _reent *, const char *, char **, int)=0;
  char ccltab[256];
  char buf[40];
  unsigned char *lptr;

  char *cp;
  short *sp;
  int *ip;





  long *lp;

  long long *llp;



  static const short basefix[17] =
    {10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
# 589 "/tools/toolchain/newlib/newlib/libc/stdio/vfscanf/../vfscanf.c"
  {};

  do { if (!((fp)->_flags & 0x2000)) { (fp)->_flags |= 0x2000; if (-1 > 0) (fp)->_flags2 |= 0x2000; else (fp)->_flags2 &= ~0x2000; } } while (0);

  nassigned = 0;
  nread = 0;




  for (;;)
    {

      wc = *fmt;
# 611 "/tools/toolchain/newlib/newlib/libc/stdio/vfscanf/../vfscanf.c"
      fmt += nbytes;

      if (wc == 0)
 goto all_done;
      if (nbytes == 1 && ((((_ctype_)+sizeof(""[wc]))[(int)(wc)])&010))
 {
   for (;;)
     {
       if ((fp->_r <= 0 && __ssrefill_r(rptr, fp)) || !((((_ctype_)+sizeof(""[*fp->_p]))[(int)(*fp->_p)])&010))
  break;
       nread++, fp->_r--, fp->_p++;
     }
   continue;
 }
      if (wc != '%')
 goto literal;
      width = 0;
      flags = 0;
# 639 "/tools/toolchain/newlib/newlib/libc/stdio/vfscanf/../vfscanf.c"
    again:
      c = *fmt++;

      switch (c)
 {
 case '%':
 literal:
          lptr = fmt - nbytes;
          for (n = 0; n < nbytes; ++n)
            {
       if ((fp->_r <= 0 && __ssrefill_r(rptr, fp)))
         goto input_failure;
       if (*fp->_p != *lptr)
         goto match_failure;
       fp->_r--, fp->_p++;
       nread++;
              ++lptr;
            }
   continue;

 case '*':
   if ((flags & (0x08 | 0x04 | 0x01 | 0x02 | 0x10 | 0x80))
       || width)
     goto match_failure;
   flags |= 0x10;
   goto again;
 case 'l':
   if (flags & (0x08 | 0x04 | 0x01 | 0x02))
     goto match_failure;

   if (*fmt == 'l')
     {
       ++fmt;
       flags |= 0x02;
     }
   else

     flags |= 0x01;
   goto again;
 case 'L':
   if (flags & (0x08 | 0x04 | 0x01 | 0x02))
     goto match_failure;
   flags |= 0x02;
   goto again;
 case 'h':
   if (flags & (0x08 | 0x04 | 0x01 | 0x02))
     goto match_failure;

   if (*fmt == 'h')
     {
       ++fmt;
       flags |= 0x08;
     }
   else

     flags |= 0x04;
   goto again;

 case 'j':
   if (flags & (0x08 | 0x04 | 0x01 | 0x02))
     goto match_failure;
   if (sizeof (intmax_t) == sizeof (long))
     flags |= 0x01;
   else
     flags |= 0x02;
   goto again;
 case 't':
   if (flags & (0x08 | 0x04 | 0x01 | 0x02))
     goto match_failure;
   if (sizeof (ptrdiff_t) < sizeof (int))


     flags |= 0x04;
   else if (sizeof (ptrdiff_t) == sizeof (int))
                         ;
   else if (sizeof (ptrdiff_t) <= sizeof (long))
     flags |= 0x01;
   else




     flags |= 0x02;
   goto again;
 case 'z':
   if (flags & (0x08 | 0x04 | 0x01 | 0x02))
     goto match_failure;
   if (sizeof (size_t) < sizeof (int))

     flags |= 0x04;
   else if (sizeof (size_t) == sizeof (int))
                         ;
   else if (sizeof (size_t) <= sizeof (long))
     flags |= 0x01;
   else




     flags |= 0x02;
   goto again;


 case 'm':
   if (flags & (0x08 | 0x04 | 0x01 | 0x02 | 0x80))
     goto match_failure;
   do { if (!m_ptr) { m_ptr = (struct m_ptrs *) __builtin_alloca(sizeof *m_ptr); m_ptr->m_arr = ((void*)0); m_ptr->m_siz = 0; m_ptr->m_cnt = 0; } } while (0);
   flags |= 0x80;
   goto again;


 case '0':
 case '1':
 case '2':
 case '3':
 case '4':
 case '5':
 case '6':
 case '7':
 case '8':
 case '9':
   if (flags & (0x08 | 0x04 | 0x01 | 0x02 | 0x80))
     goto match_failure;
   width = width * 10 + c - '0';
   goto again;
# 788 "/tools/toolchain/newlib/newlib/libc/stdio/vfscanf/../vfscanf.c"
 case 'D':
   flags |= 0x01;

 case 'd':
   c = 3;
   ccfn = (unsigned long (*)(struct _reent *, const char *, char **, int))_strtol_r;
   base = 10;
   break;

 case 'i':
   c = 3;
   ccfn = (unsigned long (*)(struct _reent *, const char *, char **, int))_strtol_r;
   base = 0;
   break;

 case 'O':
   flags |= 0x01;

 case 'o':
   c = 3;
   ccfn = _strtoul_r;
   base = 8;
   break;

 case 'u':
   c = 3;
   ccfn = _strtoul_r;
   base = 10;
   break;

 case 'X':
 case 'x':
   flags |= 0x200;
   c = 3;
   ccfn = _strtoul_r;
   base = 16;
   break;
# 842 "/tools/toolchain/newlib/newlib/libc/stdio/vfscanf/../vfscanf.c"
 case 'S':
   flags |= 0x01;



 case 's':
   c = 2;
   break;

 case '[':
   fmt = (unsigned char *) __sccl (ccltab, (unsigned char *) fmt);
   flags |= 0x40;
   c = 1;
   break;


 case 'C':
   flags |= 0x01;



 case 'c':
   flags |= 0x40;
   c = 0;
   break;

 case 'p':
   flags |= 0x20 | 0x200;
   c = 3;
   ccfn = _strtoul_r;
   base = 16;
   break;

 case 'n':
   if (flags & 0x10)
     continue;

   if (flags & 0x08)
     {
       cp = (__builtin_va_arg(ap, char *));
       *cp = nread;
     }
   else

   if (flags & 0x04)
     {
       sp = (__builtin_va_arg(ap, short *));
       *sp = nread;
     }
   else if (flags & 0x01)
     {
       lp = (__builtin_va_arg(ap, long *));
       *lp = nread;
     }

   else if (flags & 0x02)
     {
       llp = (__builtin_va_arg(ap, long long*));
       *llp = nread;
     }

   else
     {
       ip = (__builtin_va_arg(ap, int *));
       *ip = nread;
     }
   continue;

 default:
   goto match_failure;
 }




      if ((fp->_r <= 0 && __ssrefill_r(rptr, fp)))
 goto input_failure;





      if ((flags & 0x40) == 0)
 {
   while (((((_ctype_)+sizeof(""[*fp->_p]))[(int)(*fp->_p)])&010))
     {
       nread++;
       if (--fp->_r > 0)
  fp->_p++;
       else
       if (__ssrefill_r (rptr, fp))
  goto input_failure;
     }





 }




      switch (c)
 {

 case 0:

   if (width == 0)
     width = 1;

          if (flags & 0x01)
            {

       wchar_t **wcp_p = ((void*)0);
       wchar_t *wcp0 = ((void*)0);
       size_t wcp_siz = 0;

              mbstate_t state;
              if (flags & 0x10)
                wcp = ((void*)0);

       else if (flags & 0x80)
  wcp_siz = ({ wcp_p = (__builtin_va_arg(ap, wchar_t **)); if (!wcp_p) goto match_failure; wcp0 = (wchar_t *) malloc ((32) * sizeof (wchar_t)); if (!wcp0) { nassigned = (-1); goto match_failure; } *wcp_p = wcp0; do { if (m_ptr->m_cnt >= m_ptr->m_siz) { void ***n = ((void*)0); if (m_ptr->m_siz + 8 > 0 && m_ptr->m_siz + 8 < (65535)) n = (void ***) realloc (m_ptr->m_arr, (m_ptr->m_siz + 8) * sizeof (void **)); if (!n) { nassigned = (-1); goto match_failure; } m_ptr->m_arr = n; m_ptr->m_siz += 8; } m_ptr->m_arr[m_ptr->m_cnt++] = (void **) (wcp_p); } while (0); wcp = wcp0; 32; });

              else
                wcp = (__builtin_va_arg(ap, wchar_t *));
              n = 0;
              while (width != 0)
                {
                  if (n == __locale_mb_cur_max())
                    goto input_failure;
                  buf[n++] = *fp->_p;
                  fp->_r -= 1;
                  fp->_p += 1;


    if (mbslen != 3 || state.__count != 4)
      memset (&state, 0, sizeof (mbstate_t));
                  if ((mbslen = _mbrtowc_r (rptr, wcp, buf, n, &state))
                                                         == (size_t)-1)
                    goto input_failure;
                  if (mbslen == 0 && !(flags & 0x10))
                    *wcp = L'\0';
                  if (mbslen != (size_t)-2)
                    {
                      nread += n;

        if (mbslen != 3 || state.__count != 4)
   width -= 1;
                      if (!(flags & 0x10))
   {

     wcp_siz = ({ size_t _nw = (wcp_siz); ptrdiff_t _dif = wcp - wcp0; if (wcp_p && ((sizeof (wchar_t) == 2 && _dif >= _nw - 1) || _dif >= _nw)) { wcp0 = (wchar_t *) realloc (wcp0, (_nw << 1) * sizeof (wchar_t)); if (!wcp0) { nassigned = (-1); goto match_failure; } wcp = wcp0 + _dif; *wcp_p = wcp0; _nw <<= 1; } _nw; });


     wcp++;
   }
                      n = 0;
                    }
                  if ((fp->_r <= 0 && __ssrefill_r(rptr, fp)))
             {
                      if (n != 0)
                        goto input_failure;
                      break;
                    }
                }

       ({ size_t _nw = (wcp - wcp0); if (wcp_p && _nw < wcp_siz) { wchar_t *_np_p = (wchar_t *) realloc (*wcp_p, _nw * sizeof (wchar_t)); if (_np_p) *wcp_p = _np_p; } });

              if (!(flags & 0x10))
                nassigned++;
            }
          else

   if (flags & 0x10)
     {
       size_t sum = 0;
       for (;;)
  {
    if ((n = fp->_r) < (int)width)
      {
        sum += n;
        width -= n;
        fp->_p += n;
        if (__ssrefill_r (rptr, fp))
   {
     if (sum == 0)
       goto input_failure;
     break;
   }
      }
    else
      {
        sum += width;
        fp->_r -= width;
        fp->_p += width;
        break;
      }
  }
       nread += sum;
     }
   else
     {
       size_t r;

       char **p_p = ((void*)0);
       if (flags & 0x80)
  ({ p_p = (__builtin_va_arg(ap, char **)); if (!p_p) goto match_failure; p0 = (char *) malloc ((width) * sizeof (char)); if (!p0) { nassigned = (-1); goto match_failure; } *p_p = p0; do { if (m_ptr->m_cnt >= m_ptr->m_siz) { void ***n = ((void*)0); if (m_ptr->m_siz + 8 > 0 && m_ptr->m_siz + 8 < (65535)) n = (void ***) realloc (m_ptr->m_arr, (m_ptr->m_siz + 8) * sizeof (void **)); if (!n) { nassigned = (-1); goto match_failure; } m_ptr->m_arr = n; m_ptr->m_siz += 8; } m_ptr->m_arr[m_ptr->m_cnt++] = (void **) (p_p); } while (0); p = p0; width; });
       else

  p = (__builtin_va_arg(ap, char *));
       r = _sfread_r (rptr, p, 1, width, fp);
       if (r == 0)
  goto input_failure;

       ({ size_t _nw = (r); if (p_p && _nw < width) { char *_np_p = (char *) realloc (*p_p, _nw * sizeof (char)); if (_np_p) *p_p = _np_p; } });

       nread += r;
       nassigned++;
     }
   break;

 case 1:

   if (width == 0)
     width = (4294967295U);


   if (flags & 0x01)
     {

       wchar_t **wcp_p = ((void*)0);
       wchar_t *wcp0 = ((void*)0);
       size_t wcp_siz = 0;

              mbstate_t state;
              if (flags & 0x10)
                wcp = &wc;

       else if (flags & 0x80)
  wcp_siz = ({ wcp_p = (__builtin_va_arg(ap, wchar_t **)); if (!wcp_p) goto match_failure; wcp0 = (wchar_t *) malloc ((32) * sizeof (wchar_t)); if (!wcp0) { nassigned = (-1); goto match_failure; } *wcp_p = wcp0; do { if (m_ptr->m_cnt >= m_ptr->m_siz) { void ***n = ((void*)0); if (m_ptr->m_siz + 8 > 0 && m_ptr->m_siz + 8 < (65535)) n = (void ***) realloc (m_ptr->m_arr, (m_ptr->m_siz + 8) * sizeof (void **)); if (!n) { nassigned = (-1); goto match_failure; } m_ptr->m_arr = n; m_ptr->m_siz += 8; } m_ptr->m_arr[m_ptr->m_cnt++] = (void **) (wcp_p); } while (0); wcp = wcp0; 32; });

              else
  wcp = (__builtin_va_arg(ap, wchar_t *));
              n = 0;
              while (width != 0) {
                  if (n == __locale_mb_cur_max())
                    goto input_failure;
                  buf[n++] = *fp->_p;
                  fp->_r -= 1;
                  fp->_p += 1;


    if (mbslen != 3 || state.__count != 4)
      memset (&state, 0, sizeof (mbstate_t));
                  if ((mbslen = _mbrtowc_r (rptr, wcp, buf, n, &state))
                                                        == (size_t)-1)
                    goto input_failure;
                  if (mbslen == 0)
                    *wcp = L'\0';
                  if (mbslen != (size_t)-2)
                    {
                      if (!ccltab[__wctob (rptr, *wcp)])
                        {
                          while (n != 0)
                            _sungetc_r (rptr, (unsigned char) buf[--n], fp);
                          break;
                        }
                      nread += n;

        if (mbslen != 3 || state.__count != 4)
   width -= 1;
                      if ((flags & 0x10) == 0)
   {
     wcp += 1;

     wcp_siz = ({ size_t _nw = (wcp_siz); ptrdiff_t _dif = wcp - wcp0; if (wcp_p && ((sizeof (wchar_t) == 2 && _dif >= _nw - 1) || _dif >= _nw)) { wcp0 = (wchar_t *) realloc (wcp0, (_nw << 1) * sizeof (wchar_t)); if (!wcp0) { nassigned = (-1); goto match_failure; } wcp = wcp0 + _dif; *wcp_p = wcp0; _nw <<= 1; } _nw; });


   }
                      n = 0;
                    }
                  if ((fp->_r <= 0 && __ssrefill_r(rptr, fp)))
                    {
                      if (n != 0)
                        goto input_failure;
                      break;
                    }
                }
              if (!(flags & 0x10))
                {
                  *wcp = L'\0';

    ({ size_t _nw = (wcp - wcp0 + 1); if (wcp_p && _nw < wcp_siz) { wchar_t *_np_p = (wchar_t *) realloc (*wcp_p, _nw * sizeof (wchar_t)); if (_np_p) *wcp_p = _np_p; } });

                  nassigned++;
                }
     }
   else

   if (flags & 0x10)
     {
       n = 0;
       while (ccltab[*fp->_p])
  {
    n++, fp->_r--, fp->_p++;
    if (--width == 0)
      break;
    if ((fp->_r <= 0 && __ssrefill_r(rptr, fp)))
      {
        if (n == 0)
   goto input_failure;
        break;
      }
  }
       if (n == 0)
  goto match_failure;
       nread += n;
     }
   else
     {

       char **p_p = ((void*)0);
       size_t p_siz = 0;

       if (flags & 0x80)
  p_siz = ({ p_p = (__builtin_va_arg(ap, char **)); if (!p_p) goto match_failure; p0 = (char *) malloc ((32) * sizeof (char)); if (!p0) { nassigned = (-1); goto match_failure; } *p_p = p0; do { if (m_ptr->m_cnt >= m_ptr->m_siz) { void ***n = ((void*)0); if (m_ptr->m_siz + 8 > 0 && m_ptr->m_siz + 8 < (65535)) n = (void ***) realloc (m_ptr->m_arr, (m_ptr->m_siz + 8) * sizeof (void **)); if (!n) { nassigned = (-1); goto match_failure; } m_ptr->m_arr = n; m_ptr->m_siz += 8; } m_ptr->m_arr[m_ptr->m_cnt++] = (void **) (p_p); } while (0); p = p0; 32; });
       else

  p0 = p = (__builtin_va_arg(ap, char *));
       while (ccltab[*fp->_p])
  {
    fp->_r--;
    *p++ = *fp->_p++;

    p_siz = ({ size_t _nw = (p_siz); ptrdiff_t _dif = p - p0; if (p_p && ((sizeof (char) == 2 && _dif >= _nw - 1) || _dif >= _nw)) { p0 = (char *) realloc (p0, (_nw << 1) * sizeof (char)); if (!p0) { nassigned = (-1); goto match_failure; } p = p0 + _dif; *p_p = p0; _nw <<= 1; } _nw; });

    if (--width == 0)
      break;
    if ((fp->_r <= 0 && __ssrefill_r(rptr, fp)))
      {
        if (p == p0)
   goto input_failure;
        break;
      }
  }
       n = p - p0;
       if (n == 0)
  goto match_failure;
       *p = 0;

       ({ size_t _nw = (n + 1); if (p_p && _nw < p_siz) { char *_np_p = (char *) realloc (*p_p, _nw * sizeof (char)); if (_np_p) *p_p = _np_p; } });

       nassigned++;
       nread += n;
     }
   break;

 case 2:

   if (width == 0)
     width = (4294967295U);

          if (flags & 0x01)
            {

       wchar_t **wcp_p = ((void*)0);
       wchar_t *wcp0 = ((void*)0);
       size_t wcp_siz = 0;


              mbstate_t state;
              if (flags & 0x10)
                wcp = &wc;

       else if (flags & 0x80)
  wcp_siz = ({ wcp_p = (__builtin_va_arg(ap, wchar_t **)); if (!wcp_p) goto match_failure; wcp0 = (wchar_t *) malloc ((32) * sizeof (wchar_t)); if (!wcp0) { nassigned = (-1); goto match_failure; } *wcp_p = wcp0; do { if (m_ptr->m_cnt >= m_ptr->m_siz) { void ***n = ((void*)0); if (m_ptr->m_siz + 8 > 0 && m_ptr->m_siz + 8 < (65535)) n = (void ***) realloc (m_ptr->m_arr, (m_ptr->m_siz + 8) * sizeof (void **)); if (!n) { nassigned = (-1); goto match_failure; } m_ptr->m_arr = n; m_ptr->m_siz += 8; } m_ptr->m_arr[m_ptr->m_cnt++] = (void **) (wcp_p); } while (0); wcp = wcp0; 32; });

              else
  wcp = (__builtin_va_arg(ap, wchar_t *));
              n = 0;
              while (!((((_ctype_)+sizeof(""[*fp->_p]))[(int)(*fp->_p)])&010) && width != 0)
                {
                  if (n == __locale_mb_cur_max())
                    goto input_failure;
                  buf[n++] = *fp->_p;
                  fp->_r -= 1;
                  fp->_p += 1;


    if (mbslen != 3 || state.__count != 4)
      memset (&state, 0, sizeof (mbstate_t));
                  if ((mbslen = _mbrtowc_r (rptr, wcp, buf, n, &state))
                                                        == (size_t)-1)
                    goto input_failure;
                  if (mbslen == 0)
                    *wcp = L'\0';
                  if (mbslen != (size_t)-2)
                    {
                      if (iswspace(*wcp))
                        {
                          while (n != 0)
                            _sungetc_r (rptr, (unsigned char) buf[--n], fp);
                          break;
                        }
                      nread += n;

        if (mbslen != 3 || state.__count != 4)
   width -= 1;
                      if ((flags & 0x10) == 0)
   {
     wcp += 1;

     wcp_siz = ({ size_t _nw = (wcp_siz); ptrdiff_t _dif = wcp - wcp0; if (wcp_p && ((sizeof (wchar_t) == 2 && _dif >= _nw - 1) || _dif >= _nw)) { wcp0 = (wchar_t *) realloc (wcp0, (_nw << 1) * sizeof (wchar_t)); if (!wcp0) { nassigned = (-1); goto match_failure; } wcp = wcp0 + _dif; *wcp_p = wcp0; _nw <<= 1; } _nw; });


   }
                      n = 0;
                    }
                  if ((fp->_r <= 0 && __ssrefill_r(rptr, fp)))
                    {
                      if (n != 0)
                        goto input_failure;
                      break;
                    }
                }
              if (!(flags & 0x10))
                {
                  *wcp = L'\0';

    ({ size_t _nw = (wcp - wcp0 + 1); if (wcp_p && _nw < wcp_siz) { wchar_t *_np_p = (wchar_t *) realloc (*wcp_p, _nw * sizeof (wchar_t)); if (_np_p) *wcp_p = _np_p; } });

                  nassigned++;
                }
            }
          else

   if (flags & 0x10)
     {
       n = 0;
       while (!((((_ctype_)+sizeof(""[*fp->_p]))[(int)(*fp->_p)])&010))
  {
    n++, fp->_r--, fp->_p++;
    if (--width == 0)
      break;
    if ((fp->_r <= 0 && __ssrefill_r(rptr, fp)))
      break;
  }
       nread += n;
     }
   else
     {

       char **p_p = ((void*)0);
       size_t p_siz = 0;

       if (flags & 0x80)
  p_siz = ({ p_p = (__builtin_va_arg(ap, char **)); if (!p_p) goto match_failure; p0 = (char *) malloc ((32) * sizeof (char)); if (!p0) { nassigned = (-1); goto match_failure; } *p_p = p0; do { if (m_ptr->m_cnt >= m_ptr->m_siz) { void ***n = ((void*)0); if (m_ptr->m_siz + 8 > 0 && m_ptr->m_siz + 8 < (65535)) n = (void ***) realloc (m_ptr->m_arr, (m_ptr->m_siz + 8) * sizeof (void **)); if (!n) { nassigned = (-1); goto match_failure; } m_ptr->m_arr = n; m_ptr->m_siz += 8; } m_ptr->m_arr[m_ptr->m_cnt++] = (void **) (p_p); } while (0); p = p0; 32; });
       else

  p0 = (__builtin_va_arg(ap, char *));
       p = p0;
       while (!((((_ctype_)+sizeof(""[*fp->_p]))[(int)(*fp->_p)])&010))
  {
    fp->_r--;
    *p++ = *fp->_p++;

    p_siz = ({ size_t _nw = (p_siz); ptrdiff_t _dif = p - p0; if (p_p && ((sizeof (char) == 2 && _dif >= _nw - 1) || _dif >= _nw)) { p0 = (char *) realloc (p0, (_nw << 1) * sizeof (char)); if (!p0) { nassigned = (-1); goto match_failure; } p = p0 + _dif; *p_p = p0; _nw <<= 1; } _nw; });

    if (--width == 0)
      break;
    if ((fp->_r <= 0 && __ssrefill_r(rptr, fp)))
      break;
  }
       *p = 0;

       ({ size_t _nw = (p - p0 + 1); if (p_p && _nw < p_siz) { char *_np_p = (char *) realloc (*p_p, _nw * sizeof (char)); if (_np_p) *p_p = _np_p; } });

       nread += p - p0;
       nassigned++;
     }
   continue;

 case 3:
 {

   unsigned width_left = 0;
   int skips = 0;




   if (width - 1 > sizeof (buf) - 2)

     {
       width_left = width - (sizeof (buf) - 1);
       width = sizeof (buf) - 1;
     }
   flags |= 0x80 | 0x100 | 0x400 | 0x800;
   for (p = buf; width; width--)
     {
       c = *fp->_p;




       switch (c)
  {
# 1360 "/tools/toolchain/newlib/newlib/libc/stdio/vfscanf/../vfscanf.c"
  case '0':
    if (! (flags & 0x800))
      goto ok;
    if (base == 0)
      {
        base = 8;
        flags |= 0x200;
      }
    if (flags & 0x400)
      {
        flags &= ~(0x80 | 0x400 | 0x100);
        goto ok;
      }
    flags &= ~(0x80 | 0x200 | 0x100);
    if (width_left)
      {
        width_left--;
        width++;
      }
    ++skips;
    goto skip;


  case '1':
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
    base = basefix[base];
    flags &= ~(0x80 | 0x200 | 0x100 | 0x800);
    goto ok;


  case '8':
  case '9':
    base = basefix[base];
    if (base <= 8)
      break;
    flags &= ~(0x80 | 0x200 | 0x100 | 0x800);
    goto ok;


  case 'A':
  case 'B':
  case 'C':
  case 'D':
  case 'E':
  case 'F':
  case 'a':
  case 'b':
  case 'c':
  case 'd':
  case 'e':
  case 'f':

    if (base <= 10)
      break;
    flags &= ~(0x80 | 0x200 | 0x100 | 0x800);
    goto ok;


  case '+':
  case '-':
    if (flags & 0x80)
      {
        flags &= ~0x80;
        goto ok;
      }
    break;


  case 'x':
  case 'X':
    if ((flags & (0x200 | 0x400)) == 0x200)
      {
        base = 16;
        flags &= ~0x200;



        flags |= 0x400 | 0x100;
        goto ok;
      }
    break;
  }





       break;
     ok:



       *p++ = c;
     skip:
       if (--fp->_r > 0)
  fp->_p++;
       else
       if (__ssrefill_r (rptr, fp))
  break;
     }
# 1473 "/tools/toolchain/newlib/newlib/libc/stdio/vfscanf/../vfscanf.c"
   if (flags & 0x100)
     {
       if (p > buf)
  _sungetc_r (rptr, *--p, fp);
       if (p == buf)
  goto match_failure;
     }
   if ((flags & 0x10) == 0)
     {
       unsigned long res;

       *p = 0;
       res = (*ccfn) (rptr, buf, (char **) ((void*)0), base);
       if (flags & 0x20)
  {
    void **vp = (__builtin_va_arg(ap, void **));

    if (sizeof (uintptr_t) > sizeof (unsigned long))
      {
        u_long_long resll;
        resll = _strtoull_r (rptr, buf, (char **) ((void*)0), base);
        *vp = (void *) (uintptr_t) resll;
      }
    else

      *vp = (void *) (uintptr_t) res;
  }

       else if (flags & 0x08)
  {
    cp = (__builtin_va_arg(ap, char *));
    *cp = res;
  }

       else if (flags & 0x04)
  {
    sp = (__builtin_va_arg(ap, short *));
    *sp = res;
  }
       else if (flags & 0x01)
  {
    lp = (__builtin_va_arg(ap, long *));
    *lp = res;
  }

       else if (flags & 0x02)
  {
    u_long_long resll;
    if (ccfn == _strtoul_r)
      resll = _strtoull_r (rptr, buf, (char **) ((void*)0), base);
    else
      resll = _strtoll_r (rptr, buf, (char **) ((void*)0), base);
    llp = (__builtin_va_arg(ap, long long*));
    *llp = resll;
  }

       else
  {
    ip = (__builtin_va_arg(ap, int *));
    *ip = res;
  }
       nassigned++;
     }
   nread += p - buf + skips;
   break;
 }
# 1898 "/tools/toolchain/newlib/newlib/libc/stdio/vfscanf/../vfscanf.c"
 }
    }
input_failure:




  nassigned = nassigned && !(fp->_flags & 0x0040) ? nassigned : (-1);
match_failure:
all_done:

  {};

  do { if (m_ptr) { if (nassigned == (-1)) { int i; for (i = 0; i < m_ptr->m_cnt; ++i) { free (*m_ptr->m_arr[i]); *m_ptr->m_arr[i] = ((void*)0); } } if (m_ptr->m_arr) free (m_ptr->m_arr); } } while (0);

  return nassigned;
}
# 29 "/tools/toolchain/newlib/newlib/libc/stdio/vfscanf/svfiscanf.c" 2

