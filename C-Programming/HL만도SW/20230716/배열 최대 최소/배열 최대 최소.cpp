#include <stdio.h>
#define SIZE 5

int main() 
{
	int arr[SIZE] = { 1, 2, 3, 4, 5 };

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