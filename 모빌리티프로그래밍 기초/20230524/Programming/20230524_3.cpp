/*
361p 8번 문제
학번 : 202315019
학과 : 미래모빌리티공학과
이름 : 최준혁
날짜 : 2023/05/24
*/

#include <stdio.h>

int get_tax(int income);

int main(void){
int income = 0;

printf("소득을 입력하시오(만원): ");
scanf("%d", &income);
printf("소득세는 %d만원입니다.\n", get_tax(income));

}

int get_tax(int income){
    int tax;
    if (income <= 1000){
        tax = income * 0.08;
        return tax;
    }
    else{
        tax = (1000 * 0.08) + (income - 1000) * 0.1;
        return tax;
    }
}