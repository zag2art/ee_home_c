/*

    Два максимума
    Считать массив из 10 элементов и найти в нем два максимальных элемента и напечатать их сумму.

    Input format
    10 целых чисел через пробел.
    Output format
    Сумма двух максимальных элементов.

    Examples
    Input
    4 -5 3 10 -4 -6 8 -10 1 0
    Output
    18
    Input
    1 2 3 4 5 6 7 8 9 10
    Output
    19

 */


#include <stdio.h>

#define N 10

void read(int n, int a[]) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

int get_max(int n, int a[]) {
    int max = a[0];
    for (int i = 0; i < n; i++) {
        max = a[i] > max ? a[i] : max;
    }
    return max;
}

int get_max_except(int n, int p, int a[]) {
    int max = p == 0 ? a[1] : a[0];
    for (int i = 0; i < n; i++) {
        if (i == p) continue;
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

    int max = get_max(N, a);
    int max_pos = get_max_pos(N, a);
    int second_max = get_max_except(N, max_pos, a);

    printf("%d\n", max + second_max);

    return 0;
}

