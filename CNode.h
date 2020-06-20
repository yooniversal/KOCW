#pragma once
class CNode
{
private:
	int key;
	CNode* next;
public:
	CNode();
	~CNode();
	CNode(const int& key);
	void setKey(const int& key);
	int getKey();
	void setNext(CNode* next);
	CNode* getNext();
};

