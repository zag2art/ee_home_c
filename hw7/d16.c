/*
    Точная степень двойки
    Написать логическую рекурсивную функцию и используя ее определить является ли введенное натуральное число точной степенью двойки.
    int is2pow(int n)

    Input format
    Одно натуральное число.
    Output format
    YES или NO

    Examples
    Input
    8
    Output
    YES
    Input
    7
    Output
    NO
 */


#include <stdio.h>

int is2pow(int n){
    if (n == 1) return 1;

    int ost = n % 2;

    if (ost == 1) return 0;
    return is2pow(n / 2);
}

int main(void)
{
    int n;
    scanf("%d", &n);

    printf(is2pow(n) ? "YES\n" : "NO\n");

    return 0;
}
