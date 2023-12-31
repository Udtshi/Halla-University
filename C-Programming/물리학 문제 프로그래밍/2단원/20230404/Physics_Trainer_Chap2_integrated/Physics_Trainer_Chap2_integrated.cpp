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
	printf("�����⵿��Ⱑ ������ ����Ͽ� �������� %4.1lf km�� ���ư� ��\n", north_distance1);
	printf("���� �������� �������� %4.1lf km�� ���ư� �ٸ� ������ �ư�\n", south_distance);
	printf("�ٽ� �������� %4.1lf km�� ���� �����Ͽ���.\n\n", north_distance2);

	printf("(a) ó�� �����κ��� ������ ���� ���������� ����� ������ ���ΰ�?\n\n");
	printf("(b) �� �̳� ��Ⱑ ������ �� �Ÿ��� ���ΰ�?\n\n");
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
	printf("Ȳ���� ������ %4.1lf m�� %.lf�ð� %.lf�� %.lf�ʿ� �پ� ����Ͽ���.\n\n", distance1, h, m, s);

	printf("Ȳ���� ������ %4.1lf m�� ��� �� �ʿ� �޸� ���ΰ�?  \n\n", distance2);
}

void Excersize_2_3(int solution, int answer)
{
	double distance = 408;
	double T0 = 10;
	double hour = 12;
	double min = 37;

	printf("\n\n");
	printf("2-3 \n");
	printf("���￡�� �λ������ KTX �뼱�� �Ÿ��� �� %.lf km�̴�\n", distance);
	printf("���� %.lf�ÿ� ���￪�� ����� KTX�� %.lf�� %.lf�� �λ꿪�� �����Ͽ���.\n\n", T0, hour, min);

	printf("������ ��ռӷ��� �� m/s�ΰ�?\n\n");
}

void Excersize_2_4(int solution, int answer)
{
	double a_average_velocity = 10;
	double b_Instantaneous_speed = 15;

	printf("\n\n");
	printf("2-4 \n");
	printf("����� ���� �����ϰ� �ִ� ��ü�� ���� �������� ������� �� ��,\n");
	printf("��ü�� �̵��Ÿ��� �ð��� ���谡 �׸� P2-4�� ����.\n\n");

	printf("(a) ����Ͽ� %.0lf s���� ��ü�� ��ռӷ��� �� m/s�ΰ�?\n\n", a_average_velocity);
	printf("(b) ��� �� %.0lf s ���� �����ӷ��� �� m/s�ΰ�?\n\n", b_Instantaneous_speed);
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
	printf("� ����� ��ӵ��θ� ó�� %.lf km�� %.lf km/h�� �ӷ����� �޸���, %.lf �ð����� ���ɽĻ縦 �� �Ŀ� �ٽ� %.lf km�� %.lf km/h�� �ӵ��� �޷��� �ǵ��ƿԴ�.\n\n", distance1, velocity1, h, distance2, velocity2);
	
	printf("�� ����� �����������(a) ��ռӷ°� (b) ��ռӵ��� ���϶�.\n\n");
}

void Excersize_2_6(int solution, int answer)
{
	double distance = 200;
	double sec = 25;


	printf("\n\n");
	printf("2-6 \n");
	printf("�޸��� ������ %.0lf m Ʈ�� �� ������ %.0lf s�� ����.\n\n", distance, sec);

	printf("(a) ������ ��ռӷ��� ���϶�.\n\n");
	printf("(b) ������ ��ռӵ��� ���϶�.\n\n");
}

void Excersize_2_7(int solution, int answer)
{
	printf("\n\n");
	printf("2-7 \n");
	printf("�׸��� x���� ���� 1���� ��� �ϴ� ��ü�� ������ �ð� ���� �׷����̴�. \n\n");

	printf("�� �׷����� ���� �� ��ü�� � ���¸� �ð��뺰�� �����϶�.\n\n");
}

void Excersize_2_8(int solution, int answer)
{
	printf("\n\n");
	printf("2-8 \n");
	printf("���ӵ��� ���� +1�̶�� �ǹ̴�? \n\n");

	printf("(1) �ӵ��� ��ȭ�� ����.  \n\n");
	printf("(2) �ӵ��� ���� Ŀ����.  \n\n");
	printf("(3) �ӵ��� ���� �۾�����.\n\n");
	printf("(4) �ӵ��� �����ϴ�. \n\n");
}

