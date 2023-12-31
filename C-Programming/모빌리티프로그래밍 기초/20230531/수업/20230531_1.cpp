/*
375p static 지정자
학번 : 202315019
학과 : 미래모빌리티공학과
이름 : 최준혁
날짜 : 2023/05/31
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void sub(){
    static int scount = 0;
    int acount = 0;
    printf("scount = %d\t", scount);
    printf("acount = %d\n", scount);
    scount++;
    acount++;
}

int main(void){
    sub();
    sub();
    sub();
    return 0;
}