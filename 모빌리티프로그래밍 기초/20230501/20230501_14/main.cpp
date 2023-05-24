#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a = 0, b = 1, c;
	int num = 0;
	printf("몇번쨰 항까지 구할까요? ");
	scanf("%d", &num);

	for (int i = 0; i <= num; i++) {
		printf("%d, ", a); 
		c = a + b;
		a = b;
		b = c;
	}
	

}