/*
    Сколько раз встречается символ a
    Дана строка из английских символов, пробелов и знаков препинания. В конце строки символ точка. Необходимо реализовать рекурсивную функцию, которая считывает данную строку со стандартного потока ввода и возвращает целое число - количество символов 'a' в данной строке.
    int acounter(void)
    Используя данную функцию решить задачу.

    Input format
    Строка состоящая из английских букв, пробелов и знаков препинания. В коне строки символ '.'
    Output format
    Одно целое число.

    Examples
    Input
    abcd a.
    Output
    2
    Input
    Hello world.
    Output
    0
 */


#include <stdio.h>

int acounter(void) {

    char c = getchar();

    if (c == '.') return 0;

    return (c == 'a') + acounter();
}

int main(void)
{
    printf("%d\n", acounter());

    return 0;
}

