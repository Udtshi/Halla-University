#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num;

	printf("정수를 입력하세요 :");
	scanf("%d", &num);

	if (num < 0) {
		num = -num;
		printf("절댓값 : %d\n", num);
	}
	else {
		printf("절댓값 : %d\n", num);
	}

}