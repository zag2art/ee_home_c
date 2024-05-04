/*

    Чаще других
    Дан массив из 10 элементов. Определить, какое число в массиве встречается чаще всего. Гарантируется, что такое число ровно 1.

    Input format
    10 целых числе через пробел
    Output format
    Одно число, которое встречается чаще других.

    Examples
    Input
    4  1  2  1  11  2  34  11  0  11
    Output
    11

 */


#include <stdio.h>

#define N 10

void read(int n, int a[]) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

int count(int a, int b, int num, int arr[]) {
    int cnt = 0;
    for (int i = a; i < b; i++) {
        if (num == arr[i]) cnt++;
    }

    return cnt;
}

int found(int n, int a[]) {
    int num = 0;
    int found = 0;

    for (int i = 0; i < n; i++) {
        int cnt = count(0, n, a[i], a);
        if (cnt > num) {
            found = a[i];
            num = cnt;
        }
    }

    return found;
}

int main(int argc, char **argv)
{
    int a[N] = {0};

    read(N, a);

    int k = found(N, a);

    printf("%d\n", k);

    return 0;
}

