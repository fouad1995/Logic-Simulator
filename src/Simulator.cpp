#include "Simulator.h"
#include<fstream>
Simulator::Simulator()
{
	int i;
	gs = 0;
	ns = 0;
	for (i = 0; i < GetNode_Size(); i++)
		N[i] = NULL;


	for (i = 0; i < GetGate_Size(); i++)
		G[i] = NULL;


}

Simulator::~Simulator()
{
	int i;

	for (i = 0; i < GetNode_Size(); i++)
		delete[] N[i];

	for (i = 0; i < GetGate_Size(); i++)
		delete[] G[i];
}

void Simulator::SetNode_Size(int n)
{
	ns = n;
}

int Simulator::GetNode_Size()
{
	return ns;
}

void Simulator::SetGate_Size(int n)
{
	gs = n;
}

int Simulator::GetGate_Size()
{
	return gs;
}

Node* Simulator::Creat_Node(string n)
{
	N[ns] = new Node(n);
	ns++;
	return N[ns - 1];
}

Node* Simulator::Find_Node(string n)
{
	int i;
	for (i = 0; i < GetNode_Size(); i++)
	{
		if (n == (N[i]->getname())) {
			return N[i];
		}
	}
	return Creat_Node(n);

}

void Simulator::Print_All()
{
	int i;

	for (i = 0; i < GetNode_Size(); i++)
		cout << "Node name is  " << N[i]->getname() << "\t\t" << "VALUE = " << N[i]->getvalue() << endl;

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

	gs++;
	G[gs - 1] = p;
	return G[gs - 1];
}

void Simulator::simulate()
{
	int i;

	for (i = 0; i < GetGate_Size(); i++)
		G[i]->Calculate_Out();



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
		string N;
		f1 >> N;

		if (N == "SET")
		{
			string node;
			int value;
			f1 >> node >> value;
			Find_Node(node)->setvalue(value);

		}


		else if (N == "OUT")
		{
			string out;
			f1 >> out;
			if (out == "ALL")
				Print_All();
			else
				cout << "The output node is   " << Find_Node(out)->getname() << "\t\t" << "VALUE = " << Find_Node(out)->getvalue() << endl;
		}

		else if (N == "SIM")
			simulate();

		else if (N == "END")
			break;

		else {
			Gate* g = Creat_Gate(N);
			string node1, node2, node3;
			f1 >> node1 >> node2 >> node3;
			g->set_in1(Find_Node(node1));
			g->set_in2(Find_Node(node2));
			g->set_out(Find_Node(node3));
		}


	}
	f1.close();


}













