#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	double w, h;
	double area;
	double perimeter;

	printf("����: ");
	scanf("%lf", &w);
	printf("����: ");
	scanf("%lf", &h);

	area = w * h;
	printf("���� : %lf\n", area);

	perimeter = 2 * (w + h);
	printf("���� : %lf\n", perimeter);

	return 0;
}