#define _CRT_SECURE_NO_WARNINGS
#define SIZE 5
#include <stdio.h>

int main()
{
	int arr[SIZE] = { 0 };

	for (int i = 0; i < SIZE; i++) 
	{
		printf("%d번째 배열을 입력하세요: ", i + 1);
		scanf("%d", &arr[i]);
	}

	int max = arr[0];
	int min = arr[0];

	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] > max)
			max = arr[i];
		if (arr[i] < min)
			min = arr[i];
	}
	printf("max = %d\n", max);	// max = 5 
	printf("min = %d\n", min);	// min = 1
}