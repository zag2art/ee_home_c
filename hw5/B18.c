/*
    Числа Фибоначчи
    Вывести на экран ряд чисел Фибоначчи, состоящий из n элементов.
    Числа Фибоначчи – это элементы числовой последовательности 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, …, в которой каждое последующее число равно сумме двух предыдущих.

    Input format
    Одно натуральное число
    Output format
    Ряд чисел Фибоначчи через пробел

    Examples
    Input
    5
    Output
    1 1 2 3 5
    Input
    10
    Output
    1 1 2 3 5 8 13 21 34 55
 */


#include <stdio.h>

int main(void)
{
    int n;

    scanf("%d", &n);

    int p1 = 0, p2 = 1, f = 1;

    for (int i = 0; i < n; i++) {
        printf("%d ", f);
        f = p1 + p2;
        p1 = p2;
        p2 = f;
    }

    printf("\n");

    return 0;
}

