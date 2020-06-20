#pragma once
#include "CNode.h"
class CLinkedList
{
private:
	CNode* head;
	CNode* tail;
public:
	CLinkedList();
	~CLinkedList();
	void insert1(const int& key);
	CNode* getHead();
	CNode* getTail();
	void showList();
	void delete_all();
	CNode* findNode(const int& key);
	void delete_node(const int& key);
};

