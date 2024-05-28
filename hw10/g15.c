/*
    Cao заменить на Ling
    В файле input.txt дано предложение. Необходимо заменить все имена «Cao» на «Ling» и записать результат в файл output.txt.
    Input format
    Строка из английский букв, знаков препинания и пробелов. Не более 1000 символов.
    Output format
    Строка из английский букв, знаков препинания и пробелов.
    Examples
    Input in input.txt
    Cao, Cao, Cao and Cao!!!
    Output in output.txt
    Ling, Ling, Ling and Ling!!!
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
        if (strstr(&line[i], "Cao") == &line[i]) {
            fprintf(outputFile, "Ling");
            i+=2;
        } else {
            fprintf(outputFile, "%c", line[i]);
        }
    }

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}

