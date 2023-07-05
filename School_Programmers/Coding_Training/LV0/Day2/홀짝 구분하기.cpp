/*
문제 설명

자연수 n이 입력으로 주어졌을 때 만약 n이 짝수이면 "n is even"을, 홀수이면 "n is odd"를 출력하는 코드를 작성해 보세요.

제한사항
1 ≤ n ≤ 1,000

입출력 예
입력 #1
100

출력 #1
100 is even
*/

#include <stdio.h>

int main(void) {
    int a;
    scanf("%d", &a);
    if((a >= 1) && (a <= 1000)){
        if(a % 2 == 0){
            printf("%d is even", a);
        }
        else{
            printf("%d is odd", a);
        }
    }
    return 0;
}
