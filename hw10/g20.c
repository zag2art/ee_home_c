/*
    Проверка на палиндром
    Считать предложение из файла input.txt и определить можно ли из английских букв предложения записанного в файле получить одно слово - палиндром. Ответ напечатать на стандартный поток вывода. Требуется реализовать логическую функцию и применить ее.
    is_palindrom(string)
    Input format
    Строка из маленьких английских букв и пробелов. Не более 1000 символов.
    Output format
    YES или NO
    Examples
    Input in input.txt
    kak za
    Output
    YES
    Input in input.txt
    abc
    Output
    NO
    Input in input.txt
    car race
    Output
    YES
 */

#include <stdio.h>
#include <string.h>

int is_palindrom(char s[]) {
    int cnts[256] = {0};

    // посчитаем буквы
    for (int i=0; s[i]; i++) {
        cnts[(size_t)s[i]]++;
    }

    int cnt_odd=0;

    for (int c='a'; c <= 'z'; c++) {
        int cnt = cnts[(size_t)c];

        if (cnt % 2 == 1) cnt_odd++;
    }

    return cnt_odd <= 1;
}


int main() {
    FILE *inputFile;
    char line[1001];

    inputFile = fopen("input.txt", "r");

    fscanf(inputFile, "%[^\n]", line);
    printf(is_palindrom(line) ? "YES" : "NO");

    fclose(inputFile);

    return 0;
}

