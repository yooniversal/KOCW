#pragma once
class Item
{
private:
	int id;
	int price;
public:
	Item();
	Item(const int& id, const int& price);
	~Item();
	int getid() const;
	int getprice() const;
	bool operator==(const Item& copy);
};

