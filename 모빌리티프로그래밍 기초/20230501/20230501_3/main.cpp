#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num = 0;
	int sum = 0;
	int i = 0;

	for (i = 0; i < 3; i++) {
		printf("숫자를 입력하시오: ");
		scanf("%d", &num);
		if (num < 0) {
			i -= 1;
			continue;
		}
		sum += num;
	} 
	printf("합계는 %d입니다.", sum);
}