#include "XOR_Gate.h"


void XOR_Gate::Calculate_Out()
{
if ( in1->getvalue() ==in2->getvalue())

out->setvalue(0);

else
out->setvalue(1);
//cout<< out->getvalue()<<endl;
}
