//����ڰ� �Է��� ������ ��� ����� ȭ�鿡 ����ϴ� ���α׷��� �ۼ��϶�.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int input_number;
	int i;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &input_number);

	printf("���: ");
	for (i = 1; i <= input_number; i++) {
		if (input_number % i == 0)
			printf("%d ", i);
	
	}
	printf("\n");
}