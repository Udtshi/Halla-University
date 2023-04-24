#include <stdio.h>

int main(void) {
	int i, prime_number;

	for (prime_number = 2; prime_number < 100; prime_number++){

		for (i = 2; i < prime_number; i++) {
			if (prime_number % i == 0)
				goto OUT;
		}
		printf("%d ", prime_number);
	OUT:;

	}
	return 0;
}