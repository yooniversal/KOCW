#include "time.h"
#include <iostream>
using namespace std;

time::time()
{
	hours = minutes = 0;
}
time::time(int h, int m) {
	hours = h;
	minutes = m;
}
void time::addMin(int m) {
	minutes += m;
	hours += minutes / 60;
	minutes %= 60;
}
void time::addHr(int h) {
	hours += h;
}
int time::getMin()
{
	return minutes;
}
int time::getHr()
{
	return hours;
}
void time::reset(int h, int m) {
	hours = h;
	minutes = m;
}
time time::sum(const time& t) const {
	time sum;
	sum.minutes = minutes + t.minutes;
	sum.hours = hours + t.hours + sum.minutes / 60;
	sum.minutes %= 60;
	return sum;
}
//overloading
time time::operator+(const time& t) const {
	time sum;
	sum.minutes = minutes + t.minutes;
	sum.hours = hours + t.hours + sum.minutes / 60;
	sum.minutes %= 60;
	return sum;
}
//overloading
time time::operator+(const int& t) const {
	time sum;
	sum.minutes = minutes;
	sum.hours = hours + t;
	return sum;
}
void time::show() const {
	cout << hours << "½Ã°£, " << minutes << "ºĞ";
}

void time::operator<<(ostream& cout)
{
	show();
}
