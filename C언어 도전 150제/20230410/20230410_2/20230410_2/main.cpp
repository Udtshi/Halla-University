/*
2.  상수형 개념 배우기

문제 : 정수형 상수 1과 실수형 상수 3.141592를 더하는 프로그램을 작성하시오.
*/

#include <stdio.h>

#define _USE_MATH_DEFINES
#include <math.h>

#define a 1


int main(void) {
	double sum;
	sum = a + M_PI;
	printf("%lf", sum);
}