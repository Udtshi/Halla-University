// 1. ������ �ϳ� �Է¹ް� Ȧ������ ¦������ Ȯ���Ͽ� ����ϴ� ���α׷��� �ۼ��ϼ���. 
// if���� switch ������ ���� �ۼ��ϼ���.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// if ��
/*
int main(void) {
	int num = 0;
	printf("������ �Է��ϼ���: ");
	scanf("%d", &num);

	if (num % 2 == 0) {
		printf("¦���Դϴ�.\n");
	}
	else {
		printf("Ȧ���Դϴ�.\n");
	}
}
*/

// switch ��
int main(void) {
	int num = 0;
	printf("������ �Է��ϼ���: ");
	scanf("%d", &num);

	num %= 2;

	switch (num) {
	case 0:
		printf("¦���Դϴ�.\n");
		break;
	default:
		printf("Ȧ���Դϴ�.\n");
		break;
	}
}