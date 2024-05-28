/*
    Разобрать на слова
    В файле input.txt дано предложение требуется разобрать его на отдельные слова. Напечатать каждое слово на отдельной строке в файл output.txt.
    Input format
    Одна строка из английских букв и пробелов не более 1000 символов.
    Output format
    Каждое слово на отдельной строке
    Examples
    Input in input.txt
    Mama mila ramu
    Output in output.txt
    Mama
    mila
    ramu
 */

#include <stdio.h>
#include <string.h>


int main() {
    FILE *inputFile, *outputFile;
    char line[1001];

    inputFile = fopen("input.txt", "r");
    outputFile = fopen("output.txt", "w");

    while (1 == fscanf(inputFile, "%1000s", line)) {
        fprintf(outputFile, "%s\n", line);
    }

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}

