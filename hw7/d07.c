/*
    От N до 1
    Составить рекурсивную функцию, печать всех чисел от N до 1.

    Input format
    Одно натуральное число
    Output format
    Последовательность целых чисел от введенного числа до 1, через пробел.

    Examples
    Input
    5
    Output
    5 4 3 2 1
 */


#include <stdio.h>

void print_numbers(int i) {
    if (i <= 0) return;

    printf("%d ", i);
    print_numbers(i - 1);
}

int main(void)
{
    int n;
    scanf("%d", &n);

    print_numbers(n);

    return 0;
}

