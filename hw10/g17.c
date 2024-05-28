/*
    Пары соседних символов
    В файле input.txt записаны символы. Необходимо разработать функцию, которая меняет местами пары соседних символов не обращая внимание на символы пробел. Если количество символов нечетно (пробелы не считаем), то последний символ не меняем. Результат записать в файл output.txt.
    Input format
    Строка из английских букв, пробелов и знаков препинания. Не более 1000 символов.
    Output format
    Строка из английских букв, пробелов и знаков препинания.
    Examples
    Input in input.txt
    Hello world!
    Output in output.txt
    eHllw orodl!
    Input in input.txt
    abc   def
    Output in output.txt
    bad   cfe
 */

#include <stdio.h>
#include <string.h>

void swap(char *a, char *b) {
    char tmp = *a;
    *a = *b;
    *b = tmp;
}

void change_pairs(char s[]) {
    int state = 0;
    int i1, i2;
    for (int i=0; s[i]; i++) {
        char c = s[i];
        if (c == ' ') continue;

        if (state == 0) {
            i1 = i;
            state = 1;
        } else {
            i2 = i;
            swap(&s[i1], &s[i2]);
            state = 0;
        }
    }
}


int main() {
    FILE *inputFile, *outputFile;
    char line[1001];

    inputFile = fopen("input.txt", "r");
    outputFile = fopen("output.txt", "w");

    fscanf(inputFile, "%[^\n]", line);

    change_pairs(line);

    fprintf(outputFile, "%s", line);

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}

