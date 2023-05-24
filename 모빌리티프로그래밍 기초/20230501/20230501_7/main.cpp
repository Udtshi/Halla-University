#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int i, a, b;
	for (i = 1; i < 7; i++) {
		for (a = 7; a > i; a--) {
			printf(" ");
		}
		for (b = 1; b <= i; b++) {
			printf("*");
		}
		printf("\n");
	}
}