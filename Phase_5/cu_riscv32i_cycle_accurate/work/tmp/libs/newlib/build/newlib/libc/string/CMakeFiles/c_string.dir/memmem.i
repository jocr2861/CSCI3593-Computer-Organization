# 1 "/tools/toolchain/newlib/newlib/libc/string/memmem.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 325 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "/tools/toolchain/newlib/newlib/libc/string/memmem.c" 2
# 62 "/tools/toolchain/newlib/newlib/libc/string/memmem.c"
# 1 "/tools/toolchain/newlib/newlib/libc/include/string.h" 1 3
# 10 "/tools/toolchain/newlib/newlib/libc/include/string.h" 3
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
# 11 "/tools/toolchain/newlib/newlib/libc/include/string.h" 2 3
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
# 63 "/tools/toolchain/newlib/newlib/libc/string/memmem.c" 2
# 1 "/tools/toolchain/newlib/newlib/libc/include/stdint.h" 1 3
# 13 "/tools/toolchain/newlib/newlib/libc/include/stdint.h" 3
# 1 "/tools/toolchain/newlib/newlib/libc/include/sys/_intsup.h" 1 3
# 14 "/tools/toolchain/newlib/newlib/libc/include/stdint.h" 2 3
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
# 15 "/tools/toolchain/newlib/newlib/libc/include/stdint.h" 2 3






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
# 64 "/tools/toolchain/newlib/newlib/libc/string/memmem.c" 2
# 98 "/tools/toolchain/newlib/newlib/libc/string/memmem.c"
# 1 "/tools/toolchain/newlib/newlib/libc/string/./str-two-way.h" 1
# 32 "/tools/toolchain/newlib/newlib/libc/string/./str-two-way.h"
# 1 "/tools/toolchain/newlib/newlib/libc/include/limits.h" 1 3





