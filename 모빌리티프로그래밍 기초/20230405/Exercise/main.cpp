#include<stdio.h>	// 연습문제 7번

int main(void) {
	int i = -3, j = 2, k = 0, m;
	m = ++i && ++j && ++k;
	printf("%d, %d, %d, %d\n", i, j, k, m);
}

// --> -2, 3, 1, 1


#include<stdio.h>	// 연습문제 8번

int main(void) {
	float a = 0.7;
	printf("%d \n", a == 0.7);
}

// --> 0	// 변수 a는 실수타입 자료형인 float로 정의하였다. 함수 a를 정수형으로 변환하면서 소수점을 버리게되고, 0이 나오게 된다.


#include<stdio.h>	// 연습문제 9번

int main(void) {
	int x = 4, y, z;
	y = --x;
	z = x--;
	printf("%d, %d, %d\n", x, y, z);
}

// --> 2, 3, 3


#include<stdio.h>	// 연습문제 13번

int main(void) {
	int a = 100, b = 200, c;
	c = (a == 100 || b > 200);
	printf("%d\n", c);

	return 0;
}

// --> 1