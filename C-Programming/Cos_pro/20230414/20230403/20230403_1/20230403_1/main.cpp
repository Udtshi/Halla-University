#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int num1, num2, num3 = 0;

	printf("ù ��° ������ �Է�: ");
	scanf("%d", &num1);
	printf("�� ��° ������ �Է�: ");
	scanf("%d", &num2);

	num3 = num1 + num2;	//num1�� num2�� ���� ���� num3�� ����

	//printf("%d + %d = %d�Դϴ�", num1, num2, num1 + num2);
	printf("%d + %d = %d�Դϴ�", num1, num2, num3);
}