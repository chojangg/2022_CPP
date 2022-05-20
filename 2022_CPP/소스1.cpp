#include <iostream>
#include <string.h>

using namespace std;

class Person {
private:
	string sName;
	int nAge;
public:
	Person();
	Person(string name, int age);
	void hi();

};

Person::Person() {
	sName = "익명";
	nAge = 0;
}

Person::Person(string name, int age) {
	// :sNAme(name), nAge(age)
	sName = name;
	nAge = age;
}

void Person::hi() {
	cout << "이름 : " << sName << endl;
	cout << "나이 : " << nAge << endl;
}


int main() {
	Person p = Person();
	p.hi();

	Person* person = new Person("한승원", 100);
	person->hi();

	Person* people = new Person[5];
	people[0].hi();

	delete person;
	delete[] person;

}