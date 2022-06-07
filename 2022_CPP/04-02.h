#include <iostream>	// cout, endl 사용
using namespace std;

class Integer {
	// 생성자
public:
	Integer(int v) : value(v) {} // 멤버변수 초기화
	Integer operator+(const Integer);
	Integer() {}

	void print();

private:
	int value;

};