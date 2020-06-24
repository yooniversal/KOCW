#include <iostream>
#include "time.h"
#include "ArrayData.h"
#include "ArrayDataBack.h"
using namespace std;

//전역함수를 friend 해줘서 private 멤버에 접근 가능
time operator+ (const int& h, const time& t) {
	time sum;
	sum.minutes = t.minutes;
	sum.hours = t.hours + h;
	return sum;
}

//cout << 객체1 << 객체2 << endl
//반환 형식이 void면 void << 객체2 << endl 이 된다
//따라서 cout을 반환할 수 있도록 반환형을 ostream& 으로 해준다
//(cout이 ostream이므로 + 복사가 안되도록 & 붙이기)
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

	for (int i = 0; i < data.getUsed(); i++) {
		cout << data[i] << endl;	//double& operator[](int index);
	}

	ArrayData data2(2);
	data2 = data;	//type이 같아서 대입 연산이 가능하지만 런타임 오류 발생(복사 생성자에서 문제)
					//공간 크기가 달라서가X -> 대입 연산을 수행하면서 data2가 data를 가리키게 되므로
					//data의 소멸자가 2번 호출돼 문제가 발생한다 + 기존 data2의 메모리 누수도 발생
					// => 오버로딩 해주기
					//멤버가 '동적 할당'하고 있으면 대입 연산에서 문제가 발생할 수 있다 **

	ArrayDataBack data3(10);
	data3.addElement(10.2);
	data3.addElement(10.1);
	data3.addElement(10.7);
	data3.backup();	//부모에서 정의된건 자식에서도 그대로 쓸 수 있음(상속)
	data3.addElement(10.6);
	data3.addElement(10.4);
	cout << data3 << endl;
	data3.restore();
	cout << data3 << endl;

	ArrayDataBack data4;
	data4 = data3;	//위에서 같은 대입 연산에 대한 참조 오류 발생
					//부모랑 type이 달라서 재정의


	return 0;
}