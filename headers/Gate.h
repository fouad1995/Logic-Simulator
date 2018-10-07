#ifndef GATE_H
#define GATE_H
#include"Node.h"
#include<iostream>
class Gate
{

protected:
Node* in1;
Node* in2;
Node* out;

    public:
        Gate();
        public:
    void set_in1(Node *p);
    Node* get_in1();
    void set_in2(Node *p);
    Node* get_in2();
    void set_out(Node *p);
    Node* get_out();
    virtual void Calculate_Out()=0;
};

#endif // GATE_H
