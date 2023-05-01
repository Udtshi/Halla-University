#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
	int x, y, LCM;

	printf("정수 2개를 입력하시오: ");
	scanf("%d %d", &x, &y);
	if (x > y) {
		LCM = x;
	}
	else {
		LCM = y;
	}

	while (1) {
		if (LCM % x == 0 && LCM % y == 0) {
			break;
		}
		LCM++;
	}
	printf("최소공배수는 %d입니다.\n", LCM);
}