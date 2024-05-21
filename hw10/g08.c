/*
    Числа в массив
    В файле input.txt дана строка, не более 1000 символов, содержащая буквы, целые числа и иные символы. Требуется все числа, которые встречаются в строке, поместить в отдельный целочисленный массив. Например, если дана строка "data 48 call 9 read13 blank0a", то в массиве числа 48, 9, 13 и 0. Вывести массив по возрастанию в файл output.txt.
    Input format
    Строка из английских букв, цифр и знаков препинания
    Output format
    Последовательность целых чисел отсортированная по возрастанию
    Examples
    Input in input.txt
    data 48 call 9 read13 blank0a
    Output in output.txt
    0 9 13 48
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int compare(const void * a, const void * b) {
    int ai = *(int *)a;
    int bi = *(int *)b;
    return (ai > bi) - (ai < bi);
}

int main() {
    FILE *inputFile, *outputFile;
    char line[1001];

    inputFile = fopen("input.txt", "r");
    fscanf(inputFile, "%[^\n]", line);
    fclose(inputFile);

    outputFile = fopen("output.txt", "w");

    int numbers[1000], count = 0;

    for(int i = 0; line[i] != '\0'; i++) {
        if(isdigit(line[i])) {
            numbers[count] = 0;
            while(isdigit(line[i])) {
                numbers[count] = numbers[count] * 10 + (line[i] - '0');
                i++;
            }
            count++;
        }
    }

    qsort(numbers, count, sizeof(int), compare);

    for(int i = 0; i < count; i++) {
        fprintf(outputFile, "%d ", numbers[i]);
    }

    fclose(outputFile);

    return 0;
}

