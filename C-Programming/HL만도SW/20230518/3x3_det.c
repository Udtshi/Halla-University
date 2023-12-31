#include <stdio.h>

int main(void){
    int i, j;

    int a[3][3] = {0};
    printf("3x3 행렬의 값을 입력하세요.\n");
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            scanf("%d", &a[i][j]);
        }
    }
    
    //determinant
    int det = 0;
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            det = a[0][0] * a[1][1] * a[2][2] + a[0][1] * a[1][2] * a[2][0] + a[0][2]*a[1][0]*a[2][1] - a[0][2]*a[1][1]*a[2][0] - a[0][1]*a[1][0]*a[2][2] - a[0][0]*a[1][2]*a[2][1];
        }
    }
    printf("%d\n", det);
}