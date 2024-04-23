/*
    Перевести число N в систему счисления P
    Составить функцию, которая переводит число N из десятичной системы счисления в P-ичную систему счисления.

    Input format
    Два целых числа. N ≥ 0 и 2 ≥ P ≥ 9
    Output format
    Одно целое число

    Examples
    Input
    25 5
    Output
    100
    Input
    9 2
    Output
    1001
    Input
    11 3
    Output
    102
 */

#include <stdio.h>

int convert(int n, int p) {
    if (n == 0) {
        return 0;
    }
    int res = 0, mul = 1;

    while (n > 0) {
        res += (n % p) * mul;
        n = n / p;
        mul *= 10;
    }

    return res;
}

int main(void)
{
    int n, p;

    scanf("%d%d", &n, &p);

    printf("%d\n", convert(n, p));

    return 0;
}

