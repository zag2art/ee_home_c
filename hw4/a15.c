#include <stdio.h>

int main(void)
{
    int x1, y1, x2, y2;

    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);

    if (x1 == x2) {
        printf("Line should not be vertical\n");
        return 1;
    }

    float k = (float)(y2 - y1) / (x2 - x1);
    float b = y1 - k * x1;

    printf("%.2f %.2f\n", k, b);
    return 0;
}

