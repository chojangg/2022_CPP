#include <iostream> endl ���
#include <string.h>

using namespace std;

class CBank {
private:
	string name;
	string account;
	int balance;
public:
	CBank(int balance);
	
};

CBank::CBank(int balance) 
	:balance(balance)
{
	cout << "�̸�����" << endl;
	cout << "�Աݵ� �ݾ� : " << balance << endl;
}

int main() {
	// CBank(10000);
	CBank bank = CBank(10000);

	return 0;
}