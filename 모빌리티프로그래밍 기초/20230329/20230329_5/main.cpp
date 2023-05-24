#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main(void) {
	int x, y;

	printf("두 개의 정수를 입력하시오: ");
	scanf("%d %d", &x, &y);

	printf("%d AND %d의 결과값: %d\n", x, y, x && y);
	printf("%d OR %d의 결과값: %d\n", x, y, x || y);
	printf("NOT%d의 결과값: %d\n", x, !x);

	return 0;
}