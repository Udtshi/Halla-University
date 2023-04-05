#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SHOW          1
#define NOT_SHOW      0
#define Show_Solution 1
#define Answer        1 

void Excersize_2_9(int solution, int answer)
{
	double zero_back1 = 7.10;
	double zero_back2 = 11.2;

	printf("\n\n");
	printf("2-9 \n");
	printf("독일에서 생산된 쿠페 승용차의 제로백이 %.2lf s라고 한다.\n\n", zero_back1);
	printf("(a) 이 자동차의 가속도는 몇 m/s^2인가?\n\n");
	printf("(b) 어느 전기자동차의 제로백이 %2.1lf s라면 이때 가속도는 몇 m/s^2인가?\n\n", zero_back2);

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");
		// your code here
		printf("1차원에서의 운동을 다루는 문제입니다.\n");
		printf("가속도: (V-V0)/(t-t0)공식 이용\n");
		printf("t에 제로백을 대입\n");



		printf("=================================================================\n");
	}
}



int main(void)
{

	printf("=================================================================\n");
	printf("======================= Halla University ========================\n");
	printf("======================= Future Mobility  ========================\n");
	printf("======================== Pysics Trainer  ========================\n");
	printf("========================   Chapter 2     ========================\n");
	printf("=================================================================\n");


	Excersize_2_9(1,0);


}