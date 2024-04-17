#include <stdio.h>

int main(void)
{
    int a, b, c;

    scanf("%1d%1d%1d", &a, &b, &c);

    int max = a > b ? a : b;
    max = max > c ? max : c;

    printf("%d\n", max);
    return 0;
}

