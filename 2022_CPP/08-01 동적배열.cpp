#include <iostream>
#include <string>
#include <vector>

using namespace std;

void main(void) {
	// i1, i2 정적배열 : 크기가 고정된 배열
	int i1[10];
	int* i2 = new int[10];

	// i3 동적배열 : 크기가 변할 수 있는 배열
	vector<int> i3;
	i3.reserve(10);	// 백터의 공간은 10개

	for (int i = 0; i < 10; i++) {
		i1[i] = 1;
		i2[i] = 1;
		i3.push_back(i);
	}
	
	// idx범위 초과(공간 부족)
	// i1[10] = 10;
	// i2[10] = 10;

	// 자동으로 크게확장 후 삽입
	i3.push_back(10);

	// vector 데이터 변경
	i3[5] = 1149;
	i3.at(3) = 201;

	// vector의 모든 원소 출력
	vector<int>::iterator ptr;
	for (ptr = i3.begin(); ptr != i3.end(); ptr++) {
		cout << *ptr << " ";
	}
}