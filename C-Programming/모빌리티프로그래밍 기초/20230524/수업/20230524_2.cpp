// 202315019 미래모빌리티공학과 최준혁
//341p 자동차 경주 프로그램

#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <time.h>

void disp_car(int car_number, int distance){
    int i;

    printf("CAR #%d:", car_number);
    for (i = 0; i < distance; i++){
        printf("*");
    }
    printf("\n");
}

int main(void){
    int i;
    int car1_dist = 0, car2_dist = 0;

    srand((unsigned)time(NULL));

    for (i = 0; i < 20; i++){
        system("cls");
        car1_dist += rand() % 100;
        car2_dist += rand() % 100;
        disp_car(1, car1_dist);
        disp_car(2, car2_dist);
        Sleep(1000);
    }
    return 0;
}