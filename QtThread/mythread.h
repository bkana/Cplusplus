#ifndef MYTHREAD_H
#define MYTHREAD_H
#include <QThread>
#include <QString>


class MyThread : public QThread
{
public:
  /*
   *Constructor
   * @param Qstring to initilize menber variable
  */
   explicit MyThread(QString s);
  /*
   * overriding the QThread's run() method
  */
   void run();
private:
   /*< nember variable name*/
   QString name;

};

#endif // MYTHREAD_H
