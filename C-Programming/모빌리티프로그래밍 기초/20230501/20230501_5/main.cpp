#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	float result = 1.0;
	float num = 0.0;
	int count = 0;

	printf("�Ǽ��� ���� �Է��Ͻÿ�: ");
	scanf("%f", &num);
	printf("�ŵ� ���� Ƚ���� �Է��Ͻÿ�: ");
	scanf("%d", &count);
	for (int i = 1; i <= count; i++) {
		result *= num;
	}
	printf("������� %f", result);
}