#pragma once
class CtestSingleton
{
public:
	static CtestSingleton* Instance();
private:
	CtestSingleton(); // private constructor
	CtestSingleton(CtestSingleton const&); // Copy constructor
	CtestSingleton&  operator = (CtestSingleton const &); // aseign

	static CtestSingleton *pInstance;
	
};

