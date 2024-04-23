/*
    Цифры по возрастанию
    Составить функцию логическую функцию, которая определяет, верно ли, что в заданном числе все цифры стоят по возрастанию. Используя данную функцию решить задачу.
    int grow_up(int n)

    Input format
    Одно целое не отрицательное число
    Output format
    YES или NO

    Examples
    Input
    258
    Output
    YES
    Input
    528
    Output
    NO
 */

#include <stdio.h>

int grow_up(int a) {
    int prev = 10;
    while (a > 0) {
        int digit = a % 10;
        if (digit >= prev) {
            return 0;
        }
        prev = digit;
        a = a / 10;
    }

    return 1;
}

int main(void)
{
    int a;
    scanf("%d", &a);
    printf(grow_up(a) ? "YES\n" : "NO\n");
    return 0;
}

