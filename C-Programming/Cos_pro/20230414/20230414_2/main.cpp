#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int grade;

	printf("���� ������ �Է��ϼ���: ");
	scanf("%d", &grade);
	/*
	 
	if (grade >= 90 && grade <= 100) {
		printf("A��� �Դϴ�.");
	}
	else if (grade >= 80 && grade < 90) {
		printf("B��� �Դϴ�.");
	}
	else if (grade >= 70 && grade < 80) {
		printf("C��� �Դϴ�.");
	}
	else if (grade >= 60 && grade < 70) {
		printf("D��� �Դϴ�.");
	}
	else {
		printf("F��� �Դϴ�.");
	}
	*/

	switch (grade / 10) {
	case 9: case 10:
		printf("A��� �Դϴ�.");
		break;
	case 8:
		printf("B��� �Դϴ�.");
		break;
	case 7:
		printf("C��� �Դϴ�.");
		break;
	case 6:
		printf("D��� �Դϴ�.");
		break;
	default:
		printf("F��� �Դϴ�.");
		break;
	}
}