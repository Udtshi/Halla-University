/*
362p 10번 문제
학번 : 202315019
학과 : 미래모빌리티공학과
이름 : 최준혁
날짜 : 2023/05/24
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randint();

int main(void){
srand((unsigned)time(NULL));

for (int i = 0; i < 10; i++){
    printf("%d ", randint());
    }
}

int randint(){
    int n;
    n = 10 + rand() % 81;
    return n;
}