#ifndef TESTTHREAD
#define TESTTHREAD

#include <pthread.h>
#include <sys/time.h>

class TestThread
{
private:
  pthread_t handle; /**< Linux Pthread specific pthread handle. */

public:
  /**
   * Constructor:
   * creates the internal Linux Pthread and starts the main loop.
   * @param do_exec The main loop routine.
   * @param arg The thread's main loop arguments.
   */
  //TestThread(void (*do_exec) (void *), void *arg);
  TestThread();
};
#endif // TESTTHREAD
