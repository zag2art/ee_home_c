/*
    Ровно три цифры
    Ввести целое число и определить, верно ли, что в нём ровно 3 цифры.

    Input format
    Целое положительное число
    Output format
    Одно слов: YES или NO

    Examples
    Input
    123
    Output
    YES
 */


#include <stdio.h>

int main(void)
{
    int a;
    scanf("%d", &a);

    printf(a > 99 && a < 1000 ? "YES" : "NO");
    return 0;
}

