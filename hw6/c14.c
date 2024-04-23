/*
    Сумма цифр четна
    Составить функцию логическую функцию, которая определяет, верно ли, что сумма его цифр – четное число. Используя эту функцию решить задачу.

    Input format
    Одно целое не отрицательное число
    Output format
    Ответ YES или NO

    Examples
    Input
    136
    Output
    YES
    Input
    245
    Output
    NO
 */

#include <stdio.h>

int even(int a) {
    int sum = 0;
    while (a > 0) {
        sum += a % 10;
        a /= 10;
    }
    return sum % 2 == 0;
}

int main(void)
{
    int a;
    scanf("%d", &a);
    printf(even(a) ? "YES\n" : "NO\n");
    return 0;
}

