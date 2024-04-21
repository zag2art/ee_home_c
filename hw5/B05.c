/*
    Сумма цифр
    Ввести целое число и найти сумму его цифр.

    Input format
    Одно целое число большее или равное нулю.
    Output format
    Одно число - сумма цифр

    Examples
    Input
    1234
    Output
    10
 */


#include <stdio.h>

int main(void)
{
    int a;
    scanf("%d", &a);

    int sum = 0;
    while (a > 0) {
        sum += a % 10;
        a /= 10;
    }

    printf("%d\n", sum);

    return 0;
}

