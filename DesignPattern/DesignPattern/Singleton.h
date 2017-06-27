#pragma once
#include <iostream>
class CSingleton
{

private:
	static CSingleton *pInstance;
	CSingleton(); // private constructor
	int m_data;
public:
	static CSingleton* instance()
	{
		if (pInstance == NULL)
		{
			pInstance = new CSingleton();
		}
		return pInstance;
	}
	void setData(int data);
	int getData();




};