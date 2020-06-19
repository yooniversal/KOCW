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
	friend double getArraySum(const ArrayData& arr);	//Ư���� private ��� ���� ������ְ� ���� ��
	static int getCount();	//static int count�� �����ϱ� ���� �Լ��� static���� ����
};

