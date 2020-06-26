#include <iostream>
#include <functional>	//greater 함수 호출을 위해 선언
#include <vector>
#include <queue>
#include <list>
#include "Item.h"
using namespace std;

template <typename T>
ostream& operator<<(ostream& out, list<T>& l) {
	typename list<T>::iterator it;
	for (it = l.begin(); it != l.end(); it++) {
		out << *it << endl;
	}
	return out;
}
ostream& operator<<(ostream& out, const Item& i) {
	out << i.getid() << " , " << i.getprice() << endl;
	return out;
}

//기존 greater는 Item에서 오버로딩 됐으나 id기준으로 작동됐음
//price기준으로 정렬하기 위해 별도로 선언해주기
template <typename T> class greaterPrice {
public :
	bool operator()(const T& t1, const T& t2) {
		return t1.getprice() > t2.getprice();
	}
};

int main() {

	list<double> list1;
	list1.push_back(5.5);
	list1.push_back(5.3);
	list1.push_back(4.5);
	list1.push_back(6.7);
	list1.sort();					//오름차순
	cout << list1 << endl;	

	list1.sort(greater<double>());	//내림차순
	cout << list1 << endl;	

	list<Item> item;
	item.push_back(Item(1, 1000));
	item.push_back(Item(5, 6000));
	item.push_back(Item(4, 7000));
	item.push_back(Item(3, 5000));
	item.push_back(Item(2, 3000));
	item.sort();					//오름차순
	cout << item << endl;

	item.sort(greater<Item>());		//내림차순
	cout << item << endl;

	item.sort(greater<Item>());		//Price기준 내림차순, 위는 모두 id기준
	cout << item << endl;

	priority_queue<double> q;
	q.push(5.5);
	q.push(5.7);
	q.push(3.0);
	q.push(1.4);
	while (!q.empty()) {
		cout << q.top() << endl;
		q.pop();
	}

	priority_queue<Item> q2;
	q2.push(Item(1, 1000));
	q2.push(Item(5, 6000));
	q2.push(Item(7, 7000));
	q2.push(Item(2, 3000));
	while (!q2.empty()) {
		cout << q2.top() << endl;
		q2.pop();
	}

	return 0;
}
