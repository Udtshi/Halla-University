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

void Excersize_3_14(int solution, int answer){
	srand(unsigned(time(NULL)));

	double x_velocity = 10.0 + rand() % (5 + 1) - 3;
	double height_i = 50.0 + rand() % (10 + 1) - 5;
	double gravity_accel = 9.80;
	double distance = 20.0 + rand() % (5 + 1) - 3;
	double height_f_time = (distance / x_velocity);
	double height_f = height_i + 0.5 * -gravity_accel * pow(height_f_time, 2);
	
	printf("\n\n");
	printf("3-14 \n");
	printf("지면으로부터 %6.2lf m의 높이에서 두 공 A, B가 서로 %6.2lf m만큼\n", height_i, distance);
	printf("떨어져 있다. 공 A를 %6.2lf m/s의 속력으로 수평방향으로 던짐과 동시에,\n", x_velocity);
	printf("공 B를 자유낙하 시킨다면 두 공이 만나는 곳의 높이는 지면으로부터 얼마인가?\n\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=========================    풀 이   ============================\n\n");
		printf("두 공이 만나는 곳의 높이는 지면으로부터 얼마인가?\n\n");
		printf("Δx: 이동거리, v0x: x축방향 처음속도, t: 시간,\n\n");
		printf("관련 공식은 Δx = v0x * t 입니다.\n");
		printf("Δx = v0x * t\n");
		printf("%6.2lf m = %6.2lf m/s * t\n\n", distance, x_velocity);

		printf("t = %6.2lfs\n\n", height_f_time);

		printf("y: 나중높이, y0: 처음높이, v0y: y축방향 처음속도, t: 시간, a: 중력가속도\n\n");
		printf("관련 공식은 y = y0 + v0y * t + 1/2 * a * t^2 입니다.\n");
		printf("중력 가속도는 아래 방향이므로 %6.2lf m/s^2입니다.\n", -gravity_accel);
		printf("y = y0 + v0y * t + 1/2 * a * t^2\n");
		printf("  = %6.2lf m + 0 + 1/2 * %6.2lf m/s^2 * t^2\n", height_i, -gravity_accel);
		printf("  = %6.2lf m\n\n", height_f);
	}

	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n\n");
		printf("t = %6.2lf s\n", height_f_time);
		printf("y = %6.2lf m\n\n", height_f);
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

	Excersize_3_14(1, 1);
}