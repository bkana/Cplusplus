#pragma once
class CShape
{
public:
	CShape();
	~CShape();

	virtual void calcCircumference() = 0;
	virtual void calcArea() = 0;

protected:
};

