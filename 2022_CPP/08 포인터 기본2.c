#include <stdio.h>

int main(void) {
	int num1 = 15, num2 = 30, num3 = 45;

	int* ptr1 = &num1;
	int* ptr2 = &num2;
	int* ptr3 = &num3;

	// ptr1�� num2�� ����Ŵ
	ptr1 = ptr2;
	// pr2�� num3�� ����Ŵ
	ptr2 = ptr3;

	*ptr3 *= 2;		// num3�� 90
	*ptr1 += *ptr3; // num2�� 120(90+30)
	*ptr2 *= 2;		// num3�� 180)90*2)

	printf("%d %d %d", num1, num2, num3);
}