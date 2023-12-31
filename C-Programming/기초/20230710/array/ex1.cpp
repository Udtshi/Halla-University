//배열을 선언한 후 참조번호를 변수로 하여 반복문으로 활용
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int score[6];
    int i, a,
        sum = 0;

    for (i = 0; i < 6; i++) {
        printf("학생 %d 성적을 입력입력하세요 : ", i + 1);
        scanf("%d", &score[i]);
    }

    for (i = 0; i < 6; i++)
        sum += score[i];

    printf("합계 : %d\n", sum);
    printf("평균 : %.2lf\n", (double)sum / 6);
    printf("\n score[6]에 저장되어있는 숫자:\n");

    for (a = 0; a < 6; a++)
        printf(" %d", score[a]);

    return 0;
}