#include <stdio.h>

int main(void)
{
    int a, b, c, d, e;
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

    int min;
    min = a < b ? a : b;
    min = min < c ? min : c;
    min = min < d ? min : d;
    min = min < e ? min : e;

    printf("%d\n", min);
    return 0;
}

