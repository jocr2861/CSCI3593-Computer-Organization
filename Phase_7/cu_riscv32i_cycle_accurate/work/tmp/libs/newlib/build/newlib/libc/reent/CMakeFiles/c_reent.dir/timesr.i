# 1 "/tools/toolchain/newlib/newlib/libc/reent/timesr.c"
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 325 "<built-in>" 3
# 1 "<command line>" 1
# 1 "<built-in>" 2
# 1 "/tools/toolchain/newlib/newlib/libc/reent/timesr.c" 2


# 1 "/tools/toolchain/newlib/newlib/libc/include/reent.h" 1 3
# 93 "/tools/toolchain/newlib/newlib/libc/include/reent.h" 3
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
# 4 "/tools/toolchain/newlib/newlib/libc/reent/timesr.c" 2
# 1 "/tools/toolchain/newlib/newlib/libc/include/time.h" 1 3
# 11 "/tools/toolchain/newlib/newlib/libc/include/time.h" 3
# 1 "/tools/toolchain/newlib/newlib/libc/include/sys/cdefs.h" 1 3
# 47 "/tools/toolchain/newlib/newlib/libc/include/sys/cdefs.h" 3
# 1 "/home/project/cu_riscv32i_cycle_accurate/work/ia/sdk/lib/clang/9.0.1/include/stddef.h" 1 3
# 48 "/tools/toolchain/newlib/newlib/libc/include/sys/cdefs.h" 2 3
# 12 "/tools/toolchain/newlib/newlib/libc/include/time.h" 2 3




# 1 "/home/project/cu_riscv32i_cycle_accurate/work/ia/sdk/lib/clang/9.0.1/include/stddef.h" 1 3
# 17 "/tools/toolchain/newlib/newlib/libc/include/time.h" 2 3


# 1 "/tools/toolchain/newlib/newlib/libc/include/machine/time.h" 1 3
# 20 "/tools/toolchain/newlib/newlib/libc/include/time.h" 2 3








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
# 29 "/tools/toolchain/newlib/newlib/libc/include/time.h" 2 3



# 1 "/tools/toolchain/newlib/newlib/libc/include/sys/_locale.h" 1 3








struct __locale_t;
typedef struct __locale_t *locale_t;
# 33 "/tools/toolchain/newlib/newlib/libc/include/time.h" 2 3




struct tm
{
  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;






};

clock_t clock (void);
double difftime (time_t _time2, time_t _time1);
time_t mktime (struct tm *_timeptr);
time_t time (time_t *_timer);

char *asctime (const struct tm *_tblock);
char *ctime (const time_t *_time);
struct tm *gmtime (const time_t *_timer);
struct tm *localtime (const time_t *_timer);

size_t strftime (char *restrict _s,
        size_t _maxsize, const char *restrict _fmt,
        const struct tm *restrict _t);


extern size_t strftime_l (char *restrict _s, size_t _maxsize,
     const char *restrict _fmt,
     const struct tm *restrict _t, locale_t _l);


char *asctime_r (const struct tm *restrict,
     char *restrict);
char *ctime_r (const time_t *, char *);
struct tm *gmtime_r (const time_t *restrict,
     struct tm *restrict);
struct tm *localtime_r (const time_t *restrict,
     struct tm *restrict);
# 101 "/tools/toolchain/newlib/newlib/libc/include/time.h" 3
void tzset (void);

void _tzset_r (struct _reent *);
# 134 "/tools/toolchain/newlib/newlib/libc/include/time.h" 3
extern long _timezone;
extern int _daylight;


extern char *_tzname[2];
# 5 "/tools/toolchain/newlib/newlib/libc/reent/timesr.c" 2
# 1 "/tools/toolchain/newlib/newlib/libc/include/sys/time.h" 1 3
# 52 "/tools/toolchain/newlib/newlib/libc/include/sys/time.h" 3
struct timezone {
 int tz_minuteswest;
 int tz_dsttime;
};
# 65 "/tools/toolchain/newlib/newlib/libc/include/sys/time.h" 3
struct bintime {
 time_t sec;
 uint64_t frac;
};

