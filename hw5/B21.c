/*
    Заглавные буквы в строчные
    Дан текст состоящий из английских букв и цифр, заканчивается символом «.» Перевести все заглавные английские буквы в строчные.

    Input format
    Текст из маленьких, больших английских букв и пробелов. В конце текста символ точка.
    Output format
    Текст из маленьких английских букв.

    Examples
    Input
    HELLO wORld.
    Output
    hello world
    Input
    ABC   d.
    Output
    abc   d
    Input
    small letters.
    Output
    small letters
 */

#include <stdio.h>
#include <ctype.h>
int main() {
    char ch;
    while ((ch = getchar()) != '.') {
        printf("%c", tolower(ch));
    }

    return 0;
}

