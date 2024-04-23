/*
    Факториал
    Составить функцию вычисления N!. Использовать ее при вычислении факториала
    int factorial(int n)

    Input format
    Целое положительное число не больше 20
    Output format
    Целое положительное число

    Examples
    Input
    5
    Output
    120
 */

#include <stdio.h>
#include <stdint.h>

uint64_t factorial(int n) {
    uint64_t res = 1;

    for (uint64_t i=1; i <= n; i++) {
        res *= i;
    }

    return res;
}

int main(void)
{
    uint64_t n;
    scanf("%llu", &n);

    printf("%llu\n", factorial(n));

    return 0;
}

