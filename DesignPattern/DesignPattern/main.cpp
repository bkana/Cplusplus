#include "Singleton.h"
#include <iostream>
#include <queue>

using namespace std;

CSingleton *CSingleton::pInstance = NULL;


//void testneu()
//{
//	CSingleton::instance()->setData(10);
//	cout << "Data = " << CSingleton::instance()->getData() << "\n";
//}
int main()
{
	//CSingleton::instance()->setData(10);
	//cout << "Data = " << CSingleton::instance()->getData() << "\n";
	////testneu();
	queue<int> q;

	for (int i = 0; i < 5; i++)
	{
		q.push(10*(i+1));
	}
	cout << q.front() << "..." << q.back() << endl;
	q.pop();
	cout << q.front() << "..." << q.back() << endl;
	return 0;

}
