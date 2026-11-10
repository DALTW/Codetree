#include <stdio.h>

int existsDate(int m, int d) {
    int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (m < 1 || m > 12)
        return 0;
    return d >= 1 && d <= days[m];
}

int main() {
    int m, d;
    scanf("%d %d", &m, &d);

    if (existsDate(m, d))
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}
