/*
    Сумма цифр числа
    Дано натуральное число N. Вычислите сумму его цифр. Необходимо составить рекурсивную функцию.
    int sum_digits(int n)

    Input format
    Одно натуральное число.
    Output format
    Целое число - сумма цифр введенного числа.

    Examples
    Input
    123
    Output
    6
    Input
    1000
    Output
    1
 */


#include <stdio.h>

int sum_digits(int n) {
    if (n == 0) return 0;

    return n % 10 + sum_digits(n / 10);
}

int main(void)
{
    int n;
    scanf("%d", &n);

    printf("%d\n", sum_digits(n));

    return 0;
}

