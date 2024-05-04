/*

    По убыванию и по возрастанию
    Считать массив из 10 элементов и отсортировать первую половину по возрастанию, а вторую – по убыванию.

    Input format
    10 целых чисел через пробел
    Output format
    Исходный массив. Первая часть отсортирована по возрастанию, вторая половина по убыванию.

    Examples
    Input
    14  25  13  30  76  58  32  11  41  97
    Output
    13  14  25  30  76  97  58  41  32  11
    Input
    5 4 3 2 1 6 7 8 9 10
    Output
    1 2 3 4 5 10 9 8 7 6

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
    int t = a[i];
    a[i] = a[j];
    a[j] = t;
}

void sort(int s, int n, int a[], int desc) {
    for (int i = s; i < n - 1; i++) {
        for (int j = n - 1; j > i; j--) {
            if ((a[j] < a[j-1]) ^ desc) {
                swap(j, j-1, a);
            }
        }
    }
}

int main(int argc, char **argv)
{
    int a[N] = {0};

    read(N, a);

    sort(0, N /2, a, 0);
    sort(N /2, N, a, 1);

    print(N, a);

    return 0;
}

