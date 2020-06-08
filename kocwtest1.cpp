#include "kocwtest1.h"
#include <iomanip>
//공간에 이름을 주는 행위
//다른 공간에 같은 이름을 가진 함수를 호출할 때, 구분해줄 수 있다(case1::A, case2::A, case3::A)
//일반적으로 같은 이름의 함수를 사용할 수 없음(C/C++ 모두 해당)
//using std::cout를 선언함으로써 cout만 호출해도 사용 가능하지만, std 공간에 cout, endl 등이 묶여 있으므로 한 번에 공간호출
using namespace std;

int val = 100;

int main() {

	int val=50;

	//화살표를 가리키는 방향으로 input
	//endl은 줄바꿈. \n으로 대체하면 속도가 빠르다(BOJ)
	//<<에 어떤 것을 보내도 출력해줌(Overloading)
	cout << "Hello World!" << endl;

	val++; //지역변수
	::val++; //전역변수

	cout << val << ::val << '\n';

	// setw(6) == %6d : 6칸으로 설정
	cout << setw(6) << val << endl;

	//using A, B example
	A::showName();
	B::showName();

	int input;

	cin >> input;
	cout << input << endl;

	return 0;
}