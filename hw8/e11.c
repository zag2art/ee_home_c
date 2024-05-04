/*

    Отсортировать по последней цифре
    Считать массив из 10 элементов и отсортировать его по последней цифре.

    Input format
    10 целых чисел через пробел
    Output format
    Этот же массив отсортированный по последней цифре

    Examples
    Input
    14  25  13  30  76  58  32  11  41  97
    Output
    30  11  41  32  13  14  25  76  97  58
    Input
    109 118 100 51 62 73 1007 16 4 555
    Output
    100 51 62 73 4 555 16 1007 118 109

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

void sort_by_last_digit(int n, int a[]) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = n - 1; j > i; j--) {
            int dig1 = a[j] % 10;
            int dig2 = a[j - 1] % 10;

            if (dig1 < dig2) {
                swap(j, j-1, a);
            }
        }
    }
}

int main(int argc, char **argv)
{
    int a[N] = {0};

    read(N, a);

    sort_by_last_digit(N, a);

    print(N, a);

    return 0;
}

