/*

    Положительные и отрицательные
    Считать 10 чисел в диапазоне от -500 до 500 и разложить по двум массивам: в одни помещать только положительные, во второй - только отрицательные. Числа, равные нулю, игнорировать. Вывести на экран все элементы обоих массивов.

    Input format
    10 целых чисел через пробел.
    Output format
    Сперва положительные числа, потом отрицательыне числа, через пробел.

    Examples
    Input
    5 -4 0 1 4 -3 -3 3 0 2
    Output
    5 1 4 3 2 -4 -3 -3

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
}

void filter(int n, int a[], int b[], int c[], int *nb, int *nc) {
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            b[*nb] = a[i];
            (*nb)++;
        }
        if (a[i] < 0) {
            c[*nc] = a[i];
            (*nc)++;
        }
    }
}

int main(int argc, char **argv)
{
    int a[N] = {0};
    int b[N] = {0};
    int c[N] = {0};

    read(N, a);

    int nb = 0, nc = 0;
    filter(N, a, b, c, &nb, &nc);

    print(nb, b);
    print(nc, c);
    printf("\n");

    return 0;
}

