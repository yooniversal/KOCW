#include "Point.h"
#include "Player.h"
#include "Rectangle.h"
#include <iostream>
using namespace std;


//const 객체는 멤버를 변경시킬 수 없으므로
//const Point& pt가 인자로 오면 안된다
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

	Point pt;				//생성자 1번, 소멸자 1번
	Point pt2(10, 20);		//생성자 1번, 소멸자 1번
	Point* p = new Point;	//동적 할당
	delete p;				//delete 시에만 소멸자 호출

	Rectangle rect2(100, 100, 200, 200);

	//과제
	//각 플레이어가 주사위 2개를 던지고 합이 큰 사람을 출력
	Player p1, p2;
	Dice d1, d2, d3, d4;
	p1.setName("철수"); p2.setName("영희");
	p1.roll(d1, d2); p2.roll(d3, d4);
	if (p1.getTotal() > p2.getTotal()) cout << p1.getName() << "의 승리입니다!" << endl;
	else if (p1.getTotal() < p2.getTotal()) cout << p2.getName() << "의 승리입니다!" << endl;
	else cout << "무승부 입니다!" << endl;
	cout << p1.getName() << "의 주사위 합 : " << p1.getTotal() << endl;
	cout << p2.getName() << "의 주사위 합 : " << p2.getTotal() << endl;

	return 0;
}