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
	ArrayData::operator=(copy);	//ArrayData 멤버에 관해서 깊은 대입 수행
	usedB = copy.usedB;			//ArrayData 멤버가 아니므로 별도로 수행
	if (backData != nullptr) {
		delete[] backData;
		backData = new double[capacity];	//부모의 capacity는 이미 깊은 복사가 됐으므로 이용해도 됨
	}
	for (int i = 0; i < usedB; i++)
		backData[i] = copy.backData[i];
}
