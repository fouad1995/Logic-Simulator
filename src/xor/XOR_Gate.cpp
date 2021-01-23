#include "XOR_Gate.h"


void XOR_Gate::Calculate_Out()
{
	if (mFirstInput->getvalue() == mSecondInput->getvalue())
		mOut->setvalue(0);

	else
		mOut->setvalue(1);
	//cout<< out->getvalue()<<endl;
}
