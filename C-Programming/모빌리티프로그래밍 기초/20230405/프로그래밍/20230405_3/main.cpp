#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double PI = 3.141592;
	double radius, surface, volume;

	printf("���� �������� �Է��Ͻÿ�: ");
	scanf("%lf", &radius);

	surface = 4.0 * PI * radius * radius;
	volume = (4.0 / 3.0) * PI * (radius * radius * radius);

	printf("ǥ������ %.2lf�Դϴ�.", surface);
	printf("ü���� %.2lf�Դϴ�.", volume);

	return 0;
}