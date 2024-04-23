/*
    Среднее арифметическое чисел
    Написать функцию, которая возвращает среднее арифметическое двух переданных ей аргументов (параметров).
    int middle(int a, int b)

    Input format
    Два целых не отрицательных числа
    Output format
    Одно целое число

    Examples
    Input
    5 7
    Output
    6
    Input
    10 20
    Output
    15
 */

#include <stdio.h>
#include <math.h>

int middle(int a, int b) {
    return (a + b) / 2;
}

int main(void)
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d\n", middle(a, b));

    return 0;
}

