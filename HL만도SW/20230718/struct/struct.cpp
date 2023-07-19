#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// 모든 내부 자료형을 중괄호로 묶고 세미콜론으로 마무리
// 여러 종류의 자료형을 묶어서 하나의 자료형으로 사용가능 
// 구조체 변수의 내부 변수를 직접 사용할 때는 "."(Period) 사용

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

	printf("학생 이름 : %s\n", person.name);
	printf("학생 나이 : %d\n", person.age);
	printf("학생 국어 : %lf\n", person.grade[0]);
	printf("학생 영어 : %lf\n", person.grade[1]);
	printf("학생 수학 : %lf\n", person.grade[2]);

}