#include <stdio.h>

int main(void)
{
    int a, b, c, t;
    scanf("%d%d%d", &a, &b, &c);

    // В a поместим самую большую сторону

    if (c > b) {
        t = c;
        c = b;
        b = t;
    }

    if (b > a) {
        t = a;
        a = b;
        b = t;
    }

    printf(a < b + c ? "YES" : "NO");

    return 0;
}

