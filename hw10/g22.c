/*
    Soundex
    Известный алгоритм Soundex (https://ru.wikipedia.org/wiki/Soundex) определяет, похожи ли два английских слова по звучанию. На вход он принимает слово и заменяет его на некоторый четырёхсимвольный код. Если коды двух слов совпадают, то слова, как правило, звучат похоже.

    Вам требуется реализовать этот алгоритм. Он работает так:

    Первая буква слова сохраняется.
    В остальной части слова:
    буквы, обозначающие, как правило, гласные звуки: a, e, h, i, o, u, w и y — отбрасываются; оставшиеся буквы (согласные) заменяются на цифры от 1 до 6, причём похожим по звучанию буквам соответствуют одинаковые цифры:
    1: b, f, p, v
    2: c, g, j, k, q, s, x, z
    3: d, t
    4: l
    5: m, n
    6: r
    Любая последовательность одинаковых цифр сокращается до одной такой цифры. Итоговая строка обрезается до первых четырёх символов. Если длина строки меньше требуемой, недостающие символы заменяются знаком 0.
    Примеры:
    аmmonium → ammnm → a5555 → a5 → a500
    implementation → implmnttn → i51455335 → i514535 → i514
    Input format
    Во входном файле input.txt находится одно непустое слово, записанное строчными латинскими буквами. Длина слова не превосходит 20 символов.
    Output format
    Напечатайте четырёхбуквенный код, соответствующий слову в файл output.txt.
    Examples
    Input in input.txt
    ammonium
    Output in output.txt
    a500
    Input in input.txt
    implementation
    Output in output.txt
    i514

 */

#include <stdio.h>
#include <string.h>

// для каждой буквы алфавита ставим циферки
char soundex_code[26] = {
    -1, 1, 2, 3, -1, 1, 2, -1, -1, 2, 2, 4,
    5, 5, -1, 1, 2, 6, 2, 3, -1, 1, -1, 2, -1, 2
};

int main() {
    char word[21];

    FILE *input = fopen("input.txt", "r");
    fscanf(input, "%s", word);
    fclose(input);

    // printf("%s\n", word);

    char soundex[5] = {};
    soundex[0] = word[0];

    int index = 1, last_number = -1;

    for (int i = 1; word[i] && index < 4; i++) {
        int code = soundex_code[word[i]-'a'];
        if (code != -1 && code != last_number) {
            soundex[index] = '0' + code;
            last_number = code;
            index++;
        }
    }

    while(index < 4){
        soundex[index++] = '0';
    }

    FILE *output = fopen("output.txt", "w");
    fprintf(output, "%s", soundex);
    // printf("%s", soundex);
    fclose(output);

    return 0;
}
