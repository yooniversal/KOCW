#include "kocwtest1.h"
#include <iomanip>
//������ �̸��� �ִ� ����
//�ٸ� ������ ���� �̸��� ���� �Լ��� ȣ���� ��, �������� �� �ִ�(case1::A, case2::A, case3::A)
//�Ϲ������� ���� �̸��� �Լ��� ����� �� ����(C/C++ ��� �ش�)
//using std::cout�� ���������ν� cout�� ȣ���ص� ��� ����������, std ������ cout, endl ���� ���� �����Ƿ� �� ���� ����ȣ��
using namespace std;

int val = 100;

int main() {

	int val=50;

	//ȭ��ǥ�� ����Ű�� �������� input
	//endl�� �ٹٲ�. \n���� ��ü�ϸ� �ӵ��� ������(BOJ)
	//<<�� � ���� ������ �������(Overloading)
	cout << "Hello World!" << endl;

	val++; //��������
	::val++; //��������

	cout << val << ::val << '\n';

	// setw(6) == %6d : 6ĭ���� ����
	cout << setw(6) << val << endl;

	//using A, B example
	A::showName();
	B::showName();

	int input;

	cin >> input;
	cout << input << endl;

	return 0;
}