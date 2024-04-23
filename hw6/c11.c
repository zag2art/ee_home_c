/*
    НОД
    Составить функцию, которая определяет наибольший общий делитель двух натуральных и привести пример ее использования.
    int nod(int a, int b)

    Input format
    Два целых положительных числа
    Output format
    Одно целое число - наибольший общий делитель.

    Examples
    Input
    14 21
    Output
    7
 */

#include <stdio.h>

int nod(int a, int b) {
    while (a > 0 && b > 0) {
        if (a > b)
            a = a % b;
        else
            b = b % a;
    }

    return a ? a : b;
}


int main(void)
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d\n", nod(a, b));

    return 0;
}

