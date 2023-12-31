// 2. if문을 사용하여 영문자를 입력받아서 소문자인지 판별하는 프로그램을 작성하시오.
// 만약 영문자가 아니라면 “영문자가 아닙니다”라고 출력하도록 작성하세요.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char letter;
	printf("영문자를 입력하세요: ");
	scanf("%c", &letter);

	if (letter >= 'a' && letter <= 'z') {
		printf("소문자 입니다.\n");
	}
	else if (letter >= 'A' && letter <= 'Z') {
		printf("대문자 입니다.\n");
	}
	else {
		printf("영문자가 아닙니다.\n");
	}
}