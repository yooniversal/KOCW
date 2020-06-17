#include "Rectangle.h"
#include <iostream>
using namespace std;

Rectangle::~Rectangle() {
	cout << "Rectangle 소멸자" << endl;
}

Rectangle::Rectangle()
	:LT(100, 100), RB(200, 200)
{
	cout << "Rectangle 디폴트 생성자" << endl;
}
Rectangle::Rectangle(const int& x1, const int& y1, const int& x2, const int& y2) 
	:LT(x1, y1), RB(x2, y2)
{
	cout << "Rectangle 생성자" << endl;
}

void Rectangle::init(const int& x1, const int& y1, const int& x2, const int& y2) {
	LT.init(x1, y1);
	RB.init(x2, y2);
}
void Rectangle::showRectangle() const {
	LT.showPoint();
	RB.showPoint();
}
Point Rectangle::getLT() const {
	return LT;
}
Point Rectangle::getRB() const {
	return RB;
}
int Rectangle::getArea() const {
	return (RB.getX() - LT.getX()) * (LT.getY() - RB.getX());
}
void Rectangle::move(const int& dist) {
	LT.move(dist);
	RB.move(dist);
}