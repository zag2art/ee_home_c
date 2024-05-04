/*

    Более одного раза
    Считать массив из 10 элементов и выделить в другой массив все числа, которые встречаются более  одного раза. В результирующем массиве эти числа не должны повторяться.

    Input format
    10 целых чисел через пробел
    Output format
    Целые числа через пробел, которые встречаются более одного раза в исходном массиве.

    Examples
    Input
    4 1 2 1 11 2 34 8 9 10
    Output
    1 2
    Input
    1 2 3 4 5 1 2 3 4 5
    Output
    1 2 3 4 5
    Input
    1 1 1 1 1 1 1 1 1 1
    Output
    1

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

int find(int a, int b, int num, int arr[]) {
    for (int i = a; i < b; i++) {
        if (arr[i] == num) return 1;
    }

    return 0;
}

int filter(int n, int a[], int b[]) {
    int k = 0;
    for (int i = 0; i < n; i++) {
        int c = a[i];
        if (!find(0, k, c, b) && find(i + 1, n, c, a)) {
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

