#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	srand(time(NULL));
	int guess = 0;
	int max = 0, min = 0;
	int input;

	guess = rand();

	printf("��ǻ�Ͱ� ����� �����ϴ� ���ڸ� �˾Ƹ����� �����Դϴ�.\n");
	printf("�ϳ��� ���ڸ� �����ϼ���.\n");
	printf("��ǻ�Ͱ� ������ ���ں��� ������ ������ 1, ������ -1��� �ϼ���.\n");
	printf("��ǻ�Ͱ� ���ڸ� ������ 0��� �ϼ���.\n\n");

	while (1) {
		A:
		printf("���ڰ� %d �ΰ���? ", guess);
		scanf(" %d", &input);

		if (input == -1) {
			max = guess - 1;
			guess = (max + min) / 2;

		}
		else if (input == 1) {
			min = guess + 1;
			guess = (max + min) / 2;
		}
		else if (input == 0) {
			printf("�����Դϴ�.");
			break;
		}
		else {
			goto A;
		}
	}



}