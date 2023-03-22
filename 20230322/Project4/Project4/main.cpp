#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double x, y, z;
	
	double sum;
	double avg;
	
	printf("3개의 실수를 입력하시오: \n");
	scanf("%lf %lf %lf", &x, &y, &z);


	sum = x + y + z;
	printf("합계: %.2lf\n", sum);
	
	avg = sum / 3.0;
	printf("평균: %.2lf\n", avg);
	
	return 0;
}