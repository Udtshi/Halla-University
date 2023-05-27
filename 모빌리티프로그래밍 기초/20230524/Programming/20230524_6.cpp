/*
363p 16번 문제
학번 : 202315019
학과 : 미래모빌리티공학과
이름 : 최준혁
날짜 : 2023/05/24
*/

#include <stdio.h>
int balance(int money);
int deposit(int money);
int withdraw(int money);
int menu();

int main(void){
    int n;
    menu();
    switch(menu(n)){
        case 1:
        balance();
        break;

        case 2:
        deposit():
        break;

        case 3:
        withdraw();
        break;

        case 4:
        break;

        default:
    }
}

int menu(int n){
    printf("********** Welcome to Express ATM **********\n");
    printf("<1> 잔액\n");
    printf("<2> 입금\n");
    printf("<3> 출금\n");
    printf("<4> 종료\n");
    printf("메뉴를 입력하시오: \n");
    int menu = 0;
    scanf("%d", &menu);
    return n = menu;
}
int balance(int money){
    printf("잔고는 %d원입니다.\n", money);
}
