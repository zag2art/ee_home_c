/*
    Печать простых множителей
    Составить рекурсивную функцию, печать всех простых множителей числа.

    Input format
    Натуральное число
    Output format
    Последовательность из всех простых делителей числа через пробел

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

void print_simple_mul(int n, int m) {
    if (n == 1) return;

    if (n % m == 0) {
        printf("%d ", m);
        print_simple_mul(n / m, m);
    } else {
        print_simple_mul(n, m + 1);
    }
}

int main(void)
{
    int n;
    scanf("%d", &n);

    print_simple_mul(n, 2);

    return 0;
}

