#include <iostream>
#include "HTMLWriter.h"
using namespace std;

int main() {
	DocWriter doc1;
	doc1.write();
	DocWriter doc2("greenjoa.txt", "C++ ����");
	doc2.write();

	HTMLWriter doc3;
	doc3.write();
	HTMLWriter doc4("greenjoa.html", "C++ ����");
	doc4.write();

	return 0;
}