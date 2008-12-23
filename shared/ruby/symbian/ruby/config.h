#pragma c99 on
#pragma enumsalwaysint on
#pragma warn_unusedvar off
#pragma warn_unusedarg off
#pragma warn_implicitconv off
#pragma warn_possunwant off
#pragma warn_missingreturn off //in case that ruby vm has a lot of longjumps
#pragma warn_impl_f2i_conv off
#pragma warn_impl_i2f_conv off
#pragma warn_impl_s2u_conv off
#pragma warn_illegal_instructions off
#pragma suppress_warnings on 

#define PACKAGE_NAME ""
#define PACKAGE_TARNAME ""
#define PACKAGE_VERSION ""
#define PACKAGE_STRING ""
#define PACKAGE_BUGREPORT ""
#define HAVE_PIPS 1
#define STDC_HEADERS 1
#define HAVE_SYS_TYPES_H 1
#define HAVE_SYS_STAT_H 1
#define HAVE_STDLIB_H 1
#define HAVE_STRING_H 1
#define HAVE_MEMORY_H 1
#define HAVE_STRINGS_H 1
#define HAVE_INTTYPES_H 1
#define HAVE_STDINT_H 1
#define HAVE_UNISTD_H 1
#define HAVE_LONG_LONG 1
#define HAVE_OFF_T 1
#define SIZEOF_INT 4
#define SIZEOF_PTRDIFF_T 4
#define SIZEOF_SHORT 2
#define SIZEOF_LONG 4
#define SIZEOF_LONG_LONG 8
#define SIZEOF___INT64 8
#define SIZEOF_OFF_T 8
#define SIZEOF_VOIDP 4
#define SIZEOF_FLOAT 4
#define SIZEOF_DOUBLE 8
#define SIZEOF_TIME_T 4
#define rb_pid_t pid_t
#define PIDT2NUM(v) LONG2NUM(v)
#define NUM2PIDT(v) NUM2LONG(v)
#define rb_uid_t uid_t
#define UIDT2NUM(v) ULONG2NUM(v)
#define NUM2UIDT(v) NUM2ULONG(v)
#define rb_gid_t gid_t
#define GIDT2NUM(v) ULONG2NUM(v)
#define NUM2GIDT(v) NUM2ULONG(v)
#define HAVE_PROTOTYPES 1
#define TOKEN_PASTE(x,y) x##y
#define STRINGIZE(expr) STRINGIZE0(expr)
#define HAVE_STDARG_PROTOTYPES 1
#define HAVE_VA_ARGS_MACRO 0
#define FUNC_STDCALL(x) x
#define FUNC_CDECL(x) x
#define FUNC_FASTCALL(x) x
#define HAVE_DECL_SYS_NERR 0
#define HAVE_LIBDL 1
#define HAVE_DIRENT_H 1
#define STDC_HEADERS 1
#define HAVE_SYS_WAIT_H 1
#define HAVE_STDLIB_H 1
#define HAVE_STRING_H 1
#define HAVE_UNISTD_H 1
#define HAVE_LIMITS_H 1
#define HAVE_SYS_IOCTL_H 1
#define HAVE_FCNTL_H 1
#define HAVE_SYS_FCNTL_H 1
#define HAVE_SYS_SELECT_H 1
#define HAVE_SYS_TIME_H 1
#define HAVE_SYS_PARAM_H 1
#define HAVE_PWD_H 1
#define HAVE_GRP_H 1
#define HAVE_UTIME_H 1
#define HAVE_MEMORY_H 1
#define HAVE_SYS_RESOURCE_H 1
#define HAVE_FLOAT_H 1
#define HAVE_PTHREAD_H 1
#define HAVE_LANGINFO_H 1
#define HAVE_LOCALE_H 1
#define SIZEOF_RLIM_T 0
#define HAVE_STRUCT_STAT_ST_BLKSIZE 1
#define HAVE_ST_BLKSIZE 1
#define HAVE_STRUCT_STAT_ST_BLOCKS 1
#define HAVE_ST_BLOCKS 1
#define HAVE_STRUCT_STAT_ST_RDEV 1
#define HAVE_ST_RDEV 1
#define HAVE_STRUCT_STAT_ST_ATIMESPEC 1
#define HAVE_STRUCT_STAT_ST_MTIMESPEC 1
#define HAVE_STRUCT_STAT_ST_CTIMESPEC 1
#define HAVE_STRUCT_TIMESPEC 1
#define HAVE_RB_FD_INIT 1
#define GETGROUPS_T gid_t
#define RETSIGTYPE void
#define HAVE_ALLOCA 1
#define HAVE_DUP2 1
#define HAVE_MEMMOVE 1
#define HAVE_STRCASECMP 1
#define HAVE_STRNCASECMP 1
#define HAVE_STRERROR 1
#define HAVE_STRFTIME 1
#define HAVE_STRCHR 1
#define HAVE_STRSTR 1
#define HAVE_STRTOUL 1
#define HAVE_VSNPRINTF 1
#define HAVE_ISNAN 1
#define HAVE_FINITE 1
#define HAVE_ISINF 1
#define HAVE_HYPOT 1
#define HAVE_ACOSH 1
#define HAVE_ERF 1
#define HAVE_STRLCPY 1
#define HAVE_STRLCAT 1
#define HAVE_FMOD 1
#define HAVE_WAITPID 1
#define HAVE_FSYNC 1
#define HAVE_GETCWD 1
#define HAVE_TRUNCATE 1
#define HAVE_UTIMES 1
#define HAVE_FCNTL 1
#define HAVE_LSTAT 1
#define HAVE_LINK 1
#define HAVE_SYMLINK 1
#define HAVE_READLINK 1
#define HAVE_SETEUID 1
#define HAVE_SETREUID 1
#define HAVE_SETEGID 1
#define HAVE_SETREGID 1
#define HAVE_ISSETUGID 1
#define HAVE_LCHOWN 1
#define HAVE_GETPGRP 1
#define HAVE_SETPGRP 1
#define HAVE_GETPGID 1
#define HAVE_SETPGID 1
#define HAVE_INITGROUPS 1
#define HAVE_GETGROUPS 1
#define HAVE_SETGROUPS 1
#define HAVE_GETPRIORITY 1
#define HAVE_SYSCONF 1
#define HAVE_DLOPEN 1
#define HAVE_SIGACTION 1
#define HAVE_VSNPRINTF 1
#define HAVE_SNPRINTF 1
#define HAVE_SETSID 1
#define HAVE_TELLDIR 1
#define HAVE_SEEKDIR 1
#define HAVE_FCHMOD 1
#define HAVE_COSH 1
#define HAVE_SINH 1
#define HAVE_TANH 1
#define HAVE_ROUND 1
#define HAVE_SETUID 1
#define HAVE_SETGID 1
#define HAVE_SETENV 1
#define HAVE_UNSETENV 1
#define HAVE_MKTIME 1
#define HAVE_CLOCK_GETTIME 1
#define HAVE_GETTIMEOFDAY 1
#define HAVE_STRUCT_TM_TM_ZONE 1
#define HAVE_TM_ZONE 1
#define HAVE_STRUCT_TM_TM_GMTOFF 1
#define NEGATIVE_TIME_T 1
#define POSIX_SIGNAL 1
#define RSHIFT(x,y) ((x)>>(int)y)
#define FILE_COUNT _r
#define FILE_READPTR _p
#define HAVE__SC_CLK_TCK 1
#define STACK_GROW_DIRECTION -1
#define _REENTRANT 1
#define _THREAD_SAFE 1
#define HAVE_LIBPTHREAD 1
#define HAVE_NANOSLEEP 1
#define USE_ELF 1
#define DLEXT_MAXLEN 3
#define DLEXT ".so"
#define RUBY_LIB "/lib"
#define RUBY_SITE_LIB "/lib"
#define RUBY_SITE_LIB2 "/lib"
#define RUBY_VENDOR_LIB "/lib"
#define RUBY_VENDOR_LIB2 "/lib"
#define RUBY_PLATFORM "arm-symbianelf"
#define RUBY_ARCHLIB "/lib"
#define RUBY_SITE_ARCHLIB "/lib"
#define RUBY_VENDOR_ARCHLIB "/lib"
#define RUBY_JMP_BUF jmp_buf
#define RUBY_SETJMP(env) setjmp(env)
#define RUBY_LONGJMP(env,val) longjmp(env,val)
#define HAVE_SYS_FILE_H 0
//#define SA_SIGINFO 0
#define HAVE_SIGSETJMP 1
#define HAVE__SETJMP 1
#define HAVE__LONGJMP 1
#define ENABLE_RUBY_VM_STAT 1