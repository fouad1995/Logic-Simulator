#ifndef AND_GATE_H
#define AND_GATE_H

#include "Gate.h"
class AND_gate : public Gate
{
public:
	AND_gate();
	virtual ~AND_gate();

	void Calculate_Out();
};

#endif // AND_GATE_H
