/*
���ĺ� �ҹ��ڸ� �빮�ڷ� �ٲ��ִ� ���α׷�
�й� : 202315019
�а� : �̷������Ƽ���а�
�̸� : ������
��¥ : 2023/04/19
*/#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char letter;

	while (1) {
		printf("�ҹ��ڸ� �Է��ϼ��� :");
		scanf(" %c", &letter);

		if (letter < 'a' || letter > 'z')
			continue;

		letter = letter - 32;
		printf("��ȯ�� �빮�ڴ� %c�Դϴ�.\n", letter);
	}

	return 0;
}