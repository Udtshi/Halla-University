/*
간단한 사칙연산 문제
학번 : 202315019
학과 : 미래모빌리티공학과
이름 : 최준혁
날짜 : 2023/04/19
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int x, y, op, answer = 0;
	srand(time(NULL));

	while (1) {
		x = rand() % 10;
		y = rand() % 10;
		op = rand() % 4 + 1;

		if (op == 0) {
			printf("%d + %d = ", x, y);
			scanf("%d", &answer);

			if (x + y == answer)
				printf("맞았습니다.\n\n");
			else
				printf("틀렸습니다.\n\n");
		}
		else if (op == 1) {
			printf("%d - %d = ", x, y);
			scanf("%d", &answer);

			if (x - y == answer)
				printf("맞았습니다.\n\n");
			else
				printf("틀렸습니다.\n\n");
		}
		else if (op == 2) {
			printf("%d * %d = ", x, y);
			scanf("%d", &answer);

			if (x * y == answer)
				printf("맞았습니다.\n\n");
			else
				printf("틀렸습니다.\n\n");
		}
		else if (op == 3) {
			if (y == 0)
				continue;
			printf("%d / %d = ", x, y);
			scanf("%d", &answer);

			if (x / y == answer)
				printf("맞았습니다.\n\n");
			else
				printf("틀렸습니다.\n\n");
		}
		else{
			if (y == 0)
				continue;
			printf("%d %% %d = ", x, y);
			scanf("%d", &answer);

			if (x % y == answer)
				printf("맞았습니다.\n\n");
			else
				printf("틀렸습니다.\n\n");
		}
	}
	return 0;
}