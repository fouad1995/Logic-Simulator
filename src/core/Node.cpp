#include "core/Node.h"
#include<iostream>
Node::Node():mName(""),mValue(0){

}

Node::Node(std::string name):mName(name),mValue(0){

}

Node::Node(std::string name, int value):mName(name),mValue(value){

}

void Node::setname(std::string name)
{
	mName = name;
}

std::string Node::getname()
{
	return mName;
}

void Node::setvalue(int value)
{
	mValue = value;
}

int Node::getvalue()
{
	return mValue;
}
