#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num = 0;
	int sum = 0;
	int i = 0;

	for (i = 0; i < 3; i++) {
		printf("���ڸ� �Է��Ͻÿ�: ");
		scanf("%d", &num);
		if (num < 0) {
			i -= 1;
			continue;
		}
		sum += num;
	} 
	printf("�հ�� %d�Դϴ�.", sum);
}