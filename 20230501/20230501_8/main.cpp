#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num;
	int i, j;

	printf("정수를 입력하시오: ");
	scanf("%d", &num);

	for (j = 1; j <= num; j++) {
		for (i = 1; i <= j; i++) {
			printf("%d ", i);
		}
		printf("\n");
	}
}