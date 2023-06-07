/*
416p 주사위 던지기
학번 : 202315019
학과 : 미래모빌리티공학과
이름 : 최준혁 
날짜 : 2023/06/07
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 6  

int main(void){
    srand((unsigned)time(NULL));
    int freq[SIZE] = {0};+
    int i;

    for(i = 0; i < 10000; i++){
        ++freq[rand() % 6];
    }

    printf("====================\n");
    printf("숫자\t빈도\n");
    printf("====================\n");

    for(i = 0; i < SIZE; i++){
        printf("%3d\t%3d\n", i + 1, freq[i]);
    }

    return 0;
}