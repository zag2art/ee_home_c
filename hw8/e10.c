/*

    Циклический сдвиг массива вправо на 4
    Считать массив из 12 элементов и выполнить циклический сдвиг ВПРАВО на 4 элемента.

    Input format
    12 целых чисел через пробел
    Output format
    12 целых чисел через пробел

    Examples
    Input
    4  -5   3  10  -4  -6   8 -10   1   0   5   7
    Output
    1   0   5   7   4  -5   3  10  -4  -6   8 -10
    Input
    1 2 3 4 5 6 7 8 9 10 11 12
    Output
    9 10 11 12 1 2 3 4 5 6 7 8

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

void shift_right_4(int n, int a[]) {
    int temp[4] = {};
    temp[0] = a[n-4];
    temp[1] = a[n-3];
    temp[2] = a[n-2];
    temp[3] = a[n-1];

    for (int i = n-1; i >= 4; i--) {
        a[i] = a[i - 4];
    }

    a[0] = temp[0];
    a[1] = temp[1];
    a[2] = temp[2];
    a[3] = temp[3];
}

int main(int argc, char **argv)
{
    int a[N] = {0};

    read(N, a);

    shift_right_4(N, a);

    print(N, a);

    return 0;
}

