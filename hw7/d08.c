/*
    От A до B
    Составить рекурсивную функцию, Выведите все числа от A до B включительно, в порядке возрастания, если A < B, или в порядке убывания в противном случае. 

    Input format
    Два целых числа через пробел.
    Output format
    Последовательность целых чисел.

    Examples
    Input
    5 2
    Output
    5 4 3 2
    Input
    2 7
    Output
    2 3 4 5 6 7
 */


#include <stdio.h>

void print_numbers(int a, int b) {
    printf("%d ", a);

    if (a == b) return;

    print_numbers(a < b ? a + 1: a - 1, b);
}

int main(void)
{
    int a, b;
    scanf("%d%d", &a, &b);

    print_numbers(a, b);

    return 0;
}

