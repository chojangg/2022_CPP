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

int main(void) {
	Integer a(1);
	Integer b(2);
	Integer c = a + b;

	return 0;
}

void Integer::print() {
	cout << value << endl;
}

Integer Integer:: operator+(const Integer rhs) {
	Integer temp;
	temp.value = value + rhs.value;

	return temp;
}