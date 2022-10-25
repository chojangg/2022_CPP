#include <iostream>
#include <string>

using namespace std;

void main(void) {
	int arr[4] = { 10,20,30,40 };
	for (int x : arr) {
		cout << x << " "; 
	}
}
