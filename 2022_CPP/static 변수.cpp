#include <iostream>
using namespace std;

void jungjuk(void) {
	static int a = 0;	// 한 번 할당되면 쭉 남는다.
	cout << "지역변수 a는 " << a << endl;
	a++;
}

int main(void) {
	jungjuk();	// 0
	jungjuk();	// 1
	jungjuk();	// 2
}