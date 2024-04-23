/*
    Скобки
    Проверить строку состоящую из скобок "(" и ")" на корректность.

    Input format
    На вход подается строка состоящая из символов '(', ')' и заканчивающаяся символом '.'. Размер строки не более 1000 символов.
    Output format
    Необходимо напечатать слово YES если скобки расставлены верно и NO в противном случае.

    Examples
    Input
    (()()).
    Output
    YES
    Input
    ()(.
    Output
    NO
 */

#include <stdio.h>

int main(void)
{
    char c;
    int state = 0;

    while((c = getchar()) != '.') {
        if (c=='(') state++;
        if (c==')') state--;
        if (state < 0) break;
    }

    printf(state ? "NO\n" : "YES\n");
    return 0;
}

