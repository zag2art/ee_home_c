/*
    Проверка на палиндром
    В файле input.txt символьная строка не более 1000 символов. Необходимо проверить, является ли она палиндромом (палиндром читается одинаково в обоих направлениях). Реализовать логическую функцию is_palindrom(str) и записать ответ в файл output.txt.
    Input format
    Строка из заглавных английских букв
    Output format
    YES или NO
    Examples
    Input in input.txt
    ABCDEF
    Output in output.txt
    NO
    Input in input.txt
    KAZAK
    Output in output.txt
    YES
 */

#include <stdio.h>
#include <string.h>

int is_palindrome(char * line) {
    int l = strlen(line);
    for (int i = 0; i < l / 2; i++) {
        if (line[i] != line[l - i - 1]) {
            return 0;
        }
    }
    return 1;
}


int main() {
    FILE *inputFile, *outputFile;
    char line[1001];

    inputFile = fopen("input.txt", "r");
    fscanf(inputFile, "%[^\n]", line);

    outputFile = fopen("output.txt", "w");
    fprintf(outputFile, "%s", is_palindrome(line) ?  "YES" : "NO");

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}

