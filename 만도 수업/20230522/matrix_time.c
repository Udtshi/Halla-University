#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int a[3][3] = { 0 };
    int b[3][3] = { 0 };
    int c[3][3] = { 0 };
    int i, j, k;
    int sum = 0;
    printf("첫번째 행렬을 입력: ");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("두번째 행렬을 입력: ");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            sum = 0;
            for (k = 0; k < 3; k++) {
                sum += a[i][k] * b[k][j];
            }
            c[i][j] = sum;
        }
    }


    printf("결과: \n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}