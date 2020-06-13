#include <iostream>
using namespace std;


//ref ������ argument�� ���� �Լ�
//main������ swap(a, b)���� ȣ���� ����
//�����Ͱ� ���� �ʾƵ� �Լ� ���ο��� �ܺΰ� ���� ����
void swap(int& a, int& b){
	int temp = a;
	a = b;
	b = temp;
}

//��ũ�� �Լ��� ����ϴٰ� ���� �ȴ�
//��ũ�� �Լ��� Ÿ�� üũX, inline�� Ÿ�� üũO
inline int SQUARE(int x) {
	return x * x;
}

//DefaultFunc ȣ��� argument�� �Էµ��� �������
//������ ���� �Էµ� default������ �Է��� ����ȴ�(num1�� 7, num2�� 5)
//DefaultFunc()�� DefaultFunc(7, 5)�� ����� ����
//default argument�� �����ִ� �Լ��� �����ε� ����
//default�� ���� argument���� �̷������ ��(�տ������� X) ~ ���� �����ε��� ������ �ȵǴϱ�
int	DefaultFunc(int num1 = 7, int num2 = 5) {
	return num1 + num2;
}

//�����ε��� argument�� ���̿� ���� �����ϴ�
//��ȯ Ÿ���� �����ε��� �ƹ��� ���谡 ����
//C������ �����ε��� �ȵ����� C++�� �����ϴ�
void printArr(const int test) {
	cout << "Overloading" << '\n' << "Just test" << endl;
}

void printArr(int* num) {
	for (int i = 0; i < 6; i++) {
		cout << num[i] << " ";
	}
	cout << endl;
}

int main() {

	//���� �����͸� �������� �ʰ� �����ؼ� ��Ÿ����
	//������ �迭�� ���� �� ���Ҹ� ����Ű�� ���� �����Ű��
	int num[6] = { 10, 50, 60, 20,5,70 };
	int* arr[6];
	for (int i = 0; i < 6; i++) {
		arr[i] = &num[i];
	}

	cout << "���� �� ";
	printArr(num);

	//����
	for (int i = 0; i < 5; i++) {
		for (int j = i + 1; j < 6; j++) {
			if (*arr[i] < *arr[j]) {
				int* temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	cout << "���� �� ";

	//arr�� �����ͷ� ����Ʊ� ������ i�� �����ͷ� ����
	for (int* i : arr) {
		cout << *i << " ";
	}
	cout << endl;

	//�α��� ����/���� �׽�Ʈ
	char userinfo[3][2][10]{
		{"greenjoa1", "1234"},
		{ "greenjoa2", "2234" },
		{ "grrenjoa3","3234" }
	};

	char id[10], pw[10];

	cout << "���̵�� ��й�ȣ : ";
	cin >> id >> pw;

	int i; //for�� �ۿ����� ����ϱ� �Ϸ��� ������ �����ص� �ȴ�

	for(i=0; i<3; i++)
		if (!strcmp(id, userinfo[i][0])) {
			if (!strcmp(pw, userinfo[i][1])) {
				cout << "�α��� ����" << endl;
				break;
			}
			else {
				cout << "�α��� ����" << endl;
			}
		}

	//������(Reference) : ������ ����� ������ ���̴� ����
	//���۷��� ��ȣ &�� �ٿ��ָ� �ȴ�
	//int &ref = 20(X, ��� �ȵ�) &ref;(X, ������ �����ؾ� ��), &ref=NULL;(X, NULL �ʱ�ȭ �Ұ�)
	//��, �����ϸ鼭 �ʱ�ȭ�� �ݵ�� �̷������ �Ѵ�(const�� ����ϴ�)
	int test = 25;
	int* ptr = &test;
	int** dptr = &ptr;

	//������ ������ �����Ϸ��� �켱���� ������ ������ ���� �ϸ� �ȴ�
	int& ref = test;
	int* (&pref) = ptr;
	int** (&dpref) = dptr;

	return 0;
}