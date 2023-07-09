// 행이 2, 열이 4인 2차원 배열인 arr를 선언
// 함수 func의 함수원형에 행의 수가 생략된 방식으로 쓰여짐

#include <stdio.h>

void func(int arr[][4], int rows);

int main()
{
	int arr[2][4] = { {1, 2, 3, 4}, {5, 6, 7, 8} };

	func(arr, 2);

	return 0;
}

void func(int arr[][4], int rows)
{
	int i, j;

	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%d\t", arr[i][j]);
		printf("\n");
	}
}