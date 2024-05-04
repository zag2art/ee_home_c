/*

    Максимум и минимум
    Считать массив из 10 элементов и найти в нем максимальный и минимальный элементы и их номера.

    Input format
    10 целых чисел через пробел
    Output format
    4 целых числа через пробел: номер максимума, максимум, номер минимума, минимум.

    Examples
    Input
    4 -5 3 10 -4 -6 8 -10 1 0
    Output
    4 10 8 -10
    Input
    1 2 3 4 5 6 7 8 9 10
    Output
    10 10 1 1

 */


#include <stdio.h>

#define N 10

void read(int n, int a[]) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

int get_min(int n, int a[]) {
    int min = a[0];
    for (int i = 0; i < n; i++) {
        min = a[i] < min ? a[i] : min;
    }
    return min;
}

int get_min_pos(int n, int a[]) {
    int min = a[0];
    int pos = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] < min)  {
            min = a[i];
            pos = i;
        }
    }
    return pos;
}


int get_max(int n, int a[]) {
    int max = a[0];
    for (int i = 0; i < n; i++) {
        max = a[i] > max ? a[i] : max;
    }
    return max;
}

int get_max_pos(int n, int a[]) {
    int max = a[0];
    int pos = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] > max)  {
            max = a[i];
            pos = i;
        }
    }
    return pos;
}

int main(int argc, char **argv)
{
    int a[N] = {0};

    read(N, a);

    printf("%d %d %d %d\n", get_max_pos(N, a) + 1, get_max(N, a), get_min_pos(N, a) + 1, get_min(N, a));

    return 0;
}

