#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int exam_score = 0;

	printf("������ �Է��ϼ���: ");
	scanf("%d", &exam_score);

	if (exam_score >= 90 && exam_score <= 100) {
		printf("A���� �Դϴ�");
	}
	else if (exam_score >= 80 && exam_score < 90) {
		printf("B���� �Դϴ�");
	}
	else if (exam_score >= 70 && exam_score < 80) {
		printf("C���� �Դϴ�");
	}
	else if (exam_score >= 60 && exam_score < 70) {
		printf("D���� �Դϴ�");
	}
	else {
		printf("F���� �Դϴ�");
	}
}