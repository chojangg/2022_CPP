#include <iostream>	// cout, endl ���
using namespace std;

class Person
{
public:
	void eat();

private:
	string name;
	string stage_name;
	string stage_name;
	int age;
	int insung;
	int visual;
};

class Actor : public Person 
{
public:
	void �����긮��();
	void �δ�⳯����();
	void �꽺�긮��();
	void �ͷ�();
	void �����();
private:
	int �����;
};

class Artist : public Person
{
public:
	void sing();
	void rap();
	void dance();
private:
	int voice;
};