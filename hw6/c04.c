/*
    Функция по формуле
    Описать функцию вычисления f(x) по формуле:
    f(x)= x*x при -2 ≤ x < 2;
    x*x+4x+5 при x ≥ 2;
    4 при x < -2.
    Используя эту функцию для n заданных чисел, вычислить f(x). Среди вычисленных значений найти наибольшее.

    Input format
    Последовательность не нулевых целых чисел, в конце последовательности число 0.
    Output format
    Одно целое число

    Examples
    Input
    8 3 -3 10 0
    Output
    145
    Input
    -2 -1 -3 1 0
    Output
    4
 */

#include <stdio.h>

int f(int x) {
    if (x < -1) {
        return 4;
    } else if (x >= 2) {
        return x * x + 4 *x + 5;
    }

    return x * x;
}

int main(void)
{
    int x, max = 0;

    while (1) {
        scanf("%d", &x);
        if (x == 0) break;

        int y = f(x);

        max = y > max ? y : max;
    }

    printf("%d\n", max);

    return 0;
}