void Excersize_2_9(int solution, int answer)
{
	double zero_back1 = 7.10;
	double zero_back2 = 11.2;

	printf("\n\n");
	printf("2-9 \n");
	printf("���Ͽ��� ����� ���� �¿����� ���ι��� %.2lf s��� �Ѵ�.\n\n", zero_back1);

	printf("(a) �� �ڵ����� ���ӵ��� �� m/s^2�ΰ�?\n\n");
	printf("(b) ��� �����ڵ����� ���ι��� %.1lf s��� �̶� ���ӵ��� �� m/s^2�ΰ�?\n\n", zero_back2);
}

void Excersize_2_10(int solution, int answer)
{
	double accel = 1.7;
	double V = 90.0;
	double s = 110.0;


	printf("\n\n");
	printf("2-10 \n");
	printf("��ӵ��ο��� � �ڵ����� �� %.lf m/s^2�� ���ӵ��� �� �� �ִ�.\n\n", accel);

	printf("�� ������ %.lf km/h�� �ӵ�����\n", V);
	printf("%.lf km/h�� �����ϴµ� �ɸ��� �ð��� �󸶳� �ɱ�?\n\n", s);
}

void Excersize_2_11(int solution, int answer)
{
	double velocity = 90.0;
	double distance = 50.0;

	printf("\n\n");
	printf("2-11 \n");
	printf("�ڵ��� �Ǹſ��� � ������ī�� ������ �����Ͽ���.\n");
	printf("�� ������ī�� %.lf km/h�� �ӵ��� �޸��ٰ� �극��ũ�� ������ %.lf m �̳����� ������ �� �ִ� ������ ���� �ִٰ� �Ѵ�.\n\n", velocity, distance);

	printf("�� ��� �ڵ����� ���ӵ��� �� m/s^2�ΰ�?\n\n");
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
	printf("� �ڵ����� %.lf s ���ȿ� %.lf m/s ���� %.lf m/s�� ���ӵȴ�.\n\n", sec, V, V0);

	printf("(a) �� �ڵ����� ���ӵ��� ���ΰ�?  \n\n");
	printf("(b) �� �ڵ����� �׵��� �޸� �Ÿ��� ���ΰ�?  \n\n");
}

void Excersize_2_13(int solution, int answer)
{
	double sec1 = 7.0;
	double sec2 = 5.0;

	printf("\n\n");
	printf("2-13 \n");
	printf("�ڵ����� ���� ���θ� �޸� ���� v-t �׷����̴�. \n\n");

	printf("(a) �� �ڵ����� a-t �׷����� �׸���. \n\n");
	printf("(b) �ڵ����� ó�� %.lf s ���� �̵��� �Ÿ��� ���ΰ�?\n\n", sec1);
	printf("(c) �� �ڵ����� ó�� %.lf s ������ ��ռӵ� �� ��հ��ӵ��� ���� ���ΰ� ?\n\n", sec2);;
}

void Excersize_2_14(int solution, int answer)
{

	double speed = 30;
	double acceleration = 3.0;


	printf("\n\n");
	printf("2-14 \n");
	printf("�����Ⱑ �̷��ϱ� ���ؼ��� �ӷ��� %.0lf m/s�� �����ؾ� �Ѵ�.\n", speed);

	printf("%.1lf m/s^2���� �����ϰ� �����Ѵٸ�\n\n", acceleration);
	printf("�̷��ӵ��� �����ϱ� ���ؼ� ���� Ȱ�ְŸ��� �ʿ��Ѱ�?\n\n");


}

void Excersize_2_15(int solution, int answer)
{
	double velocity1 = 120.0;
	double distance1 = 240.0;

	printf("\n\n");
	printf("2-15 \n");
	printf("��������Ⱑ �̷��ϱ� ���� �ʿ��� �ӷ��� %.lf km/h�̴�.\n\n", velocity1);

	printf("(a) �� ����Ⱑ Ȱ�ַθ� %.lf m �޸� �� �̷��ϱ� ���� �ʿ��� �ּ��� ���ӵ��� ���ΰ�? \n\n", distance1);
	printf("(b) �̷��ϴ� �� �ɸ��� �ð��� ���ΰ�? \n\n");
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
	printf("� ���� ������ %.0lf m�� %.1lf min �̳��� �����Ϸ��� �Ѵ�.\n", distance1, min);
	printf("��Ȯ�� %.0lf min���� �Ŀ� �޷��� �� �Ÿ��� %.0lf m ���Ҵ�.\n\n", min2, distance2);

	printf("�׷��� �� ���� ������ ���ϴ� �ð� ���� �����ϱ� ���ؼ��� %.2lf m/s^2�� ���ӵ��� �� �� ���� �����ؾ� �ϴ°�?\n\n", acceleration);

}

