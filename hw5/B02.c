/*
    Квадраты чисел
    Ввести два целых числа a и b (a ≤ b) и вывести квадраты всех чисел от a до b.

    Input format
    Два целых числа по модулю не больше 100
    Output format
    Квадраты чисел от a до b.

    Examples
    Input
    4 5
    Output
    16 25
 */


#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d%d", &a, &b);

    for(int i = a; i <= b; i++) {
        printf("%d ", i * i );
    }
    printf("\n");
    return 0;
}

