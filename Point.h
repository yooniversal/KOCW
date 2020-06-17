#pragma once
class Point{
private:
	int x;
	int y;
public:
	~Point();	//소멸자
	Point(); //이게 있어야 main에서 Point pt; 사용 가능
	Point(const int& X, const int& Y); //생성자
	void init(const int& X, const int& Y);
	void setXY(const int& X, const int& Y);
	void move(const int& dist);
	void showPoint() const;
	int getX() const;
	int getY() const;
};

