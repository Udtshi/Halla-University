#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	srand(time(NULL));
	int stick = 12;
	int user = 0;
	int com = 0;
	while (1) {
		A:
		printf("���� ��ƽ�� ����: %d\n", stick);
		printf("�� ���� ��ƽ�� �������ðڽ��ϱ�? : ");
		scanf("%d", &user);
		if (user > 3) {
			printf("3������ ������ �� �ֽ��ϴ�.\n\n");
			goto A;
		}
		else {
			stick -= user;
		}

		if (stick <= 0) {
			printf("����� �����ϴ�.\n");
			break;
		}

		com = rand() % 3 + 1;
		printf("��ǻ�ʹ� %d���� ��ƽ�� ���������ϴ�.\n\n", com);
		stick -= com;
		if (stick <= 0) {
			printf("����� �̰���ϴ�.\n");
			break;
		}
	}

}