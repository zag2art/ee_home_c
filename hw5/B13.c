/*
    Количество четных и нечетных цифр
    Посчитать количество четных и нечетных цифр числа.

    Input format
    Одно целое неотрицательное число.
    Output format
    Два числа через пробел. Количество четных и нечетных цифр в числе.

    Examples
    Input
    1234
    Output
    2 2
 */


#include <stdio.h>

int main(void)
{
    int a;
    scanf("%d", &a);

    int even = 0, odd = 0;

    if (a == 0) {
        even = 1;
    }

    while (a > 0) {
        int digit = a % 10;
        if (digit % 2 == 0)
            even++;
        else
            odd++;
        a = a / 10;
    }

    printf("%d %d\n", even, odd);

    return 0;
}

