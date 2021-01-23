

#include "LogicSimulator.h"


LogicSimulator::LogicSimulator() :mNodes(), mGates(),mNodeNumber(0),mGateNumber(0) {

}


Node* LogicSimulator::CreateNode(std::string nodeName) {

	auto node = new Node(nodeName);
	mNodes.push_back(node);
	mNodeNumber++;

	return node;
}

Node* LogicSimulator::FindNode(std::string nodeName) {

	std::vector<Node*>::iterator found = std::find_if(mNodes.begin(), mNodes.end(), [nodeName](Node* node) {

		return nodeName == node->getname();
		});
	
	if(found != std::end(mNodes)) //<! found the node
		return *found;

	return CreateNode(nodeName);

}

Gate* LogicSimulator::CreateGate(std::string gateName) {
	
	Gate* gate = NULL;

	if (gateName == "AND")
		gate = new AND_gate();

	else if (gateName == "NAND")
		gate = new NAND_Gate();

	else if (gateName == "OR")
		gate = new OR_Gate();

	else if (gateName == "NOR")
		gate = new NOR_Gate();

	else if (gateName == "XOR")
		gate = new XOR_Gate();

	else if (gateName == "XNOR")
		gate = new XNOR_Gate();

	else if (gateName == "NOT")
		gate = new NOT_Gate();

	else
		return NULL;


	mGates.push_back(gate);
	mGateNumber++;

	return gate;
}


void LogicSimulator::PrintAll() {

	for (auto const& node : mNodes)
		std::cout << "Node name is => " << node->getname() << " Node value is => " << node->getvalue() << "\n";

}