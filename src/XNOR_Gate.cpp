#include "XNOR_Gate.h"

void XNOR_Gate::Calculate_Out()
{
if ( in1->getvalue() ==in2->getvalue())

out->setvalue(1);

else
out->setvalue(0);
//cout<< out->getvalue()<<endl;
}


