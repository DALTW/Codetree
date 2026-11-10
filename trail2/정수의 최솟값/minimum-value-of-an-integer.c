#include <stdio.h>

int getMin(int a, int b, int c) {
    int mn = a;
    if (b < mn) mn = b;
    if (c < mn) mn = c;
    return mn;
}

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    printf("%d\n", getMin(a, b, c));

    return 0;
}
