#include "../include/core/Gate.h"


Gate::Gate():mFirstInput(nullptr),mSecondInput(nullptr),mOut(nullptr){
}

Gate::~Gate(){
}


void Gate::set_in1(std::shared_ptr<Node> FirstInput)
{
	mFirstInput = FirstInput;
}

std::shared_ptr<Node> Gate::get_in1()
{
	return mFirstInput;
}

void Gate::set_in2(std::shared_ptr<Node> SecondInput)
{
	mSecondInput = SecondInput;
}

std::shared_ptr<Node> Gate::get_in2()
{
	return mSecondInput;
}

void Gate::set_out(std::shared_ptr<Node> Out)
{
	mOut = Out;
}

std::shared_ptr<Node> Gate::get_out()
{
	return mOut;
}
