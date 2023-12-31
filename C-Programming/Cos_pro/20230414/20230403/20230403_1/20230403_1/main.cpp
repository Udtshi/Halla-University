#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int num1, num2, num3 = 0;

	printf("첫 번째 정수를 입력: ");
	scanf("%d", &num1);
	printf("두 번째 정수를 입력: ");
	scanf("%d", &num2);

	num3 = num1 + num2;	//num1와 num2를 곱한 값을 num3에 저장

	//printf("%d + %d = %d입니다", num1, num2, num1 + num2);
	printf("%d + %d = %d입니다", num1, num2, num3);
}