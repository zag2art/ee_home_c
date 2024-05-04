/*

    Только один раз
    Дан массив из 10 элементов. В массиве найти элементы, которые в нем встречаются только один раз, и вывести их на экран.

    Input format
    10 целых чисел через пробел
    Output format
    Элементы которые встречаются только один раз через пробел

    Examples
    Input
    5   -4   0  1   4  -3  -3  3  0  2
    Output
    5  -4  1  4  3  2

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

int count(int a, int b, int num, int arr[]) {
    int cnt = 0;
    for (int i = a; i < b; i++) {
        if (num == arr[i]) cnt++;
    }

    return cnt;
}

int filter(int n, int a[], int b[]) {
    int k = 0;
    for (int i = 0; i < n; i++) {
        int c = a[i];
        if (count(0, n, c, a) == 1) {
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
