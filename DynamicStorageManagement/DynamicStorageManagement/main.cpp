#include <iostream>
#include"Complex.h"

using namespace std;

int main()
{
	int numElements;
	cout << "How many complexes should be entered ? ";
	cin >> numElements;

	CComplex* complexNums = new CComplex[numElements];

	for (int i = 0; i < numElements; i++)
	{
		complexNums[i].setValues(i-1, i+1);
		complexNums[i].print();
	}
	delete[] complexNums;
}