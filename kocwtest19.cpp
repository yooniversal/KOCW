#include <iostream>
#include <vector>
#include "Item.h"
using namespace std;

template <typename T>
void printArray(vector<T>& v) {
	typename vector<T>::iterator it;	//iterator���� typename�� �� ���
	for (it = v.begin(); it != v.end(); it++)
		cout << *it << endl;
}

//T�� ������ Ÿ���� ��
template <typename T>
void printArray(vector<T*>& v) {
	typename vector<T*>::iterator it;	//iterator���� typename�� �� ���
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
		cout << **it << endl;	//vector�� int*�� ��� �־ ������ �׼����Ϸ��� **it �̾�� ��

	printArray(arr); //���� ����

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