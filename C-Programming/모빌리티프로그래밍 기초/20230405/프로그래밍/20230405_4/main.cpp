#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double h, length, distance, pyramid;

	printf("�������� ���̸� �Է��Ͻÿ�: ");
	scanf("%lf", &h);
	printf("������ �׸����� ���̸� �Է��Ͻÿ�: ");
	scanf("%lf", &length);
	printf("�Ƕ�̵������ �Ÿ��� �Է��Ͻÿ�: ");
	scanf("%lf", &distance);

	pyramid = (distance * h) / length;
	printf("�Ƕ�̵��� ���̴� %.2lf�Դϴ�.", pyramid);
}