#include <iostream>	// cout, endl 사용
using namespace std;
class Point
{
public:
	Point();	// 기본 생성자

	Point(int _x, int _y);	// 생성자
	// 연산자 오버로딩
	Point operator+(const Point& rhs);
	void print(void);
private:
	int mX;
	int mY;
};
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
int main(void)
{
	Point p1(1, 2);
	Point p2(3, 4);

	Point sum = p1.operator+(p2); // Point sum = p1 + p2;
	Point sum = p1 + p2;	//Point sum = p1.operator+(p2);

	sum.print();	// 4, 6

	return 0;
}