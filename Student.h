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
	int getScore() const{	//const ������ �̿��ϱ� ���� const �Լ��� ����	
		return score;	//inline ����
	}
	string getName() const {
		return name;
	}
	bool operator>(const Student& s) const;	//const ������ �̿��ϱ� ���� const �Լ��� ����
	bool operator<(const Student& s) const;	//const ������ �̿��ϱ� ���� const �Լ��� ����
	bool operator==(const int& s) const;	//const ������ �̿��ϱ� ���� const �Լ��� ����
	bool operator==(const Student& s) const;	//const ������ �̿��ϱ� ���� const �Լ��� ����
};

