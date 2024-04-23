/*
    Проверка на простоту
    Составить функцию логическую функцию, которая определяет, верно ли, что число простое. Используя функцию решить задачу.
    int is_prime(int n)

    Input format
    Одно целое не отрицательное число.
    Output format
    YES или NO

    Examples
    Input
    13
    Output
    YES
    Input
    136
    Output
    NO
 */

#include <stdio.h>

int is_prime(int n) {
    if (n == 0 || n == 1) {
        return 0;
    }

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main(void)
{
    int a;
    scanf("%d", &a);
    printf(is_prime(a) ? "YES\n" : "NO\n");
    return 0;
}

