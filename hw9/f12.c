/*

    Поменять местами
    Составить функцию которая меняет в массиве минимальный и максимальный элемент местами. Прототип функции void change_max_min(int size, int a[])

    Input format
    Функция принимает на вход размер массива и массив чисел типа int
    Output format
    Функция не возвращает значения, измененный массив сохраняется на месте исходного.

    Examples
    Input
    1 2 3 4 5 6 7 8 9 10
    Output
    10 2 3 4 5 6 7 8 9 1

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

void change_max_min(int size, int a[]) {
    int min = 0, max = 0;

    for (int i=0; i < size; i++) {
        min = a[i] < a[min] ? i : min;
        max = a[i] > a[max] ? i : max;
    }

    my_swap(&a[min], &a[max]);
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

    int n = read_n(a);

    change_max_min(n, a);

    print(n, a);

    return 0;
}

