/*
    Сумма цифр в тексте
    Составить функцию, которая преобразует текущий символ цифры в число. Написать программу считающую сумму цифр в тексте.
    int digit_to_num(char c)

    Input format
    Строка состоящая из английских букв, пробелов, знаков препинания. В конце строки символ точка.
    Output format
    Целое число - сумма цифр в тексте

    Examples
    Input
    1Hello 36world.
    Output
    10
    Input
    abc 1def2 3.
    Output
    6
 */

#include <stdio.h>

int is_digit(char c) {
    return c >= '0' && c <= '9';
}

int digit_to_num(char c){
    return c - '0';
}

int main(void)
{
    char c;
    int sum = 0;

    while((c = getchar()) != '.') {
        if (is_digit(c)) {
            sum += digit_to_num(c);
        }
    }

    printf("%d\n", sum);
    return 0;
}

