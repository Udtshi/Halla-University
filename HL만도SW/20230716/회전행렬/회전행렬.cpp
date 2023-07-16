#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define _USE_MATH_DEFINES
#include  <math.h>

#define DEG2RAD(x) x * (M_PI / 180.)

int main() {
	double x1, y1 = 0;
	int angle = 0;

	printf("회전할 2차원 좌표를 입력하세요(x, y): ");
	scanf("%lf %lf", &x1, &y1);

	printf("회전할 각도를 입력하세요: ");
	scanf("%d", &angle);

	double x2 = cos(DEG2RAD(angle)) * x1 - sin(DEG2RAD(angle)) * y1;
	double y2 = sin(DEG2RAD(angle)) * x1 + cos(DEG2RAD(angle)) * y1;

	printf("변환된 좌표: (%lf, %lf)", x2, y2);
}