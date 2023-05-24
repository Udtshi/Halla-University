#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	srand(time(NULL));
	int stick = 12;
	int user = 0;
	int com = 0;
	while (1) {
		A:
		printf("현재 스틱의 개수: %d\n", stick);
		printf("몇 개의 스틱을 가져가시겠습니까? : ");
		scanf("%d", &user);
		if (user > 3) {
			printf("3개까지 가져갈 수 있습니다.\n\n");
			goto A;
		}
		else {
			stick -= user;
		}

		if (stick <= 0) {
			printf("당신이 졌습니다.\n");
			break;
		}

		com = rand() % 3 + 1;
		printf("컴퓨터는 %d개의 스틱을 가져갔습니다.\n\n", com);
		stick -= com;
		if (stick <= 0) {
			printf("당신이 이겼습니다.\n");
			break;
		}
	}

}