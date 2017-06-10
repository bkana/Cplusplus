#include <iostream>
#include "Complex.h"
using namespace std;



int main()
{
	CComplex a(1, 2);
	CComplex b(4, 6);
	CComplex e(7, 6);

	CComplex c = a.add(b);

	//a.setReal(4);
	//a.setImag(6);

	a.print();
	b.print();
	c.print();
	e.print();
}