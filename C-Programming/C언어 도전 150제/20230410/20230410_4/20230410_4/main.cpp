/*
4. ���ǹ� ���� ���� (if~ else)

���� : ���� x�� 20�� ������ ��, x�� ���� y�� ������ ū ��쿡 "x�� ���� y�� ������ Ů�ϴ�."�� ����ϰ�, 
x�� ���� y�� ������ ���� ��� "x�� ���� y�� ������ �۽��ϴ�."�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int x;
	int y;

	x = 20;
	printf("y�� ��: ");
	scanf("%d", &y);
	
	if (x > y) {
		printf("x�� ���� y�� ������ Ů�ϴ�.");
	}
	else if (x == y) {
		printf("x�� ���� y�� ���� �����ϴ�.");
	}
	
	else{
		printf("x�� ���� y�� ������ �۽��ϴ�.");
	}
}