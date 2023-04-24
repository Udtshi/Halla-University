//사용자가 입력한 정수의 모든 약수를 화면에 출력하는 프로그램을 작성하라.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int input_number;
	int i;
	printf("정수를 입력하시오: ");
	scanf("%d", &input_number);

	printf("약수: ");
	for (i = 1; i <= input_number; i++) {
		if (input_number % i == 0)
			printf("%d ", i);
	
	}
	printf("\n");
}