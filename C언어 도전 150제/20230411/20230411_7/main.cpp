#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int temp1, temp2;

    printf("예상되는 체감온도를 입력해주세요 (첫번째 날): ");
    scanf("%d", &temp1);

    printf("예상되는 체감온도를 입력해주세요 (두번째 날): ");
    scanf("%d", &temp2);

    if ((temp1 >= 33 && temp2 >= 33) && (temp1 < 35 || temp2 < 35)) {
        printf("폭염주의보가 발령되었습니다.\n");
    }
    else if (temp1 >= 35 && temp2 >= 35) {
        printf("폭염경보가 발령되었습니다.\n");

    }
    else {
        printf("예상되는 폭염이 없습니다.\n");
    }

    return 0;
}