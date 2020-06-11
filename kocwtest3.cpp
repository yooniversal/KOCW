#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void menu() {
	cout << "1)�Ƹ޸�ī�� 2)ī��� 3)���� 4)����" << endl;
}

int main() {

	int num, ans=0;
	const int SIZE = 5; //const int�� ����� ������ arr�� ũ�⿡ �� �� �ִ�(������ X)
	int arr[SIZE] = { 10, 20, 30, 40, 50 };

	do {
		menu();
		cin >> num;

		if (num == 1) {
			ans += 100;
		}
		else if (num == 2) {
			ans += 200;
		}
		else if (num == 3) {
			cout << "���� �Ϸ�. �� ���� �ݾ��� " << ans << "�� �Դϴ�" << endl;
			ans = 0;
		}

	} while (num != 4);

	//arr�� �� ���� ���ʴ�� ����ϱ�
	for (int x : arr)
		cout << x << endl;

	//��� ���
	int sum = 0;
	for (int i = 0; i < SIZE; i++) {
		sum += arr[i];
	}
	cout << "�����" << sum / SIZE << "�Դϴ�." << endl;

	//���� �����ϱ�
	//0~9���� ��� �߻��ߴ��� Ȯ��
	int cnt[10] = { 0 };
	srand((unsigned)time(NULL));
	for(int i=0; i<1000; i++)
		cnt[rand() % 10]++;

	for (int i = 0; i < 10; i++)
		cout << i << '\t' << cnt[i] << endl;

	return 0;
}