#include "NOT_Gate.h"

void NOT_Gate::Calculate_Out()
{
if (in1->getvalue()==1)
out->setvalue(0);

else
out->setvalue(1);

//cout<<out->getvalue()<<endl;
}

