#include <iostream>	// cout, endl ���
#include <stdio.h>	// printf ���
#include <string.h>	// strcpy ���
#include <string>	// std::string Ŭ���� ���
using namespace std;

int main(void) {
	char cI[] = "aaa", cJ[] = "aaa", cK[] = "abc";
	printf("%d\m", strcmp(cI, cJ) == 0);	// ���� ����
	printf("%d\m", strcmp(cI, cK) == 0);	// ������ aaa -> abc

	string cppI = "aaa", cppJ = "aaa", cppK = "abc";
	cout << (cppI == cppJ) << endl;
	cout << (cppI < cppK) << endl;
}