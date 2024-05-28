/*
    Изменить расширение
    В файле input.txt записан полный адрес файла (возможно, без расширения). Необходимо изменить его расширение на ".html" и записать результат в файл output.txt.
    Input format
    Строка состоящая из символов: a-z, A-Z, 0-9, /
    Output format
    Исходная строка с измененным расширением.
    Examples
    Input in input.txt
    /DOC.TXT/qqq
    Output in output.txt
    /DOC.TXT/qqq.html
    Input in input.txt
    /DOC.TXT/qqq.com
    Output in output.txt
    /DOC.TXT/qqq.html
 */

#include <stdio.h>
#include <string.h>


int main() {
    FILE *inputFile, *outputFile;
    char line[1001];

    inputFile = fopen("input.txt", "r");

    fscanf(inputFile, "%[^\n]", line);

    for (int i = strlen(line) - 1; i >= 0; --i) {
        if (line[i] == '.') {
            line[i] = '\0';
            break;
        } else if (line[i] == '/') {
            break;
        }
    }

    fclose(inputFile);

    outputFile = fopen("output.txt", "w");
    fprintf(outputFile, "%s.html", line);
    fclose(outputFile);

    return 0;
}

