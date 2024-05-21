/*

    Пропущенное число
    В последовательности записаны целые числа от M до N ( M меньше N, M больше или равно 1)в произвольном порядке, но одно из чисел пропущено (остальные встречаются ровно по одному разу). N не превосходит 1000. Последовательность заканчивается числом 0. Определить пропущенное число.

    Input format
    Последовательность целых чисел от M до N. M, N не превосходит 1000.
    Output format
    Одно целое число

    Examples
    Input
    2   3   1   4   7   6   9   8  10   0
    Output
    5
    Input
    41 40 39 38 37 36 34 33 32 31 50 49 48 47 46 45 44 43 42 30 0
    Output
    35
 */


#include <stdio.h>

int read(int a[]) {
    int i = 0;
    while(1) {
        int num;
        scanf("%d", &num);
        if (num == 0) return i;
        a[i] = num;
        i++;
    };
}

int seq_sum(int n){
    return n * (n + 1) / 2;
}

int get_missed(int a[], int n) {
    int min = a[0], max = a[0], sum = 0;

    for (int i=0; i < n; i++) {
        min = a[i] < min ? a[i] : min;
        max = a[i] > max ? a[i] : max;
        sum += a[i];
    }

    return seq_sum(max) - seq_sum(min-1) - sum;
}

void print(int n, int a[]) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}


int main(void)
{
    int a[1000] = {0};

    int n = read(a);

    int k = get_missed(a, n);

    printf("%d\n", k);

    return 0;
}

