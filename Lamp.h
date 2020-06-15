#pragma once

class Lamp {
private:
	bool m_isOn;
	int m_illuminance;
public:
	void init();
	void powerOnOff();
	void changeLight();
	void showStatus();
};