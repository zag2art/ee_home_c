/*
    Цифры слева направо
    Написать рекурсивную функцию и используя ее решить задачу. Напечатать цифры введенного натурального числа в порядке следования(слева направо) через пробел.
    void print_digits(int n)

    Input format
    Натуральное число
    Output format
    Последовательность цифр в слева направо через пробел

    Examples
    Input
    12345
    Output
    1 2 3 4 5
    Input
    709
    Output
    7 0 9
 */


#include <stdio.h>

void print_digits(int i) {

    int ost = i / 10;

    if (ost != 0) {
        print_digits(ost);
    }

    printf("%d ", i % 10);
}



int main(void)
{
    int n;
    scanf("%d", &n);

    print_digits(n);

    return 0;
}

