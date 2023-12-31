#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n = 0;
	double sum = 0.0;

	printf("항의 개수: ");
	scanf("%d", &n);

	for (float i = 1; i <= n; i++) {
		sum += 1.0 / i;
	}
	printf("수열의 합=%lf", sum);
}