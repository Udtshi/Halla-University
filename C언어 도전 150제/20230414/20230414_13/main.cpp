#include <stdio.h>

#define _USE_MATH_DEFINES
#include <math.h>

int main(void) {
	double d;
	d = M_PI;
	printf("d = %.6lf", floor(d*1000000)/1000000);
}