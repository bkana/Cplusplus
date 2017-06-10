#pragma once
#include "Bauelement.h"
class CWiderstand : public CBauelement
{
public:
	CWiderstand();
	~CWiderstand();

	void setR(double r);
	double getR();
private:
	double m_r;
};

