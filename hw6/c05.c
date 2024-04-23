/*
    Сумма от 1 до N
    Составить функцию, которая определяет сумму всех чисел от 1 до N и привести пример ее использования.

    Input format
    Одно целое положительное число N
    Output format
    Целое число - сумма чисел от 1 до N

    Examples
    Input
    100
    Output
    5050
 */

#include <stdio.h>

int f(int n) {
    return n * (n + 1) / 2;
}

int main(void)
{
    int x;

    scanf("%d", &x);

    printf("%d\n", f(x));

    return 0;
}

