/*

    Больше по модулю
    Составить функцию которая определяет в массиве, состоящем из
    положительных и отрицательных чисел, сколько элементов превосходят
    по модулю максимальный элемент.
    Прототип функции int count_bigger_abs(int n, int a[]);

    Input format
    Функция получает размер массива и массив целых чисел
    Output format
    Функция возвращает целое число равное количеству элементов превосходящих по модулю максимальный элемент.

    Examples
    Input
    1 -20 3 4 -50 6 7 8 9 10
    Output
    2

 */


#include <stdio.h>

int read_n(int a[]) {
    int i = 0;
    while(1 == scanf("%d", &a[i])) {
        i++;
    };

    return i;
}

int count_bigger_abs(int n, int a[]){
    int max = a[0];

    for (int i=0; i < n; i++) {
        max = a[i] > max ? a[i] : max;
    }

    int cnt = 0;
    for (int i=0; i < n; i++) {
        if (a[i] < 0 && -a[i] > max) cnt++;
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

    int n = read_n(a);

    int cnt = count_bigger_abs(n, a);

    printf("%d\n", cnt);

    return 0;
}

