/*
문자열 돌리기

문제 설명

문자열 str이 주어집니다.
문자열을 시계방향으로 90도 돌려서 아래 입출력 예와 같이 출력하는 코드를 작성해 보세요.

제한사항
1 ≤ str의 길이 ≤ 10

입출력 예
입력 #1
abcde

출력 #1
a
b
c
d
e
*/

#include <stdio.h>
#define LEN_INPUT 10

int main(void) {
    int len = 0;
    char s1[LEN_INPUT];
    scanf("%s", s1);
    for(int i = 0; s1[i] != '\0'; i++){
        len++;
    }
    for(int i = 0; i < len; i++){
        printf("%c\n", s1[i]);
    }
    return 0;
}
