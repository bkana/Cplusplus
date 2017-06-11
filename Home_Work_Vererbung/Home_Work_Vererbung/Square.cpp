#include "Square.h"
#include <iostream>

using namespace std;

CSquare::CSquare(int Long) : CRectangle(Long, Long)
{
}

void CSquare::calcCircumference()
{
	cout << "the circumference is : " << m_long*4 << endl;
}

void CSquare::calcArea()
{
	cout << "the area is : " << m_long*m_long << endl;
}

CSquare::~CSquare()
{
}
