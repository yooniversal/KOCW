#include <iostream>
#include "HTMLWriter.h"
using namespace std;

int main() {
	HTMLWriter doc1("greenjoa.html", "C++ 연습");

	DocWriter doc2 = doc1; //doc2(doc1); 부모는 자식을 가리킬 수 있음
	DocWriter doc3;
	doc3 = doc1; //가능
	
	DocWriter* doc4 = &doc1;
	DocWriter* doc5 = new HTMLWriter();	//부모는 자식을 포인팅할 수 있음
	DocWriter& doc6 = doc1;	//doc4의 경우와 같음
	
	doc3.write();	//doc1 호출됨
	doc4->write();	//doc1 호출됨

	

	return 0;
}