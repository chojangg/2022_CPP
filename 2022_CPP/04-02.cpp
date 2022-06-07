#include <iostream>	// cout, endl »ç¿ë
#include "04-02.h"
using namespace std;

void Integer::print() {
	cout << value << endl;
}

Integer Integer:: operator+(const Integer rhs) {
	Integer temp;
	temp.value = value + rhs.value;

	return temp;
}