#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num = 0;
	int result = 0;

	printf("n�� ���� �Է��Ͻÿ�: ");
	scanf("%d", &num);
	for (int i = 1; i <= num; i++) {
		result += i * i;
	}
	printf("��갪�� %d�Դϴ�.", result);
}