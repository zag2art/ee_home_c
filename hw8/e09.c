/*

    Циклический сдвиг массива вправо
    Считать массив из 10 элементов и выполнить циклический сдвиг ВПРАВО на 1.

    Input format
    10 целых чисел через пробел
    Output format
    10 целых чисел через пробел сдвинутых вправо на 1 элемент циклически

    Examples
    Input
    4   -5   3  10  -4  -6  8  -10  1  0
    Output
    0   4   -5   3  10  -4  -6  8  -10  1
    Input
    1 2 3 4 5 6 7 8 9 10
    Output
    10 1 2 3 4 5 6 7 8 9

 */


#include <stdio.h>

#define N 10

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

void shift_right(int n, int a[]) {
    int temp = a[n - 1];

    for (int i = n-1; i >= 1; i--) {
        a[i] = a[i - 1];
    }

    a[0] = temp;
}

int main(int argc, char **argv)
{
    int a[N] = {0};

    read(N, a);

    shift_right(N, a);

    print(N, a);

    return 0;
}

