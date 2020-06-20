#include <iostream>
#include "CLinkedList.h"
using namespace std;

int main() {
	CLinkedList list;
	list.insert1(10);
	list.insert1(20);
	list.insert1(30);
	list.insert1(40);
	list.insert1(50);
	list.showList();
	list.delete_all();
	cout << "==============" << endl;
	list.insert1(30);
	list.insert1(40);
	list.insert1(50);
	list.showList();
	cout << "==============" << endl;
	CNode* result = list.findNode(40);
	if (result != list.getTail())
		cout << result->getKey() << " : Ž�� �Ϸ�" << endl;
	else
		cout << "����Ʈ�� �������� ����" << endl;
	cout << "==============" << endl;
	list.delete_node(30);
	list.showList();


}