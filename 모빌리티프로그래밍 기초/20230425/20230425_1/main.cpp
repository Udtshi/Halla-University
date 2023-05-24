//224p 
// 키보드에서 입력받은 정수가 양수인지를 말해주는 프로그램
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int number;

	printf("정수를 입력하시오: ");
	scanf("%d", &number);

	if (number > 0)
		printf("양수입니다.\n");

	printf("입력된 값은 %d입니다.\n", number);
	return 0;
}