/*
    Две одинаковые цифры
    Ввести целое число и определить, верно ли, что в его записи есть   две одинаковые цифры, НЕ обязательно стоящие рядом.

    Input format
    Одно целое число
    Output format
    Одно слово: YES или NO

    Examples
    Input
    1234
    Output
    NO
 */


#include <stdio.h>

int main(void)
{
    int a;
    int digits[10]={};

    scanf("%d", &a);


    while (a > 0) {
        int digit = a % 10;
        if (digits[digit]) {
            printf("YES\n");
            return 0;
        }
        digits[digit] = 1;
        a = a / 10;
    }

    printf("NO\n");

    return 0;
}

