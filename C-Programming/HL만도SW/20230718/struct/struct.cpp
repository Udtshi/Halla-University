#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// ��� ���� �ڷ����� �߰�ȣ�� ���� �����ݷ����� ������
// ���� ������ �ڷ����� ��� �ϳ��� �ڷ������� ��밡�� 
// ����ü ������ ���� ������ ���� ����� ���� "."(Period) ���

struct student	
{
	char name[20];
	int age;
	double grade[3];
};

int main(void) 
{
	struct student person;

	strcpy(person.name, "Albert");
	person.age = 20;
	person.grade[0] = 90;
	person.grade[1] = 85;
	person.grade[2] = 77;

	printf("�л� �̸� : %s\n", person.name);
	printf("�л� ���� : %d\n", person.age);
	printf("�л� ���� : %lf\n", person.grade[0]);
	printf("�л� ���� : %lf\n", person.grade[1]);
	printf("�л� ���� : %lf\n", person.grade[2]);

}