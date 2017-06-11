#pragma once
#include "Bauelement.h"
class CSpule : public CBauelement
{
public:
	CSpule();

	void setL(double l);
	double getL();
	~CSpule();
	void printElementSpecificValues();
private:
	double m_l;


};

