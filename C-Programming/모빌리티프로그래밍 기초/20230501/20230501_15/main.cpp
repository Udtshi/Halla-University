#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n = 0, r = 0;
	int permu = 1;

	printf("n�� ��: ");
	scanf("%d", &n);
	printf("r�� ��: ");
	scanf("%d", &r);

	for (int i = n; i >= (n - r + 1); i--) {
		permu *= i;
	}

	printf("������ ���� %d�Դϴ�.", permu);
}