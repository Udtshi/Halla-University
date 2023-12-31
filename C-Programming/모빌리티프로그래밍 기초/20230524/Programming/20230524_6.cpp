/*
363p 16번 문제
학번 : 202315019
학과 : 미래모빌리티공학과
이름 : 최준혁
날짜 : 2023/05/24
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int balance(int money);
int deposit(int money);
int withdraw(int money);
int menu(int n);

int main(void) {
    // reflect the money in the account
    int money = 0;
    // reflect the menu
    int n = 0;

    while (n != 4) {
        n = menu(n);
        switch (n) {
        case 1:

            money = balance(money);
            break;
        case 2:
            money = deposit(money);

            break;
        case 3:
            money = withdraw(money);

            break;
        case 4:
            printf("프로그램을 종료합니다.\n");
            break;
        }
    }
    return 0;
}

int menu(int n) {
    printf("********** Welcome to Express ATM **********\n");
    printf("<1> 잔액\n");
    printf("<2> 입금\n");
    printf("<3> 출금\n");
    printf("<4> 종료\n");
    printf("********************************************\n");
    printf("메뉴를 입력하시오: \n");
    int menu = 0;
    scanf("%d", &n);
    printf("\n");
    return n;
}
int balance(int money) {
    printf("잔고는 %d원입니다.\n\n", money);

    return money;
}
int deposit(int money) {
    printf("입금할 금액을 입력하시오: ");
    int deposit = 0;
    scanf("%d", &deposit);
    money += deposit;
    printf("입금 후 잔고는 %d원입니다.\n\n", money);

    return money;
}
int withdraw(int money) {
    printf("출금할 금액을 입력하시오: ");
    int withdraw = 0;
    scanf("%d", &withdraw);
    printf("\n");
    if (withdraw <= money) {
        money -= withdraw;
    }
    else {
        printf("잔액이 부족합니다.\n");
    }
    printf("출금 후 잔고는 %d원입니다.\n\n", money);

    return money;
}


