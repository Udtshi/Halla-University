// 도전문제 
// 1부터 사용자가 입력한 숫자 사이의 모든 소수를 찾도록 위의 프로그램을 변경

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_integer(void) {
	int n;

	do {
		printf("양의 정수를 입력하시오: ");
		scanf("%d", &n);
	} while (n <= 0);

	return n;
}

int is_prime(int n) {
	int i, j;

	for (i = 1; i < n; i++) {
		for (j = 2; j < i; j++) {
			if (i % j == 0) {
				break;
			}
		}
		if (i == j) {
			printf("%d ", i);
		}
	}
	return 0;
}


int main(void) {
	int n;
	n = get_integer();

	is_prime(n);

	return 0;
}