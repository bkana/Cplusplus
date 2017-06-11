#pragma once
#include "Rectangle.h"
class CSquare : public CRectangle
{
public:
	CSquare(int Long);
	~CSquare();


	void calcCircumference();
	void calcArea();
};

