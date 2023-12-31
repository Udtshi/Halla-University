/*
360p 1번 문제
학번 : 202315019
학과 : 미래모빌리티공학과
이름 : 최준혁
날짜 : 2023/05/24
*/

#include <stdio.h>
#include <math.h>

int even(int n);
int absolute(int n);
int sign(int n);

int main(void){
    int n = 0;

    printf("정수를 입력하시오: ");
    scanf("%d", &n);
    printf("even()의 결과: %d\n", even(n));
    printf("absolute()의 결과: %d\n", absolute(n));
    printf("sign()의 결과: %d\n", sign(n));
}

int even(int n){
    if (n % 2 == 0){
        return 1;
    }
    else{
        return 0;
    }
}

int absolute(int n){
    n = abs(n);
    return n;
}

int sign(int n){
    if (n > 0){
        return 1;
    }
    else if (n == 0){
        return 0;
    }
    else{
        return -1;
    }
}
