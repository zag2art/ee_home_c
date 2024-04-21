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
 */


#include <stdio.h>

int main(void)
{
    int a;

    scanf("%d", &a);


    while (a > 0) {
        int digit = a % 10;
        if (digit % 2 != 0) {
            printf("NO\n");
            return 0;
        }
        a = a / 10;
    }

    printf("YES\n");

    return 0;
}

