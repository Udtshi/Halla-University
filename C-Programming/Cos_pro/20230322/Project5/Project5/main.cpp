#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	double w, h;
	double area;
	double perimeter;

	printf("가로: ");
	scanf("%lf", &w);
	printf("세로: ");
	scanf("%lf", &h);

	area = w * h;
	printf("넓이 : %lf\n", area);

	perimeter = 2 * (w + h);
	printf("면적 : %lf\n", perimeter);

	return 0;
}