static __inline void
bintime_addx(struct bintime *_bt, uint64_t _x)
{
 uint64_t _u;

 _u = _bt->frac;
 _bt->frac += _x;
 if (_u > _bt->frac)
  _bt->sec++;
}

static __inline void
bintime_add(struct bintime *_bt, const struct bintime *_bt2)
{
 uint64_t _u;

 _u = _bt->frac;
 _bt->frac += _bt2->frac;
 if (_u > _bt->frac)
  _bt->sec++;
 _bt->sec += _bt2->sec;
}

static __inline void
bintime_sub(struct bintime *_bt, const struct bintime *_bt2)
{
 uint64_t _u;

 _u = _bt->frac;
 _bt->frac -= _bt2->frac;
 if (_u < _bt->frac)
  _bt->sec--;
 _bt->sec -= _bt2->sec;
}

static __inline void
bintime_mul(struct bintime *_bt, u_int _x)
{
 uint64_t _p1, _p2;

 _p1 = (_bt->frac & 0xffffffffull) * _x;
 _p2 = (_bt->frac >> 32) * _x + (_p1 >> 32);
 _bt->sec *= _x;
 _bt->sec += (_p2 >> 32);
 _bt->frac = (_p2 << 32) | (_p1 & 0xffffffffull);
}

static __inline void
bintime_shift(struct bintime *_bt, int _exp)
{

 if (_exp > 0) {
  _bt->sec <<= _exp;
  _bt->sec |= _bt->frac >> (64 - _exp);
  _bt->frac <<= _exp;
 } else if (_exp < 0) {
  _bt->frac >>= -_exp;
  _bt->frac |= (uint64_t)_bt->sec << (64 + _exp);
  _bt->sec >>= -_exp;
 }
}
# 146 "/tools/toolchain/newlib/newlib/libc/include/sys/time.h" 3
static __inline int
sbintime_getsec(sbintime_t _sbt)
{

 return (_sbt >> 32);
}

static __inline sbintime_t
bttosbt(const struct bintime _bt)
{

 return (((sbintime_t)_bt.sec << 32) + (_bt.frac >> 32));
}

static __inline struct bintime
sbttobt(sbintime_t _sbt)
{
 struct bintime _bt;

 _bt.sec = _sbt >> 32;
 _bt.frac = _sbt << 32;
 return (_bt);
}
# 191 "/tools/toolchain/newlib/newlib/libc/include/sys/time.h" 3
static __inline int64_t
sbttons(sbintime_t _sbt)
{
 uint64_t ns;

 ns = _sbt;
 if (ns >= ((sbintime_t)1 << 32))
  ns = (ns >> 32) * 1000000000;
 else
  ns = 0;

 return (ns + (1000000000 * (_sbt & 0xffffffffu) >> 32));
}

static __inline sbintime_t
nstosbt(int64_t _ns)
{
 sbintime_t sb = 0;

 if (_ns >= ((sbintime_t)1 << 32)) {
  sb = (_ns / 1000000000) * ((sbintime_t)1 << 32);
  _ns = _ns % 1000000000;
 }

 sb += ((_ns * 9223372037ull) + 0x7fffffff) >> 31;
 return (sb);
}

static __inline int64_t
sbttous(sbintime_t _sbt)
{

 return ((1000000 * _sbt) >> 32);
}

static __inline sbintime_t
ustosbt(int64_t _us)
{
 sbintime_t sb = 0;

 if (_us >= ((sbintime_t)1 << 32)) {
  sb = (_us / 1000000) * ((sbintime_t)1 << 32);
  _us = _us % 1000000;
 }

 sb += ((_us * 9223372036855ull) + 0x7fffffff) >> 31;
 return (sb);
}

static __inline int64_t
sbttoms(sbintime_t _sbt)
{

 return ((1000 * _sbt) >> 32);
}

