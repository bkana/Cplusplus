# Our binary is produced here
bin_PROGRAMS = main
main_SOURCES = main.cpp
# main binary will be installed into the default directory for "bin"s (hence we used the)
# bin prefix.
noinst_LIBRARIES = libsrc.a

libsrc_a_SOURCES = \ 
  helper.cpp \
  TestThread.cpp

# noinst_ : assures that this library is not installed to the user's computer.
# libBLAH.a is a *nix convention. If you noticed, we replaced the . with _ in Sources line.
main_LDADD = libsrc.a ../my_inc/libmyadd.a
# LDADD specifies which libraries to compile into "main" . We have two libraries.
# libhelper comes from this directory and libmyadd comes from my_inc directory.
