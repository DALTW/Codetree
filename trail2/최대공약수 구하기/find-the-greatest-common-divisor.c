#include <stdio.h>

void printGcd(int n, int m) {
    int small = (n < m) ? n : m;
    int gcd = 1;

    for (int i = 1; i <= small; i++)
        if (n % i == 0 && m % i == 0)
            gcd = i;

    printf("%d\n", gcd);
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    printGcd(n, m);

    return 0;
}
