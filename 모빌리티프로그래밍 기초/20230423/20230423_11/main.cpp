// 276p
// 사용자가 0을 입력할 때까지 숫자를 더한다.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int number, sum = 0;

	do {
		printf("정수를 입력하시오: ");
		scanf("%d", &number);
		sum += number;
	} while (number != 0);

	printf("숫자의 합 = %d\n", sum);
	return 0;
}

// while 루프와는 달리 while();에 세미콜론을 붙어주어야 함