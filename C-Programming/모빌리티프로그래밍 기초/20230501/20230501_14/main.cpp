#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a = 0, b = 1, c;
	int num = 0;
	printf("����� �ױ��� ���ұ��? ");
	scanf("%d", &num);

	for (int i = 0; i <= num; i++) {
		printf("%d, ", a); 
		c = a + b;
		a = b;
		b = c;
	}
	

}