#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
	int coin;

	printf("동전을 넣으세요: ");
	scanf("%d", &coin);
	if (coin >= 500) {
		printf("음료수가 나왔습니다.\n");
	}
	else {
		coin = coin % 500;
		printf("%d원이 반환되었습니다.\n", coin);
	}
}
