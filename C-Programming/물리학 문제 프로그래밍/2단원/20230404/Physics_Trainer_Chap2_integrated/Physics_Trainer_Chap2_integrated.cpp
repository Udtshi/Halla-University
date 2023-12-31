#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SHOW          1
#define NOT_SHOW      0
#define Show_Solution 1
#define Answer        1 

void Excersize_2_1(int solution, int answer)
{
	double north_distance1 = 130.0;
	double south_distance = 76.7;
	double north_distance2 = 80.5;

	printf("\n\n");
	printf("2-1 \n");
	printf("대형기동헬기가 기지를 출발하여 북쪽으로 %4.1lf km를 날아간 후\n", north_distance1);
	printf("짐을 내려놓고 남쪽으로 %4.1lf km를 날아가 다른 물건을 싣고\n", south_distance);
	printf("다시 북쪽으로 %4.1lf km를 날아 착륙하였다.\n\n", north_distance2);

	printf("(a) 처음 기지로부터 마지막 도착 지점까지의 헬기의 변위는 얼마인가?\n\n");
	printf("(b) 또 이날 헬기가 움직인 총 거리는 얼마인가?\n\n");
}

void Excersize_2_2(int solution, int answer)
{
	double h = 2.0;
	double m = 12.0;
	double s = 23.0;

	double distance1 = 42.195;
	double distance2 = 100.0;

	printf("\n\n");
	printf("2-2 \n");
	printf("황영조 선수는 %4.1lf m를 %.lf시간 %.lf분 %.lf초에 뛰어 우승하였다.\n\n", distance1, h, m, s);

	printf("황영조 선수는 %4.1lf m를 평균 몇 초에 달린 셈인가?  \n\n", distance2);
}

void Excersize_2_3(int solution, int answer)
{
	double distance = 408;
	double T0 = 10;
	double hour = 12;
	double min = 37;

	printf("\n\n");
	printf("2-3 \n");
	printf("서울에서 부산까지의 KTX 노선의 거리는 약 %.lf km이다\n", distance);
	printf("오전 %.lf시에 서울역을 출발한 KTX가 %.lf시 %.lf분 부산역에 도착하였다.\n\n", T0, hour, min);

	printf("열차의 평균속력은 몇 m/s인가?\n\n");
}

void Excersize_2_4(int solution, int answer)
{
	double a_average_velocity = 10;
	double b_Instantaneous_speed = 15;

	printf("\n\n");
	printf("2-4 \n");
	printf("수평면 위에 정지하고 있던 물체가 한쪽 방향으로 직선운동을 할 때,\n");
	printf("물체의 이동거리와 시간의 관계가 그림 P2-4와 같다.\n\n");

	printf("(a) 출발하여 %.0lf s동안 물체의 평균속력은 몇 m/s인가?\n\n", a_average_velocity);
	printf("(b) 출발 후 %.0lf s 때의 순간속력은 몇 m/s인가?\n\n", b_Instantaneous_speed);
}

void Excersize_2_5(int solution, int answer)
{
	double h = 1;

	double distance1 = 200.0;
	double velocity1 = 90.0;
	double distance2 = 200.0;
	double velocity2 = 50.0;

	printf("\n\n");
	printf("2-5 \n");
	printf("어떤 사람이 고속도로를 처음 %.lf km는 %.lf km/h의 속력으로 달리고, %.lf 시간동안 점심식사를 한 후에 다시 %.lf km를 %.lf km/h의 속도로 달려서 되돌아왔다.\n\n", distance1, velocity1, h, distance2, velocity2);
	
	printf("이 사람의 여행과정에서(a) 평균속력과 (b) 평균속도를 구하라.\n\n");
}

void Excersize_2_6(int solution, int answer)
{
	double distance = 200;
	double sec = 25;


	printf("\n\n");
	printf("2-6 \n");
	printf("달리기 선수가 %.0lf m 트랙 한 바퀴를 %.0lf s에 돈다.\n\n", distance, sec);

	printf("(a) 선수의 평균속력을 구하라.\n\n");
	printf("(b) 선수의 평균속도를 구하라.\n\n");
}

