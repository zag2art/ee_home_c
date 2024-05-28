/*
    Равносторонние треугольники
    Cia очень любит равносторонние треугольники. Он все время
    выкладывает их из камней. Ling дал Cia камни и попросил его
    составить такой треугольник если это возможно.
    Помогите Cia сложить треугольник используя все камни
    или напечатайте слов NO, если это невозможно.

    Пример треугольников, которые составляет Cia:
     *
    * *

      *
     * *
    * * *

       *
      * *
     * * *
    * * * *
    Во входном файле input.txt записано некоторое количество символов * (камней). Необходимо построить равносторонний треугольник используя все символы * и символ пробел, записать ответ в выходной файл output.txt. Между соседними символами * строго один пробел. Если треугольник невозможно составить, используя все камни, то необходимо записать единственное слово NO в файл output.txt.
    Input format
    Текстовый файл состоит из различных символов и символов *.
    Output format
    Равносторонний треугольник составленный из символов *, символов пробела и символов переноса строк или слово NO.
    Examples
    Input in input.txt
    ***
    Output in output.txt
     *
    * *
    Input in input.txt
    ** hello world ***    *
    Output in output.txt
      *
     * *
    * * *
    Input in input.txt
    ****
    Output in output.txt
    NO
 */

#include <stdio.h>
#include <string.h>

int get_level(int n) {
    int i = 1;
    while (1) {
        int k = i * (i + 1) / 2;

        if (k == n) return i;
        if (k > n) return 0;
        i++;
    }
}

int main() {
    FILE *inputFile, *outputFile;

    inputFile = fopen("input.txt", "r");
    outputFile = fopen("output.txt", "w");

    int n = 0;
    char ch;
    while((ch = fgetc(inputFile)) != EOF){
        if (ch == '*') n++;
    }

    int l;

    if ((l = get_level(n))) {
        for (int i=1; i <= l; i++) {
            int prev = l - i;
            for (int j=0; j < prev; j++) {
                fprintf(outputFile, " ");
            }

            for (int j=0; j < i; j++) {
                fprintf(outputFile, "* ");
            }
            fprintf(outputFile, "\n");
        }
    } else {
        fprintf(outputFile, "NO");
    }

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}

