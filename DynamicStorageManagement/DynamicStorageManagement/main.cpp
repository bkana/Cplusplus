#include <iostream>
#include"Complex.h"

using namespace std;

int main()
{
	CComplex* c1 = new CComplex(1.0, 2.0); // dynamic storage runs with new operator
	c1->print();

	system("PAUSE");
}