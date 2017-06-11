#include "Circle.h"
#include <iostream>

using namespace std;
#define PI 3.14

CCircle::CCircle()
{
}

CCircle::CCircle(int r)
{
	m_r = r;
}

void CCircle::calcCircumference()
{
	cout << "the circumference is : " << 2*PI*m_r << endl;
}
void CCircle::calcArea()
{
	cout << "the area is : " << PI*m_r*m_r << endl;
}

CCircle::~CCircle()
{
}
