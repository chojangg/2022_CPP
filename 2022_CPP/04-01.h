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
