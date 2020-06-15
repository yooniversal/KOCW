#include "Lamp.h"
#include <iostream>
using namespace std;

//kocwtest7.h�� ����� Lamp Ŭ���� �Ҽ��� �Լ����� ������־�� ��(Lamp::)
//�ʱⰪ ����(�ʱ�ȭ)
void Lamp::init() {
	m_isOn = false;
	m_illuminance = 1;
}

//���� On/Off
void Lamp::powerOnOff() {
	m_isOn = !m_isOn;
}

//��� 1~3�� ����
void Lamp::changeLight() {
	if (m_isOn) {
		if (m_illuminance < 3)
			m_illuminance++;
		else
			m_illuminance = 1;
	}
}

//���� üũ
void Lamp::showStatus() {
	if (m_isOn) {
		cout << "��� : " << m_illuminance << endl;
	}
	else {
		cout << "���� OFF ����" << endl;
	}
}
