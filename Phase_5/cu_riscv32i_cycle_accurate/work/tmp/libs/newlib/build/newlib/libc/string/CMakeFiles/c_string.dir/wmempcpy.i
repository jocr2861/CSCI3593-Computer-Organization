# 1 "/tools/toolchain/newlib/newlib/libc/string/wmempcpy.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 325 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "/tools/toolchain/newlib/newlib/libc/string/wmempcpy.c" 2
# 32 "/tools/toolchain/newlib/newlib/libc/string/wmempcpy.c"
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
# 33 "/tools/toolchain/newlib/newlib/libc/string/wmempcpy.c" 2
# 1 "/tools/toolchain/newlib/newlib/libc/include/string.h" 1 3
# 11 "/tools/toolchain/newlib/newlib/libc/include/string.h" 3
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
# 12 "/tools/toolchain/newlib/newlib/libc/include/string.h" 2 3
# 1 "/tools/toolchain/newlib/newlib/libc/include/sys/cdefs.h" 1 3
# 47 "/tools/toolchain/newlib/newlib/libc/include/sys/cdefs.h" 3
# 1 "/home/project/cu_riscv32i_cycle_accurate/work/ia/sdk/lib/clang/9.0.1/include/stddef.h" 1 3
# 48 "/tools/toolchain/newlib/newlib/libc/include/sys/cdefs.h" 2 3
# 13 "/tools/toolchain/newlib/newlib/libc/include/string.h" 2 3




# 1 "/home/project/cu_riscv32i_cycle_accurate/work/ia/sdk/lib/clang/9.0.1/include/stddef.h" 1 3
# 18 "/tools/toolchain/newlib/newlib/libc/include/string.h" 2 3


# 1 "/tools/toolchain/newlib/newlib/libc/include/sys/_locale.h" 1 3








struct __locale_t;
typedef struct __locale_t *locale_t;
# 21 "/tools/toolchain/newlib/newlib/libc/include/string.h" 2 3



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


void * mempcpy (void *, const void *, size_t);
void * memmem (const void *, size_t, const void *, size_t);
void * memrchr (const void *, int, size_t);
void * rawmemchr (const void *, int);


char *stpcpy (char *restrict, const char *restrict);
char *stpncpy (char *restrict, const char *restrict, size_t);


char *strcasestr (const char *, const char *);
char *strchrnul (const char *, int);


char *strdup (const char *) __attribute__((__malloc__)) __attribute__((__warn_unused_result__));

char *_strdup_r (struct _reent *, const char *);

char *strndup (const char *, size_t) __attribute__((__malloc__)) __attribute__((__warn_unused_result__));

char *_strndup_r (struct _reent *, const char *, size_t);






char *strerror_r (int, char *, size_t);
# 112 "/tools/toolchain/newlib/newlib/libc/include/string.h" 3
char * _strerror_r (struct _reent *, int, int, int *);


size_t strlcat (char *, const char *, size_t);
size_t strlcpy (char *, const char *, size_t);


size_t strnlen (const char *, size_t);


char *strsep (char **, const char *);


char *strnstr(const char *, const char *, size_t) __attribute__((__pure__));



char *strlwr (char *);
char *strupr (char *);



char *strsignal (int __signo);







int strverscmp (const char *, const char *);
# 172 "/tools/toolchain/newlib/newlib/libc/include/string.h" 3
char *__attribute__((__nonnull__ (1))) basename (const char *) __asm__("" "__gnu_basename");



# 1 "/tools/toolchain/newlib/newlib/libc/include/sys/string.h" 1 3
# 176 "/tools/toolchain/newlib/newlib/libc/include/string.h" 2 3
# 34 "/tools/toolchain/newlib/newlib/libc/string/wmempcpy.c" 2
# 1 "/tools/toolchain/newlib/newlib/libc/include/wchar.h" 1 3
# 12 "/tools/toolchain/newlib/newlib/libc/include/wchar.h" 3
# 1 "/home/project/cu_riscv32i_cycle_accurate/work/ia/sdk/lib/clang/9.0.1/include/stddef.h" 1 3
# 13 "/tools/toolchain/newlib/newlib/libc/include/wchar.h" 2 3
# 22 "/tools/toolchain/newlib/newlib/libc/include/wchar.h" 3
# 1 "/home/project/cu_riscv32i_cycle_accurate/work/ia/sdk/lib/clang/9.0.1/include/stdarg.h" 1 3
# 14 "/home/project/cu_riscv32i_cycle_accurate/work/ia/sdk/lib/clang/9.0.1/include/stdarg.h" 3
typedef __builtin_va_list va_list;
# 32 "/home/project/cu_riscv32i_cycle_accurate/work/ia/sdk/lib/clang/9.0.1/include/stdarg.h" 3
typedef __builtin_va_list __gnuc_va_list;
# 23 "/tools/toolchain/newlib/newlib/libc/include/wchar.h" 2 3





typedef __gnuc_va_list va_list;
# 78 "/tools/toolchain/newlib/newlib/libc/include/wchar.h" 3
typedef __FILE FILE;






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

size_t wcsftime_l (wchar_t *restrict, size_t, const wchar_t *restrict,
      const struct tm *restrict, locale_t);

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

int wcswidth (const wchar_t *, size_t);

size_t wcsxfrm (wchar_t *restrict, const wchar_t *restrict,
    size_t);

extern int wcscasecmp_l (const wchar_t *, const wchar_t *, locale_t);
extern int wcsncasecmp_l (const wchar_t *, const wchar_t *, size_t, locale_t);
extern int wcscoll_l (const wchar_t *, const wchar_t *, locale_t);
extern size_t wcsxfrm_l (wchar_t *restrict, const wchar_t *restrict, size_t,
    locale_t);



int wcwidth (const wchar_t);

wchar_t *wmemchr (const wchar_t *, wchar_t, size_t);
int wmemcmp (const wchar_t *, const wchar_t *, size_t);
wchar_t *wmemcpy (wchar_t *restrict, const wchar_t *restrict,
     size_t);
wchar_t *wmemmove (wchar_t *, const wchar_t *, size_t);

wchar_t *wmempcpy (wchar_t *restrict, const wchar_t *restrict,
     size_t);

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



long wcstol_l (const wchar_t *restrict, wchar_t **restrict, int, locale_t);
long long wcstoll_l (const wchar_t *restrict, wchar_t **restrict, int,
       locale_t);
unsigned long wcstoul_l (const wchar_t *restrict, wchar_t **restrict, int,
    locale_t);
unsigned long long wcstoull_l (const wchar_t *restrict, wchar_t **restrict,
          int, locale_t);
double wcstod_l (const wchar_t *, wchar_t **, locale_t);
float wcstof_l (const wchar_t *, wchar_t **, locale_t);
long double wcstold_l (const wchar_t *, wchar_t **, locale_t);


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


wint_t fgetwc_unlocked (__FILE *);
wchar_t *fgetws_unlocked (wchar_t *restrict, int, __FILE *restrict);
wint_t fputwc_unlocked (wchar_t, __FILE *);
int fputws_unlocked (const wchar_t *restrict, __FILE *restrict);
wint_t getwc_unlocked (__FILE *);
wint_t getwchar_unlocked (void);
wint_t putwc_unlocked (wchar_t, __FILE *);
wint_t putwchar_unlocked (wchar_t);



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
# 35 "/tools/toolchain/newlib/newlib/libc/string/wmempcpy.c" 2

wchar_t *
wmempcpy (wchar_t *restrict d,
 const wchar_t *restrict s,
 size_t n)
{
  return (wchar_t *) mempcpy (d, s, n * sizeof (wchar_t));
}
