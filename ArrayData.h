#pragma once
class ArrayData
{
private:
	double* data;
	int capacity;
	int used;
	static int count;
public:
	ArrayData();
	ArrayData(const ArrayData& copy);
	~ArrayData();
	ArrayData(int capacity);
	void addElement(double num);
	bool full();
	int getCapacity();
	int getUsed();
	void emptyArray();
	void showData();
	ArrayData getObject();
	friend double getArraySum(const ArrayData& arr);	//특별히 private 멤버 접근 허용해주고 싶을 때
	static int getCount();	//static int count에 접근하기 위해 함수를 static으로 선언
};

