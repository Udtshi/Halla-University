#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num;

	printf("������ �Է��ϼ��� :");
	scanf("%d", &num);

	if (num < 0) {
		num = -num;
		printf("���� : %d\n", num);
	}
	else {
		printf("���� : %d\n", num);
	}

}