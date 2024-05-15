/*
    Цифры в строке
    Написать только одну функцию. Всю программу отправлять не надо. Вывести в порядке возрастания цифры, входящие в строку. Цифра - количество. Функция должно строго соответствовать прототипу:
    void print_digit(char s[])

    Input format
    Строка из английских букв, пробелов, знаков препинания и цифр
    Output format
    Функция должна принмать на вход строку и выводить на печать по формату: Цифра пробел количество.

    Examples
    Input
    Hello123 world77.
    Output
    1 1
    2 1
    3 1
    7 2
 */


#include <stdio.h>

void print_digit(char s[]) {
    int count[10] = {0};
    for(int i = 0; s[i]; i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            count[s[i]-'0']++;
        }
    }

    for(int i = 0; i < 10; i++) {
        if(count[i] > 0) {
            printf("%d %d\n", i, count[i]);
        }
    }
}

int main(int argc, char **argv)
{
    char number[1001];
    scanf("%[^\n]", number);


    print_digit(number);

    return 0;
}

