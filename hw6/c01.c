/*
    Модуль числа
    Составить функцию, модуль числа и привести пример ее использования.

    Input format
    Целое число
    Output format
    Целое не отрицательное число

    Examples
    Input
    -100
    Output
    100
 */


#include <stdio.h>

int mod(int n){
    return n > 0 ? n : -n;
}

int main(void)
{
    int a;
    scanf("%d", &a);
    printf("%d\n", mod(a));

    return 0;
}

