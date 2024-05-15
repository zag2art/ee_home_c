/*

    Четные в начало
    Написать только одну функцию, которая ставит в начало массива все четные элементы, а в конец – все нечетные. Не нарушайте порядок следования чисел между собой. Строго согласно прототипу:.
    void sort_even_odd(int n, int a[])

    Input format
    Функцийя принмате на вход целые числа
    Output format
    Отсортированный исходный массив

    Examples
    Input
    20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1
    Output
    20 18 16 14 12 10 8 6 4 2 19 17 15 13 11 9 7 5 3 1
    Input
    1 0 1 0 1
    Output
    0 0 1 1 1

 */


#include <stdio.h>

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

void sort_even_odd(int n, int a[]) {
    int temp[n], i, j = 0;

    for (i = 0; i < n; i++)
        if (a[i] % 2 == 0)
            temp[j++] = a[i];

    for (i = 0; i < n; i++)
        if (a[i] % 2 != 0)
            temp[j++] = a[i];

    for (i = 0; i < n; i++)
        a[i] = temp[i];
}

int main(int argc, char **argv)
{
    int a[] = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int n = sizeof(a)/sizeof(a[0]);

    sort_even_odd(n, a);
    print(n, a);

    return 0;
}

