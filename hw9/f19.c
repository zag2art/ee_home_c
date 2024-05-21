/*
    Больше среднего
    Определить количество положительных элементов квадратной матрицы,
    превышающих по величине среднее арифметическое всех элементов главной диагонали.
    Реализовать функцию среднее арифметическое главной диагонали.

    Input format
    5 строк по 5 целых чисел через пробел
    Output format
    Одно целое число

    Examples
    Input
    1 1 1 1 1
    2 2 2 2 2
    3 3 3 3 3
    4 4 4 4 4
    5 5 5 5 5
    Output
    10
 */


#include <stdio.h>
#define N 5

float get_avg(int n, int a[n][n]) {
    int sum = 0;
    for (int i=0; i < n; i++) {
        sum += a[i][i];
    }
    return (float)sum / n;
}

int main(void)
{
    int a[N][N]={};

    for (int i=0; i < N; i++) {
        for (int j=0; j < N; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    float avg = get_avg(N, a);

    int cnt = 0;

    for (int i=0; i < N; i++) {
        for (int j=0; j < N; j++) {
            if (a[i][j] > 0 && a[i][j] > avg) {
                cnt++;
            }
        }
    }

    printf("%d", cnt);
    return 0;
}

