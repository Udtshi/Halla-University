#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int x, tens, units;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &x);

	tens = x / 10;
	units = x % 10;
	printf("���� �ڸ�: %d\n", tens);
	printf("���� �ڸ�: %d", units);

	return 0;
}