#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<math.h>

void main() {
	double PI = 3.14159263;
	double a, b, c = 0;
	double degree, radian = 0;
	
	double rad2deg = 10;
	double deg2rad = 0;
	int x = 0;

	printf("각도(degree)를 입력: ");
	scanf("%lf", &degree);
	printf("라디안(radian을 입력: ");
	scanf("%lf", &radian);

	deg2rad = degree * PI / 180;
	rad2deg = radian * 180 / PI;

	printf("각도 %lf의 라디안 : %lf\n", degree, rad2deg);
	printf("라디안 %lf의 각도 : %lf\n", radian, deg2rad);

	printf("삼각형의 각도: ");
	scanf("%d", &x);

	a = sin(x * PI / 180);
	b = cos(x * PI / 180);
	c = tan(x * PI / 180);

	printf("sin (%d * PI / 180) : %lf\n", x, a);
	printf("cos (%d * PI / 180) : %lf\n", x, b);
	printf("tan (%d * PI / 180) : %lf\n", x, c);
}
