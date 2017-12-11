#include <iostream>
#include "myaddTest.h"
#include "myadd.h"

using namespace std;

CPPUNIT_TEST_SUITE_REGISTRATION(myaddTest);

void myaddTest::setUp()
{
     
}

void myaddTest::calc()
{
  MyAdd add_obj;
  CPPUNIT_ASSERT_MESSAGE("updateSpeed retval != 0", add_obj.add(1, 1) == 2);
}
