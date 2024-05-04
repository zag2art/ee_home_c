/*

    Переставить цифры
    Переставить цифры в числе так, что бы получилось максимальное число.

    Input format
    Одно целое не отрицательное число
    Output format
    Целое не отрицательное число

    Examples
    Input
    1229
    Output
    9221
    Input
    19
    Output
    91

 */


#include <stdio.h>

void print(int n, int a[]) {
    for (int i = 0; i < n; i++) {
        printf("%d", a[i]);
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
    int n;
    int a[10];
    int k = 0;

    scanf("%d", &n);

    while (n > 0) {
        int d = n % 10;
        a[k] = d;
        k++;
        n = n / 10;
    }

    sort(0, k, a, 1);
    print(k, a);

    return 0;
}

