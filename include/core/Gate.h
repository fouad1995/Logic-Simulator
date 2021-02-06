#pragma once
#include"Node.h"
#include<iostream>
#include "LogicSimulator_Export.h"
/*@brief class Gate is an abstract class that represent Logic gate
*		 Each Gate has two input and one output
*		 Each input could be a value or another compination of Nodes
*		 Each output could be a value or another compination of Nodes
*/
class LogicSimulator_EXPORT Gate
{
public:

	/*@brief default constructor setting input,output to null
	*/
	Gate();

	/*@brief default constructor setting input,output to null
	*/
	~Gate();

	/*@brief set the first input to the Gate 
	* @param	FirstInput  Node represents the first input
	*/
	void set_in1(std::shared_ptr<Node> FirstInput);

	/*@brief set the second input to the Gate
	* @param	SecondInput  Node represents the second input
	*/
	void set_in2(std::shared_ptr<Node> SecondInput);

	/*@brief set the output of the Gate
	* @param	Out  Node represents the output of the gate
	*/
	void set_out(std::shared_ptr<Node> Out);

	/*@brief	get the first input of the gate
	* @return	Node*  Node represents the first input of the gate
	*/
	std::shared_ptr<Node> get_in1();

	/*@brief	get the second input of the gate
	* @return	Node*  Node represents the second input of the gate
	*/
	std::shared_ptr<Node> get_in2();

	/*@brief	get the output of the gate
	* @return	Node*  Node represents the output of the gate
	*/
	std::shared_ptr<Node> get_out();

	/*@brief a pure virtual function that each subclass must implement on its way
	* For example , each gate has its own output calculation like AND gate differs from OR gate
	*/
	virtual void Calculate_Out() = 0;

protected:
	std::shared_ptr<Node> mFirstInput;  //<! first input to gate 
	std::shared_ptr<Node> mSecondInput; //<! second input to gate
	std::shared_ptr<Node> mOut;			//<! output from gate
};

