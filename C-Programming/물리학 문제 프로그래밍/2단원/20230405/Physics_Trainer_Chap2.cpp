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
	printf("���Ͽ��� ����� ���� �¿����� ���ι��� %.2lf s��� �Ѵ�.\n\n", zero_back1);
	printf("(a) �� �ڵ����� ���ӵ��� �� m/s^2�ΰ�?\n\n");
	printf("(b) ��� �����ڵ����� ���ι��� %2.1lf s��� �̶� ���ӵ��� �� m/s^2�ΰ�?\n\n", zero_back2);

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");
		// your code here
		printf("1���������� ��� �ٷ�� �����Դϴ�.\n");
		printf("���ӵ�: (V-V0)/(t-t0)���� �̿�\n");
		printf("t�� ���ι��� ����\n");



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