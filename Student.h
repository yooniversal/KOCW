#pragma once
#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
	string name;
	int score;
public:
	Student();
	Student(const int& score);
	Student(const string& name, const int& score);
	~Student();
	int getScore() const{	//const 변수를 이용하기 위해 const 함수로 선언	
		return score;	//inline 선언
	}
	string getName() const {
		return name;
	}
	bool operator>(const Student& s) const;	//const 변수를 이용하기 위해 const 함수로 선언
	bool operator<(const Student& s) const;	//const 변수를 이용하기 위해 const 함수로 선언
	bool operator==(const int& s) const;	//const 변수를 이용하기 위해 const 함수로 선언
	bool operator==(const Student& s) const;	//const 변수를 이용하기 위해 const 함수로 선언
};

