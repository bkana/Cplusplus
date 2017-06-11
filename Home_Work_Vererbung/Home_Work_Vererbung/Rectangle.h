#pragma once
#include "Shape.h"
class CRectangle : public CShape 
{
public:
	CRectangle();
	CRectangle(int Long, int Larg);
	~CRectangle();

	void calcCircumference();
	void calcArea();

protected:
	int m_long;
	int m_larg;
};

