#ifndef SIMULATOR_H
#define SIMULATOR_H
#include"And_Gate.h"
#include"NAND_Gate.h"
#include"OR_Gate.h"
#include"NOR_Gate.h"
#include"XOR_Gate.h"
#include"XNOR_Gate.h"
#include"NOT_Gate.h"

class Simulator
{
private:
	Node* N[1000];
	Gate* G[1000];
	int ns;
	int gs;

public:
	Simulator();
	virtual ~Simulator();
	void SetNode_Size(int n);
	int GetNode_Size();
	void SetGate_Size(int n);
	int GetGate_Size();
	Node* Creat_Node(string n);
	Node* Find_Node(string n);
	Node* Add_Node(string n);
	//Node * Find_or_Add(string n);
	Gate* Creat_Gate(string N);
	void simulate();
	void Load(const char* fileName);
	void Print_All();

};

#endif // SIMULATOR_H