void Excersize_2_7(int solution, int answer)
{
	printf("\n\n");
	printf("2-7 \n");
	printf("그림은 x축을 따라 1차원 운동을 하는 물체의 변위와 시간 관계 그래프이다. \n\n");

	printf("이 그래프를 보고 이 물체의 운동 상태를 시간대별로 설명하라.\n\n");
}

void Excersize_2_8(int solution, int answer)
{
	printf("\n\n");
	printf("2-8 \n");
	printf("가속도의 값이 +1이라는 의미는? \n\n");

	printf("(1) 속도의 변화가 없다.  \n\n");
	printf("(2) 속도가 점점 커진다.  \n\n");
	printf("(3) 속도가 점점 작아진다.\n\n");
	printf("(4) 속도가 일정하다. \n\n");
}

void Excersize_2_9(int solution, int answer)
{
	double zero_back1 = 7.10;
	double zero_back2 = 11.2;

	printf("\n\n");
	printf("2-9 \n");
	printf("독일에서 생산된 쿠페 승용차의 제로백이 %.2lf s라고 한다.\n\n", zero_back1);

	printf("(a) 이 자동차의 가속도는 몇 m/s^2인가?\n\n");
	printf("(b) 어느 전기자동차의 제로백이 %.1lf s라면 이때 가속도는 몇 m/s^2인가?\n\n", zero_back2);
}

void Excersize_2_10(int solution, int answer)
{
	double accel = 1.7;
	double V = 90.0;
	double s = 110.0;


	printf("\n\n");
	printf("2-10 \n");
	printf("고속도로에서 어떤 자동차가 약 %.lf m/s^2의 가속도를 낼 수 있다.\n\n", accel);

	printf("이 비율로 %.lf km/h의 속도에서\n", V);
	printf("%.lf km/h로 가속하는데 걸리는 시간은 얼마나 될까?\n\n", s);
}

void Excersize_2_11(int solution, int answer)
{
	double velocity = 90.0;
	double distance = 50.0;

	printf("\n\n");
	printf("2-11 \n");
	printf("자동차 판매원이 어떤 스포츠카의 장점을 설명하였다.\n");
	printf("이 스포츠카는 %.lf km/h의 속도로 달리다가 브레이크를 밟은후 %.lf m 이내에서 정지할 수 있는 성능을 갖고 있다고 한다.\n\n", velocity, distance);

	printf("이 경우 자동차의 가속도는 몇 m/s^2인가?\n\n");
}

void Excersize_2_12(int solution, int answer)
{
	double sec = 6;
	double V = 25;
	double V0 = 10;

	double acceleration = 2.5;
	double distance = 105;

	printf("\n\n");
	printf("2-12 \n");
	printf("어떤 자동차가 %.lf s 동안에 %.lf m/s 에서 %.lf m/s로 가속된다.\n\n", sec, V, V0);

	printf("(a) 이 자동차의 가속도는 얼마인가?  \n\n");
	printf("(b) 이 자동차가 그동안 달린 거리는 얼마인가?  \n\n");
}

void Excersize_2_13(int solution, int answer)
{
	double sec1 = 7.0;
	double sec2 = 5.0;

	printf("\n\n");
	printf("2-13 \n");
	printf("자동차가 직선 도로를 달릴 때의 v-t 그래프이다. \n\n");

	printf("(a) 이 자동차의 a-t 그래프를 그리라. \n\n");
	printf("(b) 자동차가 처음 %.lf s 동안 이동한 거리는 얼마인가?\n\n", sec1);
	printf("(c) 이 자동차의 처음 %.lf s 동안의 평균속도 및 평균가속도는 각각 얼마인가 ?\n\n", sec2);;
}

