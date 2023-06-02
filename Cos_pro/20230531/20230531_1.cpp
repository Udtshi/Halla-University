#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
int main(void){
    int A[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int B[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int C[3][3] = {0};

    //3x3 행렬곱
    for (int a = 0; a < 3; a++){
        for (int b = 0; b < 3; b++){
            for (int c = 0; c < 3; c++){
                C[a][b] += A[a][c] * B[c][b];
            }
            printf("%d\t", C[a][b]);
        }
        printf("\n");
    }
}
*/

int main(void){
    int A[3][3] = {0};
    int B[3][3] = {0};
    int C[3][3] = {0};

    printf("A행렬 입력: \n"); // A행렬 입력
    for (int a = 0; a < 3; a++){
        for (int b = 0; b < 3; b++){
            scanf("%d", &A[a][b]);
        }
    }printf("\n");

    printf("B행렬 입력: \n"); // B행렬 입력
    for (int a = 0; a < 3; a++){
        for (int b = 0; b < 3; b++){
            scanf("%d", &B[a][b]);
        }
    }printf("\n");

    //3x3 행렬곱
    for (int a = 0; a < 3; a++){
        for (int b = 0; b < 3; b++){
            for (int c = 0; c < 3; c++){
                C[a][b] += A[a][c] * B[c][b];
            }
            printf("%d\t", C[a][b]);
        }
        printf("\n");
    }
}