#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int grade;

	printf("시험 점수를 입력하세요: ");
	scanf("%d", &grade);
	/*
	 
	if (grade >= 90 && grade <= 100) {
		printf("A등급 입니다.");
	}
	else if (grade >= 80 && grade < 90) {
		printf("B등급 입니다.");
	}
	else if (grade >= 70 && grade < 80) {
		printf("C등급 입니다.");
	}
	else if (grade >= 60 && grade < 70) {
		printf("D등급 입니다.");
	}
	else {
		printf("F등급 입니다.");
	}
	*/

	switch (grade / 10) {
	case 9: case 10:
		printf("A등급 입니다.");
		break;
	case 8:
		printf("B등급 입니다.");
		break;
	case 7:
		printf("C등급 입니다.");
		break;
	case 6:
		printf("D등급 입니다.");
		break;
	default:
		printf("F등급 입니다.");
		break;
	}
}