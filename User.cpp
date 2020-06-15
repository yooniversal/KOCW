#include "User.h"

void User::init() {
	m_name = "noName";
}
void User::turnOnOff(Lamp& lamp) {
	lamp.powerOnOff();
}
void User::changeLight(Lamp& lamp) {
	lamp.changeLight();
}