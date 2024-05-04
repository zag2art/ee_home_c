/*

    Сумма положительных элементов
    Считать массив из 10 элементов и посчитать сумму положительных элементов массива.

    Input format
    10 целых чисел через пробел
    Output format
    Одно целое число - сумма положительных элементов массива

    Examples
    Input
    4 -5 3 10 -4 -6 8 -10 1 0
    Output
    26
    Input
    1 -2 3 -4 5 -6 7 -8 9 0
    Output
    25

 */


#include <stdio.h>

#define N 10

void read(int n, int a[]) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

int get_sum_positive(int n, int a[]) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) sum += a[i];
    }
    return sum;
}



int main(int argc, char **argv)
{
    int a[N] = {0};

    read(N, a);

    printf("%d\n", get_sum_positive(N, a));

    return 0;
}

