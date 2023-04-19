/*
1~100까지의 숫자 추측 게임
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
	srand(time(NULL));

	int answer = rand() % 100 + 1;
	int guess;
	int tries = 0;

	do {
		printf("정답을 추측해 보세요: ");
		scanf("%d", &guess);
		tries++;

		if (guess > answer) {
				printf("수는 더 낮습니다.");
			}
		if (guess < answer) {
			printf("수는 더 높습니다.");
			}
	} while (guess != answer);

	printf("정답입니다. 시도한 횟수: %d\n", tries);
	return 0;
}