#include "../include/nor/NOR_Gate.h"


void nor_gate::Calculate_Out()
{
	if (mFirstInput->getvalue() == 0 && mSecondInput->getvalue() == 0)
		mOut->setvalue(1);

	else
		mOut->setvalue(0);
	//cout<< out->getvalue()<<endl;
}
