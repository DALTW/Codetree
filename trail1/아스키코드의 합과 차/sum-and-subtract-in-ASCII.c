#include <stdio.h>

int main() {
    char a, b;
    scanf(" %c %c", &a, &b);

    int x = (int)a;
    int y = (int)b;
    int diff = (x > y) ? x - y : y - x;

    printf("%d %d\n", x + y, diff);
    return 0;
}
