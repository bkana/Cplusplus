#include "TestThread.h"
#include <iostream>
using namespace std;
//TestThread::TestThread(void (*do_exec) (void *), void *arg)
TestThread::TestThread()
{
  pthread_attr_t attr;
  struct sched_param param;
  //pthread_create(&(this->handle), &attr, (void* (*)(void*))do_exec, arg);  
  cout << "thread alright be done" << endl;
}
