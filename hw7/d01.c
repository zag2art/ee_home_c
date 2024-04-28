/*
    От 1 до N
    Составить рекурсивную функцию, печать всех чисел от 1 до N

    Input format
    Одно натуральное число
    Output format
    Последовательность чисел от 1 до введенного числа

    Examples
    Input
    5
    Output
    1 2 3 4 5
 */


#include <stdio.h>

void print_numbers(int i) {
    if (i <= 0) return;
    print_numbers(i - 1);

    printf("%d ", i);
}

int main(void)
{
    int n;
    scanf("%d", &n);

    print_numbers(n);

    return 0;
}

