/*

    Инверсия каждой трети
    Считать массив из 12 элементов и выполнить инверсию для каждой трети массива.

    Input format
    12 целых чисел через пробел
    Output format
    12 целых чисел через пробел

    Examples
    Input
    4 -5 3 10 -4 -6 8 -10 1 0 5 7
    Output
    10 3 -5 4 -10 8 -6 -4 7 5 0 1
    Input
    1 2 3 4 5 6 7 8 9 10 11 12
    Output
    4 3 2 1 8 7 6 5 12 11 10 9

 */


#include <stdio.h>

#define N 12

void read(int n, int a[]) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

void print(int n, int a[]) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void swap(int i, int j, int a[]) {
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

void inverse(int x, int y, int a[]) {
    for (int i = 0; i < (y - x) / 2; i++) {
        swap(x + i, y - i - 1, a);
    }
}

int main(int argc, char **argv)
{
    int a[N] = {0};

    read(N, a);

    inverse(0, N / 3, a);
    inverse(N / 3, N / 3 * 2, a);
    inverse(N / 3 * 2, N, a);

    print(N, a);

    return 0;
}

