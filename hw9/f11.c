/*

    Сумма минимальна
    Дан целочисленный массив из 30 элементов. Элементы массива могут принимать произвольные целые значения помещающиеся в int. Необходимо создать функцию, которая находит и выводит в порядке возрастания номера двух элементов массива, сумма которых минимальна.

    Input format
    Последовательность из 30 целых чисел через пробел
    Output format
    Два целых числа через пробел

    Examples
    Input
    1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30
    Output
    0 1

    Tests
    2 1 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30
    1 2 3 4 5 6 7 8 9 0 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 -1

 */


#include <stdio.h>
#define N 30

void read(int n, int a[]) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

int get_min_index(int size, int a[]) {
    int min = 0;
    for (int i = 0; i < size; i++) {
        min = a[i] < a[min] ? i : min;
    }
    return min;
}

int get_second_min_index(int size, int a[], int index) {
    int min = index == 0 ? 1 : 0;
    for (int i = 0; i < size; i++) {
        if (i == index) continue;

        min = a[i] < a[min] ? i : min;
    }
    return min;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(int argc, char **argv)
{
    int a[N]={0};
    read(N, a);

    int i1 = get_min_index(N, a);
    int i2 = get_second_min_index(N, a, i1);

    if (i1 > i2) {
        swap(&i1, &i2);
    }

    printf("%d %d\n", i1, i2);


    return 0;
}

