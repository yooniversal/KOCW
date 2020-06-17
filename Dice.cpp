#include "Dice.h"
#include <iostream>
using namespace std;

Dice::Dice()
	:faceValue(0)
{}
void Dice::roll() {
	faceValue = rand() % 7;
	if (faceValue == 0)
		faceValue += 1;
}
int Dice::getFaceValue() {
	return faceValue;
}