#include <iostream>	// cout, endl ���
#include "04-01.h"

using namespace std;

Point::Point() {};	// �⺻ ������
Point::Point(int _x, int _y) : mX(_x), mY(_y) {}	// ������

void Point::print(void)
{
	cout << "X: " << mX << endl;
	cout << "Y: " << mY << endl;

}

// ��ȯ�� Ŭ���� �Լ��̸� �Ű�����
Point Point::operator+(const Point& rhs)
{
	Point p;	// �Ű������� ���� ������ �ʿ�
	p.mX = mX + rhs.mX;
	p.mY = mY + rhs.mY;
	return p;
}