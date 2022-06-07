#include <iostream>	// cout, endl 사용
#include <string.h>	// strcpy() 사용
using namespace std;
class Student
{
public:
	// 생성자 : 객체가 생성되면 자동으로 호출되는 함수
	// 생성자는 반환형을 가지고 있지 않는다
	Student();
	Student(int Hakbun, const char* Name);
	Student(const Student& rhs);	// 복사 생성자
	~Student();

	Student& operator=(const Student& rhs);

	void show();
private:
	int nHakbun;
	char* sName;
};
Student::Student()
{
}
// 멤버변수를 초기화 할 수 있으며, 
// const형 변수와 참조형 변수를 멤버변수로 할 수 있다.
Student::Student(int Hakbun, const char* Name)
	: nHakbun(Hakbun)	// 멤버변수(매개변수)
{
	cout << "일반생성자 호출." << endl;
	int len = strlen(Name) + 1;	// 공간의 갯수 파악
	sName = new char[len];		// 갯수만큼 메모리 할당
	strcpy(sName, Name);
}
// 직접 작성 안해도 컴파일러가 알아서 만들어주는
// 복사생성자
Student::Student(const Student& rhs)
	:nHakbun(rhs.nHakbun), sName(rhs.sName)
{
	cout << "복사생성자 호출" << endl;
}

Student::~Student()
{
	delete[]sName;
	cout << "소멸자 호출" << endl;
}
void Student::show()
{
	cout << "학번은 " << nHakbun << "입니다." << endl;
	cout << "이름은 " << sName << "입니다." << endl << endl;
}

// default 대입연산자
Student& Student::operator=(const Student& rhs)
{
	nHakbun = rhs.nHakbun;
	sName = rhs.sName;

	return *this;
}

int main(void)
{

	// "일반생성자 호출" 출력
	Student stu1 = Student(1111, "JWP");
	Student stu3 = Student(2222, "JYP");
	stu1.show();	// (1111, "JWP")


	// 복사생성자 호출
	Student stu2 = stu1;	// stu2 = Student(stu1)
	stu2.show();	// (1111, "JWP")

	// 대입연산자 호출 (아직 오버로딩 구현 안 함)
	stu1 = stu3;
	stu1.show();	// (2222, "JYP")

	return 0;

}