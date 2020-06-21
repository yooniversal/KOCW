#include <iostream>
#include "HTMLWriter.h"
using namespace std;

int main() {
	DocWriter doc1;
	doc1.write();
	DocWriter doc2("greenjoa.txt", "C++ 연습");
	doc2.write();

	HTMLWriter doc3;
	doc3.write();
	HTMLWriter doc4("greenjoa.html", "C++ 연습");
	doc4.write();

	return 0;
}