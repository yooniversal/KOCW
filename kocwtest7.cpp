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
	
	//User�� ���ؼ� Lamp ����(���� Lamp�� ��ü lamp2, lamp3�� ����)
	User user1;
	user1.init();
	user1.turnOnOff(lamp2);
	user1.turnOnOff(lamp3);
	user1.changeLight(lamp2);

	Lamp* p_lamp = &lamp1;		//Lamp ������ ����

	Lamp* p_lamp2 = new Lamp();	//Lamp ���� �Ҵ�
	p_lamp2->init();
	p_lamp2->powerOnOff();
	p_lamp2->changeLight();
	delete p_lamp2;				//Lamp ���� �Ҵ� ����


	return 0;
}