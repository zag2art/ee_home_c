/*
    Удалить повторяющиеся символы
    В файле input.txt строка из меленьких и больших английских букв, знаков препинания и пробелов. Требуется удалить из нее повторяющиеся символы и все пробелы. Результат записать в файл output.txt.
    Input format
    Строка из меленьких и больших английских букв, знаков препинания и пробелов. Размер строки не более 1000 сивмолов.
    Output format
    Строка из меленьких и больших английских букв.
    Examples
    Input in input.txt
    abc cde def
    Output in output.txt
    abcdef
 */

#include <stdio.h>
#include <string.h>


int main() {
    FILE *inputFile, *outputFile;
    char line[1001];

    inputFile = fopen("input.txt", "r");
    fscanf(inputFile, "%[^\n]", line);
    fclose(inputFile);

    outputFile = fopen("output.txt", "w");

    char cnts[256] = {};

    for(int i = 0; line[i]; i++) {
        char c = line[i];

        if (c == ' ') continue;
        if (cnts[(size_t)c] != 0) continue;

        fprintf(outputFile, "%c", c);
        cnts[(size_t)c]++;
    }

    fclose(outputFile);

    return 0;
}

