/*
362p 11번 문제
학번 : 202315019
학과 : 미래모빌리티공학과
이름 : 최준혁
날짜 : 2023/05/24
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rolling_dice(int n);

int main (void){
    srand((unsigned)time(NULL));

    int player_dice = 0;
    int com_dice = 0;

// 사용자 주사위 굴리는 부분
    printf("사용자 주사위=(");
    for(int i = 0; i < 3; i++){
        if(i < 2){
            printf("%d, ", (1 + rand() % 6));
        }
        else{
            printf("%d", (1 + rand() % 6));
        }
        player_dice += (1 + rand() % 6);
    }
    printf(")=%d\n", player_dice);

// 컴퓨터 주사위 굴리는 부분
    printf("컴퓨터 주사위=(");
    for(int i = 0; i < 3; i++){
        if (i <2){
            printf("%d, ", (1 + rand() % 6));
        }
        else{
            printf("%d", (1 + rand() % 6));
        }
        com_dice += (1 + rand() % 6);
    }
    printf(")=%d\n", com_dice);

// 누구 주사위가 더 큰지 비교하는 부분
    if (player_dice > com_dice){
        printf("사용자 승리\n");
    }
    else if (player_dice < com_dice){
        printf("컴퓨터 승리\n");
    }
    else{
        printf("비겼습니다.\n");
    }

}