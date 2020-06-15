#include "Lamp.h"
#include "User.h"
#include <iostream>
using namespace std;

int main() {
	Lamp lamp1;
	lamp1.init();
	lamp1.powerOnOff();
	lamp1.changeLight();
	lamp1.changeLight();
	lamp1.changeLight();
	lamp1.showStatus();

	Lamp lamp2;
	lamp2.init();

	Lamp lamp3;
	lamp3.init();
	
	//User를 통해서 Lamp 조절(물론 Lamp는 객체 lamp2, lamp3에 접근)
	User user1;
	user1.init();
	user1.turnOnOff(lamp2);
	user1.turnOnOff(lamp3);
	user1.changeLight(lamp2);

	Lamp* p_lamp = &lamp1;		//Lamp 포인터 선언

	Lamp* p_lamp2 = new Lamp();	//Lamp 동적 할당
	p_lamp2->init();
	p_lamp2->powerOnOff();
	p_lamp2->changeLight();
	delete p_lamp2;				//Lamp 동적 할당 해제


	return 0;
}