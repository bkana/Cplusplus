#ifndef MYADDTEST_H
#define MYADDTEST_H

#include <cppunit/extensions/HelperMacros.h>


class myaddTest : public CppUnit::TestFixture
{

  CPPUNIT_TEST_SUITE(myaddTest);
  CPPUNIT_TEST(calc);
  CPPUNIT_TEST_SUITE_END();

public:
  void setUp();
  void calc();

};


#endif  // BCUTEST_H
