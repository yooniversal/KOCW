#include "Point.h"
#include <iostream>
using namespace std;

//�Ҹ���
Point::~Point() {
	cout << "����Ʈ �Ҹ���" << endl;
}

//������
Point::Point()
	:x(0), y(0)
{
	cout << "����Ʈ ������" << endl;
}

//������
Point::Point(const int& X, const int& Y)
	:x(X), y(Y)	//�̴ϼȶ�����(�ٵ� �ۿ� �ؾ���)
{
	cout << "�����ִ� ������" << endl;
}

void Point::init(const int& X, const int& Y) {
	x = X;
	y = Y;
}
void Point::setXY(const int& X, const int& Y) {
	x = X;
	y = Y;
}
void Point::move(const int& dist) {
	x += dist;
	y += dist;
}
void Point::showPoint() const {
	cout << x << ", " << y << endl;
}
int Point::getX() const {
	return x;
}
int Point::getY() const {
	return y;
}