void Excersize_2_17(int solution, int answer)
{
	double velocity1 = 6.0;
	double velocity2 = 4.0;
	double speed1 = 10.0;
	double speed2 = 0;

	printf("\n\n");
	printf("2-17 \n");
	printf("ó���� �������� %.lf m/s�� �ӵ��� ��ϴ� ��ü�� ������ ������\n", velocity1);
	printf("�ӵ��� ���Ͽ� %.lf s�� �������� %.lf m/s�� ��Ͽ���.\n\n", speed1, velocity2);

	printf("(a) %.lf s���� �ӵ��� ��ȭ���� ���ΰ�?  \n\n", speed1);
	printf("(b) ���ӵ��� ũ��� ���̸�, �׹����� ��� �����ΰ�?  \n\n");
	printf("(c) ����� �� �� �� �Ŀ� �ӵ��� %.lf m/s�� �Ǵ°�?  \n\n", speed2);
	printf("(d) �ӵ��� %.lf m/s�� �� ������ �̵��� �Ÿ��� ���ΰ�?  \n\n", speed2);
	printf("(e) ����� �� %.lf s ���� ������ �̵��� �Ÿ��� ���� ���ΰ�?  \n\n", speed1);
}

void Excersize_2_18(int solution, int answer)
{
	double velocity = 40.0;
	double speed = 0.50;
	double time = 1.0;
	double time2 = 1.0;

	printf("\n\n");
	printf("2-18 \n");
	printf("%.1lf km/h�� �ӷ����� �޸��� �ڵ����� ���ᰡ ��������   \n", velocity);
	printf("������ ���ӵ� %.2lf m/s^2���� ���ӵǾ���. \n\n", speed);

	printf("(a) �ڵ����� ������ ������ ������ �Ÿ��� ���ΰ�? \n\n");

	printf("(b) �ڵ����� ������ ������ �ɸ� �ð��� ���ΰ�? \n\n");

	printf("(c) �ڵ����� ó�� %.1lf s���� �̵��� �Ÿ��� �ټ� ��° %.1lf s���ȿ� �̵��� �Ÿ��� ���� ���ΰ�? \n\n", time, time2);

}

void Excersize_2_19(int solution, int answer)
{
	double velocity = 120.0;
	double acceleration = 10.0;

	printf("\n\n");
	printf("2-19 \n");
	printf("%.lf km/h�� �ӷ����� �޸��� ���� �����ڰ� ������ �ִ� �������� �����ƴ�.\n", velocity);
	printf("�� �������� ��� ������ ���ӵ� %.lf km/h/s��(ȥ�յ� ������ �����϶�) �Ѿư��� �����Ͽ���.\n\n", acceleration);

	printf("(a) ���� �����ڰ� ������ �ӷ��� �����Ѵٰ� �����ϸ� �������� ���� �����ڸ� ����� �� �ɸ� �ð��� ���ΰ�?\n\n");
	printf("(b) �̶� �������� �󸶳� ���� �޷Ȱڴ°�?\n\n");
}

void Excersize_2_20(int solution, int answer)
{
	double Va = 24.0;
	double Vb = 20.0;
	double V0a = 5.0;
	double V0b = 5.0;

	printf("\n\n");
	printf("2-20 \n");
	printf("%.lf m/s�� �޸��� �ڵ��� A��\n", Va);
	printf("%.lf m/s�� �޸��� �ڵ��� B�� ���ÿ� �극��ũ�� ��� �����ϰ� ���ӽ��Ѽ� �ڵ��� A�� %.lf s����, �ڵ��� B�� %.lf s���� �����Ͽ���.\n\n", Vb, V0a, V0b);

	printf("(a) �ڵ��� A�� B�� ���ӵ��� ũ��� ���� ���ϱ�?\n\n");
	printf("(b) �� �ڵ����� �ӵ��� �������� ���� �극��ũ�� ���� �� �� ���ϱ�?\n\n");
	printf("(c) �극��ũ�� ���� �� ������ ������ � �ڵ����� �󸶳� �� �ɸ��°�?\n\n");
	printf("(d) �ڵ��� A�� B�� ���� ������ ���ӽ�Ų�ٸ� ������ ������ �ɸ��� �ð��� �� ���ΰ�?\n\n");
}

