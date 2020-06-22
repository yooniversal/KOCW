#pragma once
#include <iostream>
#include "Ticket.h"
using namespace std;

class GeneralTicket : public Ticket
{
private:
	bool payBycredit;
public:
	GeneralTicket();
	~GeneralTicket();
	double getPrice();
	bool getPayByCredit();
};

