/*
    Самое длинное слово
    В файле input.txt дана строка слов, разделенных пробелами. Найти самое длинное слово и вывести его в файл output.txt. Случай, когда самых длинных слов может быть несколько, не обрабатывать.
    Input format
    Строка из английских букв и пробелов. Не более 1000 символов.
    Output format
    Одно слово из английских букв.
    Examples
    Input in input.txt
    Hello beautiful world
    Output in output.txt
    beautiful
 */

#include <stdio.h>
#include <string.h>


int main() {
    FILE *inputFile, *outputFile;
    char line[1001], longest_word[1001];
    char longest_len = 0;

    inputFile = fopen("input.txt", "r");
    while (1 == fscanf(inputFile, "%1000s", line)) {
        size_t len = strlen(line);

        if (len > longest_len) {
            longest_len = len;
            strcpy(longest_word, line);
        }
    }
    fclose(inputFile);

    outputFile = fopen("output.txt", "w");

    fprintf(outputFile, "%s", longest_word);

    fclose(outputFile);

    return 0;
}

