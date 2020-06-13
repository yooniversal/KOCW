#include <iostream>
using namespace std;


//ref 변수가 argument에 들어가는 함수
//main에서는 swap(a, b)으로 호출이 가능
//포인터가 들어가지 않아도 함수 내부에서 외부값 조작 가능
void swap(int& a, int& b){
	int temp = a;
	a = b;
	b = temp;
}

//매크로 함수와 비슷하다고 보면 된다
//매크로 함수는 타입 체크X, inline은 타입 체크O
inline int SQUARE(int x) {
	return x * x;
}

//DefaultFunc 호출시 argument가 입력되지 않을경우
//다음과 같이 입력된 default값으로 입력이 진행된다(num1은 7, num2는 5)
//DefaultFunc()와 DefaultFunc(7, 5)의 결과가 같다
//default argument를 갖고있는 함수는 오버로딩 주의
//default는 뒤의 argument부터 이루어져야 함(앞에서부터 X) ~ 어기면 오버로딩시 구분이 안되니까
int	DefaultFunc(int num1 = 7, int num2 = 5) {
	return num1 + num2;
}

//오버로딩은 argument의 차이에 따라 가능하다
//반환 타입은 오버로딩과 아무런 관계가 없다
//C에서는 오버로딩이 안됐으나 C++은 가능하다
void printArr(const int test) {
	cout << "Overloading" << '\n' << "Just test" << endl;
}

void printArr(int* num) {
	for (int i = 0; i < 6; i++) {
		cout << num[i] << " ";
	}
	cout << endl;
}

int main() {

	//원본 데이터를 변경하지 않고 정렬해서 나타내기
	//포인터 배열을 만들어서 각 원소를 가리키고 순서 변경시키기
	int num[6] = { 10, 50, 60, 20,5,70 };
	int* arr[6];
	for (int i = 0; i < 6; i++) {
		arr[i] = &num[i];
	}

	cout << "정렬 전 ";
	printArr(num);

	//정렬
	for (int i = 0; i < 5; i++) {
		for (int j = i + 1; j < 6; j++) {
			if (*arr[i] < *arr[j]) {
				int* temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	cout << "정렬 후 ";

	//arr가 포인터로 선언됐기 때문에 i도 포인터로 선언
	for (int* i : arr) {
		cout << *i << " ";
	}
	cout << endl;

	//로그인 성공/실패 테스트
	char userinfo[3][2][10]{
		{"greenjoa1", "1234"},
		{ "greenjoa2", "2234" },
		{ "grrenjoa3","3234" }
	};

	char id[10], pw[10];

	cout << "아이디와 비밀번호 : ";
	cin >> id >> pw;

	int i; //for문 밖에서도 사용하기 하려면 별도로 선언해도 된다

	for(i=0; i<3; i++)
		if (!strcmp(id, userinfo[i][0])) {
			if (!strcmp(pw, userinfo[i][1])) {
				cout << "로그인 성공" << endl;
				break;
			}
			else {
				cout << "로그인 실패" << endl;
			}
		}

	//참조자(Reference) : 기존에 선언된 변수에 붙이는 별명
	//레퍼런스 기호 &를 붙여주면 된다
	//int &ref = 20(X, 상수 안됨) &ref;(X, 누군가 참조해야 함), &ref=NULL;(X, NULL 초기화 불가)
	//즉, 선언하면서 초기화가 반드시 이루어져야 한다(const와 비슷하다)
	int test = 25;
	int* ptr = &test;
	int** dptr = &ptr;

	//포인터 변수를 참조하려면 우선순위 때문에 다음과 같이 하면 된다
	int& ref = test;
	int* (&pref) = ptr;
	int** (&dpref) = dptr;

	return 0;
}