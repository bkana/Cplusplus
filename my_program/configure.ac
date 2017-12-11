#Initialize AC: ACINIT( package_name, version, bug_report_address)
AC_INIT([my_program], [0.1], [nkana@outlook.de])
#Initialize Automake
AM_INIT_AUTOMAKE
#AM stands for Automake commands, AC stands for Autoconf commands
#We use libraries
AC_PROG_RANLIB
# here's where we are defining the compiler flags and checking for necessary tools. 
# Let's put this file where autoconf can find it.
AC_CONFIG_MACRO_DIR([m4])
# Let's check for a C++ compiler
AC_LANG(C++)
# Let's check for a C compiler
AC_LANG(C)
# Let's set the C compiler
AC_PROG_CC
# Let's set the C++ compiler
AC_PROG_CXX
CXXFLAGS="-Wall -Werror -std=c++0x"
AM_PROG_AR

# Initialize libtool
LT_INIT([disable-static])
# Let's check and set thread Libraries.
ACX_PTHREAD
LIBS="$PTHREAD_LIBS $LIBS"
CFLAGS="$CFLAGS $PTHREAD_CFLAGS"
CC="PTHREAD_CC"

# CPP_unit
PKG_CHECK_MODULES(CPPUNIT, [
  cppunit >= 1.13.1
], [
  AC_SUBST(CPPUNIT_CFLAGS)
  AC_SUBST(CPPUNIT_LIBS)
], [
  AC_MSG_ERROR([
      cppunit development library >= 1.13.1 is missing.
      On Ubuntu systems yo can simply execute:
      sudo apt-get install libcppunit-dev
  ])
])

# Let's specify where the Makefiles should be produced.
# These are the same locations as your Makefile.in's, but named as Makefile only
# We need to do this because both Autoconf and Automake read this file and produce Makefiles from this list.
AC_CONFIG_FILES([Makefile my_inc/Makefile src/Makefile test/Makefile])
# Finally produce "configure" script
AC_OUTPUT
