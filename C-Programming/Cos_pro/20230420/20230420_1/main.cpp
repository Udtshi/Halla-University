#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

void main() {
	int i,j;
	for (i=1; i <= 9; i++) {
		printf("%d��\n", i);
		for (j = 1; j <= 9; j++) {
			printf("%d x %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}
	
	/*
	int i, a = 0;
	printf("�������� ���� �Է��Ͻÿ�: ");
	scanf("%d", &a);

	for (i = 1; i <= 9; i++) {
		printf("%d * %d = %d\n", a, i, a * i);
	}
	*/

	/*
		int i = 0, a = 0, sum = 0;
	printf("���� 5�� ���ϴ� ���α׷�\n\n");

	for (i; i <5; i++) {
		scanf("%d", &a);
		sum += a;
		printf("���� �� : %d\n\n", sum);
	}
	printf("�հ�: %d\n", sum);

	*/

	/*
	int i = 50, sum = 0;

	for (i; i <= 100; i++) {
		sum += i;
	}
	printf("�հ� : %d\n", sum);
	*/

	}