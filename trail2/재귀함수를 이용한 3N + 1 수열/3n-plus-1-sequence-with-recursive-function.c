#include <stdio.h>

int collatz(int n) {
    if (n == 1)
        return 0;
    if (n % 2 == 0)
        return collatz(n / 2) + 1;
    return collatz(3 * n + 1) + 1;
}

int main() {
    int n;
    scanf("%d", &n);

    printf("%d\n", collatz(n));

    return 0;
}
