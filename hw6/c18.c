/*
    Количество цифр в тексте
    Составить логическую функцию, которая определяет, что текущий символ это цифра. Написать программу считающую количество цифр в тексте.
    int is_digit(char c)

    Input format
    Текст из английских букв и знаков препинания. В конце текста символ точка.
    Output format
    Одно целое число - количество цифр в тексте.

    Examples
    Input
    1Hello 36world.
    Output
    3
    Input
    abcd.
    Output
    0
 */

#include <stdio.h>

int is_digit(char c) {
    return c >= '0' && c <= '9';
}

int main(void)
{
    char c;
    int cnt = 0;

    while((c = getchar()) != '.') {
        if (is_digit(c)) {
            cnt++;
        }
    }

    printf("%d\n", cnt);
    return 0;
}

