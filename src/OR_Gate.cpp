#include "OR_Gate.h"

void OR_Gate::Calculate_Out()
{

if ( in1->getvalue() == 0 && in2->getvalue()==0)

out->setvalue(0);

else
out->setvalue(1);
//cout<< out->getvalue()<<endl;

}
