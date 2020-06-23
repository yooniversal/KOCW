#include <iostream>
#include "time.h"
#include "ArrayData.h"
using namespace std;

//전역함수를 friend 해줘서 private 멤버에 접근 가능
time operator+ (const int& h, const time& t) {
	time sum;
	sum.minutes = t.minutes;
	sum.hours = t.hours + h;
	return sum;
}

ostream& operator<<(ostream& out, time& t) {
	t.show();
	return out;
}

ostream& operator<<(ostream& out, ArrayData& a) {
	a.showData();
	return out;
}

int main() {
	time t1(3, 45);
	time t2(2, 23);
	//time total = t1.sum(t2);
	//time total = t1.sum(3);
	time total = t1 + t2;
	time total2 = t1 + 3;
	total.show();
	total2.show();

	total = 3 + t1;

	total.operator<<(cout); //위 아래가 같음
	total << cout;

	cout << t1 << "," << total << endl;;

	ArrayData data(10);
	data.addElement(10.2);
	data.addElement(10.1);
	data.addElement(10.7);
	data.addElement(10.6);
	data.addElement(10.4);
	//data.showData();
	cout << data << endl;

	
	return 0;
}