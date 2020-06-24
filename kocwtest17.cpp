#include <iostream>
#include "Student.h"
using namespace std;

template<typename T>
T MAX(const T& a, const T& b) {
	return a > b ? a : b;
}

ostream& operator<<(ostream& out, const Student& s) {
	out << s.getName() << "," << s.getScore() << endl;
	return out;
}

template <typename T>
void print_array(T* arr, const int& size) {
	cout << "템플릿 함수" << endl;
	for (int i = 0; i < size; i++)
		cout << arr[i] << endl;
}

//전문 함수가 우선 순위
//일반 전역 함수가 같이 있으면 일반 전역 함수가 우선순위이므로
//같이 만들어줄 필요가 없다
template <>
void print_array(char* arr, const int& size) {
	cout << "템플릿 전문 함수" << endl;
	cout << arr << endl;
}

template <typename T>
void sortAsc(T* arr, const int& size) {
	for(int i=0; i<size-1; i++)
		for(int j=i+1; j<size; j++)
			if (arr[i] > arr[j]) {
				T temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
	print_array(arr, size);
}

template <typename T>
void sortDesc(T* arr, const int& size) {
	for (int i = 0; i < size - 1; i++)
		for (int j = i + 1; j < size; j++)
			if (arr[i] < arr[j]) {
				T temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
	print_array(arr, size);
}

template <typename T1, typename T2>
bool Find(T1* arr, const int& size, const T2& data, int& index) {
	for(int i=0; i<size; i++)
		if (arr[i] == data) {	//Student 이용시, == 연산자가 오버로딩이 되어야 함
			index = i;
			return true;
		}
	return false;
}

int main() {

	cout << MAX(10, 50) << endl;
	cout << MAX(100.5, 52.9) << endl;
	cout << MAX(Student(100), Student(50)) << endl;

	int arr[4] = { 10, 20, 80, 60 };
	double arr2[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	print_array(arr, 4);
	print_array(arr2, 5);

	char arr3[] = "greenjoa";
	print_array(arr3, sizeof(arr3));

	Student std[] = { Student("홍길동", 100), Student("고길동", 30), Student("김길동", 50) };
	print_array(std, 3);
	sortAsc(std, 3);
	sortDesc(std, 3);

	int index;
	if (Find(arr, 4, 80, index)) {
		cout << arr[index] << endl;
	}
	if (Find(std, 3, 30, index)) {
		cout << std[index] << endl;
	}

	if (Find(std, 3, Student("홍길동", 100), index)) {
		cout << std[index].getName() << "," << std[index].getScore() << endl;
	}

	return 0;
}