#pragma once
#include "Dice.h"
#include <iostream>
#include <string>
using namespace std;

class Player{
private:
	string name;
	int total;
public:
	Player();
	void setName(const string& name);
	string getName();
	void roll(Dice& dice1, Dice& dice2);
	int getTotal();
};