static __inline sbintime_t
mstosbt(int64_t _ms)
{
 sbintime_t sb = 0;

 if (_ms >= ((sbintime_t)1 << 32)) {
  sb = (_ms / 1000) * ((sbintime_t)1 << 32);
  _ms = _ms % 1000;
 }

 sb += ((_ms * 9223372036854776ull) + 0x7fffffff) >> 31;
 return (sb);
}
# 275 "/tools/toolchain/newlib/newlib/libc/include/sys/time.h" 3
static __inline void
bintime2timespec(const struct bintime *_bt, struct timespec *_ts)
{

 _ts->tv_sec = _bt->sec;
 _ts->tv_nsec = ((uint64_t)1000000000 *
     (uint32_t)(_bt->frac >> 32)) >> 32;
}

static __inline void
timespec2bintime(const struct timespec *_ts, struct bintime *_bt)
{

 _bt->sec = _ts->tv_sec;

 _bt->frac = _ts->tv_nsec * (uint64_t)18446744073LL;
}

static __inline void
bintime2timeval(const struct bintime *_bt, struct timeval *_tv)
{

 _tv->tv_sec = _bt->sec;
 _tv->tv_usec = ((uint64_t)1000000 * (uint32_t)(_bt->frac >> 32)) >> 32;
}

static __inline void
timeval2bintime(const struct timeval *_tv, struct bintime *_bt)
{

 _bt->sec = _tv->tv_sec;

 _bt->frac = _tv->tv_usec * (uint64_t)18446744073709LL;
}

static __inline struct timespec
sbttots(sbintime_t _sbt)
{
 struct timespec _ts;

 _ts.tv_sec = _sbt >> 32;
 _ts.tv_nsec = sbttons((uint32_t)_sbt);
 return (_ts);
}

static __inline sbintime_t
tstosbt(struct timespec _ts)
{

 return (((sbintime_t)_ts.tv_sec << 32) + nstosbt(_ts.tv_nsec));
}

static __inline struct timeval
sbttotv(sbintime_t _sbt)
{
 struct timeval _tv;

 _tv.tv_sec = _sbt >> 32;
 _tv.tv_usec = sbttous((uint32_t)_sbt);
 return (_tv);
}

static __inline sbintime_t
tvtosbt(struct timeval _tv)
{

 return (((sbintime_t)_tv.tv_sec << 32) + ustosbt(_tv.tv_usec));
}
# 408 "/tools/toolchain/newlib/newlib/libc/include/sys/time.h" 3
struct itimerval {
 struct timeval it_interval;
 struct timeval it_value;
};





int utimes (const char *__path, const struct timeval *__tvp);


int adjtime (const struct timeval *, struct timeval *);
int futimes (int, const struct timeval *);
int lutimes (const char *, const struct timeval *);
int settimeofday (const struct timeval *, const struct timezone *);



int getitimer (int __which, struct itimerval *__value);
int setitimer (int __which, const struct itimerval *restrict __value,
     struct itimerval *restrict __ovalue);


int gettimeofday (struct timeval *restrict __p,
     void *restrict __tz);
# 446 "/tools/toolchain/newlib/newlib/libc/include/sys/time.h" 3
# 1 "/tools/toolchain/newlib/newlib/libc/include/machine/_time.h" 1 3
# 447 "/tools/toolchain/newlib/newlib/libc/include/sys/time.h" 2 3
# 6 "/tools/toolchain/newlib/newlib/libc/reent/timesr.c" 2
# 1 "/tools/toolchain/newlib/newlib/libc/include/sys/times.h" 1 3
# 17 "/tools/toolchain/newlib/newlib/libc/include/sys/times.h" 3
struct tms {
 clock_t tms_utime;
 clock_t tms_stime;
 clock_t tms_cutime;
 clock_t tms_cstime;
};

clock_t times (struct tms *);
# 7 "/tools/toolchain/newlib/newlib/libc/reent/timesr.c" 2
# 1 "/tools/toolchain/newlib/newlib/libc/include/_syslist.h" 1 3
# 8 "/tools/toolchain/newlib/newlib/libc/reent/timesr.c" 2
# 26 "/tools/toolchain/newlib/newlib/libc/reent/timesr.c"
extern int errno;
# 46 "/tools/toolchain/newlib/newlib/libc/reent/timesr.c"
clock_t
_times_r (struct _reent *ptr,
     struct tms *ptms)
{
  clock_t ret;

  ret = times (ptms);
  return ret;
}
