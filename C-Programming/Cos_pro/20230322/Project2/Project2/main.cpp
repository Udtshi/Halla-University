// ���� ���� ���������� ����ϴ� ���α׷�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int x;	//	ù ��° ������ ������ ����
	int y;	//	�� ��° ������ ������ ����
	int sum, diff, mul, div;	// �� ���� ���� ���� ����� �����ϴ� ����

	printf("x��: ");
	scanf("%d", &x);	//	���� x�� 20�� ����
	printf("y��: ");
	scanf("%d", &y);	//	���� y�� 10�� ����

	sum = x + y;	//	���� sum�� (x + y)�� ����� ����
	diff = x - y;	//	���� diff�� (x - y)�� ����� ����
	mul = x * y;	//	���� mul�� (x * y)�� ����� ����
	div = x / y;	//	���� div�� (x / y)�� ����� ����

	printf("�� ���� ��: %d\n", sum);	//���� sum�� ���� ȭ�鿡 ���
	printf("�� ���� ��: %d\n", diff);	//���� diff�� ���� ȭ�鿡 ���
	printf("�� ���� ��: %d\n", mul);	//���� mul�� ���� ȭ�鿡 ���
	printf("�� ���� ��: %d\n", div);	//���� div�� ���� ȭ�鿡 ���

	return 0;
}