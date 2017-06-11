#pragma once
#include "Shape.h"
class CCircle : public CShape
{
public:
	CCircle();
	CCircle(int r);
	~CCircle();

	void calcCircumference();
	void calcArea();

private:
	int m_r; 
};

