// goto 문을 사용한 구구단 출력 프로그램
#include <stdio.h>
int main(void) {
	int i = 1;

loop:
	printf("%d * %d = %d \n", 3, i, 3 * i);
	i++;
		if (i == 10)
			goto end;
	goto loop;

end:
	return 0;
}