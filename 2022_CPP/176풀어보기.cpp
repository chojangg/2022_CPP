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
		cout << "�̸� : " << name << endl;
		cout << "�й� : " << hakbun << endl;
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
		cout << "�̸� : " << name << endl;
		cout << "�й� : " << hakbun << endl;
		cout << "�б� : " << university << endl;
	}
};



int main() {
	Student st1 = Student("ȫ�浿", 2018, "�ѱ����б�");
	st1.PrintShow();

	return 0;
}