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
	printf("���Ͽ��� ����� ���� �¿����� ���ι��� %4.1lf s��� �Ѵ�.\n\n", zero_back1);
	printf("(a) �� �ڵ����� ���ӵ��� �� m/s^2�ΰ�?\n\n");
	printf("(b) ��� �����ڵ����� ���ι��� %4.1lf s��� �̶� ���ӵ��� �� m/s^2�ΰ�?\n\n", zero_back2);
}


void Excersize_2_19(int solution, int answer)
{
	int velocity = 120;
	int acceleration = 10;

	printf("\n\n");
	printf("2-19 \n");
	printf("%d km/h�� �ӷ����� �޸��� ���� �����ڰ� ������ �ִ� �������� �����ƴ�.\n", velocity);
	printf("�� �������� ��� ������ ���ӵ� %d km/h/s��(ȥ�յ� ������ �����϶�) �Ѿư��� �����Ͽ���.\n\n", acceleration);
	printf("(a) ���� �����ڰ� ������ �ӷ��� �����Ѵٰ� �����ϸ� �������� ���� �����ڸ� ����� �� �ɸ� �ð��� ���ΰ�?\n\n");
	printf("(b) �̶� �������� �󸶳� ���� �޷Ȱڴ°�?\n\n");
}

void Excersize_2_29(int solution, int answer)
{
	printf("\n\n");
	printf("2-29 \n");
	printf("�׸��� ���� ���� ���� ��ü�� ��� ������ ���̴�.\n\n");
	printf("�� ��� ���� �߸� ������ ����?\n\n");
}




int main(void)
{

	printf("=================================================================\n");
	printf("======================= Halla University ========================\n");
	printf("======================= Future Mobility  ========================\n");
	printf("======================== Pysics Trainer  ========================\n");
	printf("========================   Chapter 2     ========================\n");
	printf("=================================================================\n");


	Excersize_2_9(0,0);
	Excersize_2_19(0, 0);
	Excersize_2_29(0, 0);

}