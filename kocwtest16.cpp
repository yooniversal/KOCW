#include <iostream>
#include "time.h"
#include "ArrayData.h"
#include "ArrayDataBack.h"
using namespace std;

//�����Լ��� friend ���༭ private ����� ���� ����
time operator+ (const int& h, const time& t) {
	time sum;
	sum.minutes = t.minutes;
	sum.hours = t.hours + h;
	return sum;
}

//cout << ��ü1 << ��ü2 << endl
//��ȯ ������ void�� void << ��ü2 << endl �� �ȴ�
//���� cout�� ��ȯ�� �� �ֵ��� ��ȯ���� ostream& ���� ���ش�
//(cout�� ostream�̹Ƿ� + ���簡 �ȵǵ��� & ���̱�)
ostream& operator<<(ostream& out, time& t) {
	t.show();
	return out;
}

ostream& operator<<(ostream& out, ArrayData& a) {
	a.showData();
	return out;
}

int main() {
	time t1(3, 45);
	time t2(2, 23);
	//time total = t1.sum(t2);
	//time total = t1.sum(3);
	time total = t1 + t2;
	time total2 = t1 + 3;
	total.show();
	total2.show();

	total = 3 + t1;

	total.operator<<(cout); //�� �Ʒ��� ����
	total << cout;

	cout << t1 << "," << total << endl;;

	ArrayData data(10);
	data.addElement(10.2);
	data.addElement(10.1);
	data.addElement(10.7);
	data.addElement(10.6);
	data.addElement(10.4);
	//data.showData();
	cout << data << endl;

	for (int i = 0; i < data.getUsed(); i++) {
		cout << data[i] << endl;	//double& operator[](int index);
	}

	ArrayData data2(2);
	data2 = data;	//type�� ���Ƽ� ���� ������ ���������� ��Ÿ�� ���� �߻�(���� �����ڿ��� ����)
					//���� ũ�Ⱑ �޶󼭰�X -> ���� ������ �����ϸ鼭 data2�� data�� ����Ű�� �ǹǷ�
					//data�� �Ҹ��ڰ� 2�� ȣ��� ������ �߻��Ѵ� + ���� data2�� �޸� ������ �߻�
					// => �����ε� ���ֱ�
					//����� '���� �Ҵ�'�ϰ� ������ ���� ���꿡�� ������ �߻��� �� �ִ� **

	ArrayDataBack data3(10);
	data3.addElement(10.2);
	data3.addElement(10.1);
	data3.addElement(10.7);
	data3.backup();	//�θ𿡼� ���ǵȰ� �ڽĿ����� �״�� �� �� ����(���)
	data3.addElement(10.6);
	data3.addElement(10.4);
	cout << data3 << endl;
	data3.restore();
	cout << data3 << endl;

	ArrayDataBack data4;
	data4 = data3;	//������ ���� ���� ���꿡 ���� ���� ���� �߻�
					//�θ�� type�� �޶� ������


	return 0;
}