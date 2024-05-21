/*

    Поменять местами
    Составить только функцию которая в массиве находит максимальный из
    отрицательных элементов и меняет его местами с последним элементом
    массива. Гарантируется, что в массиве только один такой
    элемент или же такой элемент отсутствует. Если отрицательных
    элементов нет - массив не менять.
    Прототип функции: void swap_negmax_last(int size, int a[])

    Input format
    Функция принимает на вход размер массива и указатель на начало массива. Массив состоит из целых чисел.

    Examples
    Input
    1 -2 -3 -4 5 6 7 8 9 10
    Output
    1 10 -3 -4 5 6 7 8 9 -2

 */


#include <stdio.h>

int read_n(int a[]) {
    int i = 0;
    while(1 == scanf("%d", &a[i])) {
        i++;
    };

    return i;
}


void print(int n, int a[]) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void my_swap(int i, int j, int a[]) {
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

void swap_negmax_last(int size, int a[]) {
    int max_index = -1;

    for (int i=0; i < size; i++) {
        if (a[i] >= 0) continue;

        if (max_index == -1) {
            max_index = i;
        } else {
            max_index = a[i] > a[max_index] ? i : max_index;
        }
    }

    if (max_index != -1) {
        my_swap(max_index, size - 1, a);
    }
}


int main(int argc, char **argv)
{
    int a[1000] = {0};

    int n = read_n(a);

    swap_negmax_last(n, a);

    print(n, a);

    return 0;
}

