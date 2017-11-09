#Initialize AC: ACINIT( package_name, version, bug_report_address)
AC_INIT([my_program], [0.1], [nkana@outlook.de])
#Initialize Automake
AM_INIT_AUTOMAKE
#AM stands for Automake commands, AC stands for Autoconf commands
#We use libraries
AC_PROG_RANLIB
# Let's check for a C++ compiler
AC_LANG(C++)
# Let's set the C++ compiler
AC_PROG_CXX
# Initialize libtool
LT_INIT([disable-static])
# Let's check and set thread Libraries.
ACX_PTHREAD
LIBS="$PTHREAD_LIBS $LIBS"
CFLAGS="$CFLAGS $PTHREAD_CFLAGS"
CC="PTHREAD_CC"
# Let's specify where the Makefiles should be produced.
# These are the same locations as your Makefile.in's, but named as Makefile only
# We need to do this because both Autoconf and Automake read this file and produce Makefiles from this list.
AC_CONFIG_FILES([Makefile my_inc/Makefile src/Makefile])
# Finally produce "configure" script
AC_OUTPUT
