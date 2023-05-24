#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double h, length, distance, pyramid;

	printf("지팡이의 높이를 입력하시오: ");
	scanf("%lf", &h);
	printf("지팡이 그림자의 길이를 입력하시오: ");
	scanf("%lf", &length);
	printf("피라미드까지의 거리를 입력하시오: ");
	scanf("%lf", &distance);

	pyramid = (distance * h) / length;
	printf("피라미드의 높이는 %.2lf입니다.", pyramid);
}