void Excersize_2_14(int solution, int answer)
{

	double speed = 30;
	double acceleration = 3.0;


	printf("\n\n");
	printf("2-14 \n");
	printf("경비행기가 이륙하기 위해서는 속력이 %.0lf m/s에 도달해야 한다.\n", speed);

	printf("%.1lf m/s^2으로 일정하게 가속한다면\n\n", acceleration);
	printf("이륙속도에 도달하기 위해서 얼마의 활주거리가 필요한가?\n\n");


}

void Excersize_2_15(int solution, int answer)
{
	double velocity1 = 120.0;
	double distance1 = 240.0;

	printf("\n\n");
	printf("2-15 \n");
	printf("소형비행기가 이륙하기 위해 필요한 속력은 %.lf km/h이다.\n\n", velocity1);

	printf("(a) 이 비행기가 활주로를 %.lf m 달린 후 이륙하기 위해 필요한 최소의 가속도는 얼마인가? \n\n", distance1);
	printf("(b) 이륙하는 데 걸리는 시간은 얼마인가? \n\n");
}

void Excersize_2_16(int solution, int answer)
{
	double distance1 = 10000;
	double min = 30.0;
	double min2 = 27;
	double distance2 = 1100;
	double acceleration = 0.20;

	printf("\n\n");
	printf("2-16 \n");
	printf("어떤 육상 선수가 %.0lf m를 %.1lf min 이내에 주파하려고 한다.\n", distance1, min);
	printf("정확히 %.0lf min지난 후에 달려야 할 거리가 %.0lf m 남았다.\n\n", min2, distance2);

	printf("그런데 이 육상 선수가 원하는 시간 내에 주파하기 위해서는 %.2lf m/s^2의 가속도로 몇 초 동안 가속해야 하는가?\n\n", acceleration);

}

void Excersize_2_17(int solution, int answer)
{
	double velocity1 = 6.0;
	double velocity2 = 4.0;
	double speed1 = 10.0;
	double speed2 = 0;

	printf("\n\n");
	printf("2-17 \n");
	printf("처음에 동쪽으로 %.lf m/s의 속도로 운동하던 물체가 일정한 비율로\n", velocity1);
	printf("속도가 변하여 %.lf s후 서쪽으로 %.lf m/s로 운동하였다.\n\n", speed1, velocity2);

	printf("(a) %.lf s동안 속도의 변화량은 얼마인가?  \n\n", speed1);
	printf("(b) 가속도의 크기는 얼마이며, 그방향은 어느 방향인가?  \n\n");
	printf("(c) 출발한 지 몇 초 후에 속도가 %.lf m/s이 되는가?  \n\n", speed2);
	printf("(d) 속도가 %.lf m/s이 될 때까지 이동한 거리는 얼마인가?  \n\n", speed2);
	printf("(e) 출발한 지 %.lf s 후의 변위와 이동한 거리는 각각 얼마인가?  \n\n", speed1);
}

void Excersize_2_18(int solution, int answer)
{
	double velocity = 40.0;
	double speed = 0.50;
	double time = 1.0;
	double time2 = 1.0;

	printf("\n\n");
	printf("2-18 \n");
	printf("%.1lf km/h의 속력으로 달리는 자동차가 연료가 떨어져서   \n", velocity);
	printf("일정한 가속도 %.2lf m/s^2으로 감속되었다. \n\n", speed);

	printf("(a) 자동차가 정지할 때까지 주행한 거리는 얼마인가? \n\n");

	printf("(b) 자동차가 정지할 때까지 걸린 시간은 얼마인가? \n\n");

	printf("(c) 자동차가 처음 %.1lf s동안 이동한 거리와 다섯 번째 %.1lf s동안에 이동한 거리는 각각 얼마인가? \n\n", time, time2);

}

