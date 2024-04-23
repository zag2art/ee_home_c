/*
    Возвести в степень
    Составить функцию, возведение числа N в степень P. int power(n, p) и привести пример ее использования.

    Input format
    Два целых числа: N по модулю не превосходящих 1000 и P ≥ 0
    Output format
    Одно целое число

    Examples
    Input
    8 3
    Output
    512
    Input
    -5 2
    Output
    25
 */

#include <stdio.h>
#include <math.h>

int power(int n, int p) {
    return pow(n, p);
}

int main(void)
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d\n", power(a, b));

    return 0;
}

