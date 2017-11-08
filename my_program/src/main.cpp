#include <iostream>
#include "helper.h"
#include "../my_inc/myadd.h"
#include <forward_list>

using namespace std;

void ausgeben(forward_list <int> x)
{
  forward_list <int>::iterator pos;
  for(pos = x.begin(); pos != x.end(); pos++)
	cout << *pos << " ";
  cout << endl;
}
int main()
{
 MyAdd add_obj;
 forward_list <int> f;
 forward_list <int>::iterator pos;
 

 for(int i = 0; i < 5; i++)
    f.push_front(10*(i+1));
 ausgeben(f);
 //cout << "Addition Result:" << add_obj.add(1, 1) << endl;
 f.pop_front();
 ausgeben(f);
 
 pos = f.begin();
 f.insert_after(pos, 77);
 ausgeben(f);
 
 pos = f.begin();
 f.erase_after(pos);
 ausgeben(f);
 }
