#include <iostream>
#include <string> //���ڿ��� �ٷ�
#include <sstream> //stringstream�� ���� ȣ��
using namespace std;

int main() {

	string name; //������ ���� ���ڿ�
	cin >> name; //cin�� ����, ��(/t), ����(\n)�� ���� ���ڿ��� ������
	cout << name << "�� ȯ���մϴ�" << endl;

	string line;
	getline(cin, line); //������ ������ ���� ��ü�� �Է¹���
	cout << line << endl;

	//C���� ���� atoi()�� �Ƚᵵ ������ ���� ��ȯ�� �� �ִ�
	float price;
	int intprice;
	getline(cin, line); //���� ���� ���� �Է� �޾��� �� -> �ϴ��� string���� �޴´�
	stringstream(line) >> price; //string -> float ��ȯ
	stringstream(line) >> intprice; //string -> int ��ȯ
	
	string cutstr;
	getline(cin, line); //hi there bye
	stringstream ss;
	ss.str(line); //line �ȿ� �ִ� ���ڿ��� ���� ������ �ڸ���
	while (ss >> cutstr) { //�ڸ� ���� ���� ��� -> cutstr�� ���
		cout << cutstr << endl;
	}

	return 0;
}