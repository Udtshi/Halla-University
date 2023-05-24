#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	float result = 1.0;
	float num = 0.0;
	int count = 0;

	printf("실수의 값을 입력하시오: ");
	scanf("%f", &num);
	printf("거듭 제곱 횟수를 입력하시오: ");
	scanf("%d", &count);
	for (int i = 1; i <= count; i++) {
		result *= num;
	}
	printf("결과값은 %f", result);
}