#include <iostream>	// cout, endl 사용
#include <stdio.h>	// printf 사용
#include <string.h>	// strcpy 사용
#include <string>	// std::string 클래스 사용
using namespace std;


int main(void) {
	char cMunja[20];
	strcpy(cMunja, "c_insert");		//c_insert
	printf("%s \n", cMunja);		//c_insert++

	// 주의사항 "cpp_insert" + "++" 하면 에러 발생
	std::string cppMunja;
	cppMunja = "cpp_insert";
	cppMunja = cppMunja + "++";
	cout << cppMunja << endl;
}