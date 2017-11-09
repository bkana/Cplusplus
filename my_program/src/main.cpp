#include <iostream>
#include "helper.h"
#include "../my_inc/myadd.h"
#include <list>
#include "TestThread.h"

using namespace std;

void ausgeben(list <int> x)
{
  list <int>::iterator pos;
  for(pos = x.begin(); pos != x.end(); pos++)
	cout << *pos << " ";
  cout << endl;
}
int main()
{
 TestThread *test = new TestThread();
 MyAdd add_obj;
 list <int> f;
 list <int>::iterator pos;
 

 for(int i = 0; i < 5; i++)
    f.push_front(10*(i+1));
 ausgeben(f);
 //cout << "Addition Result:" << add_obj.add(1, 1) << endl;
 f.pop_front();
 ausgeben(f);
 

 f.sort();
 ausgeben(f);

 f.reverse();
 ausgeben(f);
 }
