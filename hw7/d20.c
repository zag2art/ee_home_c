/*
    Возвести в степень
    Написать рекурсивную функцию возведения целого числа n в степень p.
    int recurs_power(int n, int p)
    Используя данную функцию, решить задачу.

    Input format
    Два целых числа -100 ≤ n ≤ 100 и 0 ≤ p ≤ 100
    Output format
    Одно целое число n в степени p

    Examples
    Input
    2 3
    Output
    8
    Input
    3 4
    Output
    81
 */


#include <stdio.h>

int recurs_power(int a, int n) {
    if (n == 0) return 1;

    int p = recurs_power(a, n / 2);

    if (n % 2 == 0)
        return p * p;
    else
        return a * p * p;
}

int main(void)
{
    int n, p;

    scanf("%d%d", &n, &p);
    printf("%d\n", recurs_power(n, p));

    return 0;
}

