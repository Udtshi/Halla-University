#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define _USE_MATH_DEFINES
#include  <math.h>

#define DEG2RAD(x) x * (M_PI / 180.)

int main() {
	double x1, y1 = 0;
	int angle = 0;

	printf("ȸ���� 2���� ��ǥ�� �Է��ϼ���(x, y): ");
	scanf("%lf %lf", &x1, &y1);

	printf("ȸ���� ������ �Է��ϼ���: ");
	scanf("%d", &angle);

	double x2 = cos(DEG2RAD(angle)) * x1 - sin(DEG2RAD(angle)) * y1;
	double y2 = sin(DEG2RAD(angle)) * x1 + cos(DEG2RAD(angle)) * y1;

	printf("��ȯ�� ��ǥ: (%lf, %lf)", x2, y2);
}