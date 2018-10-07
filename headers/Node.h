#ifndef NODE_H
#define NODE_H
#include<string>
using namespace std;

class Node
{
private:
string name;
int value;

    public:
        Node();
        Node(string n);
        Node(string n,int v);
        void setname(string n);
        string getname();
        void setvalue(int v);
        int getvalue();
};

#endif // NODE_H
