// 3. �Ǽ������� ������ �Է� �޾Ƽ� 90�� �̻��̸� A, 89~80�̸� B, 79~70�̸� C, 69~60�̸� D
// , 59�����̸� F�� ����ϵ��� if ���� switch���� ����Ͽ� �ۼ��ϼ���.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// if ��
/*
int main(void) {
	float score = 0.0;
	printf("������ �Է��ϼ���: ");
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

// switch ��
int main(void) {
	float score = 0.0;
	printf("������ �Է��ϼ���: ");
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