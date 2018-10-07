#include "And_Gate.h"

void And_Gate::Calculate_Out()
{
if ( in1->getvalue() == 1 && in2->getvalue() ==1)

out->setvalue(1);

else
out->setvalue(0);
//cout<< out->getvalue()<<endl;
}
