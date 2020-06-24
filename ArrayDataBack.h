#pragma once
#include "ArrayData.h"
class ArrayDataBack :
	public ArrayData
{
private:
	double* backData;
	int usedB;
public:
	ArrayDataBack();
	~ArrayDataBack();
	ArrayDataBack(const int& capacity);
	void backup();
	void restore();
	void operator=(const ArrayDataBack& copy);
};

