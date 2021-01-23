//stl
#include <vector>
#include <algorithm>
//internal
#include"And_Gate.h"
#include"NAND_Gate.h"
#include"OR_Gate.h"
#include"NOR_Gate.h"
#include"XOR_Gate.h"
#include"XNOR_Gate.h"
#include"NOT_Gate.h"


class LogicSimulator {


public:
	LogicSimulator();
	~LogicSimulator();

	Node* CreateNode(std::string nodeName);
	Node* FindNode(std::string nodeName);

	Gate* CreateGate(std::string gateName);

	void StartSimulation();
	void PrintAll();



private:
	std::vector<Node*> mNodes;
	std::vector<Gate*> mGates;

	int mNodeNumber; //<! number of nodes available ( already exist at this point of time )
	int mGateNumber; //<! number of gates available ( already exist at this point of time )

};