#include <iostream>
#include "Bauelement.h"
#include "Kondensator.h"
#include "Spule.h"
#include "Widerstand.h"


using namespace std;


int main()
{

	CBauelement* bauelemente[1]; //pointer of a array for the abstract class CBauelement
	
	bauelemente[0] = new CWiderstand(2, 2, 0.01, 200);

	CBauelement* widerstand = new CWiderstand(32, 12, 0.02, 210); // or direct initialisation 

	bauelemente[0]->printElementSpecificValue();
	widerstand->printElementSpecificValue();
	
}