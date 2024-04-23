/*
    Простые множители
    Составить функцию, печать всех простых множителей числа. Использовать ее для печати всех простых множителей числа.
    void print_simple(int n)

    Input format
    Целое положительное число.
    Output format
    Последовательность всех простых множителей данного числа в порядке возрастания.

    Examples
    Input
    12
    Output
    2 2 3
    Input
    120
    Output
    2 2 2 3 5
 */

#include <stdio.h>

void print_simple(int n) {
    int delitel = 2;

    while (n != 1) {
        if (n % delitel == 0) {
            n = n / delitel;
            printf("%d ", delitel);
        } else {
            delitel++;
        }
    }
    printf("\n");
}

int main(void)
{
    int n;
    scanf("%d", &n);
    print_simple(n);

    return 0;
}

