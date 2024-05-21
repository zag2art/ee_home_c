/*
    Последний номер символа
    В файле input.txt дана строка из 1000 символов. Показать номера символов, совпадающих с последним символом строки. Результат записать в файл output.txt
    Input format
    Строка не более 1000 символов
    Output format
    Целые числа через пробел - номера символа, который совпадает с последним символом строки.
    Examples
    Input in input.txt
    aabbcdb
    Output in output.txt
    2 3
 */

#include <stdio.h>
#include <string.h>

int main() {
    FILE *inputFile, *outputFile;
    char line[1001];

    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Cannot open input file\n");
        return 1;
    }

    if (fgets(line, 1001, inputFile) == NULL) {
        printf("Cannot read from input file\n");
        return 1;
    }

    line[strcspn(line, "\n")] = '\0';

    int length = strlen(line);
    char last_char = line[length-1];

    // printf("%s\n", line);
    // printf("%c\n", last_char);

    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        printf("Cannot open output file\n");
        return 1;
    }

    for (int i=0; i < length-1; i++) {
        if (line[i] == last_char) {
            fprintf(outputFile, "%d ", i);
        }
        // fprintf(outputFile, "%s, %s, %s %d", line, line, line, length);
    }



    fclose(inputFile);
    fclose(outputFile);

    return 0;
}

