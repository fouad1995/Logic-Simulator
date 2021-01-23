//stl
#include<fstream>
//internal
#include "Simulator.h"
Simulator::Simulator()
{
	
	mGateSize = 0;
	mNodeSize = 0;
	for (int i = 0; i < GetNode_Size(); i++)
		mNodes[i] = NULL;


	for (i = 0; i < GetGate_Size(); i++)
		mGates[i] = NULL;


}

Simulator::~Simulator()
{
	int i;

	for (i = 0; i < GetNode_Size(); i++)
		delete[] mNodes[i];

	for (i = 0; i < GetGate_Size(); i++)
		delete[] mGates[i];
}

void Simulator::SetNode_Size(int n)
{
	mNodeSize = n;
}

int Simulator::GetNode_Size()
{
	return mNodeSize;
}

void Simulator::SetGate_Size(int n)
{
	mGateSize = n;
}

int Simulator::GetGate_Size()
{
	return mGateSize;
}

Node* Simulator::Creat_Node(string n)
{
	mNodes[mNodeSize] = new Node(n);
	mNodeSize++;
	return mNodes[mNodeSize - 1];
}

Node* Simulator::Find_Node(string n)
{
	for (int i = 0; i < GetNode_Size(); i++)
	{
		if (n == (mNodes[i]->getname())) {
			return mNodes[i];
		}
	}
	return Creat_Node(n);

}

void Simulator::Print_All()
{
	int i;

	for (i = 0; i < GetNode_Size(); i++)
		cout << "Node mName is  " << mNodes[i]->getname() << "\t\t" << "VALUE = " << mNodes[i]->getvalue() << endl;

}

Gate* Simulator::Creat_Gate(string n)
{
	Gate* p = NULL;

	if (n == "AND")
		p = new AND_gate();

	else if (n == "NAND")
		p = new NAND_Gate();

	else if (n == "OR")
		p = new OR_Gate();

	else if (n == "NOR")
		p = new NOR_Gate();

	else if (n == "XOR")
		p = new XOR_Gate();

	else if (n == "XNOR")
		p = new XNOR_Gate();

	else if (n == "NOT")
		p = new NOT_Gate();

	else
		return NULL;

	mGateSize++;
	mGates[mGateSize - 1] = p;
	return mGates[mGateSize - 1];
}

void Simulator::simulate()
{
	for (int i = 0; i < GetGate_Size(); i++)
		mGates[i]->Calculate_Out();

}

void Simulator::Load(const char* filename)
{
	ifstream f1;
	f1.open(filename);

	if (f1.fail()) {
		cout << "Error" << endl;
	}
	while (!f1.eof())
	{
		string mNodes;
		f1 >> mNodes;

		if (mNodes == "SET")
		{
			string node;
			int mValue;
			f1 >> node >> mValue;
			Find_Node(node)->setvalue(mValue);

		}


		else if (mNodes == "OUT")
		{
			string mOut;
			f1 >> mOut;
			if (mOut == "ALL")
				Print_All();
			else
				cout << "The output node is   " << Find_Node(mOut)->getname() << "\t\t" << "VALUE = " << Find_Node(mOut)->getvalue() << endl;
		}

		else if (mNodes == "SIM")
			simulate();

		else if (mNodes == "END")
			break;

		else {
			Gate* g = Creat_Gate(mNodes);
			string node1, node2, node3;
			f1 >> node1 >> node2 >> node3;
			g->set_in1(Find_Node(node1));
			g->set_in2(Find_Node(node2));
			g->set_out(Find_Node(node3));
		}


	}
	f1.close();


}













