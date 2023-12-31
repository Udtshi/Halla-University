#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int fuel = 100;
	int ex = 0;

	while (1) {
		printf("현재 연료량: %d\n", fuel);
		if (fuel <= 10)
			printf("(경고) 연료가 10퍼센트 이하입니다.\n");

		printf("연료 충전은 +, 소모는 -로 입력해주세요: ");
		scanf("%d", &ex);
		
		fuel += ex;
		printf("\n");

	}


}