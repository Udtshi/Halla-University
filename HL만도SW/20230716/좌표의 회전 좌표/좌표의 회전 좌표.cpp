#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

#define DEG2RAD(x) x * (M_PI / 180.)

double x_new;
double y_new;

void rotate(double x, double y, double angle_degree)

{
    x_new = cos(DEG2RAD(angle_degree)) * x - sin(DEG2RAD(angle_degree)) * y;
    y_new = sin(DEG2RAD(angle_degree)) * x + cos(DEG2RAD(angle_degree)) * y;
    return;
}

int main()
{
    double x, y = 0;
    double angle_degree = 0;

    printf("회전할 각도를 입력하세요(x, y): ");
    scanf("%lf %lf", &x, &y);

    printf("회전할 각도를 입력하세요: ");
    scanf("%lf", &angle_degree);

    rotate(x, y, angle_degree);

    printf("회전 좌표 : (% lf, % lf)", x_new, y_new);
}