#include "../include/not/NOT_Gate.h"

void NOT_Gate::Calculate_Out()
{
	if (mFirstInput->getvalue() == 1)
		mOut->setvalue(0);

	else
		mOut->setvalue(1);

	//cout<<out->getvalue()<<endl;
}

