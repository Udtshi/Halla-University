/*
문제 설명
문자열 str과 정수 n이 주어집니다.
str이 n번 반복된 문자열을 만들어 출력하는 코드를 작성해 보세요.

제한사항
1 ≤ str의 길이 ≤ 10
1 ≤ n ≤ 5

입출력 예
입력 #1
string 5

출력 #1
stringstringstringstringstring
*/

#include <stdio.h>
#define LEN_INPUT 10

int main(void) {
    char s1[LEN_INPUT + 1];
    int a;
    scanf("%s %d", &s1, &a);
    for (int i = 0; i < a; i++){
        printf("%s", s1);
    }
    return 0;
}
