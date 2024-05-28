/*
    Hello name
    В файле input.txt в одной строке фамилию, имя и отчество. Сформировать файл приветствие output.txt, где останутся имя и фамилия
    Input format
    Строка состоящая из английских букв и пробелов не более 100 символов. Формат: Фамилия Имя Отчество
    Output format
    Строка состоящая из английских букв и пробелов
    Examples
    Input in input.txt
    Pupkin Vasiliy Ivanovich
    Output in output.txt
    Hello, Vasiliy Pupkin!
 */

#include <stdio.h>
#include <string.h>


int main() {
    FILE *inputFile, *outputFile;
    char name[1001], surname[1001], patronymic[1001];

    inputFile = fopen("input.txt", "r");
    outputFile = fopen("output.txt", "w");

    fscanf(inputFile, "%1000s%1000s%1000s", surname, name, patronymic);
    fprintf(outputFile, "Hello, %s %s!", name, surname);

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}

