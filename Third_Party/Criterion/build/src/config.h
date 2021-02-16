#ifndef CONFIG_H_IN_
#define CONFIG_H_IN_

#define ENABLE_NLS
/* #undef ENABLE_VALGRIND_ERRORS */
#undef MINGW_DEFINE_OFF_T

#define HAVE_CLOCK_GETTIME
#define HAVE_CLOCK_MONOTONIC_RAW
#define HAVE_FOPENCOOKIE
#undef HAVE_FUNOPEN
#define HAVE_GETCWD
#define HAVE_ISATTY
#define HAVE_NL_LANGINFO
#define HAVE_OPEN_MEMSTREAM
#define HAVE_PTHREADS 1
#define HAVE_STRTOK_R
#undef HAVE_STRTOK_S
#undef HAVE_WIN32_GETCURRENTDIRECTORY
#undef HAVE_WIN32_PATHISRELATIVE
/* #undef HAVE_WIN32_SYNCHAPI */
/* #undef HAVE_WIN32_THREADS */

#define NN_H <src/nn.h>
#define NN_REQREP_H <src/reqrep.h>

#define LOCALEDIR "/usr/local/share/locale"
#define PACKAGE "criterion"
#define VERSION "v2.3.3-122-g4cf886a (bleeding)"

#ifdef _WIN32
# define NN_SOCKET_PATH ""
#else
# define NN_SOCKET_PATH "/tmp/"
#endif

#endif /* !CONFIG_H_IN_ */
