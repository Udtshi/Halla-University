/*
416p 주사위 던지기 응용 문제
학번 : 202315019
학과 : 미래모빌리티공학과
이름 : 최준혁 
날짜 : 2023/06/07
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100

int main(void){
    int i;
    int A[SIZE] = {0};

    srand((unsigned)time(NULL));
    for(i = 0; i < 30000; i++){
        ++A[rand() % 100];
    }

    for(i = 0; i < SIZE; i++){
        printf("scores[%d]=%d\n", i, A[i]);
    }

    return 0;
}