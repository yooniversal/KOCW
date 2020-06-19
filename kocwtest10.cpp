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
	
	//Ŭ���� ���ο��� ���� �Ҵ��� ������
	//���� �����ڸ� ������ �������� �Ѵ� (�����Ҵ� �ƴϸ� ����X)
	//greenjoa2�� greenjoa1�� ����Ű�� ���°� �Ǵµ�
	//greenjoa1�� �Ҹ��ڰ� ȣ��� �� greenjoa2�� ���� ���� �ٽ� �Ҹ��ϱ� ������
	//��Ÿ�� ������ �߻��Ѵ�
	//���� ���� �ٸ� �޸𸮸� ���� �������� �Ѵ� <���� ����>

	ArrayData arr1(4);

	arr1.addElement(1.1);
	arr1.addElement(2.1);
	
	ArrayData arr2(arr1);
	showArray(arr2);	//�Ʒ��� arr2�� ��� ��
	arr1.showData();
	arr2.showData();

	ArrayData arr3 = arr1.getObject();	//arr3�� ��ü arr1 �ֱ�
	arr3.addElement(10.2);
	arr1.showData();
	arr3.showData();	//arr1, arr3 ����� ���� �ٸ��� �� �� ����

	cout << getArraySum(arr3) << endl;

	ArrayData* arr4 = new ArrayData(3);
	cout << ArrayData::getCount() << endl;
	cout << arr1.getCount() << endl;
	cout << arr3.getCount() << endl;	//static�̱� ������ �� ���� ���� ����
	delete arr4;
	cout << ArrayData::getCount() << endl;
	
	//const ����� initializer�� ���� �ʱ�ȭ
	//static�� Ŭ���� �ܺο��� �ʱ�ȭ
	//const static�� ���������� Ŭ���� ���ο��� �ʱ�ȭ
	return 0;
}