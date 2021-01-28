#include "../include/nand/NAND_Gate.h"

void nand_gate::Calculate_Out()
{

	if (mFirstInput->getvalue() == 1 && mSecondInput->getvalue() == 1)
		mOut->setvalue(0);

	else
		mOut->setvalue(1);
	//cout<< out->getvalue()<<endl;
}
