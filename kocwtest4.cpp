#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
using namespace std;

int main() {
	const int row = 10;
	const int col = 10;
	int arr[row][col] = { 0, };
	string item[4] = { "��", "��", "��", "��" };

	srand((unsigned)time(NULL));
	for (int i = 1; i < 4; i++) {
		int x = rand() % 10;
		int y = rand() % 10;

		//���� �濡 ���� �ʵ��� ������ֱ�
		if (arr[x][y] == 0)
			arr[x][y] = i;
		else
			i--; //���� ���� ���õ��� �� ��ȸ �缳��
	}
	
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			switch (arr[i][j]) {
			case 0:
				cout << item[0];
				break;
			case 1:
				cout << item[1];
				break;
			case 2:
				cout << item[2];
				break;
			case 3:
				cout << item[3];
				break;
			}
		}
		cout << endl;
	}

	return 0;
}