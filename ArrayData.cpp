#include "ArrayData.h"
#include <iostream>
using namespace std;

int ArrayData::count = 0;	//전역변수 초기화

ArrayData::ArrayData()
	:capacity(0), used(0), data(nullptr)
{
	count++;
}

//복사 생성자
ArrayData::ArrayData(const ArrayData& copy)
	:capacity(copy.capacity), used(copy.used)
{
	data = new double[capacity];
	for (int i = 0; i < used; i++)
		data[i] = copy.data[i];
	count++;
}

ArrayData::~ArrayData()
{
	count--;
	if (data != nullptr)
		delete[] data;
	data = nullptr;
}

ArrayData::ArrayData(int capacity)
	:capacity(capacity), used(0)
{
	data = new double[capacity];
	count++;
}

void ArrayData::addElement(double num)
{
	if (full() == false)
		data[used++] = num;
	else
		cout << "배열이 꽉 참" << endl;
}

bool ArrayData::full()
{
	if (capacity == used) return true;
	else return false;
}

int ArrayData::getCapacity()
{
	return capacity;
}

int ArrayData::getUsed()
{
	return used;
}

void ArrayData::emptyArray()
{
	used = 0;
}

void ArrayData::showData()
{
	for (int i = 0; i < used; i++)
		cout << data[i] << " ";
	cout << endl;
}

ArrayData ArrayData::getObject()
{
	return *this;
}

int ArrayData::getCount()
{
	return count;
}
