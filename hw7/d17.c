/*
    Функция Аккермана
    Функция Аккермана определяется рекурсивно для неотрицательных целых чисел m и n следующим образом:

    Реализуйте данную функцию по прототипу
    int akkerman(int m, int n)

    Input format
    Даны неотрицательные целые числа m и n
    Output format
    Одно целое число

    Examples
    Input
    2 1
    Output
    5
    Input
    2 4
    Output
    11
 */


#include <stdio.h>

int akkerman(int m, int n){
    if (m == 0) return n + 1;

    if (m > 0 && n == 0) return akkerman(m-1, 1);

    return akkerman(m-1, akkerman(m, n - 1));
}

int main(void)
{
    int m, n;
    scanf("%d%d", &m, &n);
    printf("%d\n", akkerman(m, n));
    return 0;
}
