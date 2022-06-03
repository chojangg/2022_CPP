#include <iostream>	// cout, endl 사용
#include <string.h>	// strcpy() 사용 

using namespace std;

class Point {
public:
	Point(int m_X, int m_Y);
	void print(void);
private:
	int mX;
	int mY;
	
};

Point::Point(int _x, int _y) : mX(_x), mY(_y) {}

void Point::print(void) {
	cout << "(" << mX << ", " << mY << ")" << endl;
}

int main(void)
{
	Point p1(1, 2);
	p1.print();
	return 0;
}