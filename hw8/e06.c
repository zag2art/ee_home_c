/*

    Среднее арифметическое массива
    Считать массив из 12 элементов и посчитать среднее арифметическое элементов массива.

    Input format
    12 целых чисел через пробел
    Output format
    Среднее арифметическое в формате "%.2f"

    Examples
    Input
    4 -5 3 10 -4 -6 8 -10 1 0 5 7
    Output
    1.08
    Input
    1 2 3 4 5 6 7 8 9 10 11 12
    Output
    6.50

 */


#include <stdio.h>

#define N 12

void read(int n, int a[]) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

int get_sum(int n, int a[]) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    return sum;
}

float get_avg(int n, int a[]) {
    return get_sum(N, a) / (float)n;
}

int main(int argc, char **argv)
{
    int a[N] = {0};

    read(N, a);

    printf("%.2f", get_avg(N, a));

    return 0;
}

