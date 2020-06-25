#include "Item.h"

Item::Item()
	:id(0), price(0)
{
}

Item::Item(const int& id, const int& price)
	:id(id), price(price)
{
}

Item::~Item()
{
}

int Item::getid() const
{
	return id;
}

int Item::getprice() const
{
	return price;
}

bool Item::operator==(const Item& copy)
{
	return id == copy.id && price == copy.price;
}
