#include <iostream>	// cout, endl 사용
#include "04-01.h"

using namespace std;

Point::Point() {};	// 기본 생성자
Point::Point(int _x, int _y) : mX(_x), mY(_y) {}	// 생성자

void Point::print(void)
{
	cout << "X: " << mX << endl;
	cout << "Y: " << mY << endl;

}

// 반환형 클래스 함수이름 매개변수
Point Point::operator+(const Point& rhs)
{
	Point p;	// 매개변수가 없는 생성자 필요
	p.mX = mX + rhs.mX;
	p.mY = mY + rhs.mY;
	return p;
}