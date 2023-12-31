// 3. 실수형으로 성적을 입력 받아서 90점 이상이면 A, 89~80이면 B, 79~70이면 C, 69~60이면 D
// , 59이하이면 F로 출력하도록 if 문과 switch문을 사용하여 작성하세요.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// if 문
/*
int main(void) {
	float score = 0.0;
	printf("성적을 입력하세요: ");
	scanf("%f", &score);

	if (score >= 90) {
		printf("A\n");
	}
	else if (score >= 80 && score < 90) {
		printf("B\n");
	}
	else if (score >= 70 && score < 80) {
		printf("C\n");
	}
	else if (score >= 60 && score < 70) {
		printf("D\n");
	}
	else {
		printf("F\n");
	}
}
*/

// switch 문
int main(void) {
	float score = 0.0;
	printf("성적을 입력하세요: ");
	scanf("%f", &score);
	switch (int (score / 10)) {
	case 9: case 10:
		printf("A\n");
		break;
	case 8:
		printf("B\n");
		break;
	case 7:
		printf("C\n");
		break;
	case 6:
		printf("D\n");
		break;
	default:
		printf("F\n");
		break;
	}
}