#include "ArrayDataBack.h"

ArrayDataBack::ArrayDataBack() : usedB(0),  backData(nullptr)
{
}
ArrayDataBack::~ArrayDataBack()
{
	if (backData != nullptr)
		delete[] backData;
}
ArrayDataBack::ArrayDataBack(const int& capacity) : ArrayData(capacity), usedB(0)
{
	backData = new double[capacity];
}
void ArrayDataBack::backup() {
	usedB = used;
	for (int i = 0; i < usedB; i++)
		backData[i] = data[i];
}
void ArrayDataBack::restore() {
	used = usedB;
	for (int i = 0; i < used; i++)
		data[i] = backData[i];
}

void ArrayDataBack::operator=(const ArrayDataBack& copy)
{
	ArrayData::operator=(copy);	//ArrayData ����� ���ؼ� ���� ���� ����
	usedB = copy.usedB;			//ArrayData ����� �ƴϹǷ� ������ ����
	if (backData != nullptr) {
		delete[] backData;
		backData = new double[capacity];	//�θ��� capacity�� �̹� ���� ���簡 �����Ƿ� �̿��ص� ��
	}
	for (int i = 0; i < usedB; i++)
		backData[i] = copy.backData[i];
}
