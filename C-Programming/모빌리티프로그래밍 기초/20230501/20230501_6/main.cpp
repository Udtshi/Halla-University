#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num = 0;
	int result = 0;

	printf("n의 값을 입력하시오: ");
	scanf("%d", &num);
	for (int i = 1; i <= num; i++) {
		result += i * i;
	}
	printf("계산값은 %d입니다.", result);
}