void Excersize_2_19(int solution, int answer)
{
	double velocity = 120.0;
	double acceleration = 10.0;

	printf("\n\n");
	printf("2-19 \n");
	printf("%.lf km/h의 속력으로 달리는 과속 운전자가 정지해 있는 경찰관을 지나쳤다.\n", velocity);
	printf("이 경찰관은 즉시 일정한 가속도 %.lf km/h/s로(혼합된 단위를 유의하라) 쫓아가기 시작하였다.\n\n", acceleration);

	printf("(a) 과속 운전자가 일정한 속력을 유지한다고 가정하면 경찰관이 과속 운전자를 붙잡는 데 걸린 시간은 얼마인가?\n\n");
	printf("(b) 이때 경찰관은 얼마나 빨리 달렸겠는가?\n\n");
}

void Excersize_2_20(int solution, int answer)
{
	double Va = 24.0;
	double Vb = 20.0;
	double V0a = 5.0;
	double V0b = 5.0;

	printf("\n\n");
	printf("2-20 \n");
	printf("%.lf m/s로 달리던 자동차 A와\n", Va);
	printf("%.lf m/s로 달리던 자동차 B가 동시에 브레이크를 밟아 일정하게 감속시켜서 자동차 A는 %.lf s만에, 자동차 B는 %.lf s만에 정지하였다.\n\n", Vb, V0a, V0b);

	printf("(a) 자동차 A와 B의 가속도의 크기는 각각 얼마일까?\n\n");
	printf("(b) 두 자동차의 속도가 같아지는 때는 브레이크를 밟은 후 몇 초일까?\n\n");
	printf("(c) 브레이크를 밟은 후 정지할 때까지 어떤 자동차가 얼마나 더 걸리는가?\n\n");
	printf("(d) 자동차 A가 B와 같은 비율로 감속시킨다면 정지할 때까지 걸리는 시간은 몇 초인가?\n\n");
}

void Excersize_2_21(int solution, int answer)
{
	double height = 360.0;

	printf("\n\n");
	printf("2-21 \n");
	printf("만약 높이가 %.lf m인 빌딩 옥상에서 지면을 향해 수직으로 물체를 낙하시켰다고 하자.\n\n", height);

	printf("(a) 이 물체가 지면에 떨어지는 데까지 걸리는 시간을 구하라.\n\n");
	printf("(b) 지면에 도달하기 직전의 속도를 구하라.\n\n");
}

void Excersize_2_22(int solution, int answer)
{
	double V = 10.0;
	double sec = 2.0;
	double distance = 39.6;

	printf("\n\n");
	printf("2-22 \n");
	printf("어떤 높이에서 %.lf m/s의 속도로 연직 아래로 공을 던졌다.\n\n", V);

	printf("(a) 공을 던진 후 %.lf s 후의 속도를 구하라.\n\n", sec);
	printf("(b) 그동안 낙하한 거리는 얼마인가?\n\n");
}

void Excersize_2_23(int solution, int answer)
{
	double high = 2.2;
	double sec = 0.3;

	printf("\n\n");
	printf("2-23 \n");
	printf("낙하하는 돌이 높이가 %.1lf m인 창문을 지나가는 데 %.1lf s 걸린다.\n\n", high, sec);

	printf("돌은 창문의 꼭대기에서 얼마나 높은 곳에서 떨어졌는가?\n\n");
}


void Excersize_2_24(int solution, int answer)
{
	double height = 39.2;
	double second_velocity = 5.0;

	printf("\n\n");
	printf("2-24 \n");
	printf("높이가 %.1lf m인 10층 옥상에서\n", height);
	printf("공을 수평방향으로 초속도 %.0lf m/s로 던졌다.\n\n", second_velocity);

	printf("(a) 공이 지면에 떨어지는 데 걸리는 시간은 얼마인가?\n\n");
	printf("(b) 공은 건물에서 수평으로 얼마의 거리에 떨어지는가?\n\n");
}

