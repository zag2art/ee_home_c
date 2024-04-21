/*
    Две одинаковые цифры рядом
    Ввести целое число и определить, верно ли, что в его записи есть   две одинаковые цифры, стоящие рядом.

    Input format
    Одно целое число
    Output format
    Единственное слов: YES или NO

    Examples
    Input
    1232
    Output
    NO
 */


#include <stdio.h>

int main(void)
{
    int a;
    scanf("%d", &a);

    int prev = -1;
    while (a > 0) {
        int digit = a % 10;
        if (digit == prev) {
            printf("YES\n");
            return 0;
        }
        prev = digit;
        a = a / 10;
    }

    printf("NO\n");

    return 0;
}

