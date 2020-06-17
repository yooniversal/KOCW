#include "Point.h"
#include "Player.h"
#include "Rectangle.h"
#include <iostream>
using namespace std;


//const ��ü�� ����� �����ų �� �����Ƿ�
//const Point& pt�� ���ڷ� ���� �ȵȴ�
void move(Point& pt, const int& dist) {
	pt.move(dist);
}

int main() {
	Point pt1;
	pt1.init(100, 100);
	pt1.showPoint();
	move(pt1, 10);

	Rectangle rect;
	rect.init(100, 100, 200, 200);
	rect.showRectangle();
	rect.move(10);

	Point pt;				//������ 1��, �Ҹ��� 1��
	Point pt2(10, 20);		//������ 1��, �Ҹ��� 1��
	Point* p = new Point;	//���� �Ҵ�
	delete p;				//delete �ÿ��� �Ҹ��� ȣ��

	Rectangle rect2(100, 100, 200, 200);

	//����
	//�� �÷��̾ �ֻ��� 2���� ������ ���� ū ����� ���
	Player p1, p2;
	Dice d1, d2, d3, d4;
	p1.setName("ö��"); p2.setName("����");
	p1.roll(d1, d2); p2.roll(d3, d4);
	if (p1.getTotal() > p2.getTotal()) cout << p1.getName() << "�� �¸��Դϴ�!" << endl;
	else if (p1.getTotal() < p2.getTotal()) cout << p2.getName() << "�� �¸��Դϴ�!" << endl;
	else cout << "���º� �Դϴ�!" << endl;
	cout << p1.getName() << "�� �ֻ��� �� : " << p1.getTotal() << endl;
	cout << p2.getName() << "�� �ֻ��� �� : " << p2.getTotal() << endl;

	return 0;
}