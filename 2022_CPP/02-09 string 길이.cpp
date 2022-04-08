#include <iostream>	// cout, endl 사용
#include <stdio.h>	// printf 사용
#include <string.h>	// strcpy 사용
#include <string>	// std::string 클래스 사용
using namespace std;

int main(void) {
	char cI[10] = "aaa";
	printf("%d\n", strlen(cI));			// 3

	string cppI = "aaa";
	cout << cppI.size() << endl;		// 3
	cout << cppI.length() << endl;		// size()와 같은 결과
}