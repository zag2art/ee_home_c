/*
    Вычислить cos
    Составить функцию, которая вычисляет синус как сумму ряда (с точностью 0.001)
    cos(x) = 1 - x2/2! + x4/4! - x6/6! + ... (x в радианах)
    float cosinus(float x)

    Input format
    Целое число от 0 до 90
    Output format
    Вещественное число в формате "%.3f"

    Examples
    Input
    60
    Output
    0.500
 */

#define PI 3.14159265359

#include <stdio.h>
#include <math.h>

float cosinus(float x) {
    int i = 1;
    float x_i = 1;
    float res = 0.0;

    do {
        res += x_i;
        x_i *= -1.0 * x * x / ((2 * i) * (2 * i - 1));
        i++;
    } while (fabs(x_i) > 0.001);

    return res;
}


int main(void)
{
    int a;
    scanf("%d", &a);
    float radianAngle = a * PI / 180.0;
    printf("%.3f\n", cosinus(radianAngle));

    return 0;
}

