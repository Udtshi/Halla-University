#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int h = 0, feet = 0;
	double inch = 0;

	printf("Ű�� �Է��Ͻʽÿ�(cm): ");
	scanf("%d",&h);

	inch = h / 2.54;
	feet = inch / 12;
	inch = inch - feet * 12;

	printf("%dcm�� %d��Ʈ %.2f��ġ�Դϴ�.\n", h, feet, inch);
	return 0;
}