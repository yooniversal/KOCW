#pragma once
#include "Ticket.h"
class AdvanceTest : public Ticket
{
private:
	int advanceDays;
public:
	AdvanceTest();
	~AdvanceTest();
	double getPrice();
	int getAdvanceDays();
};

