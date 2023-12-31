#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES     // M_PI를 사용하기 위해서 추가
#include <math.h>
#include <time.h>

#define SHOW          1
#define NOT_SHOW      0
#define Show_Solution 1
#define Answer        1 


#define DEG2RAD(x)  x*M_PI/180.
#define RAD2DEG(x)  x*180/M_PI

void Excersize_4_15(int solution, int answer){
	srand(unsigned(time(NULL)));

	double mass = 20.0;
	double Static_friction = 0.1;
	double Kinetic_friction = 0.06;
	double gravity = 9.80;
	double force = 22.0;

	printf("\n\n");
	printf("4-15 \n");
	printf("질량이 %6.2lf m인 물체가 수평면 위에 놓여 있다. 물체와 면 사이의 정지마찰계수가 %6.2lf이고,\n", mass, Static_friction);
	printf("운동마찰계수는 %6.2lf이다. (a) 최대 정지마찰력은 얼마인가? (b) 운동마찰력은 얼마인가?\n", Kinetic_friction);
	printf("(c) 물체를 %6.2lf N의 힘으로 수평방향으로 끌 때 물체의 가속도는 얼마인가?\n\n", force);

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=========================   풀 이   =============================\n\n");
		printf("(a) 최대 정지마찰력은 얼마인가?\n\n");
		printf("관련 공식은 Ff = μs * m * g 입니다.\n");
		printf("Ff:마찰력, μs: 운동 마찰계수, m:질량, g:중력 가속도\n\n");
		printf("Ff = μs * m * g\n");
		printf("   = %6.2lf * %6.2lfkg * %6.2lfm/s^2\n", Static_friction, mass, gravity);
		printf("   = %6.2lfN\n\n", Static_friction * mass * gravity);
	}

	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n\n");
		printf("Ff = %6.2lfN", Static_friction * mass * gravity);
	}

	if (solution == SHOW)
	{
		printf("\n\n");
		printf("=========================   풀 이   =============================\n\n");
		printf("(b) 운동마찰력은 얼마인가?\n\n");
		printf("관련 공식은 Ff = μk * m * g 입니다.\n");
		printf("Ff:마찰력, μk: 정지 마찰계수, m:질량, g:중력 가속도\n\n");
		printf("Ff = μk * m * g\n");
		printf("   = %6.2lf * %6.2lfkg * %6.2lfm/s^2\n", Kinetic_friction, mass, gravity);
		printf("   = %6.2lfN\n\n", Kinetic_friction * mass * gravity);
	}

	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n\n");
		printf("Ff = %6.2lfN", Kinetic_friction * mass * gravity);
	}

	if (solution == SHOW)
	{
		printf("\n\n");
		printf("=========================   풀 이   =============================\n\n");
		printf("(c) 물체를 %6.2lf N의 힘으로 수평방향으로 끌 때 물체의 가속도는 얼마인가?\n\n", force);
		printf("관련 공식은 ΣFx = m * ax 입니다.\n");
		printf("ΣFx: 힘의 총 합, F:가해주는 힘, Ff:마찰력, m:질량, ax: 수평방향 가속도\n\n");
		printf("ΣFx = m * ax\n");
		printf("F - Ff = m * ax\n");
		printf("ax = (F - Ff) / m \n");
		printf("  = (%6.2lf - %6.2lf) / %6.2lf\n", force, (Kinetic_friction * mass * gravity), mass);
		printf("  = %6.2lf m/s^2\n", (force - (Kinetic_friction * mass * gravity)) / mass);
	}

	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n\n");
		printf("ax = %6.2lf m/s^2\n\n", (force - (Kinetic_friction * mass * gravity)) / mass);
		printf("=================================================================\n");
		printf("\n\n\n");
	}
}




int main(void)
{

	printf("=================================================================\n");
	printf("======================= Halla University ========================\n");
	printf("======================= Future Mobility  ========================\n");
	printf("======================== Pysics Trainer  ========================\n");
	printf("========================   Chapter 3     ========================\n");
	printf("=================================================================\n");

	Excersize_4_15(1, 1);
}