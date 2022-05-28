#include <iostream> endl 사용
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
	cout << "미림은행" << endl;
	cout << "입금된 금액 : " << balance << endl;
}

int main() {
	// CBank(10000);
	CBank bank = CBank(10000);

	return 0;
}