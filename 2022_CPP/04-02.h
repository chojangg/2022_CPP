#include <iostream>	// cout, endl ���
using namespace std;

class Integer {
	// ������
public:
	Integer(int v) : value(v) {} // ������� �ʱ�ȭ
	Integer operator+(const Integer);
	Integer() {}

	void print();

private:
	int value;

};