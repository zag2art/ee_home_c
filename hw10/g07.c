/*
    Количество букв
    В файле input.txt считать символьную строку, не более 10 000 символов. Посчитать количество строчных (маленьких) и прописных (больших) букв в введенной строке. Учитывать только английские буквы. Результат записать в файл output.txt.
    Input format
    Строка состоящая из английских букв, цифр, пробелов и знаков препинания.
    Output format
    Два целых числа. Количество строчных букв и количество заглавных букв.
    Examples
    Input in input.txt
    aabbAB
    Output in output.txt
    4 2
    Input in input.txt
    HELLO WORLD
    Output in output.txt
    0 10
 */

#include <stdio.h>
#include <string.h>

int main() {
    FILE *inputFile, *outputFile;
    char line[1001];

    inputFile = fopen("input.txt", "r");
    fscanf(inputFile, "%[^\n]", line);
    fclose(inputFile);

    outputFile = fopen("output.txt", "w");
    int cnt1 = 0, cnt2 = 0;

    for (int i=0; line[i]; i++) {
        char c = line[i];
        if (c >= 'a' && c <= 'z') cnt1++;
        if (c >= 'A' && c <= 'Z') cnt2++;
    }

    fprintf(outputFile, "%d %d", cnt1, cnt2);
    fclose(outputFile);

    return 0;
}

