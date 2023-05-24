#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n = 0, r = 0;
	int permu = 1;

	printf("n의 값: ");
	scanf("%d", &n);
	printf("r의 값: ");
	scanf("%d", &r);

	for (int i = n; i >= (n - r + 1); i--) {
		permu *= i;
	}

	printf("순열의 값은 %d입니다.", permu);
}