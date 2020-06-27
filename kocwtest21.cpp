#include <iostream>
#include <functional>	//greater �Լ� ȣ���� ���� ����
#include <vector>
#include <queue>
#include <algorithm>
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
template <typename T>
ostream& operator<<(ostream& out, vector<T>& l) {
	typename vector<T>::iterator it;
	for (it = l.begin(); it != l.end(); it++) {
		out << *it << endl;
	}
	return out;
}
ostream& operator<<(ostream& out, const Item& i) {
	out << i.getid() << " , " << i.getprice() << endl;
	return out;
}

//���� greater�� Item���� �����ε� ������ id�������� �۵�����
//price�������� �����ϱ� ���� ������ �������ֱ�
template <typename T> class greaterPrice {
public:
	bool operator()(const T& t1, const T& t2) {
		return t1.getprice() > t2.getprice();
	}
};

template <typename T>
void printArray(vector<T> arr) {
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i];
	}
}

bool checkPrice(const Item& i) {
	return i.getprice() > 5000;
}

bool descPrice(const Item& i1, const Item& i2) {
	return i1 > i2;
}

int main() {

	vector<Item> arr;

	arr.push_back(Item(5, 1000));
	arr.push_back(Item(4, 7000));
	arr.push_back(Item(6, 9000));
	arr.push_back(Item(2, 5000));
	arr.push_back(Item(3, 3000));
	printArray(arr);

	vector<Item>::iterator it;
	it = find(arr.begin(), arr.end(), Item(6, 9000));

	if (it != arr.end()) {
		cout << *it << endl;
		int index = distance(arr.begin(), it);
		cout << arr[index] << endl;
	}
	else
		cout << "�������� ����" << endl;

	it = arr.begin();
	while (true) {
		it = find_if(it, arr.end(), checkPrice);
		if (it != arr.end()) {
			cout << *it << endl;
		}
		else {
			cout << "�������� ����" << endl;
			break;
		}

		it++;
	}

	int size1 = count(arr.begin(), arr.end(), Item(6, 9000));
	cout << size1 << "�� ������" << endl;
	int size2 = count_if(arr.begin(), arr.end(), checkPrice);
	cout << size2 << "�� ������" << endl;

	sort(arr.begin(), arr.end(), descPrice);
	printArray(arr);

	return 0;
}
