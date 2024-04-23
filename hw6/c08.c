/*
    Большими буквами
    Составить функцию, которая переводит латинскую строчную букву в заглавную. И показать пример ее использования.

    Input format
    Строка состоящая из английских букв, пробелов и запятых. В конце строки символ точка.
    Output format
    Исходная строка в которой маленькие английские буквы заменены заглавными.

    Examples
    Input
    hello World!.
    Output
    HELLO WORLD!
    Input
    abc, def.
    Output
    ABC, DEF
 */

#include <stdio.h>

char upper(char a) {
    return ((a >= 'a') && (a <= 'z')) ? (a - 32) : a;
}

int main(void)
{
    char i;

    while (1) {
        scanf("%c", &i);
        if (i == '.') {
            break;
        }
        printf("%c", upper(i));
    }

    printf("\n");

    return 0;
}

