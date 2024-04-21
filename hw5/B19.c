/*
    Все цифры четные
    Ввести целое число и определить, верно ли, что все его цифры четные.

    Input format
    Одно целое число
    Output format
    YES или NO

    Examples
    Input
    2684
    Output
    YES
    Input
    2994
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

