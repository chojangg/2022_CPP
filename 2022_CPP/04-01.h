#include <iostream>	// cout, endl ���
using namespace std;
class Point
{
public:
	Point();	// �⺻ ������

	Point(int _x, int _y);	// ������
	// ������ �����ε�
	Point operator+(const Point& rhs);
	void print(void);
private:
	int mX;
	int mY;
};
