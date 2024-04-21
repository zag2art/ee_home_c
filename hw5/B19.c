/*
    Сумма цифр равна 10
    Ввести натуральное число и определить, верно ли, что сумма его цифр равна 10.

    Input format
    Натуральное число
    Output format
    YES или NO

    Examples
    Input
    1234
    Output
    YES
    Input
    1233
    Output
    NO
 */


#include <stdio.h>

int main(void)
{
    int a;

    scanf("%d", &a);

    int sum = 0;
    while (a > 0) {
        int digit = a % 10;
        sum += digit;
        a = a / 10;
    }

    printf(sum == 10 ? "YES\n" : "NO\n");

    return 0;
}

