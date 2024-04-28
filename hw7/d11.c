/*
    Количество 1
    Дано натуральное число N. Посчитать количество «1» в двоичной записи числа.Составить рекурсивную функцию.

    Input format
    Натуральное число
    Output format
    Целое число - количество единиц в двоичной записи числа.

    Examples
    Input
    5
    Output
    2
    Input
    255
    Output
    8
 */


#include <stdio.h>

int count_bin(int i) {
    if (i == 0) return 0;

    return i % 2 + count_bin(i / 2);
}

int main(void)
{
    int n;
    scanf("%d", &n);

    printf("%d", count_bin(n));

    return 0;
}

