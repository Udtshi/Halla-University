#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double x, y, z;
	
	double sum;
	double avg;
	
	printf("3���� �Ǽ��� �Է��Ͻÿ�: \n");
	scanf("%lf %lf %lf", &x, &y, &z);


	sum = x + y + z;
	printf("�հ�: %.2lf\n", sum);
	
	avg = sum / 3.0;
	printf("���: %.2lf\n", avg);
	
	return 0;
}