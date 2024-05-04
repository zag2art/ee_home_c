/*

    Вторая с конца ноль
    Считать массив из 10 элементов и отобрать в другой массив все числа, у которых вторая с конца цифра (число десятков) – ноль.

    Input format
    10 целых чисел через пробел.
    Output format
    Целые числа через пробел, у котороых вторая с конца цифра - ноль

    Examples
    Input
    40 105 203 1 14 1000 22 33 44 55
    Output
    105 203 1 1000

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

int filter(int n, int a[], int b[]) {
    int k = 0;
    for (int i = 0; i < n; i++) {
        int d = (a[i] / 10) % 10;
        if (d == 0) {
            b[k] = a[i];
            k++;
        }
    }

    return k;
}

int main(int argc, char **argv)
{
    int a[N] = {0};
    int b[N] = {0};

    read(N, a);

    int k = filter(N, a, b);

    print(k, b);

    return 0;
}

