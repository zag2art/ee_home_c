/*

    Цифры по порядку
    Вывести в порядке следования цифры, входящие в десятичную запись натурального числа N.

    Input format
    Одно натуральное число N
    Output format
    Цифры через пробел

    Examples
    Input
    54412
    Output
    5 4 4 1 2

 */


#include <stdio.h>

void print(int n, int a[]) {
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main(int argc, char **argv)
{
    int n;
    int a[10];
    int k = 0;

    scanf("%d", &n);

    while (n > 0) {
        int d = n % 10;
        a[k] = d;
        k++;
        n = n / 10;
    }

    print(k, a);

    return 0;
}

