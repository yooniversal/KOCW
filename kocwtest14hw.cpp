#include <iostream>
#include "GeneralTicket.h"
#include "AdvanceTest.h"
using namespace std;

int main() {

	GeneralTicket ticket1;
	ticket1.setPrice(10000.0);
	if(ticket1.getPayByCredit() == true)
		cout << ticket1.getPrice() << endl;

	AdvanceTest ticket2;
	ticket2.setPrice(10000.0);
	cout << ticket2.getPrice() << endl;
	cout << ticket2.Ticket::getPrice() << endl;

	return 0;
}