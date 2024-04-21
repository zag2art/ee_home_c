/*
    Проверка на простоту
    Проверить число на простоту.

    Input format
    Натуральное число
    Output format
    Если число является простым напечатать YES, иначе NO

    Examples
    Input
    10
    Output
    NO
    Input
    7
    Output
    YES
 */

#include <stdio.h>

int main(void)
{
    int n;

    scanf("%d", &n);

    if (n == 1) {
        printf("NO\n");
        return 0;
    }

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            printf("NO\n");
            return 0;
        }
    }

    printf("YES\n");

    return 0;
}

