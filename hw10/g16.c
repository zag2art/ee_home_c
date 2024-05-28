/*
    Ling заменить на Cao
    В файле input.txt дано предложение. Необходимо заменить все имена «Ling» на «Cao» и результат записать в файл output.txt.
    Input format
    Строка из английских букв, пробелов и знаков препинания. Не более 1000 символов.
    Output format
    Строка из английских букв, пробелов и знаков препинания.
    Examples
    Input in input.txt
    Ling, Ling, Ling and Ling!!!
    Output in output.txt
    Cao, Cao, Cao and Cao!!!
 */

#include <stdio.h>
#include <string.h>


int main() {
    FILE *inputFile, *outputFile;
    char line[1001];

    inputFile = fopen("input.txt", "r");
    outputFile = fopen("output.txt", "w");

    fscanf(inputFile, "%[^\n]", line);

    for (int i=0; line[i]; i++) {
        if (strstr(&line[i], "Ling") == &line[i]) {
            fprintf(outputFile, "Cao");
            i+=3;
        } else {
            fprintf(outputFile, "%c", line[i]);
        }
    }

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}

