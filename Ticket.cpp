#include "Ticket.h"
#include <iostream>
using namespace std;

Ticket::Ticket()
	:number(0), price(0.0)
{
}
Ticket::~Ticket()
{
}
int Ticket::getNumber() {
	return number;
}
double Ticket::getPrice() {
	return price;
}
void Ticket::setPrice(double price) {
	this->price = price;
}