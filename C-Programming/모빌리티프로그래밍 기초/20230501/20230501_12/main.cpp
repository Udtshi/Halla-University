#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int height = 0;

	do {
		printf("������ ����(���� -1): ");
		scanf("%d", &height);
		for (int i = 0; i <= height; i++) {
			printf("*");
		}
		printf("\n");
	} while(height > 0);
}