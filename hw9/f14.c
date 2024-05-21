/*

    Сумма в интервале
    Составить функцию которая возвращает сумму элементов в заданном отрезке [from, to] для массива. Прототип функции int sum_between_ab(int from, int to, int size, int a[])

    Input format
    Функция принимает концы отрезка from и to, размер массива, массив целых чисел
    Output format
    Функция возвращает сумму элементов в интервале [from, to]

    Examples
    Input
    4 6 1 2 3 4 5 6 7 8 9 10
    Output
    15
    Input
    6 4 1 2 3 4 5 6 7 8 9 10
    Output
    15

 */


#include <stdio.h>

int read_n(int a[]) {
    int i = 0;
    while(1 == scanf("%d", &a[i])) {
        i++;
    };

    return i;
}

void my_swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int sum_between_ab(int from, int to, int size, int a[]){
    if (from > to) my_swap(&from, &to);

    int sum = 0;
    for (int i=0; i < size; i++) {
        if (a[i] >= from && a[i] <= to) sum += a[i];
    }

    return sum;
}

void print(int n, int a[]) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main(int argc, char **argv)
{
    int a[1000]={0};

    int from, to;

    scanf("%d%d", &from, &to);

    int n = read_n(a);

    int cnt = sum_between_ab(from, to, n, a);

    printf("%d\n", cnt);

    return 0;
}

