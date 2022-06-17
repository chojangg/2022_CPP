#include <iostream>
#include <string.h>
#include <cstring>

using namespace std;
class Person {
public:
	string name;
	int hakbun;
	Person(string na, int hak) { 
		name = na;
		hakbun = hak; 
	}
	void PrintShow() {
		cout << "이름 : " << name << endl;
		cout << "학번 : " << hakbun << endl;
	}
};

class Student : public Person {
public:
	string university;
	Student(string n, int h, string uni)
		:Person(n, h), university(uni)
	{

	}

	void PrintShow() {
		cout << "이름 : " << name << endl;
		cout << "학번 : " << hakbun << endl;
		cout << "학교 : " << university << endl;
	}
};



int main() {
	Student st1 = Student("홍길동", 2018, "한국대학교");
	st1.PrintShow();

	return 0;
}