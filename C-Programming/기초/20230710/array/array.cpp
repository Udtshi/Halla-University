// [ ] ���̿� ���ڸ� �־� ����
// ���ڴ� �ε���(Index, ÷�ڰ�)�� �θ���, ������ ���� 1�� �ƴ� 0���� ����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int array[3];
	int i;

	array[0] = 100;
	array[1] = 200;
	array[2] = 300;

	for (i = 0; i < 3; i++) {
		printf("array[%d]�� ��: %d", i, array[i]);
		printf("\n");
	}
	return 0;
}
