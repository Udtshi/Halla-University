#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	srand(time(NULL));
	int guess = 0;
	int max = 0, min = 0;
	int input;

	guess = rand();

	printf("컴퓨터가 당신이 생각하는 숫자를 알아맞히는 게임입니다.\n");
	printf("하나의 숫자를 생각하세요.\n");
	printf("컴퓨터가 제시한 숫자보다 정답이 높으면 1, 낮으면 -1라고 하세요.\n");
	printf("컴퓨터가 숫자를 맞히면 0라고 하세요.\n\n");

	while (1) {
		A:
		printf("숫자가 %d 인가요? ", guess);
		scanf(" %d", &input);

		if (input == -1) {
			max = guess - 1;
			guess = (max + min) / 2;

		}
		else if (input == 1) {
			min = guess + 1;
			guess = (max + min) / 2;
		}
		else if (input == 0) {
			printf("정답입니다.");
			break;
		}
		else {
			goto A;
		}
	}



}