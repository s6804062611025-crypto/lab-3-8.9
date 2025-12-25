#include <stdio.h>

int main() {
    int h, m, s, add_min;

    scanf("%d:%d:%d", &h, &m, &s);
    printf("Hour:%d\nMinute:%d\nSecond:%d\nNext minutes: ", h, m, s);
    scanf("%d", &add_min);

    m += add_min;
    h += m / 60;
    m = m % 60;
    h = h % 24;

    printf("Hour:%d\nMinute:%d\nSecond:%d\n", h, m, s);

    return 0;
}

