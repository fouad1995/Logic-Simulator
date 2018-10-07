#include "Gate.h"

Gate::Gate()
{
    in1=NULL;
    in2=NULL;
    out=NULL;
}

void Gate::set_in1(Node*p)
{
in1=p;
}

Node* Gate::get_in1()
{
return in1;
}

void Gate::set_in2(Node* p)
{
in2=p;
}

Node* Gate::get_in2()
{
return in2;
}

void Gate::set_out(Node* p)
{
out=p;
}

Node* Gate::get_out()
{
return out ;
}
