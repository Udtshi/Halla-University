#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int main(void) {
	int count = 0;
	int i = 0;

	printf("카운터의 초기값을 입력하시오(단위: 초): ");
	scanf("%d", &count);

	for (i = count; i > 0; i--) {
		printf("%d\n", i);
		Sleep(1000);
	}
	if (i == 0) {
		printf("\a");
	}
}