/*
408p 배열과 반복문
학번 : 202315019
학과 : 미래모빌리티공학과
이름 : 최준혁
날짜 : 2023/06/07
*/

#include <stdio.h>
#define STUDENTS 10

int main(void){
    int scores[STUDENTS];
    int i, sum = 0;
    double average;

    for(i = 0; i < STUDENTS; i++){
        printf("학생들의 성적을 입력하시오:");
        scanf("%d", &scores[i]);
    }

    for (i = 0; i < STUDENTS; i++){
        sum += scores[i];
    } 

    average = (double)sum / STUDENTS;
    printf("성적 평균: %.2f\n", average);
    
    return 0;
    }