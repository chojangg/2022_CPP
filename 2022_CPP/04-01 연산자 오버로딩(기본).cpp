#include <iostream>	// cout, endl 사용
#include <string.h>	// strcpy() 사용

using namespace std;

class Point {
public:
	Point(int m_X, int m_Y);
private:
	int mX;
	int mY;
	
};

Point::Point(int _x, int _y) : mX(_x), mY(_y) {}

int main(void)
{
	Point p1(1, 2);
	return 0;
}