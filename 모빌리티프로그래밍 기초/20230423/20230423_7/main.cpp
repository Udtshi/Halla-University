// 268p
#include <stdio.h>
int main(void) {
	int i = 3;

	while (i) {
		printf("%d는 참입니다.\n", i);
		i--;
	}
	printf("%d는 거짓입니다.\n", i);
}