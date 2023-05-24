#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int h = 0, feet = 0;
	double inch = 0;

	printf("키를 입력하십시오(cm): ");
	scanf("%d",&h);

	inch = h / 2.54;
	feet = inch / 12;
	inch = inch - feet * 12;

	printf("%dcm는 %d피트 %.2f인치입니다.\n", h, feet, inch);
	return 0;
}