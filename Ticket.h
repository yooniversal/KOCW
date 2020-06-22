#pragma once
class Ticket
{
protected:
	int number;
	double price;
public:
	Ticket();
	~Ticket();
	int getNumber();
	double getPrice();
	void setPrice(double price);
};

