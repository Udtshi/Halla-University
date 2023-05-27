/*
360p 4번 문제
학번 : 202315019
학과 : 미래모빌리티공학과
이름 : 최준혁
날짜 : 2023/05/24
*/

#include <stdio.h>

int check_alpha(char c);

int main(void){
    char c;
    printf("문자를 입력하시오: ");
    scanf("%c", &c);
    if (check_alpha(c) == 1){
        printf("%c는 알파벳 문자입니다.\n", c);
    }
    else if(check_alpha(c) == 2){
        printf("%c는 알파벳 대문자입니다.\n", c);
    }
    else{
        printf("%c는 알파벳 문자가 아닙니다.\n", c);
    }
}

int check_alpha(char c){
    if (c >= 'a' && c <= 'z'){
        return 1;
    }
    else if (c >= 'A' && c <= 'Z'){
        return 2;
    }
    else{
        return 0;
    }
}