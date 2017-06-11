#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"

using namespace std;


int main()
{
	CRectangle r(4, 5); 
	CCircle c(10);

	r.calcCircumference();
	r.calcArea();

	c.calcCircumference();
	c.calcArea();

	system("PAUSE");

}