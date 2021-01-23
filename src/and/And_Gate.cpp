//#include "And_Gate.h"
#include "../include/and/And_Gate.h"

AND_gate::AND_gate():Gate(){
}

void AND_gate::Calculate_Out()
{
	if (mFirstInput->getvalue() == 1 && mSecondInput->getvalue() == 1)
		mOut->setvalue(1);

	else
		mOut->setvalue(0);
	//cout<< out->getvalue()<<endl;
}
