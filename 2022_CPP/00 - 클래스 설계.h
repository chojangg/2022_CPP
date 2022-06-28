#include <iostream>	// cout, endl »ç¿ë
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
	void ´«¹°Èê¸®±â();
	void ½Î´ë±â³¯¸®±â();
	void Áê½ºÈê¸®±â();
	void ÀÍ·æ();
	void Á¡Âï±â();
private:
	int ¿¬±â·Â;
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