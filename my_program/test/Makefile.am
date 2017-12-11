

TESTS = test
check_PROGRAMS = $(TESTS)

test_SOURCES = \
  unittest.cpp \
  myaddTest.cpp

test_CXXFLAGS = $(CPPUNIT_CFLAGS) \
  $(COVERAGE_CFLAGS)

test_LDADD = \
  $(CPPUNIT_LIBS)

test_LDFLAGS = \
  $(COVERAGE_LDFLAGS)

test_CXXFLAGS += \
  -I $(top_srcdir)/my_inc \
  -I $(top_srcdir)/src 

test_LDADD += \
  $(top_builddir)/my_inc/libmyadd.a \
  $(top_builddir)/src/libsrc.a
