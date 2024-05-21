/*
    След матрицы
    Составить функцию которая находит след матрицы в двумерном массиве. Показать пример ее работы на матрице из 5 на 5 элементов. След матрицы - это сумма элементов на главной диагонали.

    Input format
    25 целых чисел через пробел.
    Output format
    Одно целое число.

    Examples
    Input
    1 1 1 1 1
    2 2 2 2 2
    3 3 3 3 3
    4 4 4 4 4
    5 5 5 5 5
    Output
    15
 */


#include <stdio.h>
#define N 5

int get_sled(int n, int *a) {
    int sum = 0;
    for (int i=0; i < n; i++) {
        sum += a[i * n + i];
    }
    return sum;
}

int main(void)
{
    int a[N][N]={};

    for (int i=0; i < N; i++) {
        for (int j=0; j < N; j++) {
            scanf("%d", &a[i][j]);
        }
    }


    printf("%d", get_sled(N, (int *)a));
    return 0;
}

