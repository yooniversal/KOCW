#include <iostream>
#include "ArrayData.h"
using namespace std;

//ArrayData arr = arr2 (call by value)
//ArrayData& arr = arr2 (call by reference)
void showArray(ArrayData arr) {
	arr.addElement(5.1);
	arr.showData();
}

double getArraySum(const ArrayData& arr) {
	double total = 0.0;
	for (int i = 0; i < arr.used; i++)
		total += arr.data[i];

	return total;
}

int main() {
	
	//클래스 내부에서 동적 할당을 했으면
	//복사 생성자를 무조건 만들어줘야 한다 (동적할당 아니면 문제X)
	//greenjoa2가 greenjoa1을 가리키는 형태가 되는데
	//greenjoa1의 소멸자가 호출된 후 greenjoa2가 같은 곳을 다시 소멸하기 때문에
	//런타임 에러가 발생한다
	//따라서 서로 다른 메모리를 갖게 만들어줘야 한다 <깊은 복사>

	ArrayData arr1(4);

	arr1.addElement(1.1);
	arr1.addElement(2.1);
	
	ArrayData arr2(arr1);
	showArray(arr2);	//아래의 arr2와 결과 비교
	arr1.showData();
	arr2.showData();

	ArrayData arr3 = arr1.getObject();	//arr3에 객체 arr1 넣기
	arr3.addElement(10.2);
	arr1.showData();
	arr3.showData();	//arr1, arr3 결과가 서로 다름을 알 수 있음

	cout << getArraySum(arr3) << endl;

	ArrayData* arr4 = new ArrayData(3);
	cout << ArrayData::getCount() << endl;
	cout << arr1.getCount() << endl;
	cout << arr3.getCount() << endl;	//static이기 때문에 다 같은 값을 공유
	delete arr4;
	cout << ArrayData::getCount() << endl;
	
	//const 멤버는 initializer를 통해 초기화
	//static은 클래스 외부에서 초기화
	//const static은 예외적으로 클래스 내부에서 초기화
	return 0;
}