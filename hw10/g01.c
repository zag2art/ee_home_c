/*
    Три раза
    В файле input.txt дана строка. Вывести ее в файл output.txt три раза через запятую и показать количество символов в ней.
    Input format
    Строка из английских букв и пробелов. Не более 100 символов. В конце могут быть незначащие переносы строк.
    Output format
    Исходная строка 3 раза подряд, через запятую пробел и количество символов в ней.
    Examples
    Input in input.txt
    aab
    Output in output.txt
    aab, aab, aab 3
 */

#include <stdio.h>
#include <string.h>

int main() {
    FILE *inputFile, *outputFile;
    char line[101];

    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Cannot open input file\n");
        return 1;
    }

    if (fgets(line, 101, inputFile) == NULL) {
        printf("Cannot read from input file\n");
        return 1;
    }

    line[strcspn(line, "\n")] = '\0';

    int length = strlen(line);

    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        printf("Cannot open output file\n");
        return 1;
    }

    fprintf(outputFile, "%s, %s, %s %d", line, line, line, length);

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}

