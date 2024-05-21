/*
    По одному разу
    В файле input.txt даны два слова не более 100 символов каждое, разделенные одним пробелом. Найдите только те символы слов, которые встречаются в обоих словах только один раз. Напечатайте их через пробел в файл output.txt в лексикографическом порядке.
    Input format
    Два слова из маленьких английских букв через пробел. Длинна каждого слова не больше 100 символов.
    Output format
    Маленькие английские буквы через пробел.
    Examples
    Input in input.txt
    hello world
    Output in output.txt
    o
    Input in input.txt
    aabcd bcef
    Output in output.txt
    b c
 */

#include <stdio.h>
#include <string.h>

int count_char(char str[], char c) {
    int i, count;
    for (i=0, count=0; str[i]; i++)
      count += (str[i] == c);

    return count;
}

int main() {
    FILE *inputFile, *outputFile;
    char w1[101], w2[101];

    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Cannot open input file\n");
        return 1;
    }

    fscanf(inputFile, "%s %s", w1, w2);

    // printf("%s %s\n", w1, w2);

    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        printf("Cannot open output file\n");
        return 1;
    }

    for (char c='a'; c <= 'z'; c++) {
        int c1 = count_char(w1, c) == 1;
        int c2 = count_char(w2, c) == 1;
        // printf("%c %d %d \n", c, c1, c2);
        if (c1 ==1 && c2 == 1){
            fprintf(outputFile, "%c ", c);
        }
    }

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}

