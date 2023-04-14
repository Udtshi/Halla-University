#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

#define M_PI

void main() {
	int num1;
	char a;

	printf("1과 2중 하나의 수를 입력해주세요: ");
	scanf("%d", &num1);
	
	switch (num1) {
	case 1:
		printf("1을 입력하였습니다.\n");
		break;

	case 2:
		printf("2을 입력하였습니다.\n");
		break;
	
	default:
		printf("1과 2 이외의 다른 수가 입력되었습니다.\n");
		break;
	}
	/*
	
	if (num1 == 1) {
		printf("1을 입력하였습니다.\n");
	}
	else if (num1 == 2) {
		printf("2를 입력하였습니다.\n");
	}
	else {
		printf("1과 2 이외의 다른 수가 입력되었습니다.\n");
	}
	*/
}