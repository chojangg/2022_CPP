#include <iostream>	// cout, endl ���
#include <string.h>	// strcpy() ���

using namespace std;

class Point {
public:
	Point(int m_X, int m_Y);
private:
	int mX;
	int mY;
	
};

Point::Point(int m_X, int m_Y) : mX(m_X), mY(m_Y) {}

int main(void)
{
	Point p1(1, 2);
	return 0;
}