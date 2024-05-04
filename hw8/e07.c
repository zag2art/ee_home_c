/*

    Инверсия половинок
    Считать массив из 10 элементов и выполнить инверсию отдельно для 1-ой и 2-ой половин массива. Необходимо изменить считанный массив и напечатать его одним циклом.

    Input format
    10 целых элементов массива через пробел.
    Output format
    10 целых элементов массива через пробел.

    Examples
    Input
    4 -5 3 10 -4 -6 8 -10 1 0
    Output
    -4 10 3 -5 4 0 1 -10 8 -6
    Input
    1 2 3 4 5 6 7 8 9 10
    Output
    5 4 3 2 1 10 9 8 7 6

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

    inverse(0, N / 2, a);
    inverse(N / 2, N, a);

    print(N, a);

    return 0;
}

