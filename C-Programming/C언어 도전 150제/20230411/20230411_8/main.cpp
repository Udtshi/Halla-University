#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
	int coin;

	printf("������ ��������: ");
	scanf("%d", &coin);
	if (coin >= 500) {
		printf("������� ���Խ��ϴ�.\n");
	}
	else {
		coin = coin % 500;
		printf("%d���� ��ȯ�Ǿ����ϴ�.\n", coin);
	}
}
