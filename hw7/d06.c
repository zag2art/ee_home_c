/*
    Строка наоборот
    Дана строка заканчивающаяся символом точка '.' Напечатать строку наоборот. Реализуйте рекурсивную функцию, которая считывает и печатает строку наоборот.
    void reverse_string()

    Input format
    Строка из английских букв и знаков препинания. В конце строки символ точка.
    Output format
    Исходная строка задом наперед.

    Examples
    Input
    Hello world!.
    Output
    !dlrow olleH
 */


#include <stdio.h>

void read_and_print_string_reversed(void) {

    char c = getchar();

    if (c != '.') {
        read_and_print_string_reversed();
        printf("%c", c);
    }
}

int main(void)
{
    read_and_print_string_reversed();

    return 0;
}

