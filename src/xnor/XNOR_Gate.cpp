#include "../include/xnor/XNOR_Gate.h"

void XNOR_Gate::Calculate_Out()
{
	if (mFirstInput->getvalue() == mSecondInput->getvalue())
		mOut->setvalue(1);

	else
		mOut->setvalue(0);
	//cout<< out->getvalue()<<endl;
}


