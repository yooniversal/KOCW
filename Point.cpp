#include "Point.h"
#include <iostream>
using namespace std;

//소멸자
Point::~Point() {
	cout << "포인트 소멸자" << endl;
}

//생성자
Point::Point()
	:x(0), y(0)
{
	cout << "디폴트 생성자" << endl;
}

//생성자
Point::Point(const int& X, const int& Y)
	:x(X), y(Y)	//이니셜라이저(바디 밖에 해야함)
{
	cout << "인자있는 생성자" << endl;
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
