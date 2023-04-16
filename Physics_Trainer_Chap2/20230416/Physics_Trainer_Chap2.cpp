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

void Excersize_2_25(int solution, int answer)
{
	double velocity = 5.50;
	double height = 100;
	double gravity_accel = 9.80;
	double time = 0.0;

	double a, b, c = 0, d, e = 0.0;

	a = -gravity_accel / 2;
	b = velocity;
	c = height;
	d = b * b - 4.0 * a * c;
	e = sqrt(d);

	printf("\n\n");
	printf("2-25 \n");
	printf("핼리콥터가 %.2lf km/h의 속력으로 수직하게 올라가고 있다.\n", velocity);
	printf("지면으로부터 %.lf m 높이에서 창문을 통해 상자를 떨어뜨렸다.\n\n", height);
	printf("그 상자가 지면에 지면에 도달하는 데 걸리는 시간은 얼마인가?\n\n");

	if (solution == SHOW)
	{
		printf("\n\n\n");
		printf("=========================    풀 이   ============================\n");
		printf("연직 위로 던진 물체의 운동입니다. \n");
		printf("y축에 대한 수직 성분만 고려합니다.\n\n");

		printf("시간을 구하기 위해서는 y = y0 + v0t + 1/2 * (-g) * t^2 공식을 사용합니다.\n");
		printf("최고점에서부터 상자가 낙하하고, 지면에 도달한 시간을 구하는 것이기 때문에 y와 y0는 0입니다.\n\n");

		printf("정리된 이차방정식 : 1/2 * %.2lf m/s^2 * t^2 + %.2lf m/s * t + %.lf = 0\n\n", -gravity_accel, velocity, height);
		printf("이차방정식의 해를 구하면 t1 = %.1lf s, t2 = %.1lf s 입니다.\n", (-b + e) / (2.0 * a), (-b - e) / (2.0 * a));
		printf("이때 시간은 음수가 될 수 없습니다.\n\n");
		printf("=================================================================\n");
		printf("\n\n\n");
	}


	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n");
		if ((-b + e) / (2.0 * a) > 0) {
			time = (-b + e) / (2.0 * a);
			printf("상자는 %.1lf 초 뒤에 지면에 도달합니다.\n\n", time);
		}
		else if ((-b - e) / (2.0 * a) > 0){
			time = (-b - e) / (2.0 * a);
			printf("상자는 %.1lf s 뒤에 지면에 도달합니다.\n\n", time);
		}
		else {
			printf("값이 올바르지 않습니다.\n\n");
		}
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


	Excersize_2_25(1,1);
}