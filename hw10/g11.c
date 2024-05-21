/*
    Заканчивается на a
    В файле input.txt дано предложение. Необходимо определить, сколько слов заканчиваются на букву 'а'. Ответ записать в файл output.txt.
    Input format
    Строка из английских букв и пробелов не более 1000 символов.
    Output format
    Одно целое число
    Examples
    Input in input.txt
    Mama mila ramu
    Output in output.txt
    2
 */

#include <stdio.h>
#include <string.h>


int main() {
    FILE *inputFile, *outputFile;
    char line[1001];

    inputFile = fopen("input.txt", "r");

    int cnt = 0;

    while (1 == fscanf(inputFile, "%1000s", line)) {
        size_t len = strlen(line);

        if (line[len-1] == 'a') cnt++;
    }
    fclose(inputFile);

    outputFile = fopen("output.txt", "w");

    fprintf(outputFile, "%d", cnt);

    fclose(outputFile);

    return 0;
}

