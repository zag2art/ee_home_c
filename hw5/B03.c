/*
    Сумма квадратов маленьких чисел
    Ввести два целых числа a и b (a ≤ b) и вывести сумму квадратов всех чисел от a до b.

    Input format
    Два целых числа по модулю не больше 100
    Output format
    Сумма квадратов от первого введенного числа до второго

    Examples
    Input
    4 10
    Output
    371
 */


#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d%d", &a, &b);

    int sum = 0;
    for(int i = a; i <= b; i++) {
        sum += i * i;
    }
    printf("%d\n", sum);
    return 0;
}

