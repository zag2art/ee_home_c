/*
    Ровно одна цифра 9
    Ввести целое число и определить, верно ли, что в нём ровно одна цифра «9».

    Input format
    Одно целое число
    Output format
    Ответ: YES или NO

    Examples
    Input
    193
    Output
    YES
 */


#include <stdio.h>

int main(void)
{
    int a;
    int nine_cnt=0;

    scanf("%d", &a);

    while (a > 0) {
        int digit = a % 10;
        if (digit == 9) nine_cnt++;
        a = a / 10;
    }

    printf(nine_cnt == 1 ? "YES\n" : "NO\n");

    return 0;
}

