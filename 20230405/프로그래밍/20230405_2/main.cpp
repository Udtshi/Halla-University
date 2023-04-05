#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int x, tens, units;

	printf("정수를 입력하시오: ");
	scanf("%d", &x);

	tens = x / 10;
	units = x % 10;
	printf("십의 자리: %d\n", tens);
	printf("일의 자리: %d", units);

	return 0;
}