/*
    Наибольший общий делитель
    Составить программу для вычисления НОД с помощью алгоритма Евклида. Даны два натуральных числа. Найти наибольший общий делитель.

    Input format
    Два неотрицательных целых числа
    Output format
    Одно целое число наибольший общий делитель

    Examples
    Input
    14 21
    Output
    7
    Input
    27 18
    Output
    9
 */


#include <stdio.h>

int main(void)
{
    int a, b;

    scanf("%d%d", &a, &b);

    while (a > 0 && b > 0) {
        if (a > b)
            a = a % b;
        else
            b = b % a;
    }

    printf("%d\n", a ? a : b);
    return 0;
}

