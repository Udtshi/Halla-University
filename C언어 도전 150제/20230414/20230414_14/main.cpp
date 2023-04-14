#include <stdio.h>

int main(void) {
	bool b;

	b = 10 > 5;

	if (b == 1) {
		printf("10은 5보다 큽니다.");
	}
	else {
		printf("10은 5보다 작습니다.");
	}
}