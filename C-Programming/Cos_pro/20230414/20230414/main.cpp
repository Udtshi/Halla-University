#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

#define M_PI

void main() {
	int num1;
	char a;

	printf("1�� 2�� �ϳ��� ���� �Է����ּ���: ");
	scanf("%d", &num1);
	
	switch (num1) {
	case 1:
		printf("1�� �Է��Ͽ����ϴ�.\n");
		break;

	case 2:
		printf("2�� �Է��Ͽ����ϴ�.\n");
		break;
	
	default:
		printf("1�� 2 �̿��� �ٸ� ���� �ԷµǾ����ϴ�.\n");
		break;
	}
	/*
	
	if (num1 == 1) {
		printf("1�� �Է��Ͽ����ϴ�.\n");
	}
	else if (num1 == 2) {
		printf("2�� �Է��Ͽ����ϴ�.\n");
	}
	else {
		printf("1�� 2 �̿��� �ٸ� ���� �ԷµǾ����ϴ�.\n");
	}
	*/
}