#include "NOR_Gate.h"


void NOR_Gate::Calculate_Out()
{
if ( in1->getvalue() == 0 && in2->getvalue()==0)

out->setvalue(1);

else
out->setvalue(0);
//cout<< out->getvalue()<<endl;
}
