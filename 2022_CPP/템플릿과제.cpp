#include <iostream>
#include <string>

using namespace std;

template <typename T>
class Character {
public:
	void character(string _name, int _hp, int _offense, int _defense)
	{
		_name = name;
		_hp = hp;
		_attack = attack;
		_defense = defense;
	}

	void print(	);

private:
	T name;
	T hp;
	T attack;
	T defense;
};

int main(void)
{
	Character<string> character;
	Character<int> character;
	Character<int> character;
	Character<int> character;

	return 0;
}

Character::Character(string _name, int _hp, int _attack, int _defense)
	:name(_name), hp(_hp), attack(_attack), defense(_defense) {}

void Character::print(void)
{
	cout << "이름 " << name << endl;
	cout << "체력 " << hp << endl;
	cout << "공격 " << attack << endl;
	cout << "방어 " << defense << endl;
}
