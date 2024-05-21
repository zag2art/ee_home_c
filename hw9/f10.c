/*

    Упаковать строку
    Дана строка состоящая из маленьких латинских букв 'a'..'z'. В конце строки точка. Необходимо заменить повторяющиеся буквы на <буква><количество повторений>

    Input format
    Входная строка состоящая из букв 'a'-'z' не превышающая 1000 символов. В конце строки символ '.'
    Output format
    Результат состоящий из букв и чисел, без пробелов

    Examples
    Input
    aaaaabbbc.
    Output
    a5b3c1
    Input
    zzzzzzzzzzz.
    Output
    z11
    Input
    aaabbbbaa.
    Output
    a3b4a2

 */


#include <stdio.h>

int main(void)
{
    char str[1001], ch;
    int i, count;

    scanf("%1000s", str);

    ch = str[0];
    count = 1;

    for(i = 1; str[i] != '.'; i++) {
        if(str[i] == ch) {
            count++;
        } else {
            printf("%c%d", ch, count);
            ch = str[i];
            count = 1;
        }
    }

    printf("%c%d\n", ch, count);
    return 0;
}

