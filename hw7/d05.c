/*
    В двоичную систему
    Перевести натуральное число в двоичную систему счисления. Необходимо реализовать рекурсивную функцию.

    Input format
    Целое не отрицательное число в десятичной системе счисления
    Output format
    Целое число в двоичной системе счисления

    Examples
    Input
    5
    Output
    101
    Input
    8
    Output
    1000
 */


#include <stdio.h>

void print_bin(int i) {

    int ost = i / 2;

    if (ost != 0) {
        print_bin(ost);
    }

    printf("%d", i % 2);
}

int main(void)
{
    int n;
    scanf("%d", &n);

    print_bin(n);

    return 0;
}

