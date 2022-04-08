#include <iostream>	// cout, endl 사용
#include <stdio.h>	// printf 사용
#include <string.h>	// strcpy 사용
#include <string>	// std::string 클래스 사용
using namespace std;

int main(void) {
	char cI[] = "aaa", cJ[] = "aaa", cK[] = "abc";
	printf("%d\m", strcmp(cI, cJ) == 0);	// 같은 글자
	printf("%d\m", strcmp(cI, cK) == 0);	// 사전순 aaa -> abc

	string cppI = "aaa", cppJ = "aaa", cppK = "abc";
	cout << (cppI == cppJ) << endl;
	cout << (cppI < cppK) << endl;
}