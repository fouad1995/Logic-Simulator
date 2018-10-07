#include "Node.h"
#include<iostream>
Node::Node()
{
    name="";//ctor
    value=0;
}

Node::Node(string n)
{
name=n;
value=0;
}

Node::Node(string n,int v)
{
name=n;
value=v;
}

void Node::setname(string n)
{
name=n;
}

 string Node:: getname()
{
return name;
}

void Node::setvalue(int v)
{
value=v;
}

int Node::getvalue()
{
return value;
}
