#include "../include/or/OR_Gate.h"

void or_gate::Calculate_Out()
{

	if (mFirstInput->getvalue() == 0 && mSecondInput->getvalue() == 0)
		mOut->setvalue(0);

	else
		mOut->setvalue(1);
	//cout<< out->getvalue()<<endl;

}
