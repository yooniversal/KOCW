#pragma once
class Point{
private:
	int x;
	int y;
public:
	~Point();	//�Ҹ���
	Point(); //�̰� �־�� main���� Point pt; ��� ����
	Point(const int& X, const int& Y); //������
	void init(const int& X, const int& Y);
	void setXY(const int& X, const int& Y);
	void move(const int& dist);
	void showPoint() const;
	int getX() const;
	int getY() const;
};

