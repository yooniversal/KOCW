#include <iostream>
#include <fstream> //ifstream ȣ��

using namespace std;

//���ڿ��̴ϱ� const char* �� ����
//r, c�� row, col���� ��ȯ�ޱ� ���� ���۷��� ���(int& r, int& c)
int** readMap(const char* fileName, int& r, int& c) {
	ifstream fin(fileName); //ifstream ��ü�� ���ؼ� fin ��ü�� ������
	int** map = NULL;

	//is_open() : ������ ���ȴ��� Ȯ���ϴ� �Լ�
	if (fin.is_open()) {
		int row, col;
		fin >> row >> col;
		r = row;
		c = col;

		//2���� �迭�� ���� �Ҵ�
		map = new int* [row];
		for (int i = 0; i < row; i++) {
			map[i] = new int[col];
			for (int j = 0; j < col; j++)
				//Map1.txt�� �ִ� �� ���� ���� �Ҵ��� map[i][j]�� �Է�
				fin >> map[i][j];
		}
	}
	//���������� ������ �ʾҴٸ�
	else {
		cout << "���� Ȯ�� ����" << endl;
	}

	return map;
}

//row, col�� ������ �ʱ⶧���� ������ �����ϱ� ���� const�� �ٿ��൵ �ȴ�
//���۷����� �ٿ��ذ� �߰� ����� ���� �ʱ� �����̶�� ��. �޸𸮸� �߰��� �Ҵ����� �ʴ� ����̶�� ���ε�.
void showMap(int** (&map), const int& row, const int& col) {
	//2�� for���� ���� ���
	//���ڿ� ���� ��ȣ ���
}

int main() {
	int col, row;

	cin >> col >> row;

	//2���� �迭 ���� �Ҵ�
	//������ �����Ҵ����ְ�, ������ ����� �����Ҵ� ���ش�.
	int** parr = new int* [row];
	for (int i = 0; i < row; i++) {
		parr[i] = new int[col];
		for (int j = 0; j < col; j++)
			parr[i][j] = j;
	}

	for (int i = 0; i < row; i++)
		delete[] parr[i]; //�� �����Ҵ� ����
	delete[] parr; //���������� array �����Ҵ� ����


	int row, col;
	//Map1.txt�� �ִ� ���� readMap �Լ� ���ο��� ������ ����� ������ ��
	//���������� return map�� ���� main�� map�� ��ȯ�Ѵ�
	//�߰��� row, col���� �Էµ� ���� ��ȯ�Ѵ�
	int** map = readMap("Map1.txt", row, col);

	//�̰� ���ִ��� �𸣰���. �־ �ǳ�?
	ifstream ifile("Map1.txt");

	//map�� ���������� ���ȴٸ�
	if (map != NULL) {
		//Map ����ϱ�
		showMap(map, row, col);
	}
	
	
	return 0;
}