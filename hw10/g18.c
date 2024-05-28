/*
    Удалить пробелы из текста
    В файле input.txt необходимо удалить все лишние пробелы (в начале предложения и сдвоенные пробелы). Для решения задачи разработать функцию. Результат записать в output.txt.
    Input format
    Строка из английских букв, знаков препинания и пробелов. Не более 1000 символов.
    Output format
    Строка из английских букв, знаков препинания и пробелов.
    Examples
    Input in input.txt
        Hello     world!
    Output in output.txt
    Hello world!
 */

#include <stdio.h>
#include <string.h>

void swap(char *a, char *b) {
    char tmp = *a;
    *a = *b;
    *b = tmp;
}

void remove_spaces(char s[]) {
    int j=0;

    char prev_char = ' ';
    for (int i=0; s[i]; i++) {
        char c = s[i];

        if(prev_char == ' ' && c == ' ')
            continue;
        s[j++] = c;
        prev_char = c;
    }
    s[j]=0;
}


int main() {
    FILE *inputFile, *outputFile;
    char line[1001];

    inputFile = fopen("input.txt", "r");
    outputFile = fopen("output.txt", "w");

    fscanf(inputFile, "%[^\n]", line);

    remove_spaces(line);

    fprintf(outputFile, "%s", line);

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}

