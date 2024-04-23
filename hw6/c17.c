/*
    Сумма цифр равна произведению
    Составить логическую функцию, которая определяет, верно ли, что в заданном числе сумма цифр равна произведению.
    int is_happy_number(int n)

    Input format
    Целое не отрицательное число
    Output format
    YES или NO

    Examples
    Input
    123
    Output
    YES
    Input
    528
    Output
    NO
 */

#include <stdio.h>

int is_happy_number(int a) {
    int sum = 0, prod = 1;
    while (a > 0) {
        int digit = a % 10;
        a = a / 10;
        sum += digit;
        prod *= digit;
    }

    return sum == prod;
}

int main(void)
{
    int a;
    scanf("%d", &a);
    printf(is_happy_number(a) ? "YES\n" : "NO\n");
    return 0;
}