# 1 "/tools/toolchain/newlib/newlib/libc/include/sys/syslimits.h" 1 3
# 7 "/tools/toolchain/newlib/newlib/libc/include/limits.h" 2 3
# 132 "/tools/toolchain/newlib/newlib/libc/include/limits.h" 3
# 1 "/home/project/cu_riscv32i_cycle_accurate/work/ia/sdk/lib/clang/9.0.1/include/limits.h" 1 3
# 133 "/tools/toolchain/newlib/newlib/libc/include/limits.h" 2 3
# 33 "/tools/toolchain/newlib/newlib/libc/string/./str-two-way.h" 2
# 91 "/tools/toolchain/newlib/newlib/libc/string/./str-two-way.h"
static size_t
critical_factorization (const unsigned char *needle, size_t needle_len,
   size_t *period)
{

  size_t max_suffix, max_suffix_rev;
  size_t j;
  size_t k;
  size_t p;
  unsigned char a, b;
# 112 "/tools/toolchain/newlib/newlib/libc/string/./str-two-way.h"
  max_suffix = (4294967295U);
  j = 0;
  k = p = 1;
  while (j + k < needle_len)
    {
      a = needle[j + k];
      b = needle[(size_t)(max_suffix + k)];
      if (a < b)
 {

   j += k;
   k = 1;
   p = j - max_suffix;
 }
      else if (a == b)
 {

   if (k != p)
     ++k;
   else
     {
       j += p;
       k = 1;
     }
 }
      else
 {

   max_suffix = j++;
   k = p = 1;
 }
    }
  *period = p;


  max_suffix_rev = (4294967295U);
  j = 0;
  k = p = 1;
  while (j + k < needle_len)
    {
      a = needle[j + k];
      b = needle[max_suffix_rev + k];
      if (b < a)
 {

   j += k;
   k = 1;
   p = j - max_suffix_rev;
 }
      else if (a == b)
 {

   if (k != p)
     ++k;
   else
     {
       j += p;
       k = 1;
     }
 }
      else
 {

   max_suffix_rev = j++;
   k = p = 1;
 }
    }



  if (max_suffix_rev + 1 < max_suffix + 1)
    return max_suffix + 1;
  *period = p;
  return max_suffix_rev + 1;
}
# 198 "/tools/toolchain/newlib/newlib/libc/string/./str-two-way.h"
static void *
two_way_short_needle (const unsigned char *haystack, size_t haystack_len,
        const unsigned char *needle, size_t needle_len)
{
  size_t i;
  size_t j;
  size_t period;
  size_t suffix;




  suffix = critical_factorization (needle, needle_len, &period);



  if (memcmp (needle, needle + period, suffix) == 0)
    {



      size_t memory = 0;
      j = 0;
      while (((j) <= (haystack_len) - (needle_len)))
 {

   i = ((suffix < memory) ? (memory) : (suffix));
   while (i < needle_len && (needle[i]
        == haystack[i + j]))
     ++i;
   if (needle_len <= i)
     {

       i = suffix - 1;
       while (memory < i + 1 && (needle[i]
     == haystack[i + j]))
  --i;
       if (i + 1 < memory + 1)
  return (void *) (haystack + j);


       j += period;
       memory = needle_len - period;
     }
   else
     {
       j += i - suffix + 1;
       memory = 0;
     }
 }
    }
  else
    {


      period = ((suffix < needle_len - suffix) ? (needle_len - suffix) : (suffix)) + 1;
      j = 0;
      while (((j) <= (haystack_len) - (needle_len)))
 {

   i = suffix;
   while (i < needle_len && (needle[i]
        == haystack[i + j]))
     ++i;
   if (needle_len <= i)
     {

       i = suffix - 1;
       while (i != (4294967295U) && (needle[i]
           == haystack[i + j]))
  --i;
       if (i == (4294967295U))
  return (void *) (haystack + j);
       j += period;
     }
   else
     j += i - suffix + 1;
 }
    }
  return ((void*)0);
}
# 292 "/tools/toolchain/newlib/newlib/libc/string/./str-two-way.h"
__attribute__ ((__noinline__)) static void *
two_way_long_needle (const unsigned char *haystack, size_t haystack_len,
       const unsigned char *needle, size_t needle_len)
{
  size_t i;
  size_t j;
  size_t period;
  size_t suffix;
  size_t shift_table[1U << 8];




  suffix = critical_factorization (needle, needle_len, &period);





  for (i = 0; i < 1U << 8; i++)
    shift_table[i] = needle_len;
  for (i = 0; i < needle_len; i++)
    shift_table[needle[i]] = needle_len - i - 1;



  if (memcmp (needle, needle + period, suffix) == 0)
    {



      size_t memory = 0;
      size_t shift;
      j = 0;
      while (((j) <= (haystack_len) - (needle_len)))
 {


   shift = shift_table[haystack[j + needle_len - 1]];
   if (0 < shift)
     {
       if (memory && shift < period)
  {



    shift = needle_len - period;
  }
       memory = 0;
       j += shift;
       continue;
     }


   i = ((suffix < memory) ? (memory) : (suffix));
   while (i < needle_len - 1 && (needle[i]
     == haystack[i + j]))
     ++i;
   if (needle_len - 1 <= i)
     {

       i = suffix - 1;
       while (memory < i + 1 && (needle[i]
     == haystack[i + j]))
  --i;
       if (i + 1 < memory + 1)
  return (void *) (haystack + j);


       j += period;
       memory = needle_len - period;
     }
   else
     {
       j += i - suffix + 1;
       memory = 0;
     }
 }
    }
  else
    {


      size_t shift;
      period = ((suffix < needle_len - suffix) ? (needle_len - suffix) : (suffix)) + 1;
      j = 0;
      while (((j) <= (haystack_len) - (needle_len)))
 {


   shift = shift_table[haystack[j + needle_len - 1]];
   if (0 < shift)
     {
       j += shift;
       continue;
     }


   i = suffix;
   while (i < needle_len - 1 && (needle[i]
     == haystack[i + j]))
     ++i;
   if (needle_len - 1 <= i)
     {

       i = suffix - 1;
       while (i != (4294967295U) && (needle[i]
           == haystack[i + j]))
  --i;
       if (i == (4294967295U))
  return (void *) (haystack + j);
       j += period;
     }
   else
     j += i - suffix + 1;
 }
    }
  return ((void*)0);
}
# 99 "/tools/toolchain/newlib/newlib/libc/string/memmem.c" 2
# 113 "/tools/toolchain/newlib/newlib/libc/string/memmem.c"
void *
memmem (const void *haystack, size_t hs_len, const void *needle, size_t ne_len)
{
  const unsigned char *hs = haystack;
  const unsigned char *ne = needle;

  if (ne_len == 0)
    return (void *) hs;
  if (ne_len == 1)
    return (void *) memchr (hs, ne[0], hs_len);


  if (hs_len < ne_len)
    return ((void*)0);

  const unsigned char *end = hs + hs_len - ne_len;

  if (ne_len == 2)
    {
      uint32_t nw = ne[0] << 16 | ne[1], hw = hs[0] << 16 | hs[1];
      for (hs++; hs <= end && hw != nw; )
 hw = hw << 16 | *++hs;
      return hw == nw ? (void *)(hs - 1) : ((void*)0);
    }


  if (__builtin_expect (ne_len > 256, 0))
    return two_way_long_needle (hs, hs_len, ne, ne_len);

  uint8_t shift[256];
  size_t tmp, shift1;
  size_t m1 = ne_len - 1;
  size_t offset = 0;
  int i;


  memset (shift, 0, sizeof (shift));
  for (i = 1; i < m1; i++)
    shift[(((size_t)(ne + i)[0] - ((size_t)(ne + i)[-1] << 3)) % sizeof (shift))] = i;
  shift1 = m1 - shift[(((size_t)(ne + m1)[0] - ((size_t)(ne + m1)[-1] << 3)) % sizeof (shift))];
  shift[(((size_t)(ne + m1)[0] - ((size_t)(ne + m1)[-1] << 3)) % sizeof (shift))] = m1;

  for ( ; hs <= end; )
    {

      do
 {
   hs += m1;
   tmp = shift[(((size_t)(hs)[0] - ((size_t)(hs)[-1] << 3)) % sizeof (shift))];
 }
      while (hs <= end && tmp == 0);



      hs -= tmp;
      if (tmp < m1)
 continue;



      if (m1 <= 15 || memcmp (hs + offset, ne + offset, sizeof (long)) == 0)
 {
   if (memcmp (hs, ne, m1) == 0)
     return (void *) hs;


   offset = (offset >= sizeof (long) ? offset : m1) - sizeof (long);
 }


      hs += shift1;
    }
  return ((void*)0);
}
