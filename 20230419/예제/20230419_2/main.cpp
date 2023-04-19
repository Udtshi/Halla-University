/*
알파벳 소문자를 대문자로 바꿔주는 프로그램
학번 : 202315019
학과 : 미래모빌리티공학과
이름 : 최준혁
날짜 : 2023/04/19
*/#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char letter;

	while (1) {
		printf("소문자를 입력하세요 :");
		scanf(" %c", &letter);

		if (letter < 'a' || letter > 'z')
			continue;

		letter = letter - 32;
		printf("변환된 대문자는 %c입니다.\n", letter);
	}

	return 0;
}