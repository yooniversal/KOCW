#include <iostream>
#include "HTMLWriter.h"
using namespace std;

int main() {
	HTMLWriter doc1("greenjoa.html", "C++ ����");

	DocWriter doc2 = doc1; //doc2(doc1); �θ�� �ڽ��� ����ų �� ����
	DocWriter doc3;
	doc3 = doc1; //����
	
	DocWriter* doc4 = &doc1;
	DocWriter* doc5 = new HTMLWriter();	//�θ�� �ڽ��� �������� �� ����
	DocWriter& doc6 = doc1;	//doc4�� ���� ����
	
	doc3.write();	//doc1 ȣ���
	doc4->write();	//doc1 ȣ���

	

	return 0;
}