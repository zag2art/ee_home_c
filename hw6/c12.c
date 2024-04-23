/*
    Вычислить sin
    Составить функцию, которая вычисляет синус как сумму ряда (с точностью 0.001)
    sin(x) = x - x3/3! + x5/5! - x7/7! + ...(x в радианах)
    float sinus(float x)

    Input format
    Одно число от 0 до 90
    Output format
    Вещественное число в формате "%.3f"

    Examples
    Input
    45
    Output
    0.707
    Input
    30
    Output
    0.500
    Input
    0
    Output
    0.000
 */

#define PI 3.14159265359

#include <stdio.h>
#include <math.h>

float sinus(float x) {
    int i = 1;
    float x_i = x;
    float res = 0.0;

    do {
        res += x_i;
        x_i *= -1.0 * x * x / ((2 * i) * (2 * i + 1));
        i++;
    } while (fabs(x_i) > 0.001);

    return res;
}


int main(void)
{
    int a;
    scanf("%d", &a);
    float radianAngle = a * PI / 180.0;
    printf("%.3f\n", sinus(radianAngle));

    return 0;
}

