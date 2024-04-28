/*
    Сумма чисел от 1 до N
    Составить рекурсивную функцию, которая определяет сумму всех чисел от 1 до N

    Input format
    Одно натуральное число
    Output format
    Сумма чисел от 1 до введенного числа

    Examples
    Input
    5
    Output
    15
    Input
    100
    Output
    5050
 */


#include <stdio.h>

int get_sum(int i) {
    if (i <= 0) return 0;
    return i + get_sum(i - 1);
}

int main(void)
{
    int n;
    scanf("%d", &n);

    printf("%d ", get_sum(n));

    return 0;
}

