#include <stdio.h>

int sumStep2(int n) {
    if (n <= 0)
        return 0;
    return n + sumStep2(n - 2);
}

int main() {
    int n;
    scanf("%d", &n);

    printf("%d\n", sumStep2(n));

    return 0;
}
