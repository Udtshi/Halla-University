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

void Excersize_2_9(int solution, int answer){
	double velocity = 100;
	double con_velocity = velocity / 3.6;
	double zero_back1 = 7.10;
	double con_accel_1 = (velocity / zero_back1);
	double zero_back2 = 11.2;
	double con_accel_2 = (velocity / zero_back2);

	printf("\n\n");
	printf("2-9 \n");
	printf("독일에서 생산된 쿠페 승용차의 제로백이 %4.1lf s라고 한다.\n", zero_back1);
	printf("(멈춘 상태에서 출발하여 속도가 % 6.2lf km / h에 도달하는 데 걸리는 시간)\n\n", velocity);
	printf("(a) 이 자동차의 가속도는 몇 m/s^2인가?\n\n");
	printf("(b) 어느 전기자동차의 제로백이 %4.1lf s라면 이때 가속도는 몇 m/s^2인가?\n\n", zero_back2);
	if (solution == SHOW)
	{
		printf("\n\n");
		printf("=========================   풀 이   =============================\n\n");
		printf("(a) 이 자동차의 가속도는 몇 m/s^2인가?\n\n");
		printf("관련 공식은 a = Δv / Δt 입니다.\n\n");
		printf("v:나중속도, v0:초기속도, t:시간, a:가속도 \n\n");
		printf("km/h를 m/s로 변환합니다\n");
		printf("%6.2lf km/h = %6.2lf km/h / (1000m / 1km * 1h / 3600s) = %6.2lf m/s\n\n", velocity, velocity, con_velocity);
		printf("a = Δv / Δt = (v - v0) / (t - 0)\n");
		printf("a = (%6.2lf m/s - 0 m/s) / %6.2lf s = %6.2lf m/s^2\n\n", con_accel_1, zero_back1, (con_accel_1 / zero_back1) );
	}


	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n\n");
			printf("(a) 이 자동차의 가속도 a = %6.2lf m/s^2\n\n", (con_accel_1 / zero_back1));
	}

	if (solution == SHOW)
	{
		printf("=========================   풀 이   =============================\n\n");
		printf("(b) 어느 전기자동차의 제로백이 %6.2lf s라면 이때 가속도는 몇 m/s^2인가?\n\n", zero_back2);
		printf("관련 공식은 a = Δv / Δt 입니다.\n\n");
		printf("Δv:나중속도, Δt:시간, a:가속도 \n");

		printf("a = Δv / Δt = (v - v0) / (t - 0)\n");
		printf("a = (%6.2lf m/s - 0 m/s) / %6.2lf s = %6.2lf m/s^2\n\n", con_accel_2, zero_back2, (con_accel_2 / zero_back2));
	}


	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n\n");
		printf("(b) 가속도 a = %6.2lf m/s^2\n\n", (con_accel_2 / zero_back2));
		printf("=================================================================\n");
		printf("\n\n\n");
	}

}

