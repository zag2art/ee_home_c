/*
    Строка и цифры
    Считать число N из файла input.txt. Сформировать строку из N символов. N четное число, не превосходящее 26. На четных позициях должны находится четные цифры в порядке возрастания, кроме 0, на нечетных позициях - заглавные буквы в порядке следования в английском алфавите. Результат записать в файл output.txt
    Input format
    Четное N ≤ 26
    Output format
    Строка из английских букв и цифр
    Examples
    Input in input.txt
    10
    Output in output.txt
    A2B4C6D8E2
    Input in input.txt
    16
    Output in output.txt
    A2B4C6D8E2F4G6H8
 */

#include <stdio.h>
#include <string.h>

int main() {
    FILE *inputFile, *outputFile;
    char line[] = "A2B4C6D8E2F4G6H8I2J4K6L8M2N4O6P8Q2R4S6T8U2V4W6X8Y2Z4\0";

    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Cannot open input file\n");
        return 1;
    }

    int n;
    fscanf(inputFile, "%d", &n);
    // printf("%d\n", n);

    line[n] = 0;

    // printf("%s\n", line);

    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        printf("Cannot open output file\n");
        return 1;
    }

    fprintf(outputFile, "%s", line);

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}

