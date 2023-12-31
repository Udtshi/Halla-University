#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double PI = 3.141592;
	double radius, surface, volume;

	printf("구의 반지름을 입력하시오: ");
	scanf("%lf", &radius);

	surface = 4.0 * PI * radius * radius;
	volume = (4.0 / 3.0) * PI * (radius * radius * radius);

	printf("표면적은 %.2lf입니다.", surface);
	printf("체적은 %.2lf입니다.", volume);

	return 0;
}