void Excersize_2_19(int solution, int answer)
{
	// 변수 선언 지역
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
	printf("%.2lf km/h의 속력으로 달리는 과속 운전자가 정지해 있는 경찰관을 지나쳤다.\n\n", velocity);
	printf("이 경찰관은 즉시 일정한 가속도 %.2lf km/h/s로(혼합된 단위를 유의하라) 쫓아가기 시작하였다.\n\n", acceleration);
	printf("(a) 과속 운전자가 일정한 속력을 유지한다고 가정하면 경찰관이 과속 운전자를 붙잡는 데 걸린 시간은 얼마인가?\n\n");
	printf("(b) 이때 경찰관은 얼마나 빨리 달렸겠는가?\n\n");

	if (solution == SHOW)
	{
		printf("\n\n");
		printf("=========================   풀 이   =============================\n\n");
		printf("(a) 과속 운전자가 일정한 속력을 유지한다고 가정하면 경찰관이 과속 운전자를 붙잡는 데 걸린 시간은 얼마인가?\n\n");
		printf("관련 공식: x = x0 + v0 * t + 1/2 * a * t^2 \n");
		printf("x:나중위치, x0:초기위치, v0:초기속도, t:시간, a:가속도 \n");
		printf("과속 운전자가 t초간 달린 거리:x1, 경찰차가 t초간 달린 거리:x2\n\n");
		printf("혼합된 단위를 m/s로 변환\n");
		printf("a = %.2lf km/h/s = %.2lf km/h/s / (1000m / 1km * 1h / 3600s)= %.2lf m/s^2\n\n", acceleration, acceleration, converted_acceleration);

		printf("x1 = v0t + 1/2 * a * t^2 = (%.2lf m/s)t + 0 * t^2\n", velocity / 3.6);
		printf("x2 = x0 + v0t + 1/2 * a * t^2 = 0 m + 0 m/s * t + 1/2 * %.2lf * t^2 m\n\n", velocity / 3.6);

		printf("x1 = x2 = (%.2lf m/s)t = 1/2 * %.2lf m/s^2 * t^2\n", (velocity / 3.6), converted_acceleration, (acceleration / 3.6));
		printf("%.2lft^2 - %.2lft = 0\n", (acceleration / 3.6) / 2, velocity / 3.6);
		printf("t1 = %.2lf s, t2 = %.2lf s\n\n", (-b + e) / (2.0 * a), (-b - e) / (2.0 * a));
	}


	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n\n");
		if ((-b + e) / (2.0 * a) >= (-b - e) / (2.0 * a)) {
			printf("(a) 경찰관이 과속 운전자를 붙잡는 데 걸린 시간 t = %.2lf s (t > 0)\n\n", (-b + e) / (2.0 * a));
			distance = distance * round((-b + e) / (2.0 * a));
		}
		else {
			printf("(a) 경찰관이 과속 운전자를 붙잡는 데 걸린 시간 t = %.2lf s (t > 0)\n\n", (-b - e) / (2.0 * a));
			distance = distance * round((-b - e) / (2.0 * a));
		}
	}

	if (solution == SHOW)
	{
		printf("=========================   풀 이   =============================\n\n");
		printf("(b) 이때 경찰관은 얼마나 빨리 달렸겠는가?\n\n");
		printf("관련 공식은 v^2 - v0^2 = 2 * a * Δx 입니다.\n");
		printf("v:나중속도, v0:처음속도, a:가속도, Δx:거리변화량\n\n");
		printf("v^2 - (0 m/s)^2 = 2 * %6.2lf m/s * %6.2lf m\n",converted_acceleration, distance);
		police_velocity = sqrt(2 * converted_acceleration * distance);
		printf("v = sqrt(2 * %.2lf m/s^2 * %.2lf m) = sqrt(%.2lf) m/s = %.2lf m/s\n\n", converted_acceleration, distance, 2 * converted_acceleration * distance, police_velocity);
	}

	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n\n");
		printf("(b) 경찰차의 속도 v = %.2lf m/s = %.2lf km/h\n\n", police_velocity, police_velocity * 3.6);
		printf("=================================================================\n");
		printf("\n\n\n");
	}
}

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
		printf("=========================    풀 이   ============================\n\n");
		printf("그 상자가 지면에 지면에 도달하는 데 걸리는 시간은 얼마인가?\n\n");
		printf("관련 공식은 y = y0 + v0t + 1/2 * a * t^2 입니다.\n");
		printf("y: 나중위치, y0: 처음위치, v0: 처음속도, t: 시간, a: 가속도\n\n");
		printf("y = y0 + v0t + 1/2 * a * t^2\n\n");
		printf("중력 가속도는 아래 방향이므로 -%6.2lf 입니다.\n", gravity_accel);

		printf("0 = %6.2lf + %6.2lf * t + 1/2 * %6.2lf * t^2\n\n", height, velocity , -gravity_accel);
		printf("1/2 * %.2lf m/s^2 * t^2 + %.2lf m/s * t + %.lf = 0\n\n", -gravity_accel, velocity, height);
		printf("t1 = %.1lf s, t2 = %.1lf s\n\n", (-b + e) / (2.0 * a), (-b - e) / (2.0 * a));
	}


	if (answer == SHOW)
	{
		printf("=========================   정 답   =============================\n\n");
		if ((-b + e) / (2.0 * a) >= (-b - e) / (2.0 * a)) {
			time = (-b + e) / (2.0 * a);
			printf("상자는 %.1lf 초 뒤에 지면에 도달합니다. (t > 0)\n\n", time);
		}
		else {
			time = (-b - e) / (2.0 * a);
			printf("상자는 %.1lf s 뒤에 지면에 도달합니다. (t > 0)\n\n", time);
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

	Excersize_2_9(1, 1);
	Excersize_2_19(1, 1);
	Excersize_2_25(1, 1);
}