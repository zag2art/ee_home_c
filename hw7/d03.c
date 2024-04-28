/*
    В обратном порядке
    Дано целое не отрицательное число N. Выведите все его цифры по
    одной, в обратном порядке, разделяя их пробелами или новыми
    строками. Составить рекурсивную функцию.

    Input format
    Одно не отрицательное целое число
    Output format
    Последовательность цифр введенного числа в обратном порядке
    через пробел

    Examples
    Input
    15
    Output
    5 1
    Input
    54321
    Output
    1 2 3 4 5
 */


#include <stdio.h>

void print_reversed_number(int i) {
    printf("%d ", i % 10);

    int ost = i / 10;

    if (ost != 0) {
        print_reversed_number(ost);
    }
}



int main(void)
{
    int n;
    scanf("%d", &n);

    print_reversed_number(n);

    return 0;
}

