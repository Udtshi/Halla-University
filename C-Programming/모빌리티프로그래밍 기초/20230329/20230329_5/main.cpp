#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main(void) {
	int x, y;

	printf("�� ���� ������ �Է��Ͻÿ�: ");
	scanf("%d %d", &x, &y);

	printf("%d AND %d�� �����: %d\n", x, y, x && y);
	printf("%d OR %d�� �����: %d\n", x, y, x || y);
	printf("NOT%d�� �����: %d\n", x, !x);

	return 0;
}