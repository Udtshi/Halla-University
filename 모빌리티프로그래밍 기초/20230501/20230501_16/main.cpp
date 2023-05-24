#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num = 0;
	int result = 0;

	printf("정수를 입력하시오: ");
	scanf("%d", &num);
	do {
		result = num % 10;
		num /= 10;
		printf("%d", result);
	} while (num != 0);
}