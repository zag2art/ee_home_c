/*
    Все нечетные
    Дана последовательность целых чисел через пробел, завершающаяся числом 0. Выведите все нечетные числа из этой последовательности, сохраняя их порядок. Составить рекурсивную функцию.

    Input format
    Последовательность не нулевых целых чисел. В конце число 0.
    Output format
    Введенная последовательность, кроме четных чисел в том же порядке. Число 0 не выводить.

    Examples
    Input
    12 13 173 28 19 0
    Output
    13 173 19
 */


#include <stdio.h>

void print_odds(void) {
    int i;
    scanf("%d", &i);

    if (i == 0) {
        return;
    }

    if (i % 2 != 0) {
        printf("%d ", i);
    }
    print_odds();
}

int main(void)
{
    print_odds();
    return 0;
}
