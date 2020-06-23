#pragma once
#include <iostream>
using namespace std;
#define MYTIME_H_

class time
{
private:
	int hours;
	int minutes;
public:
	time();
	time(int h, int m);
	void addMin(int m);
	void addHr(int h);
	int getMin();
	int getHr();
	void reset(int h, int m);
	time sum(const time& t) const;
	time operator+(const time& t) const;	//overloading
	time operator+(const int& t) const;		//overloading
	friend time operator+(const int& h, const time& t);
	void show() const;
	void operator<<(ostream& cout);
};

