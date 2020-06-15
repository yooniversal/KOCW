#pragma once
#include <string>
#include "Lamp.h"
using namespace std;
class User {
private:
	string m_name;
public:
	void init();
	void turnOnOff(Lamp& lamp);
	void changeLight(Lamp& lamp);
};