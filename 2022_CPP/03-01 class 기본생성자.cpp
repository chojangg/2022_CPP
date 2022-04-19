#include <iostream>	// cout, endl 사용
#include <string>
using namespace std;

class Student {
private:
	int nHakbun;
	string sName;
	// 아래와 같은 생성자를 컴파일러가 만들어줌
	// Student() {}
};

int main(void) {
	// 기본생성자
	Student student1;
	Student student2 = Student();

}