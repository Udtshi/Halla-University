#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int fuel = 100;
	int ex = 0;

	while (1) {
		printf("���� ���ᷮ: %d\n", fuel);
		if (fuel <= 10)
			printf("(���) ���ᰡ 10�ۼ�Ʈ �����Դϴ�.\n");

		printf("���� ������ +, �Ҹ�� -�� �Է����ּ���: ");
		scanf("%d", &ex);
		
		fuel += ex;
		printf("\n");

	}


}