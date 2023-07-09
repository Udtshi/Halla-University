// 문자열의 마지막에는 문자열의 끝을 알리는 널(NULL, \0)문자가 삽입
// 모든 문자열은 NULL로 끝나며, 반드시 NULL 공간까지 생각해야한다.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char arr[5];

	scanf("%s", arr);
	printf("arr : %s\n", arr);

	return 0;
}