/*

    Сортировка по взрастанию
    Написать только одну функцию, которая сортирует массив по возрастанию. Необходимо реализовать только одну функцию, всю программу составлять не надо.
    Строго согласно прототипу. Имя функции и все аргументы должны быть: void sort_array(int size, int a[]).
    Всю программу загружать не надо, только одну эту функцию. Можно просто закомментировать текст всей программы, кроме данной функции.

    Input format
    Функция принимает на вход, первый аргумент - размер массива, второй аргумент - адрес нулевого элемента.
    Output format
    Функция ничего не возвращает. Производит сортировку переданного ей массива по возрастанию.

    Examples
    Input
    20 19 4 3 2 1 18 17 13 12 11 16 15 14 10 9 8 7 6 5
    Output
    1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
    Input
    5 4 3 2 1
    Output
    1 2 3 4 5

 */


#include <stdio.h>
#define N 12

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

void swap(int i, int j, int a[]) {
    int t = a[i];
    a[i] = a[j];
    a[j] = t;
}

void sort_array(int size, int a[]) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = size - 1; j > i; j--) {
            if (a[j] < a[j-1]) {
                swap(j, j-1, a);
            }
        }
    }
}

//~ int main(int argc, char **argv)
//~ {
    //~ int a[N] = {0};

    //~ read(N, a);
    //~ sort_array(N, a);
    //~ print(N, a);

    //~ return 0;
//~ }