void Excersize_2_21(int solution, int answer)
{
	double height = 360.0;

	printf("\n\n");
	printf("2-21 \n");
	printf("���� ���̰� %.lf m�� ���� ���󿡼� ������ ���� �������� ��ü�� ���Ͻ��״ٰ� ����.\n\n", height);

	printf("(a) �� ��ü�� ���鿡 �������� ������ �ɸ��� �ð��� ���϶�.\n\n");
	printf("(b) ���鿡 �����ϱ� ������ �ӵ��� ���϶�.\n\n");
}

void Excersize_2_22(int solution, int answer)
{
	double V = 10.0;
	double sec = 2.0;
	double distance = 39.6;

	printf("\n\n");
	printf("2-22 \n");
	printf("� ���̿��� %.lf m/s�� �ӵ��� ���� �Ʒ��� ���� ������.\n\n", V);

	printf("(a) ���� ���� �� %.lf s ���� �ӵ��� ���϶�.\n\n", sec);
	printf("(b) �׵��� ������ �Ÿ��� ���ΰ�?\n\n");
}

void Excersize_2_23(int solution, int answer)
{
	double high = 2.2;
	double sec = 0.3;

	printf("\n\n");
	printf("2-23 \n");
	printf("�����ϴ� ���� ���̰� %.1lf m�� â���� �������� �� %.1lf s �ɸ���.\n\n", high, sec);

	printf("���� â���� ����⿡�� �󸶳� ���� ������ �������°�?\n\n");
}


void Excersize_2_24(int solution, int answer)
{
	double height = 39.2;
	double second_velocity = 5.0;

	printf("\n\n");
	printf("2-24 \n");
	printf("���̰� %.1lf m�� 10�� ���󿡼�\n", height);
	printf("���� ����������� �ʼӵ� %.0lf m/s�� ������.\n\n", second_velocity);

	printf("(a) ���� ���鿡 �������� �� �ɸ��� �ð��� ���ΰ�?\n\n");
	printf("(b) ���� �ǹ����� �������� ���� �Ÿ��� �������°�?\n\n");
}

void Excersize_2_25(int solution, int answer)
{
	double velocity1 = 5.50;
	double distance1 = 100.0;

	printf("\n\n");
	printf("2-25 \n");
	printf("�︮���Ͱ� %.2lf m/s�� �ӷ����� �����ϰ� �ö󰡰� �ִ�.\n", velocity1);
	printf("�������κ��� %.lf m ���̿��� â���� ���� ���ڸ� ����߷ȴ�. \n\n", distance1);

	printf("�� ���ڰ� ���鿡 �����ϴ� �� �ɸ��� �ð��� ���ΰ�? \n\n");
}

void Excersize_2_26(int solution, int answer)
{
	double distance = 15.0;

	printf("\n\n");
	printf("2-26 \n");
	printf("�׸��� ���� ���� ���� ��ü�� ��� ������ ���̴�.\n\n");

	printf("(a) ���� %.1lf m���� �󸶳� ���� ��ϰڴ°�?\n\n", distance);
	printf("(b) �� ���̿� �����ϴ� �� �ɸ� �ð��� ���ΰ�?\n\n");
	printf("(c) (b)���� ���� �� ���� ������ �����ΰ�?\n\n");
}

void Excersize_2_27(int solution, int answer)
{
	double high = 75.0;
	double velocity = 12.0;


	printf("\n\n");
	printf("2-27 \n");
	printf("�׸��� ���� ���̰� %.lf m�� ���� ������\n", high);
	printf("%.lf m/s�� �ӷ����� ���� ���� ������� ���� �÷ȴ�. \n\n", velocity);

	printf("(a) �� �Ŀ� ���� ���� �Ʒ� ���鿡 �����ϰڴ°�?  \n\n");
	printf("(b) ���� ���� �Ʒ� ���鿡 �ε����� ������ �ַ��� ���ΰ�?  \n\n");
	printf("(c) ���� ������ �� �Ÿ��� ���ΰ�?  \n\n");
}

void Excersize_2_28(int solution, int answer)
{
	double speed2 = 49.0;

	printf("\n\n");
	printf("2-28 \n");
	printf("�ʼӵ� %.1lf m/s�� ���� ���� ���� ��ü�� �ִ�. \n\n", speed2);

	printf("(a) �� ��ü�� �ö� �� �ִ� �ְ���� H�� ���ΰ�? \n\n");
	printf("(b) �� ��ü�� �ٽ� ���鿡�� �������� �� �ɸ��� �ð��� ���ΰ�? \n\n");
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