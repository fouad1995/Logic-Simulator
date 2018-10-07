#include "NAND_Gate.h"

void NAND_Gate::Calculate_Out()
{

if ( in1->getvalue() == 1 && in2->getvalue()==1)

out->setvalue(0);

else
out->setvalue(1);
//cout<< out->getvalue()<<endl;
}
