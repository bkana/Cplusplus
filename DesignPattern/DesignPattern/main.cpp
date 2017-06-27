#include "Singleton.h"
#include <iostream>


using namespace std;

CSingleton *CSingleton::pInstance = NULL;


//void testneu()
//{
//	CSingleton::instance()->setData(10);
//	cout << "Data = " << CSingleton::instance()->getData() << "\n";
//}
int main()
{
	CSingleton::instance()->setData(10);
	cout << "Data = " << CSingleton::instance()->getData() << "\n";
	//testneu();
	return 0;

}
