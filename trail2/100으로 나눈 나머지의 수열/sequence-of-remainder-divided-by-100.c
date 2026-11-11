#include <stdio.h>

int seq(int n) {
    if (n == 1)
        return 2;
    if (n == 2)
        return 4;
    return (seq(n - 1) * seq(n - 2)) % 100;
}

int main() {
    int n;
    scanf("%d", &n);

    printf("%d\n", seq(n));

    return 0;
}
