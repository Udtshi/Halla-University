#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int temp1, temp2;

    printf("����Ǵ� ü���µ��� �Է����ּ��� (ù��° ��): ");
    scanf("%d", &temp1);

    printf("����Ǵ� ü���µ��� �Է����ּ��� (�ι�° ��): ");
    scanf("%d", &temp2);

    if ((temp1 >= 33 && temp2 >= 33) && (temp1 < 35 || temp2 < 35)) {
        printf("�������Ǻ��� �߷ɵǾ����ϴ�.\n");
    }
    else if (temp1 >= 35 && temp2 >= 35) {
        printf("�����溸�� �߷ɵǾ����ϴ�.\n");

    }
    else {
        printf("����Ǵ� ������ �����ϴ�.\n");
    }

    return 0;
}