#include <iostream>
#include <vector>
#include "Item.h"
using namespace std;

template <typename T>
void printArray(vector<T>& v) {
	typename vector<T>::iterator it;	//iterator에는 typename을 꼭 명시
	for (it = v.begin(); it != v.end(); it++)
		cout << *it << endl;
}

//T가 포인터 타입일 때
template <typename T>
void printArray(vector<T*>& v) {
	typename vector<T*>::iterator it;	//iterator에는 typename을 꼭 명시
	for (it = v.begin(); it != v.end(); it++)
		cout << **it << endl;
}

ostream& operator<<(ostream& out, const Item& item) {
	out << item.getid() << "," << item.getprice() << endl;
	return out;
}

int main() {

	vector<int*> arr;
	vector<int*>::iterator it;
	arr.push_back(new int(10));
	arr.push_back(new int(20));
	arr.push_back(new int(30));

	for (int i = 0; i < arr.size(); i++) {
		cout << *arr.at(i) << endl;
	}

	for (it = arr.begin(); it != arr.end(); it++)
		cout << **it << endl;	//vector가 int*을 담고 있어서 데이터 액세스하려면 **it 이어야 함

	printArray(arr); //위와 같다

	for (int i = 0; i < arr.size(); i++) {
		delete arr.at(i);
	}
	arr.clear();

	vector<Item> a;
	a.push_back(Item(1, 1000));
	a.push_back(Item(2, 2000));
	a.push_back(Item(3, 3000));
	printArray(a);

	vector<Item*> b;
	b.push_back(new Item(1, 1000));
	b.push_back(new Item(2, 2000));
	b.push_back(new Item(3, 3000));
	printArray(b);

	return 0;
}