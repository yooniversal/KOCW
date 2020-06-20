#include "CLinkedList.h"
#include <iostream>
using namespace std;

CLinkedList::CLinkedList()
	:head(new CNode()), tail(new CNode())
{
	head->setNext(tail);
	tail->setNext(tail);
}

CLinkedList::~CLinkedList()
{
	delete_all();
	delete head;
	delete tail;
}

void CLinkedList::insert1(const int& key)
{
	CNode* temp = new CNode();
	temp->setKey(key);
	temp->setNext(head->getNext());
	head->setNext(temp);
}

CNode* CLinkedList::getHead()
{
	return head;
}

CNode* CLinkedList::getTail()
{
	return tail;
}

void CLinkedList::showList()
{
	CNode* s = head->getNext();
	
	while (s != tail) {
		cout << s->getKey() << endl;
		s = s->getNext();
	}
}

void CLinkedList::delete_all()
{
	CNode* t = head->getNext();
	while (t != tail) {
		CNode* s = t;
		t = t->getNext();
		delete s;
	}
	head->setNext(tail);
}

CNode* CLinkedList::findNode(const int& key)
{
	CNode* t = head->getNext();
	while (t != getTail() && t->getKey() != key) {
		t = t->getNext();
	}
	return t;
}

void CLinkedList::delete_node(const int& key)
{
	CNode* p = getHead();
	CNode* s = p->getNext();
	while (s != getTail() && s->getKey() != key) {
		p = s;
		s = p->getNext();
	}
	if (s != getTail()) {
		p->setNext(s->getNext());
		cout << s->getKey() << " 값을 삭제함" << endl;
		delete s;
	}
	else
		cout << "데이터가 존재하지 않음" << endl;
}
