#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
	int x, y, LCM;

	printf("���� 2���� �Է��Ͻÿ�: ");
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
	printf("�ּҰ������ %d�Դϴ�.\n", LCM);
}