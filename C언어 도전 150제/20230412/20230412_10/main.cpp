#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int exam_score = 0;

	printf("점수를 입력하세요: ");
	scanf("%d", &exam_score);

	if (exam_score >= 90 && exam_score <= 100) {
		printf("A학점 입니다");
	}
	else if (exam_score >= 80 && exam_score < 90) {
		printf("B학점 입니다");
	}
	else if (exam_score >= 70 && exam_score < 80) {
		printf("C학점 입니다");
	}
	else if (exam_score >= 60 && exam_score < 70) {
		printf("D학점 입니다");
	}
	else {
		printf("F학점 입니다");
	}
}