// [ ] 사이에 숫자를 넣어 지정
// 숫자는 인덱스(Index, 첨자값)라 부르며, 주의할 점은 1이 아닌 0부터 시작

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
		printf("array[%d]의 값: %d", i, array[i]);
		printf("\n");
	}
	return 0;
}
