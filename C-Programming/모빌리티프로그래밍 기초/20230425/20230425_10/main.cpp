// ������ ��� ���� ���α׷�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	char op;
	int x, y, result;

	printf("������ �Է��Ͻÿ� (ex. 2 + 5) >> ");
	scanf("%d %c %d", &x, &op, &y);

	switch (op) {
	case '+':
		result = x + y;
		break;
	case '-':
		result = x - y;
		break;
	case '*':
		result = x * y;
		break;
	case '/':
		result = x / y;
		break;
	case '%':
		result = x % y;
		break;
	default:
		printf("�������� �ʴ� �������Դϴ�. \n");
		break;
	}
	printf("%d %c %d = %d", x, op, y, result);
	return 0;
}