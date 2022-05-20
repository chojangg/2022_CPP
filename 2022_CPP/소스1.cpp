#include <iostream>
#include <string.h>

using namespace std;

class Person {
private:
	string sName;
protected:
	int nAge;
public:
	Person();
	Person(string name, int age);
	void hi();

};

Person::Person() {
	sName = "�͸�";
	nAge = 0;
}

Person::Person(string name, int age) {
	// :sNAme(name), nAge(age)
	sName = name;
	nAge = age;
}

void Person::hi() {
	cout << "�̸� : " << sName << endl;
	cout << "���� : " << nAge << endl;
}
class Student : public Person{
	int nHakbun;
public:
	Student();
	Student(string name, int age, int hakbun);
	void study();
//protected:
//	void hi();
};

Student::Student() : Person() {
	nHakbun = 0;
};

Student::Student(string name, int age, int hakbun)
	:Person(name, age), nHakbun(hakbun) {;}

void Student::study() {
	hi();
	cout << "�й� : " << nHakbun;
	nAge = 100;
}

int main() {
	Person p = Person();
	p.hi();

	Person* person = new Person("�ѽ¿�", 100);
	person->hi();

	Person* people = new Person[5];
	people[0].hi();

	delete person;
	delete[] person;

}