void Excersize_2_25(int solution, int answer)
{
	double velocity1 = 5.50;
	double distance1 = 100.0;

	printf("\n\n");
	printf("2-25 \n");
	printf("헬리콥터가 %.2lf m/s의 속력으로 수직하게 올라가고 있다.\n", velocity1);
	printf("지면으로부터 %.lf m 높이에서 창문을 통해 상자를 떨어뜨렸다. \n\n", distance1);

	printf("그 상자가 지면에 도달하는 데 걸리는 시간은 얼마인가? \n\n");
}

void Excersize_2_26(int solution, int answer)
{
	double distance = 15.0;

	printf("\n\n");
	printf("2-26 \n");
	printf("그림은 연직 위로 던진 물체의 운동을 설명한 것이다.\n\n");

	printf("(a) 돌은 %.1lf m에서 얼마나 빨리 운동하겠는가?\n\n", distance);
	printf("(b) 이 높이에 도달하는 데 걸린 시간은 얼마인가?\n\n");
	printf("(c) (b)에서 답이 두 개인 이유가 무엇인가?\n\n");
}

void Excersize_2_27(int solution, int answer)
{
	double high = 75.0;
	double velocity = 12.0;


	printf("\n\n");
	printf("2-27 \n");
	printf("그림과 같이 높이가 %.lf m의 절벽 끝에서\n", high);
	printf("%.lf m/s의 속력으로 돌을 수직 상방으로 던져 올렸다. \n\n", velocity);

	printf("(a) 얼마 후에 돌이 절벽 아래 지면에 도달하겠는가?  \n\n");
	printf("(b) 돌이 절벽 아래 지면에 부딪히기 직전의 솔력은 얼마인가?  \n\n");
	printf("(c) 돌이 움직인 총 거리는 얼마인가?  \n\n");
}

void Excersize_2_28(int solution, int answer)
{
	double speed2 = 49.0;

	printf("\n\n");
	printf("2-28 \n");
	printf("초속도 %.1lf m/s로 연직 위로 던진 물체가 있다. \n\n", speed2);

	printf("(a) 이 물체가 올라갈 수 있는 최고높이 H는 얼마인가? \n\n");
	printf("(b) 이 물체가 다시 지면에서 떨어지는 데 걸리는 시간은 얼마인가? \n\n");
}

void Excersize_2_29(int solution, int answer)
{
	printf("\n\n");
	printf("2-29 \n");
	printf("그림은 연직 위로 던진 물체의 운동을 설명한 것이다.\n\n");

	printf("이 운동에 대해 잘못 설명한 것은?\n\n");
}

int main(void)
{
	printf("=================================================================\n");
	printf("======================= Halla University ========================\n");
	printf("======================= Future Mobility  ========================\n");
	printf("======================== Pysics Trainer  ========================\n");
	printf("========================   Chapter 2     ========================\n");
	printf("=================================================================\n");

	Excersize_2_1(0, 0);
	Excersize_2_2(0, 0);
	Excersize_2_3(0, 0);
	Excersize_2_4(0, 0);
	Excersize_2_5(0, 0);
	Excersize_2_6(0, 0);
	Excersize_2_7(0, 0);
	Excersize_2_8(0, 0);
	Excersize_2_9(0, 0);
	Excersize_2_10(0, 0);
	Excersize_2_11(0, 0);
	Excersize_2_12(0, 0);
	Excersize_2_13(0, 0);
	Excersize_2_14(0, 0);
	Excersize_2_15(0, 0);
	Excersize_2_16(0, 0);
	Excersize_2_17(0, 0);
	Excersize_2_18(0, 0);
	Excersize_2_19(0, 0);
	Excersize_2_20(0, 0);
	Excersize_2_21(0, 0);
	Excersize_2_22(0, 0);
	Excersize_2_23(0, 0);
	Excersize_2_24(0, 0);
	Excersize_2_25(0, 0);
	Excersize_2_26(0, 0);
	Excersize_2_27(0, 0);
	Excersize_2_28(0, 0);
	Excersize_2_29(0, 0);
}