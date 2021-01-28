//#include "And_Gate.h"
#include "../include/and/And_Gate.h"

and_gate::and_gate():Gate(){
}

void and_gate::Calculate_Out()
{
	if (mFirstInput->getvalue() == 1 && mSecondInput->getvalue() == 1)
		mOut->setvalue(1);

	else
		mOut->setvalue(0);
	//cout<< out->getvalue()<<endl;
}
