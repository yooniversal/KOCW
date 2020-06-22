#include "GeneralTicket.h"

GeneralTicket::GeneralTicket()
	:payBycredit(true)
{
}

GeneralTicket::~GeneralTicket()
{
}

double GeneralTicket::getPrice()
{
	return price*1.1;
}

bool GeneralTicket::getPayByCredit()
{
	return payBycredit;
}
