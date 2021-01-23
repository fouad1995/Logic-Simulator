#ifndef NAND_GATE_H
#define NAND_GATE_H
#include "../include/core/Gate.h"

class NAND_Gate:public Gate
{
    public:
       void Calculate_Out();
};

#endif // NAND_GATE_H
