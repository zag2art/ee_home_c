/*

    Найти минимум
    Ввести c клавиатуры массив из 5 элементов, найти минимальный из них.

    Input format
    5 целых чисел через пробел
    Output format
    Одно единственное целое число

    Examples
    Input
    4 15 3 10 14
    Output
    3
    Input
    1 2 3 4 -5
    Output
    -5

 */


#include <stdio.h>

#define N 5

void read(int n, int a[]) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

int get_min(int n, int a[]) {
    int min = a[0];
    for (int i = 0; i < n; i++) {
        min = a[i] < min ? a[i] : min;
    }
    return min;
}


int main(int argc, char **argv)
{
    int a[N] = {0};

    read(N, a);

    printf("%d", get_min(N, a));

    return 0;
}

