// 1. 정수를 하나 입력받고 홀수인지 짝수인지 확인하여 출력하는 프로그램을 작성하세요. 
// if문과 switch 문으로 각각 작성하세요.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// if 문
/*
int main(void) {
	int num = 0;
	printf("정수를 입력하세요: ");
	scanf("%d", &num);

	if (num % 2 == 0) {
		printf("짝수입니다.\n");
	}
	else {
		printf("홀수입니다.\n");
	}
}
*/

// switch 문
int main(void) {
	int num = 0;
	printf("정수를 입력하세요: ");
	scanf("%d", &num);

	num %= 2;

	switch (num) {
	case 0:
		printf("짝수입니다.\n");
		break;
	default:
		printf("홀수입니다.\n");
		break;
	}
}