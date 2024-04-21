/*
    Наименьшая и наибольшая цифра
    Организовать ввод натурального числа с клавиатуры. Программа должна определить наименьшую и наибольшую цифры, которые входят в состав данного натурального числа.

    Input format
    Целое неотрицательное число
    Output format
    Две цифры через пробел. Сначала наименьшая цифра числа, затем наибольшая.

    Examples
    Input
    15
    Output
    1 5
 */


#include <stdio.h>

int main(void)
{
    int a;
    scanf("%d", &a);

    int min, max;

    min = max = a % 10;

    while (a > 0) {
        int digit = a % 10;
        min = digit < min ? digit : min;
        max = digit > max ? digit : max;
        a = a / 10;
    }

    printf("%d %d\n", min, max);

    return 0;
}

