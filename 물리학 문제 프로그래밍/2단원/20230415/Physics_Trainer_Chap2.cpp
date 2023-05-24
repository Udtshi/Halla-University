#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES     // M_PI를 사용하기 위해서 추가
#include <math.h>

#define SHOW          1
#define NOT_SHOW      0
#define Show_Solution 1
#define Answer        1 


#define DEG2RAD(x)  x*M_PI/180.
#define RAD2DEG(x)  x*180/M_PI

void Excersize_2_19(int solution, int answer)
{
	double velocity = 120;
	double police_velocity = 0;
	double acceleration = 10;
	double converted_acceleration = 2.78;
	double distance = velocity / 3.6;
	double a, b, c = 0, d, e = 0.0;

	a = 0.5 * converted_acceleration;
	b = -1 * (velocity / 3.6);
	d = b * b - 4.0 * a * c;
	e = sqrt(d);

	printf("\n\n");
	printf("2-19 \n");
	printf("%.lf km/h의 속력으로 달리는 과속 운전자가 정지해 있는 경찰관을 지나쳤다.\n", velocity);
	printf("이 경찰관은 즉시 일정한 가속도 %.lf km/h/s로(혼합된 단위를 유의하라) 쫓아가기 시작하였다.\n\n", acceleration);
	printf("(a) 과속 운전자가 일정한 속력을 유지한다고 가정하면 경찰관이 과속 운전자를 붙잡는 데 걸린 시간은 얼마인가?\n\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");
		printf("(a) 문제를 풀기 위해서는 혼합된 단위의 가속도를 정리해야 합니다. \n");
		printf("km/h/s를 m/s로 변환합니다.\n\n");

		printf("a = %.lf km/h/s = %.lf km/h/s * 1000m/1km * 1h/3600s * 1/s = %.2lf m/s^2\n\n", acceleration, acceleration, converted_acceleration);

		printf("과속 운전자가 t초 동안 달린 거리는 다음과 같습니다. (x1):\n");
		printf("x1 = v0t + 1/2 * a * t^2 = %.1lf m\n\n ", velocity / 3.6);

		printf("경찰차가 t초 동안 달린 거리는 다음과 같습니다. (x2):\n");
		printf("x2 = x0 + v0t + 1/2 * a * t^2 = 1/2 * %.1lf * t^2 m\n\n ", velocity / 3.6);

		printf("과속 운전자가 붙잡히는 순간은 두 자동차의 거리가 같을 때입니다.\n");
		printf("%.1lf m/s = 1/2 * %.2lf m/s^2 * t^2\n\n", velocity / 3.6, converted_acceleration, acceleration / 3.6);
		
		printf("두 식의 이차방정식 : t^2 + %.2lft - %.1lf = 0\n", converted_acceleration, velocity / 3.6);
		printf("이차방정식의 해를 구하면 x1 = %.lf s, x2 = %.lf s입니다.\n", (-b + e) / (2.0 * a), (-b - e) / (2.0 * a));
		printf("이때 처음 달리기 시작한 시간인 0 s는 답이 될 수 없습니다.\n\n ");
		printf("=================================================================\n");
		printf("\n\n\n");
	}


	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n");
		if ((-b + e) / (2.0 * a) >= (-b - e) / (2.0 * a)) {
			printf("(a) 경찰관이 과속 운전자를 붙잡는 데 걸린 시간은 t = %.lf s 입니다.\n\n", (-b + e) / (2.0 * a));
			distance = distance * round((-b + e) / (2.0 * a));
		}
		else {
			printf("(a) 경찰관이 과속 운전자를 붙잡는 데 걸린 시간은 t = %.lf s 입니다.\n\n", (-b - e) / (2.0 * a));
			distance = distance * round((-b - e) / (2.0 * a));
		}
		printf("=================================================================\n");
		printf("\n\n\n");
	}

	printf("(b) 이때 경찰관은 얼마나 빨리 달렸겠는가?\n\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=================================================================\n");
		printf("속도를 구하기 위해서는 v^2 - v0^2 = 2as 공식을 사용해야 합니다.\n");
		printf("이때 v0^2는 처음속도로, 차가 정지해 있다가 출발했기 때문에 0 입니다.\n");
		printf("v^2 = 2 * %.2lf m/s * %.lf m\n", converted_acceleration, distance);
		police_velocity = sqrt(2 * converted_acceleration * distance);
		printf("이때 v^2 이므로 v = sqrt(%.lf m/s) = %.lf m/s\n", 2 * converted_acceleration * distance, police_velocity);
		printf("=================================================================\n");
		printf("\n\n\n");
	}

	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n");
		printf("(b) 경찰차의 속도는 다음과 같습니다.\n");
		printf("v = %.1lf m/s = %.lf km/h\n\n", police_velocity, police_velocity * 3.6);
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
	printf("========================   Chapter 2     ========================\n");
	printf("=================================================================\n");


	Excersize_2_19(1,1);
}
