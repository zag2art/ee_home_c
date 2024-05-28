/*
    Составить палиндром
    Разработать функцию дана строка из маленьких английских букв.
    Составить из символов палиндром максимальной длинны. При составлении
    палиндрома буквы в палиндроме должны быть расположены в
    лексикографическом порядке. Записать ответ в файл output.txt.

    Input format
    Строка из маленьких английских букв. Не более 1000 символов.
    Output format
    Строка из маленьких английских букв.

    Examples
    Input in input.txt
    kazaki
    Output in output.txt
    akika
    Input in input.txt
    knak
    Output in output.txt
    kak
    Input in input.txt
    zzzzbbaaa
    Output in output.txt
    abzzazzba
 */

#include <stdio.h>
#include <string.h>

void swap(char *a, char *b) {
    char tmp = *a;
    *a = *b;
    *b = tmp;
}


void get_palindrom(char s[]) {
    int cnts[256] = {0};
    int back_cnts[256] = {0};

    // посчитаем буквы
    for (int i=0; s[i]; i++) {
        cnts[(size_t)s[i]]++;
    }

    int j=0;

    // заполним левую часть
    for (int c='a'; c <= 'z'; c++) {
        int cnt = cnts[(size_t)c];

        if (cnt > 1) {
            int num = cnt / 2;

            cnts[(size_t)c] -= num * 2;

            for (int k=0; k < num; k++) {
                s[j++] = c;
            }

            back_cnts[c] = num;
        }
    }

    // заполним серединку
    for (int c='a'; c <= 'z'; c++) {
        int cnt = cnts[(size_t)c];

        if (cnt > 0) {
            s[j++] = c;
            break;
        }
    }

    // заполним правую часть
    for (int c='z'; c >= 'a'; c--) {
        int cnt = back_cnts[(size_t)c];

        if (cnt > 0) {
            for (int k=0; k < cnt; k++) {
                s[j++] = c;
            }
        }
    }

    s[j] = 0;
}


int main() {
    FILE *inputFile, *outputFile;
    char line[1001];

    inputFile = fopen("input.txt", "r");
    outputFile = fopen("output.txt", "w");

    fscanf(inputFile, "%[^\n]", line);

    get_palindrom(line);

    fprintf(outputFile, "%s", line);

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}

