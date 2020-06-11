#include <iostream>
#include <string> //문자열을 다룸
#include <sstream> //stringstream을 위해 호출
using namespace std;

int main() {

	string name; //공백이 없는 문자열
	cin >> name; //cin은 공백, 탭(/t), 엔터(\n)에 의해 문자열을 추출함
	cout << name << "님 환영합니다" << endl;

	string line;
	getline(cin, line); //공백을 포함한 라인 전체를 입력받음
	cout << line << endl;

	//C에서 쓰던 atoi()를 안써도 다음과 같이 변환할 수 있다
	float price;
	int intprice;
	getline(cin, line); //만약 숫자 등을 입력 받았을 때 -> 일단은 string으로 받는다
	stringstream(line) >> price; //string -> float 변환
	stringstream(line) >> intprice; //string -> int 변환
	
	string cutstr;
	getline(cin, line); //hi there bye
	stringstream ss;
	ss.str(line); //line 안에 있는 문자열을 공백 단위로 자르기
	while (ss >> cutstr) { //자른 값이 있을 경우 -> cutstr에 담기
		cout << cutstr << endl;
	}

	return 0;
}