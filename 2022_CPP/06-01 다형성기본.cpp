#include <iostream>

using namespace std;

class Animal {

public:
	void eat(void) { cout << "�����Ծ�" << endl; }
	void roar(void) { cout << "����¢��" << endl; }
	void walk(void) { cout << "�����ɾ�" << endl; }

private:
	string name;
	int sex;
	int age;
};

class Tiger : public Animal {
public:
	void roar(void) { cout << "����" << endl; }
};

class Dog : public Animal {
public:
	void roar(void) { cout << "�۸�" << endl; }
};

void main(void) {
	Animal* animal = new Animal();
	animal->roar();	// "����¢��"
	delete animal;

	animal = new Tiger();	// "����¢��" (����x)
	animal->roar();
	delete animal;

	animal = new Dog();		// "����¢��" (�۸�x)
	animal->roar();
	delete animal;
}