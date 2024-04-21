/*
    Все цифры в порядке возрастания
    Ввести целое число и определить, верно ли, что все его цифры расположены в порядке возрастания.

    Input format
    Целое число
    Output format
    YES или NO

    Examples
    Input
    1238
    Output
    YES
 */


#include <stdio.h>

int main(void)
{
    int a;
    scanf("%d", &a);

    int prev = 10;
    while (a > 0) {
        int digit = a % 10;
        if (digit >= prev) {
            printf("NO\n");
            return 0;
        }
        prev = digit;
        a = a / 10;
    }

    printf("YES\n");

    return 0;
}

