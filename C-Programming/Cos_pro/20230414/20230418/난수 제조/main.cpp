#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
#include <stdlib.h>	//rand()�Լ��� ����ϱ� ���� �������
#include <time.h>

void main() {
	int x = 0;
	int y = 0;
	//int num = 0;

	srand(time(NULL));

	for (int i = 0; i < 10; i++) {
		int random = rand() % 5;
		printf("%d\n", random);
	}

	/*
	
	printf("���� : %d\n", rand() %(y - x + 1) + x);
	printf("���� : %d\n", rand() % (y - x + 1) + x);
	printf("���� : %d\n", rand() % (y - x + 1) + x);
	printf("���� : %d\n", rand() % (y - x + 1) + x);
	printf("���� : %d\n", rand() % (y - x + 1) + x);
	*/
}