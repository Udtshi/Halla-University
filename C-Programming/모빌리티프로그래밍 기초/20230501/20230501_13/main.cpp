#include <stdio.h>

int main(void) {
	int i, num = 0;
	for (i = 1; i <= 140; i++) {
		num += i;
		if (i > 10000) {
			break;
		}
	}
	printf("1���� 140������ ���� %d�Դϴ�.", num);
}