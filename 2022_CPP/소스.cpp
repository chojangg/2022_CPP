#include <iostream>	// cout, endl »ç¿ë
#include <string>
#include <string.h>
using namespace std;

int main(void) {
	char c[10];
	strcpy(c, "c_insert");
	strcat(c, "++");
	printf("%s \n", c);

	std::string cpp;
	cpp = "cpp_insert";
	cpp = cpp + "++";
	cout << cpp << endl;

	return 0;
}