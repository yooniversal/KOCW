#include "CNode.h"

CNode::CNode()
{
}
CNode::~CNode()
{
}
CNode::CNode(const int& key)
	:key(key), next(nullptr)
{
}
void CNode::setKey(const int& key) {
	this->key = key;
}
int CNode::getKey() {
	return key;
}
void CNode::setNext(CNode* next) {
	this->next = next;
}
CNode* CNode::getNext() {
	return next;
}