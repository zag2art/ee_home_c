/*
    Заменить a на b
    В файле input.txt дана символьная строка не более 1000 символов. Необходимо заменить все буквы "а" на буквы "b" и наоборот, как заглавные, так и строчные. Результат записать в output.txt.
    Input format
    Строка из маленьких и больших английских букв, знаков препинания и пробелов.
    Output format
    Строка из маленьких и больших английских букв, знаков препинания и пробелов.
    Examples
    Input in input.txt
    aabbccddABCD
    Output in output.txt
    bbaaccddBACD
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

    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        printf("Cannot open output file\n");
        return 1;
    }

    for (int i=0; line[i]; i++) {
        if (line[i] == 'a') {
            line[i] = 'b';
        } else if (line[i] == 'b') {
            line[i] = 'a';
        } else if (line[i] == 'A') {
            line[i] = 'B';
        } else if (line[i] == 'B') {
            line[i] = 'A';
        }
    }

    fprintf(outputFile, "%s", line);

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}

