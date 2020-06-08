#pragma once //visual studio에서만 지원하는 기능. 여러 함수 선언시 한 번만 사용
#include <iostream>
using namespace std;

//namespace 선언
namespace A {
	void showName() {
		cout << "Yoon" << endl;
	}
}
namespace B {
	void showName() {
		cout << "yoon" << endl;
	}
}