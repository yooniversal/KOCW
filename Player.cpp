#include "Player.h"

Player::Player()
	:name(""), total(0)
{}
void Player::setName(const string& Name) {
	name = Name;
}
string Player::getName() {
	return name;
}
void Player::roll(Dice& dice1, Dice& dice2) {
	dice1.roll();
	dice2.roll();
	total = dice1.getFaceValue() + dice2.getFaceValue();
}
int Player::getTotal() {
	return total;
}