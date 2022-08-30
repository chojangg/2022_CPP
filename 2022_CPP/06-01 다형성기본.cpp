#include <iostream>

using namespace std;

class Animal {

public:
	void eat(void) { cout << "µ¿¹°¸Ô¾î" << endl; }
	virtual void roar(void) { cout << "µ¿¹°Â¢¾î" << endl; }
	void walk(void) { cout << "µ¿¹°°É¾î" << endl; }

private:
	string name;
	int sex;
	int age;
};

class Tiger : public Animal {
public:
	void roar(void) override { cout << "¾îÈï" << endl; }
};

class Dog : public Animal {
public:
	void roar(void) override { cout << "¸Û¸Û" << endl; }
};

void main(void) {
	Animal* animal = new Animal();
	animal->roar();	// "µ¿¹°Â¢¾î"
	delete animal;

	animal = new Tiger();	// "¾îÈï"
	animal->roar();
	delete animal;

	animal = new Dog();		// "¸Û¸Û"
	animal->roar();
	delete animal;
}