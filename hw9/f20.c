/*
    Четные и нечетные
    Дан целочисленный массив из 10 элементов. Необходимо определить
    количество четных и нечетных чисел. Если количество чётных чисел
    больше, чем количество нечётных, заменить каждое нечетное число
    на произведение нечетных цифр в его десятичной записи. Если
    количество нечётных чисел больше или равно количеству чётных,
    заменить каждое чётное число на произведение чётных цифр в его
    десятичной записи.

    Input format
    10 целых чисел через пробел
    Output format
    10 целых чисел через пробел

    Examples
    Input
    48 31 20 61 97 12 18 100 200 123
    Output
    48 3 20 1 63 12 18 100 200 3
    Input
    48 25 57 34 23 91 90 85 30 79
    Output
    32 25 57 4 23 91 0 85 0 79
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

int get_even_num(int n, int a[]) {
    int even_num = 0;

    for (int i=0; i < N; i++) {
        if (a[i] % 2 == 0) even_num++;
    }

    return even_num;
}

int main(int argc, char **argv)
{
    int a[N]={0};
    read(N, a);

    int even_num = get_even_num(N, a);

    int even_odd = even_num > 5;

    for (int i=0; i < N; i++) {
        if (a[i] % 2 != even_odd) continue;
        int old_num = a[i];
        int new_num = 1;

        while (old_num != 0) {
            int d = old_num % 10;
            if (d % 2 == even_odd) {
                new_num = new_num * d;
            }
            old_num = old_num / 10;
        }
        a[i] = new_num;

    }

    print(N, a);
    return 0;
}

