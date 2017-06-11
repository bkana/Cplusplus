#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"

using namespace std;


int main()
{
	CRectangle r(4, 5); 
	CCircle c(10);
	CSquare s(10);


	r.calcCircumference();
	r.calcArea();

	c.calcCircumference();
	c.calcArea();

	s.calcCircumference();
	s.calcArea();

	system("PAUSE");

}