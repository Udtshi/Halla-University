// ���ڿ��� ���������� ���ڿ��� ���� �˸��� ��(NULL, \0)���ڰ� ����
// ��� ���ڿ��� NULL�� ������, �ݵ�� NULL �������� �����ؾ��Ѵ�.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char arr[5];

	scanf("%s", arr);
	printf("arr : %s\n", arr);

	return 0;
}