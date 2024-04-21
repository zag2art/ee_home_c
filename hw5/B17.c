/*
    Все счастливые числа
    Ввести натурально число и напечатать все числа от 10 до введенного числа - у которых сумма цифр равна произведению цифр

    Input format
    Одно натуральное число большее 10
    Output format
    Числа у которых сумма цифр равна произведению цифр через пробел в порядке возрастания. Не превосходящие введенное число.

    Examples
    Input
    200
    Output
    22 123 132
    Input
    1000
    Output
    22 123 132 213 231 312 321
 */


#include <stdio.h>

int main(void)
{
    int n;

    scanf("%d", &n);


    for (int i = 10; i <= n; i++) {
        int a = i;
        int sum = 0, prod = 1;
        while (a > 0) {
            int digit = a % 10;
            a = a / 10;
            sum += digit;
            prod *= digit;
        }

        if (sum == prod) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}

