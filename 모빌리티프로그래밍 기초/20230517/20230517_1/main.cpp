//	교재 331 페이지 소수계산
//	키보드에서 정수를 입력 받아서 소수인지 소수가 아닌지를 판별하는 프로그램 실습

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_integer(void) {
	int n;

	printf("양의 정수를 입력하시오: ");
	scanf("%d", &n);
	
	return n;
}

int is_prime(int n) {
	int i;
	if (n == 1)
		return 0;
	for (i = 2; i < n; i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}
int main(void) {
	int n;
	n = get_integer();

	if (is_prime(n) == 1) 
		printf("%d는 소수입니다.\n", n);
	else
		printf("%d는 소수가 아닙니다.\n", n);
	return 0;
	}
