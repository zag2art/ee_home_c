/*
    В прямом порядке
    Дано натуральное число N. Выведите все его цифры по одной, в прямом порядке, разделяя их пробелами или новыми строками. Необходимо реализовать рекурсивную функцию.
    void print_num(int num)

    Input format
    Одно целое неотрицательное число
    Output format
    Все цифры числа через пробел в прямом порядке.

    Examples
    Input
    15
    Output
    1 5
    Input
    54321
    Output
    5 4 3 2 1
 */


#include <stdio.h>

void print_number(int i) {

    int ost = i / 10;

    if (ost != 0) {
        print_number(ost);
    }

    printf("%d ", i % 10);
}



int main(void)
{
    int n;
    scanf("%d", &n);

    print_number(n);

    return 0;
}

