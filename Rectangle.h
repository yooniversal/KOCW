#pragma once
#include "Point.h"
class Rectangle{
private:
	Point LT;
	Point RB;
public:
	~Rectangle();
	Rectangle();
	Rectangle(const int& x1, const int& y1, const int& x2, const int& y2);
	void init(const int& x1, const int& y1, const int& x2, const int& y2);
	void showRectangle() const;
	Point getLT() const;
	Point getRB() const;
	int getArea() const;
	void move(const int& dist);
};

