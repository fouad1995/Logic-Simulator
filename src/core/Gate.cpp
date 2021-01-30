#include "../include/core/Gate.h"


Gate::Gate():mFirstInput(nullptr),mSecondInput(nullptr),mOut(nullptr){
}

Gate::~Gate(){
}


void Gate::set_in1(Node* FirstInput)
{
	mFirstInput = new Node(*FirstInput);
}

Node* Gate::get_in1()
{
	return mFirstInput;
}

void Gate::set_in2(Node* SecondInput)
{
	mSecondInput = SecondInput;
}

Node* Gate::get_in2()
{
	return mSecondInput;
}

void Gate::set_out(Node* Out)
{
	mOut = Out;
}

Node* Gate::get_out()
{
	return mOut;
}
