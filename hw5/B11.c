/*
    Перевернуть число
    Ввести целое число и «перевернуть» его, так чтобы первая цифра стала последней и т.д.

    Input format
    Целое неотрицательное число
    Output format
    Целое не отрицательное число наоборот

    Examples
    Input
    1234
    Output
    4321
 */


#include <stdio.h>

int main(void)
{
    int a;
    scanf("%d", &a);

    if (a == 0) {
        printf("0");
    }

    while (a > 0) {
        int digit = a % 10;
        printf("%d", digit);
        a = a / 10;
    }

    printf("\n");

    return 0;
}

