#include "Lamp.h"
#include <iostream>
using namespace std;

//kocwtest7.h에 선언된 Lamp 클래스 소속의 함수임을 명시해주어야 함(Lamp::)
//초기값 설정(초기화)
void Lamp::init() {
	m_isOn = false;
	m_illuminance = 1;
}

//전원 On/Off
void Lamp::powerOnOff() {
	m_isOn = !m_isOn;
}

//밝기 1~3단 변경
void Lamp::changeLight() {
	if (m_isOn) {
		if (m_illuminance < 3)
			m_illuminance++;
		else
			m_illuminance = 1;
	}
}

//상태 체크
void Lamp::showStatus() {
	if (m_isOn) {
		cout << "밝기 : " << m_illuminance << endl;
	}
	else {
		cout << "전원 OFF 상태" << endl;
	}
}
