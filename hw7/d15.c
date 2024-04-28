/*
    Найти наибольшее
    Дана последовательность ненулевых целых чисел, завершающаяся числом 0. Ноль в последовательность не входит. Определите наибольшее значение числа в этой последовательности. Для решения задачи необходимо написать рекурсивную функцию вида:
    int max_find(int max)

    Input format
    Последовательность не нулевых целых чисел. В конце последовательности число 0.
    Output format
    Одно число. Максимум последовательности.

    Examples
    Input
    1 12 2 5 8 0
    Output
    12
 */


#include <stdio.h>

int max_find(int max){
    int i;
    scanf("%d", &i);

    if (i == 0) return max;

    return max_find(max == 0 || i > max ? i : max);
}

int main(void)
{
    printf("%d", max_find(0));
    return 0;
}
