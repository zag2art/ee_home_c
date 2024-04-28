/*
    Монотонная последовательность
    Дана монотонная последовательность, в которой каждое натуральное число k встречается ровно k раз: 1, 2, 2, 3, 3, 3, 4, 4, 4, 4,… Выведите первые n членов этой последовательности. Только один цикл for.

    Input format
    Натуральное число.
    Output format
    Последовательность целых чисел.

    Examples
    Input
    11
    Output
    1 2 2 3 3 3 4 4 4 4 5
 */


#include <stdio.h>

void seq(int n, int cnt) {
    if (n <= 0) return;

    for (int i = 0; i < cnt; i++) {
        printf("%d ", cnt);
        if (--n <= 0) break;
    }

    seq(n, cnt + 1);
}

int main(void)
{
    int n;
    scanf("%d", &n);

    seq(n, 1);

    return 0;
}

