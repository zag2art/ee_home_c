/*

    В заданном интервале
    Составить функцию которая возвращает количество элементов на заданном отрезке [from, to] для массива.
    Прототип функции int count_between(int from, int to, int size, int a[]) Например, на отрезке [4, 6] в массиве 1 2 3 4 5 6 7 8 9 10 функция вернет 3 значения

    Input format
    Функция принимает значения концов отрезка from и to, размер массива, массив целых чисел.
    Output format
    Функция возвращает целое число - количество числе в интервале [from, to]

    Examples
    Input
    4 6 1 2 3 4 5 6 7 8 9 10
    Output
    3

 */


#include <stdio.h>

int read_n(int a[]) {
    int i = 0;
    while(1 == scanf("%d", &a[i])) {
        i++;
    };

    return i;
}

int count_between(int from, int to, int size, int a[]){
    int cnt = 0;
    for (int i=0; i < size; i++) {
        if (a[i] >= from && a[i] <= to) cnt++;
    }

    return cnt;
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

    int cnt = count_between(from, to, n, a);

    printf("%d\n", cnt);

    return 0;
}

